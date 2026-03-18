/*
 * XREFs of ?Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::Draw(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 (__fastcall *v5)(CNineGridBrush *, struct CDrawingContext *, struct D2D_SIZE_F *, __int64, __int64, struct CDrawListCache *); // rax

  v5 = *(__int64 (__fastcall **)(CNineGridBrush *, struct CDrawingContext *, struct D2D_SIZE_F *, __int64, __int64, struct CDrawListCache *))(*(_QWORD *)this + 232LL);
  if ( v5 == CSpriteVisualContent::DrawAsDrawList )
    return CSpriteVisualContent::DrawAsDrawList(this, a2, a3, a4, a5, 0LL);
  else
    return ((__int64 (__fastcall *)(CNineGridBrush *))v5)(this);
}
