/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x140005910
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x140005770 (ExpUpdateTimerConfigurationWorker.c)
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 *     KeResumeClockTimerFromIdle @ 0x14010DC30 (KeResumeClockTimerFromIdle.c)
 *     KiAdjustTimer2DueTimes @ 0x1401683AC (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140248F50 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, (unsigned int)KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
