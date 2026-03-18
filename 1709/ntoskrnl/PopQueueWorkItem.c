/*
 * XREFs of PopQueueWorkItem @ 0x140139F70
 * Callers:
 *     PopCheckForIdleness @ 0x1400B0C20 (PopCheckForIdleness.c)
 *     PpmPerfTelemetryCallback @ 0x140139F50 (PpmPerfTelemetryCallback.c)
 *     PopThermalTelemetryCallback @ 0x140243D10 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402441D0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140249B60 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140249B90 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140249BC0 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x14024A060 (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x14024C320 (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PopUpdateExternalDisplayState @ 0x1405B82B4 (PopUpdateExternalDisplayState.c)
 *     PopNetSetConnectivityConstraint @ 0x1405B8354 (PopNetSetConnectivityConstraint.c)
 *     PoUserShutdownCancelled @ 0x1406FDA30 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x1406FDA60 (PoUserShutdownInitiated.c)
 *     PdcPoNetworkResiliency @ 0x1406FF140 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x140707A14 (PopNetClearConnectivityConstraint.c)
 *     PopNetUpdateConnectivityRefreshTime @ 0x140707C88 (PopNetUpdateConnectivityRefreshTime.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

char __fastcall PopQueueWorkItem(__int64 a1, WORK_QUEUE_TYPE a2)
{
  char v2; // r8

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, a2);
    return 1;
  }
  return v2;
}
