/*
 * XREFs of strtoul @ 0x180090610
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009038C @ 0x18009038C (sub_18009038C.c)
 */

unsigned int __cdecl strtoul(const char *String, char **EndPtr, int Radix)
{
  return sub_18009038C((__int64)&off_180110AF8, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
