/*
 * XREFs of PdcPrint @ 0x180172A08
 * Callers:
 *     PdcpAlpcCallback @ 0x1801726B0 (PdcpAlpcCallback.c)
 *     PdcpProcessMessageInternal @ 0x1801728F0 (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
