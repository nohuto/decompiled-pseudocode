/*
 * XREFs of ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x1800A1C60
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::ApplyRenderState(CDrawingContext *this)
{
  return CDrawingContext::ApplyRenderStateInternal(this, 0);
}
