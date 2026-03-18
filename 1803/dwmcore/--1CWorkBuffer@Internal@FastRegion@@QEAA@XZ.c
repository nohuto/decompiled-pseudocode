/*
 * XREFs of ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18013E914
 * Callers:
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800138B0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall FastRegion::Internal::CWorkBuffer::~CWorkBuffer(void **this)
{
  if ( this + 2 != this[1] )
    operator delete(this[1]);
}
