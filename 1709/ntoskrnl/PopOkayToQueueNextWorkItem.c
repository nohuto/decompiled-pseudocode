/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x1401325F0
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140438E30 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PpmPerfTelemetryWorker @ 0x1405B3C70 (PpmPerfTelemetryWorker.c)
 *     PopNetEvaluationWorkerCallback @ 0x1405EAC60 (PopNetEvaluationWorkerCallback.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1406F5070 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1406F5900 (PopSetUserShutdownMarkerWorker.c)
 *     PopNetRefreshWorkerCallback @ 0x140707BB0 (PopNetRefreshWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x14070A460 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14070AC40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
