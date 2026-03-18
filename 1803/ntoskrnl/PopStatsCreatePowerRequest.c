/*
 * XREFs of PopStatsCreatePowerRequest @ 0x14052439C
 * Callers:
 *     PopCreatePowerRequestObject @ 0x140524250 (PopCreatePowerRequestObject.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x140524A88 (PopLogPowerRequestAction.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x140524BE4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 */

void __fastcall PopStatsCreatePowerRequest(__int64 a1)
{
  volatile signed __int32 *StatsForPowerRequest; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  StatsForPowerRequest = (volatile signed __int32 *)PopAvlFindOrMakeStatsForPowerRequest(a1);
  if ( StatsForPowerRequest )
    _InterlockedIncrement(StatsForPowerRequest);
  *(_QWORD *)(a1 + 112) = StatsForPowerRequest;
  PopLogPowerRequestAction("Create PowerRequest");
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
