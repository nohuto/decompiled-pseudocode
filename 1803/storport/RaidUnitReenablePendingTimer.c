/*
 * XREFs of RaidUnitReenablePendingTimer @ 0x1C0035DA4
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0009E80 (RaidUnitClaimIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0015D30 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00177B0 (RaUnitRemoveDeviceIrp.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C00370A0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00373F0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitReenablePendingTimer(__int64 a1, char a2)
{
  int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // r15
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 2624) != 0 ? 1 : 4;
  v5 = *(_BYTE *)(a1 + 2624) != 0 ? 0xFFFFFF06 : 0;
  v6 = *(_BYTE *)(a1 + 2624) != 0 ? 500 : 2000;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  if ( (*(_BYTE *)(a1 + 153) & 0x20) != 0 || a2 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 696), (LARGE_INTEGER)(-10000 * v6), v6, v5 + 300, (PKDPC)(a1 + 760));
    *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) = v4;
    *(_BYTE *)(a1 + 153) &= ~0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
