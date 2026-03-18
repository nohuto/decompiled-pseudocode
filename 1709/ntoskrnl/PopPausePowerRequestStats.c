/*
 * XREFs of PopPausePowerRequestStats @ 0x14058D10C
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x1404E7920 (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoPauseStopWatch @ 0x140128BF4 (PoPauseStopWatch.c)
 *     PoIsRunningStopWatch @ 0x140128D9C (PoIsRunningStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x14058D224 (PopGetStopWatchByRequestType.c)
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
