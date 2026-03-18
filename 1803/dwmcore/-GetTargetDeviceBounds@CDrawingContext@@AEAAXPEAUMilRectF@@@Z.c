/*
 * XREFs of ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z @ 0x180065380
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::GetTargetDeviceBounds(CDrawingContext *this, struct MilRectF *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 46);
  if ( v3 )
    ((void (__fastcall *)(__int64, struct MilRectF *))this)(v3, a2);
  else
    (*(void (__fastcall **)(_QWORD, struct MilRectF *))(**((_QWORD **)this + 45) + 48LL))(*((_QWORD *)this + 45), a2);
}
