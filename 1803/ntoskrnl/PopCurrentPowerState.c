/*
 * XREFs of PopCurrentPowerState @ 0x1405222E4
 * Callers:
 *     PopCalculateCsSummary @ 0x14027ACFC (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x1405254B0 (PopDiagTraceControlCallback.c)
 *     PopCurrentPowerStatePrecise @ 0x1405EA830 (PopCurrentPowerStatePrecise.c)
 *     PopEsEnterSleepShutdown @ 0x1405EE5D4 (PopEsEnterSleepShutdown.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     PopEsUpdateState @ 0x140612084 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x140612138 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x140624944 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1403AA420, 0LL);
  *a1 = xmmword_1403AA430;
  a1[1] = xmmword_1403AA440;
  PopReleaseRwLock((ULONG_PTR)&qword_1403AA420);
}
