/*
 * XREFs of towupper @ 0x140160300
 * Callers:
 *     PfSnParametersVerify @ 0x1405DCC7C (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
