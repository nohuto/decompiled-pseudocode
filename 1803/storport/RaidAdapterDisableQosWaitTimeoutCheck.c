/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0025F1C
 * Callers:
 *     RaidDeleteUnit @ 0x1C0012370 (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C003CA44 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5608), &LockHandle);
  v2 = *(_DWORD *)(a1 + 5616);
  if ( v2 == 1 )
  {
    KeCancelTimer((PKTIMER)(a1 + 5480));
    v2 = *(_DWORD *)(a1 + 5616);
  }
  *(_DWORD *)(a1 + 5616) = v2 - 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
