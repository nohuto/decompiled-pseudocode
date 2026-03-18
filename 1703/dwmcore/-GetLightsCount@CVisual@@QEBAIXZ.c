/*
 * XREFs of ?GetLightsCount@CVisual@@QEBAIXZ @ 0x1800D2BFC
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetLightsCount(CVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 32);
  if ( (v1 & 2) != 0 )
    return *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    return *((_QWORD *)this + 32) & 1LL;
}
