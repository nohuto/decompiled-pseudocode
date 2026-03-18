/*
 * XREFs of PnpInsertEventInQueue @ 0x1404DA210
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1400679A0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140131CBC (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140159480 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetCustomTargetEvent @ 0x14045564C (PnpSetCustomTargetEvent.c)
 *     PnpSetDeviceClassChange @ 0x14045628C (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x1404DA0E0 (PnpSetPlugPlayEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x14056E408 (PnpSetTargetDeviceRemove.c)
 *     PnpSetBlockedDriverEvent @ 0x1406A0660 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1406A06D4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1406A07D8 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1406A0870 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1406A0924 (PnpSetPowerVetoEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1406A0A8C (PnpSynchronizeDeviceEventQueue.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140080268 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControlKernel @ 0x1400802C0 (EtwActivityIdControlKernel.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     Template_z @ 0x1401F8D2C (Template_z.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned int v2; // esi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  GUID v13; // [rsp+20h] [rbp-28h]
  GUID *v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = NullGuid;
  v14 = 0LL;
  v2 = 0;
  PoolWithTag = 0LL;
  EtwActivityIdControlKernel(1, (PVOID *)&v14);
  if ( v14 )
  {
    v13 = *v14;
  }
  else if ( PnpIsSafeToExamineUserModeTeb()
         && KeGetPcr()->NtTib.$FD99E398B9CE9653B759FFC9FDEDD739::$F77F79717011C0370B4D23A77E221CBE::Self )
  {
    v13 = *(GUID *)&KeGetPcr()->NtTib.$FD99E398B9CE9653B759FFC9FDEDD739::$F77F79717011C0370B4D23A77E221CBE::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v13;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 104) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(a1 + 112) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
    if ( !v9 )
      goto LABEL_21;
    v10 = *(_QWORD *)(a1 + 104) - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 112) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( !v10 )
    {
LABEL_21:
      v11 = *(_QWORD *)(a1 + 144);
      if ( v11 )
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
      else
        v12 = 0LL;
      Template_z(v4, &KMPnPEvt_DeviceRemoval_Queue, v5, *(const wchar_t **)(v12 + 48));
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
  v6 = PnpDeviceEventList + 120;
  v7 = *(_QWORD **)(PnpDeviceEventList + 128);
  if ( *v7 != PnpDeviceEventList + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v7;
  *v7 = a1;
  *(_QWORD *)(v6 + 8) = a1;
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
