/*
 * XREFs of RaidHierarchicalResetWorkRoutine @ 0x1C003D960
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     StorLogIoError @ 0x1C003B634 (StorLogIoError.c)
 *     RaidUnitHierarchicalReset @ 0x1C003E6E0 (RaidUnitHierarchicalReset.c)
 */

void __fastcall RaidHierarchicalResetWorkRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // rdi
  struct _IO_WORKITEM *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 192, &LockHandle);
  v4 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 189);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 == Context )
  {
    StorLogIoError(*((_QWORD *)DeviceExtension + 3), *((_DWORD *)DeviceExtension + 22), -2147221375, 1);
    RaidUnitHierarchicalReset(DeviceExtension);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 192, &LockHandle);
    if ( *((struct _IO_WORKITEM **)DeviceExtension + 189) == Context )
    {
      *((_QWORD *)DeviceExtension + 189) = 0LL;
      *((_DWORD *)DeviceExtension + 380) = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  IoFreeWorkItem(Context);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
