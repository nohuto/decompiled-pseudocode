/*
 * XREFs of PopStatsNotifyPowerRequestDamPhase @ 0x14076F8F0
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

void __fastcall PopStatsNotifyPowerRequestDamPhase(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  if ( a1 )
  {
    PopLogPowerRequestAction("DAM Phase, CS Entry", 0LL, 0LL);
    PoArmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  else if ( PoIsArmedStopWatchCollection((__int64)&ExecutionRequiredStopWatchCollection) )
  {
    PopLogPowerRequestAction("DAM Phase, CS Exit", 0LL, 0LL);
    PoUnarmStopWatchCollection(&ExecutionRequiredStopWatchCollection);
  }
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
