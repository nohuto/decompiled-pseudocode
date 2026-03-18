/*
 * XREFs of PsFreezeProcess @ 0x140565F94
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x140711758 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x1407499E8 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeForceResumeProcess @ 0x1400BCFB4 (KeForceResumeProcess.c)
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     KeFreezeProcess @ 0x1400BD244 (KeFreezeProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x140510498 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1407A7764 (EtwTraceFreezeThawProcess.c)
 */

char __fastcall PsFreezeProcess(ULONG_PTR a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  int ProcessSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
    return 0;
  KeFreezeProcess(a1, a2);
  if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
  {
    KeForceResumeProcess(a1);
    return 0;
  }
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    *(_QWORD *)(a1 + 1792) = KiQueryUnbiasedInterruptTime();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728), v5, v6, v7);
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 936) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(22, a1, 1, (__int64)&ProcessSessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v8) = 1;
      EtwTraceFreezeThawProcess(a1, v8);
    }
    PsSetProcessTelemetryAppState(a1, 1);
  }
  return 1;
}
