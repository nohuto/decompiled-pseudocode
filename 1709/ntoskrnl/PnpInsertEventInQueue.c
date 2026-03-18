/*
 * XREFs of PnpInsertEventInQueue @ 0x14054DDBC
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1400FB788 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14011C510 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14015BA6C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetCustomTargetEvent @ 0x14054AC54 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x14054DC8C (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x14055688C (PnpSetDeviceClassChange.c)
 *     PnpSetTargetDeviceRemove @ 0x14055BE88 (PnpSetTargetDeviceRemove.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1405F1818 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetBlockedDriverEvent @ 0x1406CAF90 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1406CAFFC (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1406CB100 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1406CB198 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1406CB24C (PnpSetPowerVetoEvent.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400FB2D4 (PnpIsSafeToExamineUserModeTeb.c)
 *     IoGetActivityIdThread @ 0x1400FB330 (IoGetActivityIdThread.c)
 *     McTemplateK0z @ 0x1401FEBA8 (McTemplateK0z.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
         && KeGetPcr()->NtTib.$166D8ABE2A92F8472FE720CEE456C2DC::$8D6405090912A04D7DAC26580625742B::Self )
  {
    v14 = *(GUID *)&KeGetPcr()->NtTib.$166D8ABE2A92F8472FE720CEE456C2DC::$8D6405090912A04D7DAC26580625742B::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v14;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 104) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 112) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
    if ( !v10 )
      goto LABEL_21;
    v11 = *(_QWORD *)(a1 + 104) - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)(a1 + 112) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( !v11 )
    {
LABEL_21:
      v12 = *(_QWORD *)(a1 + 144);
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
    PoolWithTag->WorkerRoutine = PnpDeviceEventWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  return v2;
}
