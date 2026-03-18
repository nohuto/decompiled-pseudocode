/*
 * XREFs of MiReadyNonPagedPoolExpansionForUse @ 0x140045DA4
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400BE8FC (MiExpandNonPagedPool.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400465B8 (MiSplitBitmapPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiReadyNonPagedPoolExpansionForUse(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // rdi
  int v9; // ebx
  unsigned __int64 v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a4;
  v7 = (unsigned __int64)(a2 - a1[40]) >> 21;
  KeAcquireInStackQueuedSpinLock(a1 + 38, &LockHandle);
  if ( v7 + a3 > a1[2 * v4 + 42] )
  {
    v11 = (v7 + a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v11 <= a1[22] )
      a1[2 * v4 + 42] = v11;
  }
  if ( (unsigned int)MiSplitBitmapPages(5LL, a1[2 * v4 + 43] + (v7 >> 3), a3 + (v7 & 7)) )
  {
    v9 = MiSplitBitmapPages(
           5LL,
           a1[47] + ((unsigned __int64)(a2 - a1[40]) >> 15),
           (a3 << 9) + (((unsigned __int64)(a2 - a1[40]) >> 12) & 7));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return v9 != 0;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return 0LL;
  }
}
