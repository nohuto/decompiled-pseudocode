/*
 * XREFs of PopNetUpdateConnectivityRefreshTime @ 0x14076BB08
 * Callers:
 *     PopWnfUserAwayPredictionCallback @ 0x14075F2E0 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     PopNetArmRefreshTimer @ 0x14076B7D0 (PopNetArmRefreshTimer.c)
 *     PopNetSetResiliencyPhaseBias @ 0x14076BAD4 (PopNetSetResiliencyPhaseBias.c)
 */

void __fastcall PopNetUpdateConnectivityRefreshTime(__int64 a1)
{
  REGHANDLE v1; // rbx

  if ( PopPlatformAoAc )
  {
    if ( a1 )
    {
      PopNetRefreshStartTime = a1 - 6000000000LL;
      PopNetRefreshEndTime = a1 - 6000000000LL + 300000000;
      if ( PopNetRefreshIntervalActive )
      {
        PopNetSetResiliencyPhaseBias(0);
        PopNetRefreshIntervalActive = 0;
      }
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      PopNetArmRefreshTimer(PopNetRefreshStartTime);
    }
    else
    {
      if ( _InterlockedExchange(&PopNetRefreshTimerState, 0) == 1 )
      {
        KeCancelTimer2((__int64)&PopNetRefreshTimer);
        if ( PopDiagHandleRegistered )
        {
          v1 = PopDiagHandle;
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED) )
            EtwWrite(v1, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED, 0LL, 0, 0LL);
        }
      }
      PopNetRefreshStartTime = 0LL;
      PopNetRefreshEndTime = 0LL;
    }
    PopQueueWorkItem((__int64)&unk_1403A8108, DelayedWorkQueue);
  }
}
