/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1C000CCE8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 *     RaidRestartIoQueue @ 0x1C000C8F8 (RaidRestartIoQueue.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C000CE98 (RaAllocateIoResource.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C002D6B0 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003F5F4 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, _QWORD *a3)
{
  int *v3; // rsi
  __int64 IoResource; // rdx
  PKSPIN_LOCK *v9; // rcx
  PKSPIN_LOCK *QosEntryForDeviceEntry; // rax
  PKSPIN_LOCK v11; // rbx
  PKSPIN_LOCK *v12; // rcx
  PKSPIN_LOCK *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = (int *)(SpinLock + 5);
  if ( *((int *)SpinLock + 11) > 0 || *v3 > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 11) > 0 || *v3 > 0 )
    {
      v13 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v13 != SpinLock + 1 )
        __fastfail(3u);
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v13;
      *v13 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      ++*((_DWORD *)SpinLock + 6);
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
        goto LABEL_23;
      QosEntryForDeviceEntry = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2);
      v11 = SpinLock + 33;
      v12 = (PKSPIN_LOCK *)v11[1];
      if ( *v12 != v11 )
        __fastfail(3u);
      goto LABEL_22;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4);
  if ( !IoResource )
  {
    if ( *((_DWORD *)SpinLock + 34) >= *((_DWORD *)SpinLock + 36)
      || (RaAttemptHighWaterMarkIncrease(SpinLock), (IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4)) == 0) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
      v9 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v9 != SpinLock + 1 )
        __fastfail(3u);
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v9;
      *v9 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      ++*((_DWORD *)SpinLock + 6);
      *v3 = 1;
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
        goto LABEL_23;
      QosEntryForDeviceEntry = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2);
      v11 = SpinLock + 33;
      v12 = (PKSPIN_LOCK *)v11[1];
      if ( *v12 != v11 )
        __fastfail(3u);
LABEL_22:
      *QosEntryForDeviceEntry = v11;
      QosEntryForDeviceEntry[1] = (PKSPIN_LOCK)v12;
      *v12 = (PKSPIN_LOCK)QosEntryForDeviceEntry;
      v11[1] = (KSPIN_LOCK)QosEntryForDeviceEntry;
LABEL_23:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return 1;
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)SpinLock + 48) >= *((_DWORD *)SpinLock + 9) )
    *((_DWORD *)SpinLock + 9) = *((_DWORD *)SpinLock + 48);
  a3[3] = IoResource + 832;
  a3[2] = IoResource + 32;
  a3[1] = IoResource + 1088;
  RaidZeroXrb(IoResource + 32, IoResource, *(unsigned int *)(IoResource + 776), *(_QWORD *)(IoResource + 792));
  return 0;
}
