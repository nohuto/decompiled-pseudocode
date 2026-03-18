/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x14040BB94
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14013DD58 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
