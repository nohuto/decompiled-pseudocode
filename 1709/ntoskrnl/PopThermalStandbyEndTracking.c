/*
 * XREFs of PopThermalStandbyEndTracking @ 0x140243AA8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1402436CC (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x1402439D0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x140243A20 (PopThermalCsExit.c)
 *     PopThermalSxEntry @ 0x140243B58 (PopThermalSxEntry.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x140248084 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_14036520C;
  result = 0LL;
  byte_14036520C = 0;
  if ( byte_14036520D )
  {
    byte_14036520D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140365210) / 0x989680uLL, a3);
  }
  return result;
}
