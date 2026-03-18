/*
 * XREFs of PpmPerfControlExecuteAction @ 0x14015BF5C
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x1400905A0 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x14015BF40 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  char v1; // bl

  v1 = 0;
  if ( !a1 )
    return 1;
  a1(PpmPerfControlActionCallback);
  return v1;
}
