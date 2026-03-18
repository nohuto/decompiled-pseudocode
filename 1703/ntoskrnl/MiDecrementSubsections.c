/*
 * XREFs of MiDecrementSubsections @ 0x1400A8D04
 * Callers:
 *     MiDecrementSubsection @ 0x1400151F8 (MiDecrementSubsection.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiReleaseFaultCharges @ 0x1400322C4 (MiReleaseFaultCharges.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiFlushRelease @ 0x1400A8C60 (MiFlushRelease.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiUpdateActiveSubsection @ 0x1402161AC (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiDecrementSubsections(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned int v10; // ecx

  v5 = a1;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  do
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v6 += MiDecrementSubsectionViewCount(v5, a3);
      if ( v7 )
      {
        if ( !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
          v6 += MiInsertUnusedSubsection((_DWORD *)v5, v8);
      }
    }
    if ( v5 == a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    v10 = a3 & 0xFFFFFFF7;
    if ( v7 )
      v10 = a3;
    a3 = v10;
  }
  while ( v5 );
  return v6;
}
