/*
 * XREFs of PopDirectedDripsProcessWork @ 0x140761C98
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x140761F50 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140761810 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1407619C4 (PopDirectedDripsNotifyDrivers.c)
 *     PopDirectedDripsRefreshDeviceState @ 0x140761E28 (PopDirectedDripsRefreshDeviceState.c)
 *     PopDirectedDripsStartDebounceInterval @ 0x140761E88 (PopDirectedDripsStartDebounceInterval.c)
 *     PopDirectedDripsTriggerTransition @ 0x140761EEC (PopDirectedDripsTriggerTransition.c)
 *     PopDisengageDirectedDrips @ 0x140761FD4 (PopDisengageDirectedDrips.c)
 *     PdcNotificationClientAcknowledge @ 0x14078B828 (PdcNotificationClientAcknowledge.c)
 */

NTSTATUS __fastcall PopDirectedDripsProcessWork(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  struct _KEVENT *v11; // rcx

  result = 0x1000000;
  if ( a2 <= 0x1000000 )
  {
    if ( a2 == 0x1000000 )
      return PdcNotificationClientAcknowledge(*(_QWORD *)(a1 + 216));
    v6 = a2 - 1;
    if ( !v6 )
      return PopDeepSleepSetDisengageReason(8);
    v7 = v6 - 255;
    if ( !v7 )
      return PopDirectedDripsTriggerTransition();
    v8 = v7 - 256;
    if ( v8 )
    {
      v9 = v8 - 512;
      if ( v9 )
      {
        v10 = v9 - 64512;
        if ( v10 )
        {
          if ( v10 == 0x10000 )
          {
            LOBYTE(a3) = *(_BYTE *)(a1 + 200);
            return PopDirectedDripsNotifyDrivers((_DWORD *)a1, a1 + 256, a3, a4);
          }
        }
        else
        {
          return PopDirectedDripsNotifyAppsAndServices((_DWORD *)a1, (_DWORD *)(a1 + 256), *(_BYTE *)(a1 + 200));
        }
      }
      else
      {
        return PopDirectedDripsRefreshDeviceState();
      }
    }
    else
    {
      result = KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
      _InterlockedOr((volatile signed __int32 *)a1, 0x40u);
    }
    return result;
  }
  switch ( a2 )
  {
    case 0x2000000uLL:
      v11 = (struct _KEVENT *)(a1 + 232);
      return KeSetEvent(v11, 0, 0);
    case 0x100000000uLL:
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFBF);
      v11 = &PopTransitionLock;
      return KeSetEvent(v11, 0, 0);
    case 0x200000000uLL:
      return PopDisengageDirectedDrips();
    case 0x400000000uLL:
      return _InterlockedExchange((volatile __int32 *)(a1 + 188), *(_DWORD *)(a1 + 184));
    case 0x800000000uLL:
      return PopDeepSleepClearDisengageReason(8);
  }
  result = 0;
  if ( a2 == 0x1000000000LL )
    return PopDirectedDripsStartDebounceInterval();
  return result;
}
