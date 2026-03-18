/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x1400D2C70
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140486D90 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1405EF330 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1405EF370 (PopSetUserShutdownMarkerWorker.c)
 *     PpmPerfTelemetryWorker @ 0x1405F2B50 (PpmPerfTelemetryWorker.c)
 *     PopNetEvaluationWorkerCallback @ 0x14064FB20 (PopNetEvaluationWorkerCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140655D30 (PopExternalMonitorUpdatedWorker.c)
 *     PopNetRefreshWorkerCallback @ 0x14076B9E0 (PopNetRefreshWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x14076C330 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
