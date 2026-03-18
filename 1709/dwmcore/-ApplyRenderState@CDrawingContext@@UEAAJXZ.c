/*
 * XREFs of ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180041BF0
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::ApplyRenderState(CDrawingContext *this)
{
  return CDrawingContext::ApplyRenderStateInternal(this, 0);
}
