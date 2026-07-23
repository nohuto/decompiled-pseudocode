/*
 * XREFs of PspGetContextThreadInternal @ 0x14053B2A0
 * Callers:
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140425814 (PspWow64GetContextThread.c)
 *     NtGetContextThread @ 0x14044A668 (NtGetContextThread.c)
 *     PspInitializeThunkContext @ 0x1404F8B04 (PspInitializeThunkContext.c)
 *     WbSetTrapFrame @ 0x14053C120 (WbSetTrapFrame.c)
 *     sub_14053C820 @ 0x14053C820 (sub_14053C820.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PsGetContextThread @ 0x1406E2FA0 (PsGetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406E45F4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140008E98 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x140035EB4 (KeInitializeGate.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     RtlpValidateContextFlags @ 0x1400FCB40 (RtlpValidateContextFlags.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401892D0 (PspGetSetContextSpecialApc.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpWriteExtendedContext @ 0x140425A98 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x140425F70 (RtlpReadExtendedContext.c)
 */

int __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v10; // esi
  int result; // eax
  PCONTEXT_EX v12; // r13
  char v13; // cl
  __int64 v14; // rcx
  __int16 v15; // ax
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  void *v21; // rsp
  __int64 v22; // rcx
  ULONG ContextLength[2]; // [rsp+40h] [rbp+0h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v25[48]; // [rsp+50h] [rbp+10h] BYREF
  __int64 v26[3]; // [rsp+1D0h] [rbp+190h] BYREF

  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v17 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v17;
    ContextLength[1] = *(_DWORD *)v17;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpValidateContextFlags(v10, 0LL);
  if ( result < 0 || (v10 & 0x100000) != 0 )
  {
    if ( result != -1073741811 )
      goto LABEL_6;
  }
  else
  {
    result = -1073741811;
  }
  if ( a3 )
  {
    v10 = v10 & 0xD800001F | 0x100000;
    goto LABEL_7;
  }
LABEL_6:
  if ( result < 0 )
    return result;
LABEL_7:
  if ( !a3 )
  {
    v25[15] = a2;
    v12 = (PCONTEXT_EX)(a2 + 1232);
    goto LABEL_9;
  }
  result = RtlGetExtendedContextLength(v10, ContextLength);
  if ( result >= 0 )
  {
    v18 = ContextLength[0] + 15LL;
    if ( v18 <= ContextLength[0] )
      v18 = 0xFFFFFFFFFFFFFF0LL;
    v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
    v20 = alloca(v19);
    v21 = alloca(v19);
    v25[15] = ContextLength;
    result = RtlInitializeExtendedContext((PCONTEXT)ContextLength, v10, &ContextEx);
    if ( result >= 0 )
    {
      v12 = ContextEx;
      v25[15] = (char *)ContextEx - 1232;
      result = RtlpReadExtendedContext(v22, 0, (__int64)ContextEx, v10, a2, v26);
      if ( result >= 0 )
      {
LABEL_9:
        if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
          return -1073741776;
        LOBYTE(v25[11]) = a4;
        v13 = (BYTE1(v25[11]) ^ (2 * a5)) & 2 ^ BYTE1(v25[11]);
        if ( (struct _KTHREAD *)a1 == CurrentThread )
        {
          v25[8] = 0LL;
          v25[9] = a1;
          BYTE1(v25[11]) = v13 & 0xFE;
          --CurrentThread->SpecialApcDisable;
          PspGetSetContextSpecialApc((__int64)v25, 0LL, 0LL, &v25[8]);
          v15 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v15;
          if ( !v15
            && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v14);
          }
          goto LABEL_13;
        }
        BYTE1(v25[11]) = v13 | 1;
        KeInitializeGate((__int64)&v25[12]);
        KeInitializeApc((__int64)v25, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( (unsigned __int8)KeInsertQueueApc((__int64)v25, 0LL, a1, 2) )
        {
          KeWaitForGate((__int64)&v25[12], 0);
LABEL_13:
          v16 = HIDWORD(v25[11]);
          if ( v25[11] >= 0 && v25[15] != a2 )
            return RtlpWriteExtendedContext(
                     HIDWORD(v25[11]),
                     a2 + 1232,
                     (__int64)v26,
                     *(_DWORD *)(v25[15] + 48LL),
                     (__int64)v12);
          return v16;
        }
        return -1073741823;
      }
    }
  }
  return result;
}
