/*
 * XREFs of PopQueueWorkItem @ 0x1400CF7E4
 * Callers:
 *     PopCheckForIdleness @ 0x140073BB0 (PopCheckForIdleness.c)
 *     PopResetIdleTime @ 0x1400CF6BC (PopResetIdleTime.c)
 *     PopSIdleUpdateNotificationWorker @ 0x1400D1BB0 (PopSIdleUpdateNotificationWorker.c)
 *     PpmPerfTelemetryCallback @ 0x14015F3D0 (PpmPerfTelemetryCallback.c)
 *     PopThermalTelemetryCallback @ 0x140278E40 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14027A950 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x14027FB00 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x14027FB30 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x14027FB60 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x14027FDA4 (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x140282030 (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PopPolicySystemIdle @ 0x14051C940 (PopPolicySystemIdle.c)
 *     PoUserShutdownCancelled @ 0x1405EACA0 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x1405EBBD0 (PoUserShutdownInitiated.c)
 *     PopNetSetConnectivityConstraint @ 0x1406278B4 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1406540E8 (PopUpdateExternalDisplayState.c)
 *     PdcPoNetworkResiliency @ 0x140764A70 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x14076B854 (PopNetClearConnectivityConstraint.c)
 *     PopNetUpdateConnectivityRefreshTime @ 0x14076BB08 (PopNetUpdateConnectivityRefreshTime.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
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
