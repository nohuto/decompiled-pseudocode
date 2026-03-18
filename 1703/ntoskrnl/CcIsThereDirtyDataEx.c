/*
 * XREFs of CcIsThereDirtyDataEx @ 0x1401DE0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

BOOLEAN __stdcall CcIsThereDirtyDataEx(PVPB Vpb, PULONG NumberOfDirtyPages)
{
  BOOLEAN v4; // bl
  __int64 *v5; // rax
  __int64 *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  v5 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    do
    {
      v6 = v5 - 2;
      if ( (struct _DEVICE_OBJECT *)*(v5 - 1) == Vpb->DeviceObject )
        break;
      v5 = (__int64 *)*v5;
      v6 = 0LL;
    }
    while ( v5 != &CcVolumeCacheMapList );
    if ( v6 && (v6[4] || *((_DWORD *)v6 + 49)) )
    {
      if ( NumberOfDirtyPages )
        *NumberOfDirtyPages = *((_DWORD *)v6 + 8) + *((_DWORD *)v6 + 49);
      v4 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4;
}
