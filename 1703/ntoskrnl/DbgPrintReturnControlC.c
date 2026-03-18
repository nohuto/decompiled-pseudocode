/*
 * XREFs of DbgPrintReturnControlC @ 0x14023B050
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintReturnControlC(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(File, 0x65u, 0, Format, va, 0);
}
