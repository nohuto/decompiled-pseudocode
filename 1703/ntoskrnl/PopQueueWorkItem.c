/*
 * XREFs of PopQueueWorkItem @ 0x140155A70
 * Callers:
 *     PopThermalTelemetryCallback @ 0x14022F630 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14022F9C0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140234630 (PopNetEvaluationTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140234660 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140234864 (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x140237100 (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PoUserShutdownInitiated @ 0x1405768F0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140576A00 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x1405A8364 (PopNetSetConnectivityConstraint.c)
 *     PdcPoNetworkResiliency @ 0x1406CB1A0 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x1406CFDBC (PopNetClearConnectivityConstraint.c)
 *     PopNetCompliantNicUpdate @ 0x1406CFE14 (PopNetCompliantNicUpdate.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
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
