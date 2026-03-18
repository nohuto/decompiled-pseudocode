/*
 * XREFs of PopStatsMarkPowerRequestInactive @ 0x140525174
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14051D604 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PoPauseStopWatch @ 0x14007694C (PoPauseStopWatch.c)
 *     PopLogPowerRequestAction @ 0x140524A88 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x140525114 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestInactive(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *StopWatchByRequestType; // rax
  int v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 3;
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3);
    if ( StopWatchByRequestType )
      PoPauseStopWatch((__int64)StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Clear", a1, v4);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
