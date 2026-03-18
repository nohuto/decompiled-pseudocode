/*
 * XREFs of PsFreezeProcess @ 0x14057D084
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x1406ACEB0 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x1406DEB64 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeFreezeProcess @ 0x1400AC584 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1400ACDDC (KeForceResumeProcess.c)
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1404FD040 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1407457F8 (EtwTraceFreezeThawProcess.c)
 */

char __fastcall PsFreezeProcess(ULONG_PTR a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdx
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
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 936) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(22, a1, 1, (__int64)&ProcessSessionId);
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
