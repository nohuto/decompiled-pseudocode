/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x1404872AC
 * Callers:
 *     PopZeroHiberFile @ 0x140762A08 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
