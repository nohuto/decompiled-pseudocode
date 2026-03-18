/*
 * XREFs of ttfdQueryFontTree @ 0x1C0230170
 * Callers:
 *     ttfdSemQueryFontTree @ 0x1C0226D20 (ttfdSemQueryFontTree.c)
 * Callees:
 *     vMarkFontGone @ 0x1C0227068 (vMarkFontGone.c)
 *     bReloadGlyphSet @ 0x1C0229854 (bReloadGlyphSet.c)
 *     vReleaseGlyphSet @ 0x1C022CA94 (vReleaseGlyphSet.c)
 *     pvHandleKerningPairs @ 0x1C022F778 (pvHandleKerningPairs.c)
 *     ttfdFree @ 0x1C0232958 (ttfdFree.c)
 */

__int64 __fastcall ttfdQueryFontTree(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  __int64 v6; // rdi
  int v7; // esi
  int v8; // r9d
  int v9; // r9d
  __int64 v11; // rbx

  v6 = *(_QWORD *)(a2 + 16 * ((unsigned int)(a3 - 1) + 3LL));
  v7 = *(_DWORD *)(a2 + 16LL * (unsigned int)(a3 - 1) + 44);
  v8 = a4 - 1;
  if ( !v8 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      *a5 = 0LL;
      if ( (unsigned int)bReloadGlyphSet(v6, v7) )
      {
        if ( v7 == 1 )
          return *(_QWORD *)(v6 + 88);
        else
          return *(_QWORD *)(v6 + 96);
      }
    }
    return 0LL;
  }
  v11 = 0LL;
  if ( !(unsigned int)bReloadGlyphSet(v6, v7) )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 4) & 1) == 0 )
  {
    LOBYTE(v11) = v7 != 1;
    v11 = pvHandleKerningPairs(v6, a5, v11);
  }
  vReleaseGlyphSet(v6, v7);
  return v11;
}
