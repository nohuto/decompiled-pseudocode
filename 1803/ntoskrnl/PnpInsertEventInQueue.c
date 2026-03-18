/*
 * XREFs of PnpInsertEventInQueue @ 0x14051E7CC
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140145394 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1401464B0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140164200 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetCustomTargetEvent @ 0x14051E930 (PnpSetCustomTargetEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x1405C766C (PnpSetTargetDeviceRemove.c)
 *     PnpSetPlugPlayEvent @ 0x1405CB15C (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x1405F5C90 (PnpSetDeviceClassChange.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140605ABC (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetBlockedDriverEvent @ 0x140732888 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1407328F8 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x140732A04 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140732AA0 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140732B54 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400750E4 (PnpIsSafeToExamineUserModeTeb.c)
 *     IoGetActivityIdThread @ 0x140075140 (IoGetActivityIdThread.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     McTemplateK0z @ 0x1401857E8 (McTemplateK0z.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned int v2; // esi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  GUID *ActivityIdThread; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  GUID v14; // [rsp+20h] [rbp-28h]

  v14 = NullGuid;
  v2 = 0;
  PoolWithTag = 0LL;
  ActivityIdThread = (GUID *)IoGetActivityIdThread();
  if ( ActivityIdThread )
  {
    v14 = *ActivityIdThread;
  }
  else if ( PnpIsSafeToExamineUserModeTeb()
         && KeGetPcr()->NtTib.$E75840294B8B6CDB220941BF8BA011B2::$95891DD37A8D0C15AC204BC06A86484B::Self )
  {
    v14 = *(GUID *)&KeGetPcr()->NtTib.$E75840294B8B6CDB220941BF8BA011B2::$95891DD37A8D0C15AC204BC06A86484B::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v14;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
    if ( !v10 )
      goto LABEL_21;
    v11 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( !v11 )
    {
LABEL_21:
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      McTemplateK0z(v5, &KMPnPEvt_DeviceRemoval_Queue, v6, *(const wchar_t **)(v13 + 48));
    }
  }
  ExAcquireFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( !PnpNotificationInProgress )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4C706E50u);
    if ( PoolWithTag )
    {
      PnpNotificationInProgress = 1;
      KeResetEvent(&PnpEventQueueEmpty);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  v7 = PnpDeviceEventList + 120;
  v8 = *(_QWORD **)(PnpDeviceEventList + 128);
  if ( *v8 != PnpDeviceEventList + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(v7 + 8) = a1;
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( PoolWithTag )
  {
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceEventWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  return v2;
}
