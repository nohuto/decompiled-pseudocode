/*
 * XREFs of vDbgPrintEx @ 0x1800E0040
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18006C604 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __cdecl vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, (char *)Format, arglist, 1);
}
