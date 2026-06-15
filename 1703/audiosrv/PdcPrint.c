/*
 * XREFs of PdcPrint @ 0x1800D2CBC
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x1800D1C40 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x1800D1E24 (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
