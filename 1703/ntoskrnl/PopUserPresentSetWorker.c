/*
 * XREFs of PopUserPresentSetWorker @ 0x140586600
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     PopSetNotificationWork @ 0x14006FD70 (PopSetNotificationWork.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     PopNotifyConsoleUserPresent @ 0x140575AAC (PopNotifyConsoleUserPresent.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1, char a2)
{
  LONG result; // eax

  if ( byte_14034BB31 )
  {
    _InterlockedExchange(&dword_14034BB38, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_14034BB38);
    KiSetTimerEx((__int64)&PopAwayModeUserPresenceTimer, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u);
  }
  PopNotifyConsoleUserPresent(0, a2, a1);
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_14034BB34, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
