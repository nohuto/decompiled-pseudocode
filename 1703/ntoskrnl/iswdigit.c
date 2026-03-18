/*
 * XREFs of iswdigit @ 0x14016A7E0
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140564BF0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
