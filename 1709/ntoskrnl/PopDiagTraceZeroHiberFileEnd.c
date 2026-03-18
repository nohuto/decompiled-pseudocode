/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140439718
 * Callers:
 *     PopZeroHiberFile @ 0x1406FC79C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
