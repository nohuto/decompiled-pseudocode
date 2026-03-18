/*
 * XREFs of ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C00F9FEC
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1C00F9F60 (SetTimerCoalescingTolerance.c)
 * Callees:
 *     SetRITTimer @ 0x1C00B22B0 (SetRITTimer.c)
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 */

void __fastcall AdjustRITDelayableTimers(int a1)
{
  __int64 v2; // rax

  if ( gnRITdemonTimerId )
  {
    if ( a1 )
      v2 = SetRITTimer(gnRITdemonTimerId, 1000, (int)xxxHungAppDemon, 0);
    else
      v2 = InternalSetTimer(
             0LL,
             gnRITdemonTimerId,
             gdwRITdemonTimerPowerSaveElapse,
             (__int64)xxxHungAppDemon,
             gdwRITdemonTimerPowerSaveCoalescing,
             4);
    gnRITdemonTimerId = v2;
  }
  if ( a1 )
  {
    if ( gtmridAniCursor )
    {
      gdwLastAniTick = 0;
      zzzAnimateCursor(0LL, 0LL, 0LL);
    }
  }
}
