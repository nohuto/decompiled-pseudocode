/*
 * XREFs of strtoul @ 0x18009B270
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009AFFC @ 0x18009AFFC (sub_18009AFFC.c)
 */

unsigned int __cdecl strtoul(const char *String, char **EndPtr, int Radix)
{
  return sub_18009AFFC((__int64)&off_180110B08, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
