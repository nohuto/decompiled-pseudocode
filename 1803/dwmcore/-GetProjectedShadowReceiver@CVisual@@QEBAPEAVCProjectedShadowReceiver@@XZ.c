/*
 * XREFs of ?GetProjectedShadowReceiver@CVisual@@QEBAPEAVCProjectedShadowReceiver@@XZ @ 0x18013C60C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?HasProjectedShadows@CVisual@@QEBA_NXZ @ 0x18013CA1C (-HasProjectedShadows@CVisual@@QEBA_NXZ.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z @ 0x1801A8B0C (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

struct CProjectedShadowReceiver *__fastcall CVisual::GetProjectedShadowReceiver(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 27);
  if ( (*(_BYTE *)(v1 + 4) & 1) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x20000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(struct CProjectedShadowReceiver **)(i + 4);
}
