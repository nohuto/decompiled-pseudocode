/*
 * XREFs of EnableUserkTraceLogging @ 0x1C0126570
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C036B410 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __fastcall EnableUserkTraceLogging(__int64 a1, ETWENABLECALLBACK *a2, void *a3)
{
  return TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, a2, a3);
}
