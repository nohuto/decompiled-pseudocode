/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x140038C54
 * Callers:
 *     PopGetIdleTimesCallback @ 0x1400384F0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14016B97C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x14017F278 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x140038C88 (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x14010D1C0 (PpmUpdatePerformanceFeedback.c)
 */

__int64 __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(v3, 0, 0, 0, 0LL);
}
