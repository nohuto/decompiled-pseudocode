/*
 * XREFs of RaidAdapterEnableQosWaitTimeoutCheck @ 0x1C002C324
 * Callers:
 *     RaUnitSetQOSIoctl @ 0x1C003AA14 (RaUnitSetQOSIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterEnableQosWaitTimeoutCheck(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5608), &LockHandle);
  if ( !*(_DWORD *)(a1 + 5616) )
    KeSetCoalescableTimer((PKTIMER)(a1 + 5480), (LARGE_INTEGER)-5000000LL, 0x1F4u, 0x32u, (PKDPC)(a1 + 5544));
  ++*(_DWORD *)(a1 + 5616);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
