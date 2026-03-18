/*
 * XREFs of PopGetCurrentWakeInfos @ 0x140154FBC
 * Callers:
 *     PopGetWakeSource @ 0x1405EDDD4 (PopGetWakeSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopGetCurrentWakeInfos(_QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  PoolWithTag = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  v4 = PopWakeInfoCount;
  if ( PopWakeInfoCount )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)PopWakeInfoCount, 0x206D654Du);
    if ( PoolWithTag )
    {
      v5 = PopWakeInfoList;
      while ( (__int64 *)v5 != &PopWakeInfoList && v2 < v4 )
      {
        PoolWithTag[v2] = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
        v5 = *(_QWORD *)v5;
        ++v2;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  result = v4;
  *a1 = PoolWithTag;
  return result;
}
