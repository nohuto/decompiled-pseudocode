/*
 * XREFs of vDbgPrintExWithPrefix @ 0x14015C6C0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140132910 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(Prefix, ComponentId, Level, Format, arglist, 1);
}
