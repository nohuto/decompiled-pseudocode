/*
 * XREFs of ExInterlockedExtendZone @ 0x1402BB320
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExExtendZone @ 0x1402BB240 (ExExtendZone.c)
 */

NTSTATUS __stdcall ExInterlockedExtendZone(PZONE_HEADER Zone, PVOID Segment, ULONG SegmentSize, PKSPIN_LOCK Lock)
{
  unsigned __int64 v8; // rbp
  NTSTATUS v9; // ebx

  v8 = KeAcquireSpinLockRaiseToDpc(Lock);
  v9 = ExExtendZone(Zone, Segment, SegmentSize);
  KxReleaseSpinLock(Lock);
  __writecr8(v8);
  return v9;
}
