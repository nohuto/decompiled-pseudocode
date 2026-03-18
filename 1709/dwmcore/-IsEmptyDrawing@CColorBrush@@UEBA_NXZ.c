/*
 * XREFs of ?IsEmptyDrawing@CColorBrush@@UEBA_NXZ @ 0x180070BB0
 * Callers:
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800222A0 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CColorBrush::IsEmptyDrawing(CColorBrush *this)
{
  float v1; // xmm1_4

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 23)) & _xmm);
  return v1 < 0.0000011920929;
}
