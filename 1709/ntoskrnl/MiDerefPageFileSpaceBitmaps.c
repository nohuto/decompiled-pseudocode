/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x140224FAC
 * Callers:
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiExtendPagingFileMaximum @ 0x14022501C (MiExtendPagingFileMaximum.c)
 *     MiFindPageFileWriteCluster @ 0x140225658 (MiFindPageFileWriteCluster.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

_DWORD *__fastcall MiDerefPageFileSpaceBitmaps(__int64 a1, _DWORD **a2, int a3)
{
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  int v6; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  v4 = 0LL;
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v6 = --*v3;
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( !v6 )
    return v3;
  return (_DWORD *)v4;
}
