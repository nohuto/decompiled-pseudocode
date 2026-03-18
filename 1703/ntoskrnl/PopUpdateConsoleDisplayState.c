/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x140584DDC
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
 *     PopSpoilBatteryEstimate @ 0x140584E84 (PopSpoilBatteryEstimate.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140584FB0 (PopDiagTraceConsoleDisplayState.c)
 */

__int64 __fastcall PopUpdateConsoleDisplayState(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    v2 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4u, &v2);
    v2 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4u, &v2);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v2, 4LL);
    return PopSpoilBatteryEstimate(0LL);
  }
  return result;
}
