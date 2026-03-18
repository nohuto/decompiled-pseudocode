/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140439468
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14024A120 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
