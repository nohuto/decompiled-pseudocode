/*
 * XREFs of ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1800DCFF4
 * Callers:
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x18004A140 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x180091810 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x18009D980 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z @ 0x1801A8B0C (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

struct CProjectedShadow *__fastcall CProjectedShadowReceiver::GetShadowAtIndexNoRef(
        CProjectedShadowReceiver *this,
        int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 8);
  if ( a2 < (int)((*((_QWORD *)this + 9) - v2) >> 3) )
    return *(struct CProjectedShadow **)(v2 + 8LL * a2);
  else
    return 0LL;
}
