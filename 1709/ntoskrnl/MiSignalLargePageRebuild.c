/*
 * XREFs of MiSignalLargePageRebuild @ 0x1400F00E0
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x1400C5878 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400C5910 (MiNodeLargeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x1400ED77C (MiPageCombiningActive.c)
 *     MiWakeLargePageRebuild @ 0x14015124C (MiWakeLargePageRebuild.c)
 */

char __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  int v2; // eax
  unsigned __int8 CurrentIrql; // r12
  unsigned int i; // edi
  __int64 v5; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rdx
  unsigned __int64 j; // rsi
  int v11; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  LOBYTE(v2) = MiPageCombiningActive(a1);
  if ( v2 != 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      LockHandle.LockQueue.Next = 0LL;
      v5 = *(_QWORD *)(a1 + 16) + 8256LL * i;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 8200);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 8200));
      if ( !*(_BYTE *)(v5 + 7121) && (*(_BYTE *)(v5 + 7120))-- == 1 )
      {
        v7 = 0LL;
        v8 = MmNumberOfChannels;
        v9 = 0LL;
        for ( j = (-(__int64)(*(_BYTE *)(v5 + 7123) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
              (unsigned int)v9 < v8;
              v9 = (unsigned int)(v11 + 1) )
        {
          v7 += MiNodeFreeZeroPages(v5, v9, 0);
        }
        if ( v7 < j
          || (MiFlags & 0x30) == 0
          || (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v5, 4u, 2) >> 3 >= v7
          || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL) )
        {
          *(_BYTE *)(v5 + 7122) = 8;
          *(_BYTE *)(v5 + 7120) = 8;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    LOBYTE(v2) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return v2;
}
