/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x14011F498
 * Callers:
 *     PspIoRateEntryActivate @ 0x14041EE10 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x14041EEF8 (PspIoRateEntryDeactivate.c)
 *     PspRemoveIoAttribution @ 0x14054DD78 (PspRemoveIoAttribution.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 v2; // rbx

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  RtlRbRemoveNode((__int64)&IopDiskIoAttributionTree, &a1->Count);
  a1[2].Count = -1LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  __writecr8(v2);
  ExWaitForRundownProtectionRelease(a1 + 19);
}
