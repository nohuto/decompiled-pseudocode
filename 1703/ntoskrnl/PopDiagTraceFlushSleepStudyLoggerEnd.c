/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14040BB80
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14013DD58 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
