/*
 * XREFs of ?Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800105A0
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180014230 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::Draw(
        CMaskBrush *this,
        struct CDrawingContext *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 (__usercall *v5)@<rax>(CMaskBrush *@<rcx>, struct CDrawingContext *@<rdx>, __int64, __int64); // rax

  v5 = *(__int64 (__usercall **)@<rax>(CMaskBrush *@<rcx>, struct CDrawingContext *@<rdx>, __int64, __int64))(*(_QWORD *)this + 216LL);
  if ( v5 == CSpriteVisualContent::DrawAsDrawList )
    return CSpriteVisualContent::DrawAsDrawList(this, a2, a5, 0LL);
  else
    return ((__int64 (__fastcall *)(CMaskBrush *))v5)(this);
}
