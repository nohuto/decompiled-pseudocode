/*
 * XREFs of PopStatsNotifyPowerRequestLpePhase @ 0x14070C4A0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406FF060 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PoArmStopWatchCollection @ 0x14024C360 (PoArmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x14024C3B0 (PoIsArmedStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x14024C434 (PoUnarmStopWatchCollection.c)
 *     PopLogPowerRequestAction @ 0x1404E7CF0 (PopLogPowerRequestAction.c)
 */

void __fastcall PopStatsNotifyPowerRequestLpePhase(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  if ( a1 )
  {
    PopLogPowerRequestAction("LPE Phase, CS Entry", 0LL, 0LL);
    if ( PoIsArmedStopWatchCollection((__int64)&ExecutionRequiredStopWatchCollection) )
      PoUnarmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  else
  {
    PopLogPowerRequestAction("LPE Phase, CS Exit", 0LL, 0LL);
    PoArmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
