/*
 * XREFs of towupper @ 0x14018A4A0
 * Callers:
 *     PfSnParametersVerify @ 0x1406450CC (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
