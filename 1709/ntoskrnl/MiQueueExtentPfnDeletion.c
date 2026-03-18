/*
 * XREFs of MiQueueExtentPfnDeletion @ 0x140223A70
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 *     MiClearFileOnlyPfn @ 0x1402226D0 (MiClearFileOnlyPfn.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiWakeFileOnlyReaper @ 0x140223F0C (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiQueueExtentPfnDeletion(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  LockHandle.LockQueue.Next = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = qword_14038B060;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_14038B060);
  if ( a1 )
  {
    *a1 = qword_140388248;
    qword_140388248 = (__int64)a1;
  }
  MiWakeFileOnlyReaper(v3, v2, v4, v5);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
