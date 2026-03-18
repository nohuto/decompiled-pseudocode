/*
 * XREFs of PopStatsNotifyPowerRequestCsState @ 0x14070C3A4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     RtlEnumerateGenericTableAvl @ 0x14012ABB0 (RtlEnumerateGenericTableAvl.c)
 *     PopLogPowerRequestAction @ 0x1404E7CF0 (PopLogPowerRequestAction.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14070C050 (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14070C290 (PopPublishAndResetPowerRequestsCollectionStats.c)
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
