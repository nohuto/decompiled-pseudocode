/*
 * XREFs of RaidUnitDisablePendingTimer @ 0x1C0037FF4
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000BAB0 (RaUnitRemoveFromPendingList.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0039080 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDisablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  if ( (*(_BYTE *)(a1 + 153) & 0x20) == 0 && !*(_DWORD *)(a1 + 1532) )
  {
    KeCancelTimer((PKTIMER)(a1 + 696));
    *(_BYTE *)(a1 + 153) |= 0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
