/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C002D11C
 * Callers:
 *     RaidDeleteUnit @ 0x1C001842C (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C003E464 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5608), &LockHandle);
  if ( *(_DWORD *)(a1 + 5616) == 1 )
    KeCancelTimer((PKTIMER)(a1 + 5480));
  --*(_DWORD *)(a1 + 5616);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
