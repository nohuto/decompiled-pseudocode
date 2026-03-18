/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x140226C68
 * Callers:
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140225658 (MiFindPageFileWriteCluster.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiRefPageFileSpaceBitmaps(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v4 = *(_QWORD *)(v3 + 112);
  ++*(_DWORD *)v4;
  *(_OWORD *)a2 = *(_OWORD *)v4;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v4 + 32);
  LODWORD(v3) = *(_DWORD *)v3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  *(_DWORD *)(a2 + 8) = v3;
  *(_DWORD *)(a2 + 24) = v3;
  *(_QWORD *)a2 = v4;
  return result;
}
