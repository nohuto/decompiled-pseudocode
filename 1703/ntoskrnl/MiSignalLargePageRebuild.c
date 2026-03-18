/*
 * XREFs of MiSignalLargePageRebuild @ 0x140083DBC
 * Callers:
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 * Callees:
 *     MiNodeLargeFreeZeroPages @ 0x140075B98 (MiNodeLargeFreeZeroPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x1400B8330 (MiNodeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x1401036F8 (MiPageCombiningActive.c)
 *     MiWakeLargePageRebuild @ 0x14022553C (MiWakeLargePageRebuild.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r13
  unsigned int i; // edi
  __int64 v5; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  unsigned __int64 j; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  result = MiPageCombiningActive();
  if ( (_DWORD)result != 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      LockHandle.LockQueue.Next = 0LL;
      v5 = *(_QWORD *)(a1 + 48) + 2184LL * i;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 2176);
      KxAcquireQueuedSpinLock(&LockHandle);
      if ( !*(_BYTE *)(v5 + 1233) && (*(_BYTE *)(v5 + 1232))-- == 1 )
      {
        v7 = 0LL;
        v8 = MmNumberOfChannels;
        v9 = 0;
        for ( j = (-(__int64)(*(_BYTE *)(v5 + 1235) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000; v9 < v8; ++v9 )
          v7 += MiNodeFreeZeroPages(v5, v9, 0LL);
        if ( v7 < j
          || (MiFlags & 0x30) == 0
          || (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v5, 4u, 2) >> 3 >= v7
          || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL) )
        {
          *(_BYTE *)(v5 + 1234) = 8;
          *(_BYTE *)(v5 + 1232) = 8;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
