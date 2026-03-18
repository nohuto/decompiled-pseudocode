/*
 * XREFs of PsFreezeProcess @ 0x1404C7A84
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x140681BE8 (DbgkpSuspendProcess.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     KeFreezeProcess @ 0x140072E2C (KeFreezeProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeForceResumeProcess @ 0x1401202A4 (KeForceResumeProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x140498E00 (PsSetProcessTelemetryAppState.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     EtwTraceFreezeThawProcess @ 0x14070A970 (EtwTraceFreezeThawProcess.c)
 */

char __fastcall PsFreezeProcess(ULONG_PTR a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdx

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
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 936) )
    {
      PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(22LL, a1, 1LL);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v5) = 1;
      EtwTraceFreezeThawProcess(a1, v5);
    }
    PsSetProcessTelemetryAppState(a1, 1);
  }
  return 1;
}
