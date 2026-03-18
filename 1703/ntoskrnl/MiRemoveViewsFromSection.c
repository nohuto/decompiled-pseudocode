/*
 * XREFs of MiRemoveViewsFromSection @ 0x1400A8D90
 * Callers:
 *     MiConvertStaticSubsections @ 0x140098A60 (MiConvertStaticSubsections.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A8BD8 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiRemoveSystemCacheReferences @ 0x1402125C0 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned int v11; // ecx

  v5 = a1;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  do
  {
    v6 += MiDecrementSubsectionViewCount(v5, a3);
    if ( v7 && !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
      v6 += MiInsertUnusedSubsection((_DWORD *)v5, v8);
    if ( a2 )
    {
      v9 = *(unsigned int *)(v5 + 44);
      if ( a2 <= v9 )
        return v6;
      a2 -= v9;
    }
    v5 = *(_QWORD *)(v5 + 16);
    v11 = a3 & 0xFFFFFFF7;
    if ( v7 )
      v11 = a3;
    a3 = v11;
  }
  while ( v5 );
  return v6;
}
