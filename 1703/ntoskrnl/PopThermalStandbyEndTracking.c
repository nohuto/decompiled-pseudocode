/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14013C87C
 * Callers:
 *     PopThermalSxEntry @ 0x14013C6B4 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x140168960 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14022F530 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14022F580 (PopThermalCsExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_14034AB2C;
  result = 0LL;
  byte_14034AB2C = 0;
  if ( byte_14034AB2D )
  {
    byte_14034AB2D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_14034AB30) / 0x989680uLL, a3);
  }
  return result;
}
