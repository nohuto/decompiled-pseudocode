/*
 * XREFs of PopStatsNotifyPowerRequestCsState @ 0x14076F870
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     RtlEnumerateGenericTableAvl @ 0x1400CBBE0 (RtlEnumerateGenericTableAvl.c)
 *     PopLogPowerRequestAction @ 0x140524A88 (PopLogPowerRequestAction.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14076F51C (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14076F75C (PopPublishAndResetPowerRequestsCollectionStats.c)
 */

void __fastcall PopStatsNotifyPowerRequestCsState(__int64 a1, char a2)
{
  char v2; // bl
  BOOLEAN i; // dl
  volatile signed __int32 *v4; // rax

  v2 = PopWnfCsEnterScenarioId;
  if ( a2 )
  {
    PopLogPowerRequestAction("CS Entry", 0LL, 0LL);
  }
  else
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
    PopLogPowerRequestAction("CS Exit", 0LL, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v4 = (volatile signed __int32 *)RtlEnumerateGenericTableAvl(&PowerRequestStatsDatabase, i);
      if ( !v4 )
        break;
      PopPublishAndPurgePowerRequestStats(v4, v2);
    }
    PopPublishAndResetPowerRequestsCollectionStats(v2);
    PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
  }
}
