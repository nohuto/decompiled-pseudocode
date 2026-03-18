/*
 * XREFs of MiGetCommittedPages @ 0x1400E7A14
 * Callers:
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     MiDeleteSegmentPages @ 0x14004B184 (MiDeleteSegmentPages.c)
 *     MiReferenceActiveSubsection @ 0x1400E5D50 (MiReferenceActiveSubsection.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140267E2C (MiComputeCrossPartitionSectionCharges.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiInitializeImageExtents @ 0x14074E70C (MiInitializeImageExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCommittedPages(_QWORD *a1)
{
  if ( a1[8] )
    return *(_QWORD *)(*a1 + 16LL);
  else
    return a1[15] & 0xFFFFFFFFFLL;
}
