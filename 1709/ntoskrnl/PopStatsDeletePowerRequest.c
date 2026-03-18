/*
 * XREFs of PopStatsDeletePowerRequest @ 0x1404E7920
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400AFDC8 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopLogPowerRequestAction @ 0x1404E7CF0 (PopLogPowerRequestAction.c)
 *     PopPausePowerRequestStats @ 0x14058D10C (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x14058D158 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058D1BC (PopAvlDeleteStatsForPowerRequest.c)
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
