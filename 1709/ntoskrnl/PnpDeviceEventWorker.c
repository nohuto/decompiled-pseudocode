/*
 * XREFs of PnpDeviceEventWorker @ 0x14054B420
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     IoSetActivityIdThread @ 0x1400FB290 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpProcessCustomDeviceEvent @ 0x14054AD9C (PnpProcessCustomDeviceEvent.c)
 *     PnpProcessDeferredRegistrations @ 0x14054B6E0 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x14054B798 (PnpCompleteDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x14054B8AC (PiUEventNotifyUserMode.c)
 *     PnpProcessTargetDeviceEvent @ 0x14054DF70 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x140585D88 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x1406BFB64 (PnpNotifyHwProfileChange.c)
 */

void __fastcall PnpDeviceEventWorker(PVOID P)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  PVOID Pa; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h] BYREF

  PnpDeviceEventThread = (__int64)KeGetCurrentThread();
  if ( KeWaitForSingleObject((PVOID)(PnpDeviceEventList + 8), Executive, 0, 0, 0LL) < 0 )
  {
    ExAcquireFastMutex(&PnpNotificationInProgressLock);
    KeSetEvent(&PnpEventQueueEmpty, 0, 0);
    PnpNotificationInProgress = 0;
    KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
    PnpDeviceEventThread = 0LL;
    return;
  }
  while ( 1 )
  {
    v2 = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
    v3 = PnpDeviceEventList;
    v4 = PnpDeviceEventList + 120;
    if ( *(_QWORD *)v4 == v4 )
      break;
    v5 = *(_QWORD **)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    v5[1] = v5;
    *v5 = v5;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 64));
    Pa = v5;
    v7 = *(_QWORD *)&NullGuid.Data1 - v5[11];
    if ( *(_QWORD *)&NullGuid.Data1 == v5[11] )
      v7 = *(_QWORD *)NullGuid.Data4 - v5[12];
    if ( v7 )
    {
      v16 = *(_OWORD *)(v5 + 11);
      IoSetActivityIdThread(&v16);
      v2 = 1;
    }
    v8 = v5[18];
    v9 = 0;
    if ( v8 && !*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) )
      v9 = -1073741810;
    if ( PnpShutdownEvent.Header.SignalState
      && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
    {
      v9 = -1073741431;
    }
    if ( v9 >= 0 )
    {
      v10 = *((_DWORD *)v5 + 30);
      if ( v10 > 4 )
      {
        if ( v10 >= 6 )
        {
          if ( v10 <= 8 )
            goto LABEL_27;
          if ( v10 == 9 || v10 == 11 || v10 == 10 )
          {
            v13 = PiUEventNotifyUserMode(v5);
            goto LABEL_26;
          }
        }
        goto LABEL_46;
      }
      if ( v10 == 4 )
        goto LABEL_32;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          v13 = PnpProcessTargetDeviceEvent(&Pa);
          goto LABEL_26;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v5 + 84);
          PnpNotifyDeviceClassChange(v5 + 13, v5 + 19, &DestinationString);
LABEL_32:
          PiUEventNotifyUserMode(v5);
LABEL_28:
          PnpCompleteDeviceEvent(Pa);
          goto LABEL_29;
        }
        if ( v12 == 1 )
        {
          v13 = PnpProcessCustomDeviceEvent(&Pa);
LABEL_26:
          v9 = v13;
          goto LABEL_27;
        }
LABEL_46:
        v9 = -1073741823;
        goto LABEL_27;
      }
      v9 = PiUEventNotifyUserMode(v5);
      if ( v9 >= 0 )
        PnpNotifyHwProfileChange(v5 + 13);
    }
LABEL_27:
    if ( v9 != 259 )
      goto LABEL_28;
LABEL_29:
    PnpProcessDeferredRegistrations();
    if ( v2 )
      IoSetActivityIdThread(0LL);
  }
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  KeSetEvent(&PnpEventQueueEmpty, 0, 0);
  PnpNotificationInProgress = 0;
  PnpProcessDeferredRegistrations();
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( P )
    ExFreePoolWithTag(P, 0x4C706E50u);
  PnpDeviceEventThread = 0LL;
  KeReleaseMutex((PRKMUTEX)(PnpDeviceEventList + 8), 0);
}
