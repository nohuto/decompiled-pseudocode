/*
 * XREFs of ?vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z @ 0x1C012FC60
 * Callers:
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C012EB94 (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C012EDAC (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C012F5CC (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 *     ?vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02A76DC (-vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DDA_CLIPLINE::vUnflip(DDA_CLIPLINE *this, int *a2, int *a3)
{
  int v3; // r9d

  if ( (*(_DWORD *)this & 5) != 0 )
  {
    v3 = *a2;
    *a2 = *a3;
    *a3 = v3;
  }
  if ( (*(_DWORD *)this & 8) != 0 )
    *a3 = -*a3;
  if ( (*(_DWORD *)this & 0x20) != 0 )
    *a2 = -*a2;
}
