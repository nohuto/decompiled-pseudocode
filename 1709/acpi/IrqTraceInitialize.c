/*
 * XREFs of IrqTraceInitialize @ 0x1C00AC078
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00AF1F8 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C00974E0 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __fastcall IrqTraceInitialize(__int64 a1, ETWENABLECALLBACK *a2, void *a3)
{
  return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0076120, a2, a3);
}
