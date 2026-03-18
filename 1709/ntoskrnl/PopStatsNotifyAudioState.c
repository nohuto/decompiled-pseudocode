/*
 * XREFs of PopStatsNotifyAudioState @ 0x140451A2C
 * Callers:
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14000EF00 (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     PoPauseStopWatch @ 0x140128BF4 (PoPauseStopWatch.c)
 *     PoStartStopWatch @ 0x140128C34 (PoStartStopWatch.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x140451A8C (PopAvlFindOrMakeStatsForAudio.c)
 *     PopGetStopWatchByRequestType @ 0x14058D224 (PopGetStopWatchByRequestType.c)
 */

__int64 __fastcall PopStatsNotifyAudioState(char a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  volatile signed __int32 *v4; // rbx
  signed __int32 v5; // ecx

  result = PopAvlFindOrMakeStatsForAudio();
  v4 = (volatile signed __int32 *)result;
  if ( result )
  {
    LOBYTE(v3) = 1;
    result = PopGetStopWatchByRequestType(result, 3LL, v3);
    if ( result )
    {
      v5 = _InterlockedExchangeAdd(v4, 0);
      if ( a1 )
      {
        if ( !v5 )
        {
          _InterlockedIncrement(v4);
          return PoStartStopWatch(result);
        }
      }
      else if ( v5 == 1 )
      {
        _InterlockedDecrement(v4);
        return PoPauseStopWatch(result);
      }
    }
  }
  return result;
}
