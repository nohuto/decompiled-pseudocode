/*
 * XREFs of PopNetUpdateConnectivityRefreshTime @ 0x140707C88
 * Callers:
 *     PopWnfUserAwayPredictionCallback @ 0x1406F7C90 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 *     PopNetArmRefreshTimer @ 0x140707990 (PopNetArmRefreshTimer.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140707C54 (PopNetSetResiliencyPhaseBias.c)
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
    PopQueueWorkItem((__int64)&unk_140364888, DelayedWorkQueue);
  }
}
