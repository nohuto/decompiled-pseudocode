/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x14006276C
 * Callers:
 *     MiUpdateControlAreaCommitCount @ 0x14004B4CC (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x140062750 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateLastSubsectionSize @ 0x1400CD7A0 (MiUpdateLastSubsectionSize.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
