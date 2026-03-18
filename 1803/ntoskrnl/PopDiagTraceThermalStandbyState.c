/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x14027D8B0
 * Callers:
 *     PopThermalZoneRemove @ 0x140763260 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x14027D8CC (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, &POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
}
