/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x14041A598
 * Callers:
 *     PopZeroHiberFile @ 0x1406C9DDC (PopZeroHiberFile.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
