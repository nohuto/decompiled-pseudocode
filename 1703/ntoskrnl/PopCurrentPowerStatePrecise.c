/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140577B60
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopValidateRTCWake @ 0x14040A380 (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14041A050 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x14057D4B4 (PopBatteryUpdateCurrentState.c)
 */

void __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  PopBatteryUpdateCurrentState(a1, a2);
  PopCurrentPowerState(a1);
}
