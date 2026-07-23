/*
 * XREFs of PspChargeProcessWakeCounter @ 0x1405263E0
 * Callers:
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x1404C80E0 (PsChargeProcessWakeCounter.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1406E00DC (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PspCheckConditionalWakeCharge @ 0x140446918 (PspCheckConditionalWakeCharge.c)
 *     PspChargeJobWakeCounter @ 0x140478790 (PspChargeJobWakeCounter.c)
 *     EtwTraceWakeCounter @ 0x14070B3D0 (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x14070B48C (EtwTraceWakeEvent.c)
 */

unsigned __int64 __fastcall PspChargeProcessWakeCounter(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        signed int a5,
        char a6,
        int *a7)
{
  struct _KTHREAD *CurrentThread; // rsi
  char v8; // di
  int v9; // r15d
  char v10; // r12
  char v11; // bp
  char v12; // r14
  signed __int64 *v13; // rbx
  __int64 v14; // rdx
  bool v15; // r8
  __int64 v16; // r9
  int v17; // r15d
  int v18; // esi
  __int64 v19; // rdi
  int v21; // eax
  int v22; // ecx
  _KPROCESS *Process; // rax
  volatile signed __int32 *v24; // rcx
  int v25; // r8d
  bool v26; // [rsp+40h] [rbp-68h]
  char v27; // [rsp+48h] [rbp-60h]
  unsigned int v28; // [rsp+4Ch] [rbp-5Ch]
  _KPROCESS *v29; // [rsp+50h] [rbp-58h]
  char *v30; // [rsp+58h] [rbp-50h]

  CurrentThread = KeGetCurrentThread();
  v27 = 1;
  v8 = 0;
  v9 = a2 & 2;
  v28 = a3;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  --CurrentThread->KernelApcDisable;
  v13 = (signed __int64 *)(a1 + 728);
  ExAcquirePushLockSharedEx(a1 + 728, 0LL);
  v14 = a1;
  v15 = v9 != 0;
  v26 = v9 != 0;
  v16 = *(_QWORD *)(a1 + 944);
  v30 = (char *)v16;
  if ( v16 )
  {
    v21 = *(_DWORD *)(v16 + 1304);
    v15 = v9 != 0;
    v26 = v9 != 0;
    if ( (v21 & 0x1000) != 0 )
    {
      if ( v9 )
      {
        if ( (v21 & 0x800000) != 0 )
        {
          v26 = v9 != 0;
          if ( a5 > 0 )
            goto LABEL_5;
        }
      }
      v22 = a2;
      Process = KeGetCurrentThread()->ApcState.Process;
      v29 = Process;
      if ( (a2 & 1) != 0 )
      {
        v26 = v9 != 0;
        if ( !PspCheckConditionalWakeCharge((__int64)Process, v16, a3) )
        {
LABEL_5:
          v17 = 0;
          goto LABEL_6;
        }
        v22 = a2;
        v14 = a1;
        Process = v29;
      }
      if ( (Process[1].DirectoryTableBase & 0x40) != 0 || !v9 )
      {
        v15 = 0;
        v26 = 0;
      }
      else
      {
        v28 = 7;
        v27 = 5;
        if ( v22 < 0 )
          v27 = 7;
        v15 = v9 != 0;
        v26 = v9 != 0;
      }
      v8 = 1;
    }
  }
  if ( a6 && !v8 && !*(_QWORD *)(v14 + 2016) )
    goto LABEL_5;
  if ( v15 )
  {
    v24 = (volatile signed __int32 *)(v14 + 2060);
    v28 = 7;
  }
  else
  {
    v24 = (volatile signed __int32 *)(v14 + 4 * ((int)a3 + 506LL));
  }
  v17 = a5 + _InterlockedExchangeAdd(v24, a5);
  if ( v17 < 0 )
  {
    v12 = 1;
    v17 &= ~0x80000000;
  }
  v11 = 1;
  if ( !v15 && *(_QWORD *)(v14 + 2016) )
  {
    v25 = 1 << a3;
    if ( a5 > 0 )
    {
      if ( (v25 & *(_DWORD *)(v14 + 2052)) != 0 && v17 == 1 )
      {
        v10 = 1;
        goto LABEL_6;
      }
      goto LABEL_49;
    }
    if ( (v25 & *(_DWORD *)(v14 + 2056)) == 0 || v17 )
    {
LABEL_49:
      v10 = 0;
      goto LABEL_6;
    }
    v10 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v10 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(a1 + 2016), 0LL, 0, 0LL, 0LL, 0, 0);
    v18 = a3;
    if ( (xmmword_1403E4010 & 0x400) != 0 && v17 == 1 )
      EtwTraceWakeEvent(a1, a3);
  }
  else
  {
    v18 = a3;
  }
  if ( a7 )
    *a7 = v17;
  if ( v12 || v8 )
  {
    v19 = a4;
    PspChargeJobWakeCounter(v30, 0LL, v18, a5, v27, a1, a4);
  }
  else
  {
    v19 = a4;
  }
  if ( !v11 )
    return 0LL;
  if ( (xmmword_1403E4010 & 0x2000) != 0 && !v26 )
    EtwTraceWakeCounter(a1, v18, a5, a1, v19);
  if ( !a6 )
    return 0LL;
  if ( a5 <= 0 )
  {
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a1, 0x6B577350u);
    return 0LL;
  }
  ObfReferenceObjectWithTag((PVOID)a1, 0x6B577350u);
  return a1 | v28;
}
