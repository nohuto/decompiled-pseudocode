/*
 * XREFs of PopStatsNotifyPowerRequestLpePhase @ 0x14076F96C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140764990 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PoArmStopWatchCollection @ 0x140282070 (PoArmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x1402820C0 (PoIsArmedStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x140282144 (PoUnarmStopWatchCollection.c)
 *     PopLogPowerRequestAction @ 0x140524A88 (PopLogPowerRequestAction.c)
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
