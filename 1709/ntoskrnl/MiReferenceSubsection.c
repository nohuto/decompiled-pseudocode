/*
 * XREFs of MiReferenceSubsection @ 0x1400A2330
 * Callers:
 *     MiComputeDataFlushRange @ 0x1400A2450 (MiComputeDataFlushRange.c)
 *     MiFlushAcquire @ 0x1400B030C (MiFlushAcquire.c)
 *     MiTrimSection @ 0x1400F23D8 (MiTrimSection.c)
 *     MiPreventControlAreaDeletion @ 0x1400F3B84 (MiPreventControlAreaDeletion.c)
 *     MiUpdateActiveSubsection @ 0x14021F954 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x14001F358 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
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
  result = MiIncrementSubsectionViewCount((_QWORD *)a1, a2);
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
