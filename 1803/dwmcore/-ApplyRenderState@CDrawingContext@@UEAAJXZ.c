/*
 * XREFs of ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180066CE0
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::ApplyRenderState(CDrawingContext *this)
{
  return CDrawingContext::ApplyRenderStateInternal(this, 0);
}
