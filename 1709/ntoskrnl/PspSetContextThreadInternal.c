/*
 * XREFs of PspSetContextThreadInternal @ 0x14049DFC0
 * Callers:
 *     WbSetTrapFrame @ 0x1405023C0 (WbSetTrapFrame.c)
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 *     PspInitializeThunkContext @ 0x14053F16C (PspInitializeThunkContext.c)
 *     NtSetContextThread @ 0x140719430 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x140719590 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14071C9D4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     KeVerifyContextRecord @ 0x14006A690 (KeVerifyContextRecord.c)
 *     IoThreadToProcess @ 0x14006A740 (IoThreadToProcess.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     RtlInitializeExtendedContext @ 0x1400DAE88 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1400DAFAC (RtlGetExtendedContextLength.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeGate @ 0x14012C014 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140188DD0 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpSanitizeContextFlags @ 0x14049D764 (RtlpSanitizeContextFlags.c)
 *     RtlpReadExtendedContext @ 0x140514FD8 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  __int64 v7; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  struct _KPROCESS *v11; // rdi
  char v12; // cl
  __int64 v13; // rcx
  __int64 v15; // rax
  int v16; // edi
  unsigned __int64 v17; // rax
  void *v18; // rsp
  int v19; // edx
  int v20; // ecx
  int v21; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v22; // [rsp+44h] [rbp+4h]
  __int64 v23; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v24[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v25[3]; // [rsp+90h] [rbp+50h] BYREF
  char v26; // [rsp+A8h] [rbp+68h]
  char v27; // [rsp+A9h] [rbp+69h]
  unsigned int v28; // [rsp+ACh] [rbp+6Ch]
  _BYTE v29[24]; // [rsp+B0h] [rbp+70h] BYREF
  int *v30; // [rsp+C8h] [rbp+88h]

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v15 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v21 = *(_DWORD *)v15;
  }
  else
  {
    v21 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v21);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v16 = v21;
      result = RtlGetExtendedContextLength(v21);
      if ( (int)result < 0 )
        return result;
      v17 = v22 + 15LL;
      if ( v17 <= v22 )
        v17 = 0xFFFFFFFFFFFFFF0LL;
      v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
      v30 = &v21;
      memset(&v21, 0, v22);
      result = RtlInitializeExtendedContext((__int64)v30, v16, &v23);
      if ( (int)result < 0 )
        return result;
      v30 = (int *)(v23 - 1232);
      LOBYTE(v19) = 1;
      result = RtlpReadExtendedContext(v20, v19, v23, v16, v7, 0LL);
      if ( (int)result < 0 )
        return result;
      v7 = (__int64)v30;
    }
    else
    {
      v30 = (int *)v7;
    }
    if ( !a4 )
      goto LABEL_10;
    if ( (Thread->MiscFlags & 0x400) != 0 )
      return 3221225520LL;
    v11 = IoThreadToProcess(CurrentThread);
    if ( IoThreadToProcess(Thread) != v11 || (result = KeVerifyContextRecord((__int64)Thread, v7), (int)result >= 0) )
    {
LABEL_10:
      v26 = a4;
      v12 = (v27 ^ (2 * a5)) & 2 ^ v27;
      if ( Thread == CurrentThread )
      {
        v25[0] = 1LL;
        v25[1] = Thread;
        v27 = v12 & 0xFE;
        --CurrentThread->SpecialApcDisable;
        PspGetSetContextSpecialApc((__int64)v24, 0LL, 0LL, v25);
        if ( CurrentThread->SpecialApcDisable++ == -1
          && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v13);
        }
      }
      else
      {
        v27 = v12 | 1;
        KeInitializeGate((__int64)v29);
        KeInitializeApc((__int64)v24, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( !KeInsertQueueApc((__int64)v24, 1LL, (__int64)Thread, 2u) )
          return 3221225473LL;
        KeWaitForGate((__int64)v29, 0);
      }
      return v28;
    }
  }
  return result;
}
