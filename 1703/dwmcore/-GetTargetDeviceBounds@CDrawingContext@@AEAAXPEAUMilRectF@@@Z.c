/*
 * XREFs of ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z @ 0x1800A1EC4
 * Callers:
 *     ?DiscardIfOccluded@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9290 (-DiscardIfOccluded@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::GetTargetDeviceBounds(CDrawingContext *this, struct MilRectF *a2)
{
  CHwDisplayRenderTarget *v3; // rcx
  void (__fastcall *v4)(CHwDisplayRenderTarget *, struct MilRectF *); // rax

  v3 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 47);
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(CHwDisplayRenderTarget *, struct MilRectF *))(*(_QWORD *)v3 + 272LL);
    if ( v4 == CHwDisplayRenderTarget::GetDeviceBounds )
    {
      CHwDisplayRenderTarget::GetDeviceBounds(v3, a2);
      return;
    }
  }
  else
  {
    v3 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 46);
    v4 = *(void (__fastcall **)(CHwDisplayRenderTarget *, struct MilRectF *))(*(_QWORD *)v3 + 64LL);
  }
  v4(v3, a2);
}
