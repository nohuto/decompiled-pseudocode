/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x1404872C8
 * Callers:
 *     PopZeroHiberFile @ 0x140762A08 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
