/*
 * XREFs of MiQueueExtentPfnDeletion @ 0x14025E6E8
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 *     MiClearFileOnlyPfn @ 0x14025D330 (MiClearFileOnlyPfn.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWakeFileOnlyReaper @ 0x14025EC20 (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiQueueExtentPfnDeletion(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_1403CEF20;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_1403CEF20);
    *a1 = qword_1403CB3E8;
    qword_1403CB3E8 = (__int64)a1;
    MiWakeFileOnlyReaper(v3, v2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(qword_1403CEF20, &LockHandle);
    MiWakeFileOnlyReaper(v5, v4);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
}
