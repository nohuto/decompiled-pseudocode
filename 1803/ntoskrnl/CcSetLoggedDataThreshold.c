/*
 * XREFs of CcSetLoggedDataThreshold @ 0x14014CA90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcSetLoggedDataThreshold(__int64 a1, int a2)
{
  __int64 i; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE v7; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 )
    {
      v5 = *((_QWORD *)PspSystemPartition + 1);
      v7.LockQueue.Next = 0LL;
      v7.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 128);
      KxAcquireQueuedSpinLock((__int64)&v7, (volatile __int64 *)(v5 + 128));
      *(_DWORD *)(i + 132) = a2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v7);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
