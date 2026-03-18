/*
 * XREFs of PopSetSystemAwayMode @ 0x140762D10
 * Callers:
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     PopNotifyConsoleUserPresent @ 0x1405E9A30 (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x140762C88 (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  char v2; // dl

  v1 = 0;
  if ( a1 )
  {
    if ( !byte_1403AAA31 )
    {
      if ( byte_1403AAA30 )
      {
        KeResetEvent(&PopUserPresentCompletedEvent);
        _InterlockedExchange(&dword_1403AAA34, 1);
        if ( _InterlockedCompareExchange(&PopUserPresentSetStatus, 0, 0) )
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_1403AAA34);
        KiSetTimerEx(
          (__int64)&PopAwayModeUserPresenceTimer,
          -30000000LL,
          0,
          0,
          (__int64)&PopAwayModeUserPresenceDpcObject);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        PopSetAwayModeStatus(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_1403AAA31 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0, v2, PopAwaymodeExitReason);
  }
  return v1;
}
