/*
 * XREFs of MiDecrementSubsections @ 0x1400E5350
 * Callers:
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiDecrementSubsection @ 0x1400833A4 (MiDecrementSubsection.c)
 *     MiReleaseFaultCharges @ 0x1400C7D70 (MiReleaseFaultCharges.c)
 *     MiFlushRelease @ 0x1400E4B40 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x14025B23C (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x1400E41E4 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiDecrementSubsections(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // ecx

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v6 += MiDecrementSubsectionViewCount(v5);
      if ( v7 )
      {
        if ( !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
          v6 += MiInsertUnusedSubsection(v5);
      }
    }
    if ( v5 == a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    v8 = a3 & 0xFFFFFFF7;
    if ( v7 )
      v8 = a3;
    a3 = v8;
  }
  while ( v5 );
  return v6;
}
