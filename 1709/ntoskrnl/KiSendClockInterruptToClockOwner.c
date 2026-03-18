/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x14010F0C8
 * Callers:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x140092BD0 (KiTimer2Expiration.c)
 *     KeResumeClockTimerFromIdle @ 0x140098E10 (KeResumeClockTimerFromIdle.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14010F010 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x14014A20C (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14020ACEC (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
