/*
 * XREFs of PopStatsMarkPowerRequestActive @ 0x140524F90
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14051D604 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PoStartStopWatch @ 0x1400768F0 (PoStartStopWatch.c)
 *     PopLogPowerRequestAction @ 0x140524A88 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x140525114 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestActive(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 StopWatchByRequestType; // rax
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 3;
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 )
  {
    LOBYTE(v2) = 1;
    StopWatchByRequestType = PopGetStopWatchByRequestType(v3, 3LL, v2);
    if ( StopWatchByRequestType )
      PoStartStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Set", a1, v5);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
