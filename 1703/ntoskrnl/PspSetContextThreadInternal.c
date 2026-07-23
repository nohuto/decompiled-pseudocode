/*
 * XREFs of PspSetContextThreadInternal @ 0x14053B080
 * Callers:
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 *     PspInitializeThunkContext @ 0x1404F8B04 (PspInitializeThunkContext.c)
 *     WbSetTrapFrame @ 0x14053C120 (WbSetTrapFrame.c)
 *     NtSetContextThread @ 0x1406E2E60 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x1406E2FC0 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406E45F4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140008E98 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     KeInitializeGate @ 0x140035EB4 (KeInitializeGate.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KeVerifyContextRecord @ 0x1400FCA70 (KeVerifyContextRecord.c)
 *     RtlpValidateContextFlags @ 0x1400FCB40 (RtlpValidateContextFlags.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401892D0 (PspGetSetContextSpecialApc.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpReadExtendedContext @ 0x140425F70 (RtlpReadExtendedContext.c)
 */

int __fastcall PspSetContextThreadInternal(PETHREAD Thread, CONTEXT *a2, char a3, char a4, char a5)
{
  CONTEXT *v6; // r15
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int ContextFlags; // ebx
  int result; // eax
  char v11; // r10
  struct _KPROCESS *v12; // rbx
  char v13; // cl
  __int64 v14; // rcx
  __int16 v15; // ax
  __int64 p_ContextFlags; // rax
  unsigned __int64 v17; // rax
  void *v18; // rsp
  __int64 v19; // rcx
  ULONG ContextLength[2]; // [rsp+40h] [rbp+0h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v22[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v23[3]; // [rsp+90h] [rbp+50h] BYREF
  char v24; // [rsp+A8h] [rbp+68h]
  char v25; // [rsp+A9h] [rbp+69h]
  int v26; // [rsp+ACh] [rbp+6Ch]
  _BYTE v27[24]; // [rsp+B0h] [rbp+70h] BYREF
  PCONTEXT Context; // [rsp+C8h] [rbp+88h]

  v6 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    p_ContextFlags = (__int64)&a2->ContextFlags;
    if ( (unsigned __int64)&a2->ContextFlags >= 0x7FFFFFFF0000LL )
      p_ContextFlags = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)p_ContextFlags;
    ContextLength[1] = *(_DWORD *)p_ContextFlags;
  }
  else
  {
    ContextFlags = a2->ContextFlags;
  }
  result = RtlpValidateContextFlags(ContextFlags, 0LL);
  if ( result < 0 || (ContextFlags & 0x100000) != 0 )
  {
    if ( result != -1073741811 )
      goto LABEL_6;
  }
  else
  {
    result = -1073741811;
  }
  if ( v11 )
  {
    ContextFlags = ContextFlags & 0xD800001F | 0x100000;
    goto LABEL_7;
  }
LABEL_6:
  if ( result < 0 )
    return result;
LABEL_7:
  if ( v11 )
  {
    result = RtlGetExtendedContextLength(ContextFlags, ContextLength);
    if ( result < 0 )
      return result;
    v17 = ContextLength[0] + 15LL;
    if ( v17 <= ContextLength[0] )
      v17 = 0xFFFFFFFFFFFFFF0LL;
    v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
    Context = (PCONTEXT)ContextLength;
    memset(ContextLength, 0, ContextLength[0]);
    result = RtlInitializeExtendedContext(Context, ContextFlags, &ContextEx);
    if ( result < 0 )
      return result;
    Context = (PCONTEXT)&ContextEx[-39].XState;
    result = RtlpReadExtendedContext(v19, 1, (__int64)ContextEx, ContextFlags, (__int64)v6, 0LL);
    if ( result < 0 )
      return result;
    v6 = Context;
  }
  else
  {
    Context = v6;
  }
  if ( !a4 )
    goto LABEL_13;
  if ( (Thread->MiscFlags & 0x400) != 0 )
    return -1073741776;
  v12 = IoThreadToProcess(CurrentThread);
  if ( IoThreadToProcess(Thread) != v12 || (result = KeVerifyContextRecord((__int64)Thread, (__int64)v6), result >= 0) )
  {
LABEL_13:
    v24 = a4;
    v13 = (v25 ^ (2 * a5)) & 2 ^ v25;
    if ( Thread == CurrentThread )
    {
      v23[0] = 1LL;
      v23[1] = Thread;
      v25 = v13 & 0xFE;
      --CurrentThread->SpecialApcDisable;
      PspGetSetContextSpecialApc((__int64)v22, 0LL, 0LL, v23);
      v15 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v15;
      if ( !v15
        && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v14);
      }
    }
    else
    {
      v25 = v13 | 1;
      KeInitializeGate((__int64)v27);
      KeInitializeApc((__int64)v22, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
      if ( !(unsigned __int8)KeInsertQueueApc((__int64)v22, 1LL, (__int64)Thread, 2) )
        return -1073741823;
      KeWaitForGate((__int64)v27, 0);
    }
    return v26;
  }
  return result;
}
