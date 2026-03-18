/*
 * XREFs of MiGetCommittedPages @ 0x1400A2BFC
 * Callers:
 *     MiDeleteSegmentPages @ 0x14001F644 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x14001F8DC (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14022DCA0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiInitializeImageExtents @ 0x1406E430C (MiInitializeImageExtents.c)
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
