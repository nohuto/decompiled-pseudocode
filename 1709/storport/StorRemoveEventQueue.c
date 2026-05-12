/*
 * XREFs of StorRemoveEventQueue @ 0x1C00318CC
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000BAB0 (RaUnitRemoveFromPendingList.c)
 * Callees:
 *     StorRemoveEventQueueInternal @ 0x1C0031930 (StorRemoveEventQueueInternal.c)
 */

void __fastcall StorRemoveEventQueue(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 14LL * *(unsigned int *)(a2 + 36);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&a1[v3 + 26], &LockHandle);
  StorRemoveEventQueueInternal(&a1[v3 + 16], *a1, a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
