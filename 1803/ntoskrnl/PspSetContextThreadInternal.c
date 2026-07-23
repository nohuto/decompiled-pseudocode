/*
 * XREFs of PspSetContextThreadInternal @ 0x1404D0960
 * Callers:
 *     WbSetTrapFrame @ 0x14050F91C (WbSetTrapFrame.c)
 *     PspWow64SetContextThread @ 0x140563548 (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x14056B4B0 (NtSetContextThread.c)
 *     PspInitializeThunkContext @ 0x1405B9FE0 (PspInitializeThunkContext.c)
 *     PsSetContextThread @ 0x14077D310 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1407801FC (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     IoThreadToProcess @ 0x140060570 (IoThreadToProcess.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1400D0BF4 (KeInitializeGate.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlGetExtendedContextLength @ 0x140131758 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140131818 (RtlInitializeExtendedContext.c)
 *     KeVerifyContextRecord @ 0x1401322F4 (KeVerifyContextRecord.c)
 *     KeInitializeApc @ 0x140132910 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401B2A30 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpSanitizeContextFlags @ 0x1405B8358 (RtlpSanitizeContextFlags.c)
 *     RtlpReadExtendedContext @ 0x1405B8618 (RtlpReadExtendedContext.c)
 */

int __fastcall PspSetContextThreadInternal(PETHREAD Thread, CONTEXT *a2, char a3, char a4, char a5)
{
  CONTEXT *v7; // rbx
  struct _KTHREAD *CurrentThread; // r14
  int result; // eax
  struct _KPROCESS *v11; // rbx
  char v12; // al
  __int64 p_ContextFlags; // rax
  ULONG v14; // esi
  unsigned __int64 v15; // rax
  void *v16; // rsp
  int v17; // edx
  int v18; // ecx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v22[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v23[3]; // [rsp+90h] [rbp+50h] BYREF
  char v24; // [rsp+A8h] [rbp+68h]
  char v25; // [rsp+A9h] [rbp+69h]
  int v26; // [rsp+ACh] [rbp+6Ch]
  _BYTE v27[24]; // [rsp+B0h] [rbp+70h] BYREF
  PCONTEXT Context; // [rsp+C8h] [rbp+88h]

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    p_ContextFlags = (__int64)&a2->ContextFlags;
    if ( (unsigned __int64)&a2->ContextFlags >= 0x7FFFFFFF0000LL )
      p_ContextFlags = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)p_ContextFlags;
  }
  else
  {
    ContextFlags = a2->ContextFlags;
  }
  LOBYTE(a2) = a3;
  result = RtlpSanitizeContextFlags(&ContextFlags, a2);
  if ( result >= 0 )
  {
    if ( a3 )
    {
      v14 = ContextFlags;
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v15 = ContextLength + 15LL;
      if ( v15 <= ContextLength )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      Context = (PCONTEXT)&ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext(Context, v14, &ContextEx);
      if ( result < 0 )
        return result;
      Context = (PCONTEXT)&ContextEx[-39].XState;
      LOBYTE(v17) = 1;
      result = RtlpReadExtendedContext(v18, v17, (_DWORD)ContextEx, v14, (__int64)v7, 0LL);
      if ( result < 0 )
        return result;
    }
    else
    {
      Context = v7;
    }
    if ( !a4 )
      goto LABEL_10;
    if ( (Thread->MiscFlags & 0x400) != 0 )
      return -1073741776;
    v11 = IoThreadToProcess(CurrentThread);
    if ( IoThreadToProcess(Thread) != v11
      || (result = KeVerifyContextRecord((__int64)Thread, (__int64)Context), result >= 0) )
    {
LABEL_10:
      v24 = a4;
      v12 = v25 ^ (v25 ^ (2 * a5)) & 2;
      if ( Thread == CurrentThread )
      {
        v23[0] = 1LL;
        v23[1] = Thread;
        v25 = v12 & 0xFE;
        --CurrentThread->SpecialApcDisable;
        PspGetSetContextSpecialApc((__int64)v22, 0LL, 0LL, v23);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      else
      {
        v25 = v12 | 1;
        KeInitializeGate((__int64)v27);
        KeInitializeApc((__int64)v22, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( !KeInsertQueueApc((__int64)v22, 1LL, (__int64)Thread, 2) )
          return -1073741823;
        KeWaitForGate((__int64)v27, 0);
      }
      return v26;
    }
  }
  return result;
}
