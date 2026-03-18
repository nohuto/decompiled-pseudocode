/*
 * XREFs of CcLogExtraWBThreadAction @ 0x1401E0484
 * Callers:
 *     CcWorkerThread @ 0x140022CB0 (CcWorkerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogExtraWBThreadAction @ 0x1401E2710 (CcPerfLogExtraWBThreadAction.c)
 */

__int64 __fastcall CcLogExtraWBThreadAction(__int64 a1, int a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  int v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  v4 = *(_QWORD *)(a1 + 600);
  v5 = *(_QWORD *)(a1 + 624);
  v6 = *(_DWORD *)(a1 + 304);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return CcPerfLogExtraWBThreadAction(a2, v6, v4, v5, *(_QWORD *)(**(_QWORD **)(a1 + 8) + 5952LL));
}
