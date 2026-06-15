/*
 * XREFs of PdcPrint @ 0x1800DFE18
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x1800DEC30 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x1800DEE14 (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
