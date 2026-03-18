/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x1404396FC
 * Callers:
 *     PopZeroHiberFile @ 0x1406FC79C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
