/*
 * XREFs of iswdigit @ 0x14015F230
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140446AC0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x140161120 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
