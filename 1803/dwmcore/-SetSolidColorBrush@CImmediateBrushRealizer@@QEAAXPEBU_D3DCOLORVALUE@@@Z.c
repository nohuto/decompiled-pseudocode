/*
 * XREFs of ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x18001D854
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18006DC60 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmediateBrushRealizer::SetSolidColorBrush(
        CImmediateBrushRealizer *this,
        const struct _D3DCOLORVALUE *a2)
{
  *(struct _D3DCOLORVALUE *)((char *)this + 72) = *(const struct _D3DCOLORVALUE *)&a2->r;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 48LL))((char *)this + 40);
  CLegacyMilBrushRealizer::SetRealizedBrush(
    this,
    (struct CMILBrush *)(((unsigned __int64)this + 40) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 16) >> 64)),
    0LL);
}
