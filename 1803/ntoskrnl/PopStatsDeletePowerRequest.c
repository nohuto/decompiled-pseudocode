/*
 * XREFs of PopStatsDeletePowerRequest @ 0x140524A08
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x140524A88 (PopLogPowerRequestAction.c)
 *     PopPausePowerRequestStats @ 0x140524FFC (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x140525048 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1405250AC (PopAvlDeleteStatsForPowerRequest.c)
 */

void __fastcall PopStatsDeletePowerRequest(__int64 a1)
{
  void *v2; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  PopLogPowerRequestAction("Delete PowerRequest");
  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      PopPausePowerRequestStats(v2);
      if ( !(unsigned __int8)PopIsDataAccruedByPowerRequestStats(v2) )
        PopAvlDeleteStatsForPowerRequest(v2);
    }
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
