/*
 * XREFs of RaidUnitQueueHierarchicalResetWorkItem @ 0x1C003EE14
 * Callers:
 *     RaUnitSetUnresponsiveAttribute @ 0x1C003CD54 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitRequestTimeout @ 0x1C003EF68 (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitQueueHierarchicalResetWorkItem(__int64 a1)
{
  struct _IO_WORKITEM *WorkItem; // rdi
  unsigned int v4; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  if ( !WorkItem )
    return *(_QWORD *)(a1 + 1512) != 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1536), &LockHandle);
  if ( *(_QWORD *)(a1 + 1512) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoFreeWorkItem(WorkItem);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 680));
    v4 = *(_DWORD *)(a1 + 1032);
    *(_QWORD *)(a1 + 1512) = WorkItem;
    if ( v4 < 0x1E )
      v4 = 30;
    *(_DWORD *)(a1 + 1524) = 0;
    *(_DWORD *)(a1 + 1520) = 4 * v4 + 42;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)RaidHierarchicalResetWorkRoutine, CriticalWorkQueue, WorkItem);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4780LL);
  }
  return 1;
}
