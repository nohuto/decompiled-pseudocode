/*
 * XREFs of MiSignalLargePageRebuild @ 0x1400809A4
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiNodeFreeZeroPages @ 0x1400D4DF8 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400D5740 (MiNodeLargeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x1400DA778 (MiPageCombiningActive.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiWakeLargePageRebuild @ 0x140155D70 (MiWakeLargePageRebuild.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r12
  unsigned int i; // edi
  __int64 v5; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rdx
  unsigned __int64 j; // rsi
  int v11; // edx
  int v12; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  result = MiPageCombiningActive();
  if ( (_DWORD)result != 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      LockHandle.LockQueue.Next = 0LL;
      v5 = *(_QWORD *)(a1 + 16) + 1984LL * i;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 1928);
      KxAcquireQueuedSpinLock(&LockHandle, v5 + 1928);
      if ( !*(_BYTE *)(v5 + 849) && (*(_BYTE *)(v5 + 848))-- == 1 )
      {
        v7 = 0LL;
        v8 = MmNumberOfChannels;
        v9 = 0LL;
        for ( j = (-(__int64)(*(_BYTE *)(v5 + 851) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
              (unsigned int)v9 < v8;
              v9 = (unsigned int)(v11 + 1) )
        {
          v7 += MiNodeFreeZeroPages(v5, v9, 0LL);
        }
        if ( v7 < j
          || (MiFlags & 0x30) == 0
          || (unsigned __int64)MiNodeLargeFreeZeroPages(v5, 4LL, 2LL) >> 3 >= v7
          || !(unsigned int)MiWakeLargePageRebuild(a1, i, (unsigned int)(v12 - 3)) )
        {
          *(_BYTE *)(v5 + 850) = 8;
          *(_BYTE *)(v5 + 848) = 8;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
