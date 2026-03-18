/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x1405EA830
 * Callers:
 *     PopValidateRTCWake @ 0x140470FB8 (PopValidateRTCWake.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140486D90 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x1405222E4 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x140611B78 (PopBatteryUpdateCurrentState.c)
 */

void __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  PopBatteryUpdateCurrentState(a1, a2);
  PopCurrentPowerState(a1);
}
