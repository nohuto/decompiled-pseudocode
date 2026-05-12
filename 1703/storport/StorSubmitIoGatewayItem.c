/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1C000A0E4
 * Callers:
 *     RaidRestartIoQueue @ 0x1C0006A68 (RaidRestartIoQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaAllocateIoResource @ 0x1C000A260 (RaAllocateIoResource.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00312D8 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003FFC0 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, _QWORD *a3)
{
  __int64 IoResource; // rdx
  __int64 v7; // rbx
  void *v8; // rcx
  size_t v9; // rax
  __int64 v10; // rdi
  char result; // al
  PKSPIN_LOCK *v12; // rcx
  PKSPIN_LOCK *QosEntryForDeviceEntry; // rax
  PKSPIN_LOCK v14; // rbx
  PKSPIN_LOCK *v15; // rcx
  PKSPIN_LOCK *v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *((int *)SpinLock + 11) > 0 || *((int *)SpinLock + 10) > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 11) > 0 || *((int *)SpinLock + 10) > 0 )
    {
      v16 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v16 != SpinLock + 1 )
        __fastfail(3u);
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v16;
      *v16 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      ++*((_DWORD *)SpinLock + 6);
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
        goto LABEL_25;
      QosEntryForDeviceEntry = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2);
      v14 = SpinLock + 33;
      v15 = (PKSPIN_LOCK *)v14[1];
      if ( *v15 != v14 )
        __fastfail(3u);
      goto LABEL_24;
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
      v12 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v12 != SpinLock + 1 )
        __fastfail(3u);
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v12;
      *v12 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      ++*((_DWORD *)SpinLock + 6);
      *((_DWORD *)SpinLock + 10) = 1;
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
        goto LABEL_25;
      QosEntryForDeviceEntry = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2);
      v14 = SpinLock + 33;
      v15 = (PKSPIN_LOCK *)v14[1];
      if ( *v15 != v14 )
        __fastfail(3u);
LABEL_24:
      *QosEntryForDeviceEntry = v14;
      QosEntryForDeviceEntry[1] = (PKSPIN_LOCK)v15;
      *v15 = (PKSPIN_LOCK)QosEntryForDeviceEntry;
      v14[1] = (KSPIN_LOCK)QosEntryForDeviceEntry;
LABEL_25:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return 1;
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)SpinLock + 48) >= *((_DWORD *)SpinLock + 9) )
    *((_DWORD *)SpinLock + 9) = *((_DWORD *)SpinLock + 48);
  v7 = IoResource + 16;
  a3[2] = IoResource + 16;
  a3[3] = IoResource + 816;
  a3[1] = IoResource + 1072;
  v8 = *(void **)(IoResource + 776);
  v9 = *(unsigned int *)(IoResource + 760);
  *(_BYTE *)(IoResource + 32) &= 0x9Cu;
  v10 = *(_QWORD *)(IoResource + 800);
  *(_DWORD *)(IoResource + 16) = 523124044;
  *(_QWORD *)(IoResource + 24) = 0LL;
  *(_WORD *)(IoResource + 34) = -1;
  *(_BYTE *)(IoResource + 36) = -1;
  *(_QWORD *)(IoResource + 40) = 0LL;
  *(_QWORD *)(IoResource + 120) = 0LL;
  *(_QWORD *)(IoResource + 128) = 0LL;
  *(_QWORD *)(IoResource + 152) = 0LL;
  *(_QWORD *)(IoResource + 168) = 0LL;
  *(_QWORD *)(IoResource + 160) = 0LL;
  *(_QWORD *)(IoResource + 208) = 0LL;
  *(_QWORD *)(IoResource + 176) = 0LL;
  *(_QWORD *)(IoResource + 184) = 0LL;
  *(_QWORD *)(IoResource + 232) = 0LL;
  *(_QWORD *)(IoResource + 240) = 0LL;
  *(_QWORD *)(IoResource + 136) = 0LL;
  *(_QWORD *)(IoResource + 712) = 0LL;
  *(_QWORD *)(IoResource + 720) = 0LL;
  *(_QWORD *)(IoResource + 728) = 0LL;
  *(_QWORD *)(IoResource + 736) = 0LL;
  *(_DWORD *)(IoResource + 760) = v9;
  *(_QWORD *)(IoResource + 776) = v8;
  if ( v8 )
    memset(v8, 0, v9);
  *(_BYTE *)(v7 + 16) &= ~0x80u;
  *(_BYTE *)(v7 + 17) &= 0xF0u;
  result = 0;
  *(_QWORD *)(v7 + 768) = 0LL;
  *(_DWORD *)(v7 + 748) = 0;
  *(_DWORD *)(v7 + 776) = 0;
  *(_QWORD *)(v7 + 784) = v10;
  return result;
}
