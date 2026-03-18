/*
 * XREFs of PopBuildDeviceNotifyList @ 0x140437204
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PoInitializeBroadcast @ 0x140700A98 (PoInitializeBroadcast.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     IoBuildPoDeviceNotifyList @ 0x14042D858 (IoBuildPoDeviceNotifyList.c)
 */

void __fastcall PopBuildDeviceNotifyList(char *a1)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-A8h] BYREF
  struct _KTIMER Timer; // [rsp+50h] [rbp-88h] BYREF
  struct _KDPC Dpc; // [rsp+90h] [rbp-48h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeTimerEx(&Timer, NotificationTimer);
  KeInitializeDpc(&Dpc, PopBuildDeviceNotifyListWatchdog, &Event);
  if ( (_DWORD)PopWatchdogSleepTimeout )
    KiSetTimerEx((__int64)&Timer, -10000000LL * (int)PopWatchdogSleepTimeout, 0, 0, (__int64)&Dpc);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST);
  IoBuildPoDeviceNotifyList(a1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST_END);
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    if ( !KeCancelTimer(&Timer) )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
}
