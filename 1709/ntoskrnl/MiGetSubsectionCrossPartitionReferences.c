/*
 * XREFs of MiGetSubsectionCrossPartitionReferences @ 0x1400148A8
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x1401109B8 (MiUpdateLastSubsectionSize.c)
 *     MiChargeSegmentCommit @ 0x140460540 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400148C4 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 */

__int64 MiGetSubsectionCrossPartitionReferences()
{
  return *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences() + 48) & 0x3FFFFFFF;
}
