/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1401536C0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(Prefix, ComponentId, Level, Format, arglist, 1);
}
