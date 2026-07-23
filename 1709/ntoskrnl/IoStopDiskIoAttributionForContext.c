/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x140007C70
 * Callers:
 *     PspIoRateEntryActivate @ 0x140445410 (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x1404459B4 (PspRemoveIoAttribution.c)
 *     PspIoRateEntryDeactivate @ 0x140445AF8 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v2; // rbx

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  RtlRbRemoveNode(&IopDiskIoAttributionTree, Node);
  Node->ParentValue = -1LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  __writecr8(v2);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Node[7]);
}
