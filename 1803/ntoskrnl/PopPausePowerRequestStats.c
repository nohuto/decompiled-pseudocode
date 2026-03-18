/*
 * XREFs of PopPausePowerRequestStats @ 0x140524FFC
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x140524A08 (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoPauseStopWatch @ 0x14007694C (PoPauseStopWatch.c)
 *     PoIsRunningStopWatch @ 0x1400771C4 (PoIsRunningStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x140525114 (PopGetStopWatchByRequestType.c)
 */

char __fastcall PopPausePowerRequestStats(__int64 a1)
{
  unsigned int i; // ebx
  __int64 StopWatchByRequestType; // rax
  __int64 v4; // rcx

  for ( i = 0; i < 4; ++i )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(a1, i, 0LL);
    if ( StopWatchByRequestType )
    {
      LOBYTE(StopWatchByRequestType) = PoIsRunningStopWatch(StopWatchByRequestType);
      if ( (_BYTE)StopWatchByRequestType )
        LOBYTE(StopWatchByRequestType) = PoPauseStopWatch(v4);
    }
  }
  return StopWatchByRequestType;
}
