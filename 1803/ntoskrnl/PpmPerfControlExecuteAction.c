/*
 * XREFs of PpmPerfControlExecuteAction @ 0x14016E75C
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x140035120 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x14016E740 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
