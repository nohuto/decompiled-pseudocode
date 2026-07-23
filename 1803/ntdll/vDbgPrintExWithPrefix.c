/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1800DAFA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 */

ULONG __cdecl vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return sub_1800085D4(Prefix, ComponentId, Level, (char *)Format, arglist, 1);
}
