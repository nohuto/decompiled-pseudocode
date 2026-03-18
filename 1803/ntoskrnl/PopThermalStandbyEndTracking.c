/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14014DCE4
 * Callers:
 *     PopThermalSxEntry @ 0x14014DA64 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x140180F10 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x140278D38 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x140278D88 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x14027E2F8 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_1403A9CAC;
  result = 0LL;
  byte_1403A9CAC = 0;
  if ( byte_1403A9CAD )
  {
    byte_1403A9CAD = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_1403A9CB0) / 0x989680uLL, a3);
  }
  return result;
}
