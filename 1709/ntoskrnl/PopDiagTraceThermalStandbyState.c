/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x140247110
 * Callers:
 *     PopThermalZoneRemove @ 0x140700820 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x14024712C (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, &POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
}
