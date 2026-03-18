/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x1401685E4
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14003B2C8 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x140159D7C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     KiFlushRangeTb @ 0x1401621F0 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1402451D4 (KiPrepareFlushCurrentAffinity.c)
 *     VmFlushTb @ 0x1402AB308 (VmFlushTb.c)
 *     ExFlushTb @ 0x1402BB738 (ExFlushTb.c)
 */

unsigned __int8 __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned __int8 result; // al
  unsigned __int8 v7; // r14
  char v8; // bl
  unsigned __int64 *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 CurrentIrql; // bl
  char v14[8]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v16[176]; // [rsp+50h] [rbp-D8h] BYREF

  v4 = a1;
  result = KiIsSecureProcessFlush(*a2, a3);
  v7 = result;
  v8 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !result && !v8
    || (KiPrepareFlushParameters(a3, (unsigned __int64 *)&v15, v14),
        KiPrepareFlushCurrentAffinity(v16),
        LOBYTE(v11) = v14[0],
        LOBYTE(v12) = v7,
        (result = HvlFlushRangeListTb(v15, (__int64)v16, v11, v12, v8, v4, (__int64)a2)) == 0) )
  {
    if ( (_DWORD)v4 )
    {
      v9 = a2;
      v10 = v4;
      do
      {
        result = (unsigned __int8)KiFlushRangeTb(*v9++, a3);
        --v10;
      }
      while ( v10 );
    }
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v4, a2, a3);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb((unsigned int)v4, a2, a3);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
