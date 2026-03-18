/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14011616C
 * Callers:
 *     PopGetIdleTimesCallback @ 0x14008D170 (PopGetIdleTimesCallback.c)
 *     PpmInstallFeedbackCounters @ 0x140137C54 (PpmInstallFeedbackCounters.c)
 *     PpmContinueTimeAccumulation @ 0x14014D618 (PpmContinueTimeAccumulation.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x140098470 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1401161A0 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0LL, 0LL, 0LL);
}
