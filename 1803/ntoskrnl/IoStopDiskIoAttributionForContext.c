/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x1400CD8D4
 * Callers:
 *     PspIoRateEntryActivate @ 0x140489D84 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x140489E6C (PspIoRateEntryDeactivate.c)
 *     PspRemoveIoAttribution @ 0x14057CDC4 (PspRemoveIoAttribution.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 v2; // rbx

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  RtlRbRemoveNode(&IopDiskIoAttributionTree, a1);
  a1[2].Count = -1LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  __writecr8(v2);
  ExWaitForRundownProtectionRelease(a1 + 21);
}
