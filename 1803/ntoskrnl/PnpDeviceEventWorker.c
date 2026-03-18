/*
 * XREFs of PnpDeviceEventWorker @ 0x14051FE70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PnpFreeWatchdog @ 0x1400753C0 (PnpFreeWatchdog.c)
 *     PnpDisablePnpEventWorkerWatchdog @ 0x1400753DC (PnpDisablePnpEventWorkerWatchdog.c)
 *     PnpEnablePnpEventWorkerWatchdog @ 0x14007578C (PnpEnablePnpEventWorkerWatchdog.c)
 *     PnpAllocateWatchdog @ 0x140075914 (PnpAllocateWatchdog.c)
 *     IoSetActivityIdThread @ 0x140075980 (IoSetActivityIdThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpProcessCustomDeviceEvent @ 0x14051EA78 (PnpProcessCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x14051F100 (PiUEventNotifyUserMode.c)
 *     PnpProcessDeferredRegistrations @ 0x140520164 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x14052021C (PnpCompleteDeviceEvent.c)
 *     PnpProcessTargetDeviceEvent @ 0x1405CB290 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x1406027D0 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x1407255B4 (PnpNotifyHwProfileChange.c)
 */

void __fastcall PnpDeviceEventWorker(PVOID P)
{
  char v2; // bp
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  void **v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edi
  PVOID Watchdog; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  void **v16; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-30h] BYREF

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
    v4 = (_QWORD *)(PnpDeviceEventList + 120);
    v5 = *(_QWORD *)(PnpDeviceEventList + 120);
    if ( v5 == PnpDeviceEventList + 120 )
      break;
    if ( *(_QWORD **)(v5 + 8) != v4 || (v6 = *(_QWORD *)v5, *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 64));
    v7 = (void **)v5;
    v16 = (void **)v5;
    v8 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(v5 + 88);
    if ( *(_QWORD *)&NullGuid.Data1 == *(_QWORD *)(v5 + 88) )
      v8 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(v5 + 96);
    if ( v8 )
    {
      v18 = *(_OWORD *)(v5 + 88);
      IoSetActivityIdThread(&v18);
      v2 = 1;
    }
    v9 = *(_QWORD *)(v5 + 152);
    v10 = 0;
    if ( v9 && !*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) )
      v10 = -1073741810;
    if ( PnpShutdownEvent.Header.SignalState )
    {
      v7 = v16;
      if ( !_InterlockedCompareExchange64(&PnpDeviceActionThread, 0LL, 0LL) )
        v10 = -1073741431;
    }
    if ( v10 >= 0 )
    {
      Watchdog = PnpAllocateWatchdog();
      *(_QWORD *)(v5 + 104) = Watchdog;
      if ( Watchdog )
        PnpEnablePnpEventWorkerWatchdog(v5);
      v12 = *(_DWORD *)(v5 + 128);
      if ( v12 <= 4 )
      {
        if ( v12 != 4 )
        {
          if ( !v12 )
          {
            v10 = PiUEventNotifyUserMode(v5);
            if ( v10 >= 0 )
              PnpNotifyHwProfileChange((void *)(v5 + 112));
            goto LABEL_24;
          }
          v13 = v12 - 1;
          if ( !v13 )
          {
            v15 = PnpProcessTargetDeviceEvent(&v16);
LABEL_23:
            v7 = v16;
            v10 = v15;
            goto LABEL_24;
          }
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 == 1 )
            {
              v15 = PnpProcessCustomDeviceEvent(&v16);
              goto LABEL_23;
            }
LABEL_42:
            v10 = -1073741823;
            goto LABEL_24;
          }
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(v5 + 176));
          PnpNotifyDeviceClassChange(v5 + 112, v5 + 160, &DestinationString);
        }
        PiUEventNotifyUserMode(v5);
        v10 = 0;
        goto LABEL_24;
      }
      if ( v12 < 6 )
        goto LABEL_42;
      if ( v12 > 8 )
      {
        if ( v12 != 11 && v12 != 9 && v12 != 10 )
          goto LABEL_42;
        v10 = PiUEventNotifyUserMode(v5);
      }
LABEL_24:
      if ( v7[13] )
      {
        PnpDisablePnpEventWorkerWatchdog((__int64)v7);
        PnpFreeWatchdog(v7[13]);
        v7[13] = 0LL;
      }
    }
    if ( v10 != 259 )
      PnpCompleteDeviceEvent(v7);
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
