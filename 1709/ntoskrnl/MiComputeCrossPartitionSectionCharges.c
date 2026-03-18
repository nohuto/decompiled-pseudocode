/*
 * XREFs of MiComputeCrossPartitionSectionCharges @ 0x14022DCA0
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiReleaseControlAreaCharges @ 0x1400A2C24 (MiReleaseControlAreaCharges.c)
 * Callees:
 *     MiGetCommittedPages @ 0x1400A2BFC (MiGetCommittedPages.c)
 */

__int64 __fastcall MiComputeCrossPartitionSectionCharges(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // edx

  v2 = *a1;
  v3 = *(_DWORD *)(v2 + 56);
  if ( (v3 & 0x20) != 0 )
    return *(_QWORD *)(v2 + 120);
  if ( (v3 & 0x80u) != 0 )
    return *((unsigned int *)a1 + 11);
  return MiGetCommittedPages((_QWORD *)v2);
}
