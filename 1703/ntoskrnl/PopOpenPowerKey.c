/*
 * XREFs of PopOpenPowerKey @ 0x14014CFA8
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140577F20 (PopDiagTraceHiberStats.c)
 *     PopReadSystemAwayModePolicy @ 0x140578544 (PopReadSystemAwayModePolicy.c)
 *     PopReadHiberbootPolicy @ 0x1405793A0 (PopReadHiberbootPolicy.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405A8504 (PopThermalHandlePreviousShutdown.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1405C3850 (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x1406C5224 (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
