/*
 * XREFs of RaidAdapterEnableQosWaitTimeoutCheck @ 0x1C0025FA0
 * Callers:
 *     RaUnitSetQOSIoctl @ 0x1C003AD84 (RaUnitSetQOSIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterEnableQosWaitTimeoutCheck(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5608), &LockHandle);
  v2 = *(_DWORD *)(a1 + 5616);
  if ( !v2 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 5480), (LARGE_INTEGER)-5000000LL, 0x1F4u, 0x32u, (PKDPC)(a1 + 5544));
    v2 = *(_DWORD *)(a1 + 5616);
  }
  *(_DWORD *)(a1 + 5616) = v2 + 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
