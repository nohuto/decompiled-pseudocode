/*
 * XREFs of KeFlushMultipleRangeTb @ 0x140037AE0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 * Callees:
 *     KiPreprocessFlushTb @ 0x140034B20 (KiPreprocessFlushTb.c)
 *     KxFlushMultipleTb @ 0x140037C30 (KxFlushMultipleTb.c)
 *     HvlFlushRangeListTb @ 0x140159D7C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14015A5C0 (KiFlushAffinity.c)
 *     KiFlushRangeTb @ 0x1401621F0 (KiFlushRangeTb.c)
 *     VmFlushTb @ 0x1402AB308 (VmFlushTb.c)
 *     ExFlushTb @ 0x1402BB738 (ExFlushTb.c)
 */

char __fastcall KeFlushMultipleRangeTb(unsigned int a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  char v8; // bp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rbp
  _QWORD *v11; // r15
  int v12; // eax
  unsigned __int8 v13; // r11
  char v14; // r10
  unsigned __int8 CurrentIrql; // di
  _BYTE v17[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int8 v19; // [rsp+88h] [rbp+10h] BYREF
  char v20; // [rsp+90h] [rbp+18h] BYREF

  v5 = a1;
  v8 = 0;
  LOBYTE(CurrentThread) = KiPreprocessFlushTb(0, a3, a4, &v20, &v19);
  if ( (_BYTE)CurrentThread )
  {
    if ( (_DWORD)v5 )
    {
      v10 = v5;
      v11 = a2;
      do
      {
        KiFlushRangeTb(*v11++, a3);
        --v10;
      }
      while ( v10 );
    }
    LOBYTE(CurrentThread) = v19;
    __writecr8(v19);
    v8 = 1;
  }
  if ( a3 == 1
    && (LOBYTE(CurrentThread) = -1, *a2 <= 0x7FFFFFFEFFFFuLL)
    && (CurrentThread = KeGetCurrentThread(), CurrentThread->ApcState.Process->SecureState.SecureHandle)
    || v20 )
  {
    KiPrepareFlushParameters(a3, &v18, v17);
    v12 = KiFlushAffinity(a4);
    LOBYTE(CurrentThread) = HvlFlushRangeListTb(v18, v12, v17[0], v13, v14, v5, (__int64)a2);
    v8 |= (unsigned __int8)CurrentThread;
  }
  if ( !v8 )
    LOBYTE(CurrentThread) = KxFlushMultipleTb((unsigned int)v5, a2, a3, a4);
  if ( VmTbFlushEnabled )
    LOBYTE(CurrentThread) = VmFlushTb((unsigned int)v5, a2, a3);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb((unsigned int)v5, a2, a3);
    LOBYTE(CurrentThread) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return (char)CurrentThread;
}
