/*
 * XREFs of vDbgPrintEx @ 0x1800E0040
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18006C604 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 __fastcall vDbgPrintEx(unsigned int a1, unsigned int a2, char *a3, va_list a4)
{
  return vDbgPrintExWithPrefixInternal(byte_180118A7A, a1, a2, a3, a4, 1);
}
