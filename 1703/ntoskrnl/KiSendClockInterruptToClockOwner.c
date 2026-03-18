/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x14002EA08
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14002E950 (ExpUpdateTimerConfigurationWorker.c)
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KeResumeClockTimerFromIdle @ 0x1400F6D60 (KeResumeClockTimerFromIdle.c)
 *     KiAdjustTimer2DueTimes @ 0x140143E38 (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140204AB4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, (unsigned int)KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
