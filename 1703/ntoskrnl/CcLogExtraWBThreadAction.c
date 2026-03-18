/*
 * XREFs of CcLogExtraWBThreadAction @ 0x1401DD63C
 * Callers:
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogExtraWBThreadAction @ 0x1401DEA44 (CcPerfLogExtraWBThreadAction.c)
 */

__int64 __fastcall CcLogExtraWBThreadAction(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = a1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
  v4 = *(_QWORD *)(v3 + 672);
  v5 = *(_QWORD *)(v3 + 696);
  LODWORD(v3) = *(_DWORD *)(v3 + 376);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return CcPerfLogExtraWBThreadAction(a2, v3, v4, v5, *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5760LL));
}
