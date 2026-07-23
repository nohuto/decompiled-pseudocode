/*
 * XREFs of PiUEventNotifyUserMode @ 0x14054B8AC
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x14054AD9C (PnpProcessCustomDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x14054B420 (PnpDeviceEventWorker.c)
 *     PnpProcessTargetDeviceEvent @ 0x14054DF70 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14055D9DC (PnpNotifyUserModeDeviceRemoval.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     PiUEventShouldQueueEvent @ 0x1400FB07C (PiUEventShouldQueueEvent.c)
 *     KeInitializeGuardedMutex @ 0x1400FB0E0 (KeInitializeGuardedMutex.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiUEventDereferenceEventEntry @ 0x14054AF98 (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x14054AFFC (PiUEventFreeEventEntry.c)
 *     PiUEventCacheObjectProperties @ 0x14054BBF8 (PiUEventCacheObjectProperties.c)
 *     PiUEventIsDeviceEventVetoable @ 0x14054C068 (PiUEventIsDeviceEventVetoable.c)
 *     PiUEventReferenceEventEntry @ 0x14054D748 (PiUEventReferenceEventEntry.c)
 *     PiUEventDeviceNeedsInstall @ 0x14054E238 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1406C21B8 (PiUEventSendDeviceInstallNotification.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // edi
  char v3; // r15
  char IsDeviceEventVetoable; // al
  char v6; // r14
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx
  struct _FAST_MUTEX *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  PVOID *v13; // r12
  struct _WORK_QUEUE_ITEM *v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // edi
  __int64 v17; // rbx
  struct _KEVENT *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF
  char v23; // [rsp+98h] [rbp+48h] BYREF
  size_t Size; // [rsp+A0h] [rbp+50h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  LODWORD(Size) = 0;
  v3 = 0;
  Timeout.QuadPart = 0LL;
  v23 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 120) == 4 )
  {
    v17 = a1 + 152;
    if ( (int)PiUEventDeviceNeedsInstall(a1 + 152, &v23) >= 0 )
    {
      if ( v23 )
        PiUEventSendDeviceInstallNotification(v17);
    }
  }
  if ( PiUEventShouldQueueEvent(a1) )
  {
    IsDeviceEventVetoable = PiUEventIsDeviceEventVetoable();
    LODWORD(Size) = *(_DWORD *)(a1 + 140) + 72;
    v6 = IsDeviceEventVetoable;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x59706E50u);
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, (unsigned int)Size);
    v9 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    *(_QWORD *)(v8 + 16) = v9;
    if ( !v9 )
    {
LABEL_39:
      PiUEventFreeEventEntry((_QWORD *)v8);
      return (unsigned int)-1073741670;
    }
    KeInitializeGuardedMutex(v9);
    *(_DWORD *)(v8 + 56) = 1;
    *(_BYTE *)(v8 + 69) = v6;
    v10 = *(_DWORD **)(a1 + 48);
    if ( v6 )
    {
      *(_QWORD *)(v8 + 32) = v10;
      v19 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(v8 + 40) = v19;
      **(_WORD **)(v19 + 8) = 0;
      **(_WORD **)(v8 + 40) = 0;
      **(_DWORD **)(v8 + 32) = 0;
    }
    else
    {
      if ( v10 )
        *v10 = 0;
      v11 = *(_QWORD *)(a1 + 56);
      if ( v11 )
      {
        **(_WORD **)(v11 + 8) = 0;
        **(_WORD **)(a1 + 56) = 0;
      }
    }
    if ( *(_QWORD *)(a1 + 24) || v6 )
    {
      v3 = 1;
      v18 = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x59706E50u);
      *(_QWORD *)(v8 + 24) = v18;
      if ( !v18 )
      {
LABEL_37:
        if ( *(_QWORD *)(v8 + 24) )
          PiUEventDereferenceEventEntry((PVOID)v8);
        goto LABEL_39;
      }
      KeInitializeEvent(v18, NotificationEvent, 0);
      PiUEventReferenceEventEntry(v8);
    }
    *(_BYTE *)(v8 + 68) = v3;
    *(_DWORD *)(v8 + 64) = *(_DWORD *)(a1 + 140) + 8;
    memmove((void *)(v8 + 72), (const void *)(a1 + 104), *(unsigned int *)(a1 + 140));
    PiUEventCacheObjectProperties(v8);
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v12 = (__int64 *)qword_140384528;
    v13 = (PVOID *)PiUEventUsermodeEventQueue;
    if ( *(PVOID **)qword_140384528 != &PiUEventUsermodeEventQueue )
      __fastfail(3u);
    *(_QWORD *)v8 = &PiUEventUsermodeEventQueue;
    *(_QWORD *)(v8 + 8) = v12;
    *v12 = v8;
    qword_140384528 = v8;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    if ( v13 != &PiUEventUsermodeEventQueue )
      goto LABEL_18;
    v14 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x59706E50u);
    if ( v14 )
    {
      v14->Parameter = v14;
      v14->WorkerRoutine = PiUEventProcessEventWorker;
      v14->List.Flink = 0LL;
      ExQueueWorkItem(v14, NormalWorkQueue);
LABEL_18:
      if ( v3 )
      {
        Object[0] = &PnpShutdownEvent;
        Object[1] = *(PVOID *)(v8 + 24);
        Timeout.QuadPart = -300000000LL;
        v15 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
        LODWORD(Size) = 0;
        v16 = v15;
        ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, &Size, 4u, 0LL, 0LL, 0, 0);
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            if ( v6 && **(_DWORD **)(a1 + 48) )
              v2 = -1073741536;
            else
              v2 = 0;
          }
          else
          {
            v2 = v16 != 258 ? 0xC0000001 : 0;
          }
        }
        else
        {
          v2 = -1073741431;
        }
        ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
        *(_QWORD *)(v8 + 32) = 0LL;
        *(_QWORD *)(v8 + 40) = 0LL;
        KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
        PiUEventDereferenceEventEntry((PVOID)v8);
      }
      return v2;
    }
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v20 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v21 = *(_QWORD **)(v8 + 8), *v21 != v8) )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    if ( !v3 )
      goto LABEL_39;
    goto LABEL_37;
  }
  return v2;
}
