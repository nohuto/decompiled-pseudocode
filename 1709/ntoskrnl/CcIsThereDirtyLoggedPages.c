/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x140116F60
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v4; // bl
  __int64 *v5; // r8
  __int64 v6; // rdx
  __int64 *v7; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v10);
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
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v6 + 128));
      if ( v7[8] || *((_DWORD *)v7 + 50) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v7 + 16) + *((_DWORD *)v7 + 50);
        v4 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v10);
  __writecr8(v10.OldIrql);
  return v4;
}
