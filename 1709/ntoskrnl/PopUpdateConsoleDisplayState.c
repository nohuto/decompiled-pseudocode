/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x1405CB168
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 *     PopSpoilBatteryEstimate @ 0x1405CB048 (PopSpoilBatteryEstimate.c)
 *     PopDiagTraceConsoleDisplayState @ 0x1405CB214 (PopDiagTraceConsoleDisplayState.c)
 */

void __fastcall PopUpdateConsoleDisplayState(int a1)
{
  int v1; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    v1 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4u, &v1);
    v1 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4u, &v1);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v1, 4LL);
    PopSpoilBatteryEstimate(0, PopConsoleDisplayState == 0);
  }
}
