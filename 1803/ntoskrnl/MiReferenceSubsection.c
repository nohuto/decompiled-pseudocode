/*
 * XREFs of MiReferenceSubsection @ 0x1400E4FB8
 * Callers:
 *     MiTrimSection @ 0x140082194 (MiTrimSection.c)
 *     MiPreventControlAreaDeletion @ 0x1400832BC (MiPreventControlAreaDeletion.c)
 *     MiFlushAcquire @ 0x1400BD9BC (MiFlushAcquire.c)
 *     MiComputeDataFlushRange @ 0x1400E4D20 (MiComputeDataFlushRange.c)
 *     MiUpdateActiveSubsection @ 0x14025B23C (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x1400E3FD8 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiReferenceSubsection(ULONG_PTR a1)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 result; // rax
  unsigned int v5; // esi

  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) )
    return 1LL;
  v3 = *(_QWORD *)(v2 + 64);
  result = MiIncrementSubsectionViewCount(a1);
  v5 = result;
  if ( (int)result > 1 )
  {
    if ( v3 && (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection(a1);
      *(_WORD *)(a1 + 32) |= 1u;
    }
    return v5;
  }
  return result;
}
