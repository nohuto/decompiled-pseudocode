/*
 * XREFs of ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x180048570
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsProtectedContent(CCachedVisualImage *this)
{
  return *((_BYTE *)this + 313);
}
