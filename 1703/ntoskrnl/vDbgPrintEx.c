/*
 * XREFs of vDbgPrintEx @ 0x1400690C0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((void *)File, ComponentId, Level, arglist, 1);
}
