/*
 * XREFs of PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140155F44
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400760DC (PopUmpoSendPowerMessage.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x1404765C0 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x1404765DC (PopDiagTraceFlushSleepStudyLogger.c)
 */

__int64 PopUmpoSendFlushSleepStudyLoggerNotification()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_1403AA498 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceFlushSleepStudyLogger();
  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
  qword_1403AA4A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  return PopDiagTraceFlushSleepStudyLoggerEnd();
}
