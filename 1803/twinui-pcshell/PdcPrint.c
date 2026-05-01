/*
 * XREFs of PdcPrint @ 0x1802FAB2C
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x1802FA830 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x1802FAA14 (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
