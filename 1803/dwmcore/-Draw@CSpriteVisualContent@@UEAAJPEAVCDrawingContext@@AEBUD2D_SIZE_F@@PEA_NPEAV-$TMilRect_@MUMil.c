/*
 * XREFs of ?Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A700
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800093C4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::Draw(
        CCompositionSurfaceBitmap *this,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5)
{
  __int64 (__usercall *v5)@<rax>(CCompositionSurfaceBitmap *@<rcx>, CDrawingContext *@<rdx>, struct D2D_SIZE_F *@<r8>, int, struct CDrawListCache *); // rax

  v5 = *(__int64 (__usercall **)@<rax>(CCompositionSurfaceBitmap *@<rcx>, CDrawingContext *@<rdx>, struct D2D_SIZE_F *@<r8>, int, struct CDrawListCache *))(*(_QWORD *)this + 232LL);
  if ( v5 == CSpriteVisualContent::DrawAsDrawList )
    return CSpriteVisualContent::DrawAsDrawList(this, a2, a3, a5, 0LL);
  else
    return ((__int64 (__fastcall *)(CCompositionSurfaceBitmap *))v5)(this);
}
