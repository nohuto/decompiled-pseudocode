/*
 * XREFs of vReleaseGlyphSet @ 0x1C022CA94
 * Callers:
 *     ttfdFreeGlyphset @ 0x1C022FB98 (ttfdFreeGlyphset.c)
 *     ttfdQueryFontTree @ 0x1C0230170 (ttfdQueryFontTree.c)
 * Callees:
 *     <none>
 */

void __fastcall vReleaseGlyphSet(__int64 a1, int a2)
{
  bool v3; // zf

  if ( a2 == 1 )
  {
    v3 = (*(_DWORD *)(a1 + 104))-- == 1;
    if ( v3 )
    {
      EngFreeMem(*(PVOID *)(a1 + 88));
      *(_QWORD *)(a1 + 88) = 0LL;
    }
  }
  else
  {
    v3 = (*(_DWORD *)(a1 + 108))-- == 1;
    if ( v3 )
    {
      EngFreeMem(*(PVOID *)(a1 + 96));
      *(_QWORD *)(a1 + 96) = 0LL;
    }
  }
}
