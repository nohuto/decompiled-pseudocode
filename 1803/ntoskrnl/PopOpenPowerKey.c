/*
 * XREFs of PopOpenPowerKey @ 0x14016EC0C
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x1405EA8F4 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x1405EAF78 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x1405EE6FC (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x140626324 (PopApplyPolicy.c)
 *     PopThermalHandlePreviousShutdown @ 0x140627B68 (PopThermalHandlePreviousShutdown.c)
 *     PoGetLightestSystemStateForEject @ 0x14075D0AC (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x14016EC30 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
