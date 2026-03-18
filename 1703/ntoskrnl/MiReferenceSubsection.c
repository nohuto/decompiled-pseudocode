/*
 * XREFs of MiReferenceSubsection @ 0x140098D38
 * Callers:
 *     MiUpControlAreaRefs @ 0x14000308C (MiUpControlAreaRefs.c)
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 *     MiFlushAcquire @ 0x140071D5C (MiFlushAcquire.c)
 *     MiComputeDataFlushRange @ 0x140098AEC (MiComputeDataFlushRange.c)
 *     MiUpdateActiveSubsection @ 0x1402161AC (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x140097D88 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiReferenceSubsection(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v6; // esi

  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) )
    return 1LL;
  v4 = *(_QWORD *)(v3 + 64);
  result = MiIncrementSubsectionViewCount(a1, a2);
  v6 = result;
  if ( (int)result > 1 )
  {
    if ( v4 && (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection(a1);
      *(_WORD *)(a1 + 32) |= 1u;
    }
    return v6;
  }
  return result;
}
