/*
 * XREFs of PspChargeProcessWakeCounter @ 0x1404A2250
 * Callers:
 *     PsReleaseProcessWakeCounter @ 0x140467EE0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     PsChargeProcessWakeCounter @ 0x140599290 (PsChargeProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1407166EC (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     PspCheckConditionalWakeCharge @ 0x14050BAF0 (PspCheckConditionalWakeCharge.c)
 *     PspChargeJobWakeCounter @ 0x14050F8C0 (PspChargeJobWakeCounter.c)
 *     EtwTraceWakeCounter @ 0x1407464F4 (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1407465B0 (EtwTraceWakeEvent.c)
 */

unsigned __int64 __fastcall PspChargeProcessWakeCounter(
        __int64 Object,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int *a7)
{
  struct _KTHREAD *CurrentThread; // r15
  char v8; // di
  int v10; // r14d
  char v11; // bp
  char v12; // r13
  _DWORD *v13; // r9
  bool v14; // dl
  volatile signed __int32 *v15; // rcx
  int v16; // r14d
  char v17; // r12
  unsigned int v18; // ebx
  __int64 v19; // rdi
  int v21; // eax
  int v22; // ecx
  _KPROCESS *Process; // rax
  int v24; // edx
  int v25; // [rsp+44h] [rbp-64h]
  unsigned int v26; // [rsp+48h] [rbp-60h]
  _KPROCESS *v27; // [rsp+50h] [rbp-58h]
  void *v28; // [rsp+58h] [rbp-50h]
  bool v29; // [rsp+B0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v25 = 1;
  v26 = a3;
  v10 = a2 & 2;
  v11 = 0;
  v12 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(Object + 728, 0LL);
  v13 = *(_DWORD **)(Object + 944);
  v14 = v10 != 0;
  v28 = v13;
  v29 = v10 != 0;
  if ( v13 )
  {
    v21 = v13[326];
    v14 = v10 != 0;
    v29 = v10 != 0;
    if ( (v21 & 0x1000) != 0 )
    {
      if ( v10 )
      {
        if ( (v21 & 0x800000) != 0 )
        {
          v29 = v10 != 0;
          if ( a5 > 0 )
            goto LABEL_31;
        }
      }
      v22 = a2;
      Process = KeGetCurrentThread()->ApcState.Process;
      v27 = Process;
      if ( (a2 & 1) != 0 )
      {
        v29 = v10 != 0;
        if ( !(unsigned __int8)PspCheckConditionalWakeCharge(Process, v13, a3) )
        {
LABEL_31:
          v16 = 0;
LABEL_10:
          v17 = 0;
          goto LABEL_11;
        }
        v22 = a2;
        Process = v27;
      }
      if ( (Process[1].DirectoryTableBase & 0x40) != 0 || !v10 )
      {
        v14 = 0;
      }
      else
      {
        v26 = 7;
        v25 = 5;
        if ( v22 < 0 )
          v25 = 7;
        v14 = v10 != 0;
      }
      v29 = v14;
      v8 = 1;
    }
  }
  if ( a6 && !v8 && !*(_QWORD *)(Object + 2040) )
    goto LABEL_31;
  if ( v14 )
  {
    v15 = (volatile signed __int32 *)(Object + 2084);
    v26 = 7;
  }
  else
  {
    v15 = (volatile signed __int32 *)(Object + 4 * ((int)a3 + 512LL));
  }
  v16 = a5 + _InterlockedExchangeAdd(v15, a5);
  if ( v16 < 0 )
  {
    v12 = 1;
    v16 &= ~0x80000000;
  }
  v11 = 1;
  if ( v14 || !*(_QWORD *)(Object + 2040) )
    goto LABEL_10;
  v24 = 1 << a3;
  if ( a5 <= 0 )
  {
    if ( (v24 & *(_DWORD *)(Object + 2080)) == 0 || v16 )
      goto LABEL_10;
    v17 = 1;
  }
  else
  {
    if ( (v24 & *(_DWORD *)(Object + 2076)) == 0 || v16 != 1 )
      goto LABEL_10;
    v17 = 1;
  }
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Object + 728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(Object + 728));
  KeAbPostRelease(Object + 728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v17 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(Object + 2040), 0LL, 0, 0LL, 0LL, 0, 0);
    v18 = a3;
    if ( (xmmword_140401150 & 0x400) != 0 && v16 == 1 )
      EtwTraceWakeEvent(Object, a3);
  }
  else
  {
    v18 = a3;
  }
  if ( a7 )
    *a7 = v16;
  if ( v12 || v8 )
  {
    v19 = a4;
    PspChargeJobWakeCounter(v28, v25, Object, a4);
  }
  else
  {
    v19 = a4;
  }
  if ( !v11 )
    return 0LL;
  if ( (xmmword_140401150 & 0x2000) != 0 && !v29 )
    EtwTraceWakeCounter(Object, v18, a5, Object, v19);
  if ( !a6 )
    return 0LL;
  if ( a5 <= 0 )
  {
    ObDereferenceObjectDeferDeleteWithTag((PVOID)Object, 0x6B577350u);
    return 0LL;
  }
  ObfReferenceObjectWithTag((PVOID)Object, 0x6B577350u);
  return Object | v26;
}
