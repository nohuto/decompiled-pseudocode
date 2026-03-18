/*
 * XREFs of ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800145C0
 * Callers:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorSpaceLayer::ApplyState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 6774);
  *((_BYTE *)a2 + 6774) = 0;
  return CExternalLayer::ApplyState(this, a2);
}
