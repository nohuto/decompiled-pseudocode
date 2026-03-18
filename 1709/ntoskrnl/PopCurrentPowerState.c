/*
 * XREFs of PopCurrentPowerState @ 0x1404EA194
 * Callers:
 *     PopCalculateCsSummary @ 0x14024457C (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopTransitionTelemetryOsState @ 0x1405ACF48 (PopTransitionTelemetryOsState.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopEsUpdateState @ 0x1405E2E84 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x1405E2F38 (PopEsStartTelemetry.c)
 *     PopCurrentPowerStatePrecise @ 0x1406FECD0 (PopCurrentPowerStatePrecise.c)
 *     PopEsEnterSleepShutdown @ 0x1407083E0 (PopEsEnterSleepShutdown.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140365AC0, 0LL);
  *a1 = xmmword_140365AD0;
  a1[1] = xmmword_140365AE0;
  PopReleaseRwLock((ULONG_PTR)&qword_140365AC0);
}
