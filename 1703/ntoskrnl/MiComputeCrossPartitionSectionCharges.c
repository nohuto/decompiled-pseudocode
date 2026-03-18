/*
 * XREFs of MiComputeCrossPartitionSectionCharges @ 0x140221020
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1400990E0 (MiReleaseControlAreaCharges.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeCrossPartitionSectionCharges(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
    return *(_QWORD *)(v2 + 120);
  if ( *(_QWORD *)(v2 + 64) )
    return *((unsigned int *)a1 + 11);
  return MiGetCommittedPages((_QWORD *)v2);
}
