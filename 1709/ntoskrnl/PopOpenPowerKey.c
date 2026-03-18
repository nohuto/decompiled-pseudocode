/*
 * XREFs of PopOpenPowerKey @ 0x14013A270
 * Callers:
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405B898C (PopThermalHandlePreviousShutdown.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1405B9210 (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x1406F4D3C (PoGetLightestSystemStateForEject.c)
 *     PopReadHiberbootPolicy @ 0x1406F53D0 (PopReadHiberbootPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x1406F549C (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x140703B78 (PopDiagTraceHiberStats.c)
 * Callees:
 *     PopOpenKey @ 0x14013A294 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
