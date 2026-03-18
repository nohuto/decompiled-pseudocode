/*
 * XREFs of MiCheckAndUpdatePagingFileMinimum @ 0x140224DC8
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiCheckAndUpdatePagingFileMinimum(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  BOOL v5; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
  v4 = *a1;
  if ( v2 <= *a1 )
    a1[2] = v2;
  v5 = (unsigned int)v2 <= v4;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v5;
}
