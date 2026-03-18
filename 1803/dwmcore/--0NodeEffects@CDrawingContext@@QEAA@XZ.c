/*
 * XREFs of ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x18014018C
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180161E8C (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x18013EF44 (-SetToZeroMatrix@CMILMatrix@@QEAAXXZ.c)
 */

CDrawingContext::NodeEffects *__fastcall CDrawingContext::NodeEffects::NodeEffects(CDrawingContext::NodeEffects *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 1065353216LL;
  *((_DWORD *)this + 5) = 1065353216;
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_BYTE *)this + 168) = 0;
  CMILMatrix::SetToZeroMatrix((CDrawingContext::NodeEffects *)((char *)this + 92));
  return this;
}
