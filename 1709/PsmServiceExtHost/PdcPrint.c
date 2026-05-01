/*
 * XREFs of PdcPrint @ 0x18004BE08
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x18004AAB0 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x18004AC94 (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
