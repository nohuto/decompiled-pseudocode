/*
 * XREFs of ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x18013D130
 * Callers:
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CF20 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C68A0 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 */

void __fastcall CDrawingContext::SetOcclusionContext(CDrawingContext *this, struct COcclusionContext *a2)
{
  COcclusionContext **v4; // rcx

  v4 = (COcclusionContext **)((char *)this + 6752);
  if ( a2 != *v4 )
    SAFE_DELETE<COcclusionContext>(v4);
  *((_QWORD *)this + 843) = a2;
  if ( !a2 )
    *((_BYTE *)this + 6827) = 0;
}
