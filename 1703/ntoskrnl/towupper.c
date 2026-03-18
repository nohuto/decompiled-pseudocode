/*
 * XREFs of towupper @ 0x14016BA20
 * Callers:
 *     PfSnParametersVerify @ 0x1405C8CDC (PfSnParametersVerify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
