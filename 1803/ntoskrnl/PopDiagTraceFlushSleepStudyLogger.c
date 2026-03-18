/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x1404765DC
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140155F44 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
