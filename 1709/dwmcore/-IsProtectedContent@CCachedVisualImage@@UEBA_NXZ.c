/*
 * XREFs of ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008DC10
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsProtectedContent(CCachedVisualImage *this)
{
  return *((_BYTE *)this + 373) == 1;
}
