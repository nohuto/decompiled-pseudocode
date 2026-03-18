/*
 * XREFs of PopStatsNotifyAudioState @ 0x1405E9034
 * Callers:
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14014D38C (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     PoStartStopWatch @ 0x1400768F0 (PoStartStopWatch.c)
 *     PoPauseStopWatch @ 0x14007694C (PoPauseStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x140525114 (PopGetStopWatchByRequestType.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1405E90A0 (PopAvlFindOrMakeStatsForAudio.c)
 */

volatile signed __int32 *__fastcall PopStatsNotifyAudioState(char a1)
{
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v3; // rbx
  signed __int32 v4; // ecx

  result = (volatile signed __int32 *)PopAvlFindOrMakeStatsForAudio();
  v3 = result;
  if ( result )
  {
    result = (volatile signed __int32 *)PopGetStopWatchByRequestType((__int64)result, 3);
    if ( result )
    {
      v4 = _InterlockedExchangeAdd(v3, 0);
      if ( a1 )
      {
        if ( !v4 )
        {
          _InterlockedIncrement(v3);
          return (volatile signed __int32 *)PoStartStopWatch((__int64)result);
        }
      }
      else if ( v4 == 1 )
      {
        _InterlockedDecrement(v3);
        return (volatile signed __int32 *)PoPauseStopWatch((__int64)result);
      }
    }
  }
  return result;
}
