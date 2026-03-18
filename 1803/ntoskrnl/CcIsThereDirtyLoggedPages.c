/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x1400BA390
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v4; // bl
  __int64 *v5; // r8
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v11);
  v5 = (__int64 *)CcVolumeCacheMapList;
  v6 = *((_QWORD *)PspSystemPartition + 1);
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    do
    {
      v7 = v5 - 2;
      if ( *(v5 - 1) == a1 )
        break;
      v5 = (__int64 *)*v5;
      v7 = 0LL;
    }
    while ( v5 != &CcVolumeCacheMapList );
    if ( v7 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 128);
      KxAcquireQueuedSpinLock(&LockHandle, v6 + 128);
      v8 = v7[8];
      if ( v8 || *((_DWORD *)v7 + 50) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v7 + 50) + v8;
        v4 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v11);
  __writecr8(v11.OldIrql);
  return v4;
}
