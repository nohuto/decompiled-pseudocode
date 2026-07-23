/*
 * XREFs of PiUEventNotifyUserMode @ 0x1404A5D80
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x140457A28 (PnpProcessCustomDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 *     PnpProcessTargetDeviceEvent @ 0x1404DA3D8 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14056F120 (PnpNotifyUserModeDeviceRemoval.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeInitializeGuardedMutex @ 0x140067180 (KeInitializeGuardedMutex.c)
 *     PiUEventShouldQueueEvent @ 0x1400674B4 (PiUEventShouldQueueEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PiUEventDereferenceEventEntry @ 0x140464968 (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x1404649CC (PiUEventFreeEventEntry.c)
 *     PiUEventDeviceNeedsInstall @ 0x1404A60B4 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventCacheObjectProperties @ 0x1404A6224 (PiUEventCacheObjectProperties.c)
 *     PiUEventReferenceEventEntry @ 0x1404A6B48 (PiUEventReferenceEventEntry.c)
 *     PiUEventIsDeviceEventVetoable @ 0x1404A6CB8 (PiUEventIsDeviceEventVetoable.c)
 *     PiUEventSendDeviceInstallNotification @ 0x140696600 (PiUEventSendDeviceInstallNotification.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // r15
  __int64 v5; // rdi
  char IsDeviceEventVetoable; // al
  char v7; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rdi
  struct _FAST_MUTEX *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 *v14; // r12
  struct _WORK_QUEUE_ITEM *v15; // rax
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebx
  struct _KEVENT *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+98h] [rbp+48h] BYREF
  size_t Size; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0;
  LODWORD(Size) = 0;
  v3 = 0;
  LOBYTE(Timeout.LowPart) = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 120) == 4 )
  {
    v5 = a1 + 152;
    if ( (int)PiUEventDeviceNeedsInstall(a1 + 152, &Timeout) >= 0 )
    {
      if ( LOBYTE(Timeout.LowPart) )
        PiUEventSendDeviceInstallNotification(v5);
    }
  }
  if ( PiUEventShouldQueueEvent(a1) )
  {
    IsDeviceEventVetoable = PiUEventIsDeviceEventVetoable();
    LODWORD(Size) = *(_DWORD *)(a1 + 140) + 72;
    v7 = IsDeviceEventVetoable;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x59706E50u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, (unsigned int)Size);
    v10 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    v9[2] = v10;
    if ( v10 )
    {
      KeInitializeGuardedMutex(v10);
      *((_DWORD *)v9 + 14) = 1;
      *((_BYTE *)v9 + 69) = v7;
      v11 = *(_DWORD **)(a1 + 48);
      if ( v7 )
      {
        v9[4] = v11;
        v19 = *(_QWORD *)(a1 + 56);
        v9[5] = v19;
        **(_WORD **)(v19 + 8) = 0;
        *(_WORD *)v9[5] = 0;
        *(_DWORD *)v9[4] = 0;
      }
      else
      {
        if ( v11 )
          *v11 = 0;
        v12 = *(_QWORD *)(a1 + 56);
        if ( v12 )
        {
          **(_WORD **)(v12 + 8) = 0;
          **(_WORD **)(a1 + 56) = 0;
        }
      }
      if ( *(_QWORD *)(a1 + 24) || v7 )
      {
        v3 = 1;
        v18 = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x59706E50u);
        v9[3] = v18;
        if ( !v18 )
        {
          v2 = -1073741670;
LABEL_40:
          if ( v9[3] )
            PiUEventDereferenceEventEntry((__int64)v9);
          goto LABEL_42;
        }
        KeInitializeEvent(v18, NotificationEvent, 0);
        PiUEventReferenceEventEntry(v9);
      }
      *((_BYTE *)v9 + 68) = v3;
      *((_DWORD *)v9 + 16) = *(_DWORD *)(a1 + 140) + 8;
      memmove(v9 + 9, (const void *)(a1 + 104), *(unsigned int *)(a1 + 140));
      PiUEventCacheObjectProperties(v9);
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      v13 = (_QWORD *)qword_140368588;
      v14 = (__int64 *)PiUEventUsermodeEventQueue;
      if ( *(__int64 **)qword_140368588 != &PiUEventUsermodeEventQueue )
        __fastfail(3u);
      *v9 = &PiUEventUsermodeEventQueue;
      v9[1] = v13;
      *v13 = v9;
      qword_140368588 = (__int64)v9;
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
      if ( v14 != &PiUEventUsermodeEventQueue )
        goto LABEL_21;
      v15 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x59706E50u);
      if ( v15 )
      {
        v15->Parameter = v15;
        v15->WorkerRoutine = PiUEventProcessEventWorker;
        v15->List.Flink = 0LL;
        ExQueueWorkItem(v15, NormalWorkQueue);
LABEL_21:
        if ( v3 )
        {
          Timeout.QuadPart = -300000000LL;
          Object[0] = &PnpShutdownEvent;
          Object[1] = *((PVOID *)v9 + 3);
          v16 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
          LODWORD(Size) = 0;
          v17 = v16;
          ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, &Size, 4u, 0LL, 0LL, 0, 0);
          if ( v17 )
          {
            if ( v17 == 1 )
            {
              if ( v7 && **(_DWORD **)(a1 + 48) )
                v2 = -1073741536;
              else
                v2 = 0;
            }
            else
            {
              v2 = v17 != 258 ? 0xC0000001 : 0;
            }
          }
          else
          {
            v2 = -1073741431;
          }
          ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
          v9[4] = 0LL;
          v9[5] = 0LL;
          KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
          PiUEventDereferenceEventEntry((__int64)v9);
        }
        return v2;
      }
      v2 = -1073741670;
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      v20 = *v9;
      v21 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v21 != v9 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
      if ( v3 )
        goto LABEL_40;
    }
    else
    {
      v2 = -1073741670;
    }
LABEL_42:
    PiUEventFreeEventEntry(v9);
  }
  return v2;
}
