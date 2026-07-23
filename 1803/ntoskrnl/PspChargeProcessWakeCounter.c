/*
 * XREFs of PspChargeProcessWakeCounter @ 0x1404CE250
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x1404DE130 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x14057FFB0 (PsChargeProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14077A780 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PspChargeJobWakeCounter @ 0x140536740 (PspChargeJobWakeCounter.c)
 *     PspCheckConditionalWakeCharge @ 0x14056A04C (PspCheckConditionalWakeCharge.c)
 *     EtwTraceWakeCounter @ 0x1407A80FC (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1407A81B8 (EtwTraceWakeEvent.c)
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
  char v7; // r15
  int v9; // r13d
  int v10; // r12d
  unsigned int v11; // esi
  _DWORD *v12; // r9
  bool v13; // dl
  unsigned int v14; // r13d
  volatile signed __int32 *v15; // rcx
  int v16; // esi
  __int64 v17; // rbp
  int v18; // esi
  bool v20; // cl
  int v21; // eax
  int v22; // edx
  _KPROCESS *Process; // rax
  int v24; // edx
  char v25; // [rsp+40h] [rbp-78h]
  char v26; // [rsp+42h] [rbp-76h]
  int v28; // [rsp+48h] [rbp-70h]
  _KPROCESS *v29; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  void *v31; // [rsp+60h] [rbp-58h]
  bool v32; // [rsp+C0h] [rbp+8h]

  v7 = 0;
  v28 = 1;
  v25 = 0;
  v9 = a2 & 2;
  v26 = 0;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v11) = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(Object + 728, 0LL);
  v12 = *(_DWORD **)(Object + 944);
  v13 = v9 != 0;
  v31 = v12;
  v32 = v9 != 0;
  if ( v12 && (v20 = v9 != 0, v21 = v12[326], v13 = v9 != 0, v32 = v9 != 0, (v21 & 0x1000) != 0) )
  {
    if ( v9 )
    {
      if ( (v21 & 0x800000) != 0 )
      {
        v32 = v9 != 0;
        if ( a5 > 0 )
          goto LABEL_30;
      }
    }
    v22 = a2;
    Process = KeGetCurrentThread()->ApcState.Process;
    v29 = Process;
    if ( (a2 & 1) != 0 )
    {
      v32 = v9 != 0;
      if ( !(unsigned __int8)PspCheckConditionalWakeCharge(Process, v12, a3) )
      {
LABEL_30:
        v14 = a3;
        goto LABEL_11;
      }
      v20 = v9 != 0;
      v22 = a2;
      Process = v29;
    }
    if ( (Process[1].DirectoryTableBase & 0x40) != 0 || !v9 )
    {
      v14 = a3;
      v13 = 0;
      v32 = 0;
    }
    else
    {
      v28 = 5;
      v14 = 7;
      if ( v22 < 0 )
        v28 = 7;
      v13 = v20;
      v32 = v20;
    }
    v7 = 1;
  }
  else
  {
    v14 = a3;
  }
  if ( !a6 || v7 || *(_QWORD *)(Object + 2040) )
  {
    if ( v13 )
    {
      v15 = (volatile signed __int32 *)(Object + 2084);
      v14 = 7;
    }
    else
    {
      v15 = (volatile signed __int32 *)(Object + 4 * ((int)a3 + 512LL));
    }
    v16 = a5 + _InterlockedExchangeAdd(v15, a5);
    v26 = 1;
    v10 = v16 & 0x7FFFFFFF;
    if ( v16 >= 0 )
      v10 = v16;
    v11 = (unsigned int)v16 >> 31;
    if ( !v13 )
    {
      if ( *(_QWORD *)(Object + 2040) )
      {
        v24 = 1 << a3;
        if ( a5 <= 0 )
        {
          if ( (v24 & *(_DWORD *)(Object + 2080)) != 0 && !v10 )
          {
            v25 = 1;
            goto LABEL_11;
          }
        }
        else if ( (v24 & *(_DWORD *)(Object + 2076)) != 0 && v10 == 1 )
        {
          v25 = 1;
          goto LABEL_11;
        }
        v25 = 0;
      }
    }
  }
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Object + 728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(Object + 728));
  KeAbPostRelease(Object + 728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v25 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(Object + 2040), 0LL, 0, 0LL, 0LL, 0, 0);
    if ( (xmmword_14044C2D0 & 0x400) != 0 && v10 == 1 )
      EtwTraceWakeEvent(Object, a3);
  }
  if ( a7 )
    *a7 = v10;
  if ( (_BYTE)v11 || v7 )
  {
    v17 = a4;
    v18 = a5;
    PspChargeJobWakeCounter(v31, v28, Object, a4);
  }
  else
  {
    v17 = a4;
    v18 = a5;
  }
  if ( !v26 )
    return 0LL;
  if ( (xmmword_14044C2D0 & 0x2000) != 0 && !v32 )
    EtwTraceWakeCounter(Object, a3, v18, Object, v17);
  if ( !a6 )
    return 0LL;
  if ( a5 <= 0 )
  {
    ObDereferenceObjectDeferDeleteWithTag((PVOID)Object, 0x6B577350u);
    return 0LL;
  }
  ObfReferenceObjectWithTag((PVOID)Object, 0x6B577350u);
  return Object | v14;
}
