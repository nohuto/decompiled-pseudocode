/*
 * XREFs of CcSetLoggedDataThreshold @ 0x140135FA0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcSetLoggedDataThreshold(__int64 a1, int a2)
{
  __int64 i; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 )
    {
      *(_DWORD *)(i + 132) = a2;
      break;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
