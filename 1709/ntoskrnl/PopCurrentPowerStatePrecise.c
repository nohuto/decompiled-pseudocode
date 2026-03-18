/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x1406FECD0
 * Callers:
 *     PopValidateRTCWake @ 0x140431DD0 (PopValidateRTCWake.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140438E30 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x1404EA194 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x1406FEBF8 (PopBatteryUpdateCurrentState.c)
 */

void __fastcall PopCurrentPowerStatePrecise(_OWORD *a1)
{
  PopBatteryUpdateCurrentState();
  PopCurrentPowerState(a1);
}
