/*
 * XREFs of CcUpdateTimeOnLogHandles @ 0x1401260A0
 * Callers:
 *     CcLazyWriteScan @ 0x140021D88 (CcLazyWriteScan.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcUpdateTimeOnLogHandles(__int64 a1)
{
  __int64 v2; // rbx
  __int64 i; // rdi
  int v4; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v7; // [rsp+38h] [rbp-20h] BYREF

  v2 = MEMORY[0xFFFFF78000000320];
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v7);
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 168) & 1) != 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 128);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 128));
      v4 = *(_DWORD *)(i + 168);
      if ( (v4 & 1) != 0 )
      {
        *(_QWORD *)(i + 160) = v2;
        *(_DWORD *)(i + 168) = v4 & 0xFFFFFFFE;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v7);
  result = v7.OldIrql;
  __writecr8(v7.OldIrql);
  return result;
}
