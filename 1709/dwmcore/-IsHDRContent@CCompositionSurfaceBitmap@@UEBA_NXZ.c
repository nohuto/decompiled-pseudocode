/*
 * XREFs of ?IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028D30
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?IsHDRContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800C6050 (-IsHDRContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F34 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsHDRContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( v1 )
    return IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v1 + 196));
  return result;
}
