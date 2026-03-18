/*
 * XREFs of PopGetStopWatchByRequestType @ 0x140525114
 * Callers:
 *     PopStatsMarkPowerRequestActive @ 0x140524F90 (PopStatsMarkPowerRequestActive.c)
 *     PopPausePowerRequestStats @ 0x140524FFC (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x140525048 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1405250AC (PopAvlDeleteStatsForPowerRequest.c)
 *     PopStatsMarkPowerRequestInactive @ 0x140525174 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsNotifyAudioState @ 0x1405E9034 (PopStatsNotifyAudioState.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14076F51C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     PoIsInitializedStopWatch @ 0x14007693C (PoIsInitializedStopWatch.c)
 *     PoInitializeStopWatch @ 0x1400770F0 (PoInitializeStopWatch.c)
 */

_QWORD *__fastcall PopGetStopWatchByRequestType(__int64 a1, int a2)
{
  __int64 *v2; // r9
  _QWORD *v3; // rbx
  __int64 **v5; // rcx
  char v6; // r8
  __int64 *v7; // r9
  __int64 v8; // r10

  v2 = &ExecutionRequiredStopWatchCollection;
  v3 = 0LL;
  if ( a2 != 3 )
    v2 = 0LL;
  if ( v2 )
  {
    v3 = (_QWORD *)(48LL * a2 + a1 + 24);
    if ( !PoIsInitializedStopWatch(v3) )
    {
      if ( v6 )
        PoInitializeStopWatch(v5, v7);
      else
        return (_QWORD *)v8;
    }
  }
  return v3;
}
