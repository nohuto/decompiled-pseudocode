/*
 * XREFs of vDbgPrintEx @ 0x140077310
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((void *)&File, ComponentId, Level, arglist, 1);
}
