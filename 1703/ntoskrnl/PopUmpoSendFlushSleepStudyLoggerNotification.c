/*
 * XREFs of PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14013DD58
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x14007210C (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x14040BB94 (PopDiagTraceFlushSleepStudyLogger.c)
 */

__int64 PopUmpoSendFlushSleepStudyLoggerNotification()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_14034B578 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceFlushSleepStudyLogger();
  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
  qword_14034B580 = KeQueryPerformanceCounter(0LL).QuadPart;
  return PopDiagTraceFlushSleepStudyLoggerEnd();
}
