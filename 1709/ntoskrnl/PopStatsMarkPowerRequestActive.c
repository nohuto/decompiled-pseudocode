/*
 * XREFs of PopStatsMarkPowerRequestActive @ 0x14058D098
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1404E79C8 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PoStartStopWatch @ 0x140128C34 (PoStartStopWatch.c)
 *     PopLogPowerRequestAction @ 0x1404E7CF0 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x14058D224 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestActive(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 StopWatchByRequestType; // rax
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 3;
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 112);
  PopLogPowerRequestAction("PowerRequest Set", a1, v5);
  LOBYTE(v3) = 1;
  StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3LL, v3);
  if ( StopWatchByRequestType )
    PoStartStopWatch(StopWatchByRequestType);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
