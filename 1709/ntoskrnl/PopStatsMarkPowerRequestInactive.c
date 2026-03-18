/*
 * XREFs of PopStatsMarkPowerRequestInactive @ 0x14058D024
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1404E79C8 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PoPauseStopWatch @ 0x140128BF4 (PoPauseStopWatch.c)
 *     PopLogPowerRequestAction @ 0x1404E7CF0 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x14058D224 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestInactive(__int64 a1)
{
  __int64 v2; // rbx
  __int64 StopWatchByRequestType; // rax
  int v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 3;
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 112);
  PopLogPowerRequestAction("PowerRequest Clear", a1, v4);
  StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3LL, 0LL);
  if ( StopWatchByRequestType )
    PoPauseStopWatch(StopWatchByRequestType);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
