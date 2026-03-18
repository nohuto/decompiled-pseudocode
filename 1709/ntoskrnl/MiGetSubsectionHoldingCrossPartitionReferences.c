/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400148C4
 * Callers:
 *     MiGetSubsectionCrossPartitionReferences @ 0x1400148A8 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateControlAreaCommitCount @ 0x14001FCD0 (MiUpdateControlAreaCommitCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiUpdateLastSubsectionSize @ 0x1401109B8 (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  if ( (v1 & 0x80u) == 0 || (v1 & 0x20) != 0 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
