/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x14043944C
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14024A120 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
