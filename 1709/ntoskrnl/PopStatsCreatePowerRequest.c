/*
 * XREFs of PopStatsCreatePowerRequest @ 0x1404E7DD4
 * Callers:
 *     PopCreatePowerRequestObject @ 0x1404E7A28 (PopCreatePowerRequestObject.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1404E7B74 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopLogPowerRequestAction @ 0x1404E7CF0 (PopLogPowerRequestAction.c)
 */

void __fastcall PopStatsCreatePowerRequest(__int64 a1)
{
  char *StatsForPowerRequest; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  StatsForPowerRequest = PopAvlFindOrMakeStatsForPowerRequest(a1);
  if ( StatsForPowerRequest )
    _InterlockedIncrement((volatile signed __int32 *)StatsForPowerRequest);
  *(_QWORD *)(a1 + 112) = StatsForPowerRequest;
  PopLogPowerRequestAction("Create PowerRequest", a1, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
