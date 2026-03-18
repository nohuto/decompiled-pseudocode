/*
 * XREFs of ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0104EC0
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1C0104E30 (SetTimerCoalescingTolerance.c)
 * Callees:
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00874F0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 */

void __fastcall AdjustRITDelayableTimers(int a1)
{
  struct _LIST_ENTRY *v2; // rax

  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    if ( a1 )
      v2 = (struct _LIST_ENTRY *)SetRITTimer((int)WPP_MAIN_CB.Queue.ListEntry.Flink, 1000, (int)xxxHungAppDemon, 0);
    else
      v2 = (struct _LIST_ENTRY *)InternalSetTimer(
                                   0LL,
                                   (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                   gdwRITdemonTimerPowerSaveElapse,
                                   (__int64)xxxHungAppDemon,
                                   gdwRITdemonTimerPowerSaveCoalescing,
                                   4);
    WPP_MAIN_CB.Queue.ListEntry.Flink = v2;
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
