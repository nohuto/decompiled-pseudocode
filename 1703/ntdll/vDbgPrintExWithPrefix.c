/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1800E13D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 */

ULONG __cdecl vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return sub_18005FF34(Prefix, ComponentId, Level, (char *)Format, arglist, 1);
}
