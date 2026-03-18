/*
 * XREFs of CcIsThereDirtyDataEx @ 0x1402206A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

BOOLEAN __stdcall CcIsThereDirtyDataEx(PVPB Vpb, PULONG NumberOfDirtyPages)
{
  BOOLEAN v4; // bl
  __int64 *v5; // rax
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  __int64 *v7; // rdi
  unsigned __int64 *v8; // rdx
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v5 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    DeviceObject = Vpb->DeviceObject;
    do
    {
      v7 = v5 - 2;
      if ( (struct _DEVICE_OBJECT *)*(v5 - 1) == DeviceObject )
        break;
      v5 = (__int64 *)*v5;
      v7 = 0LL;
    }
    while ( v5 != &CcVolumeCacheMapList );
    if ( v7 )
    {
      v8 = (unsigned __int64 *)(*((_QWORD *)PspSystemPartition + 1) + 128LL);
      v11.LockQueue.Next = 0LL;
      v11.LockQueue.Lock = v8;
      KxAcquireQueuedSpinLock((__int64)&v11, (volatile __int64 *)v8);
      v9 = v7[4];
      if ( v9 || *((_DWORD *)v7 + 49) )
      {
        if ( NumberOfDirtyPages )
          *NumberOfDirtyPages = *((_DWORD *)v7 + 49) + v9;
        v4 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v11);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4;
}
