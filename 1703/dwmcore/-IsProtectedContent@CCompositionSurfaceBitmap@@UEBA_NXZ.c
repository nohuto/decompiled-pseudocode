/*
 * XREFs of ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800375F0
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800D57F0 (-IsProtectedContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ @ 0x1800D5800 (-IsProtectedContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsProtectedContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 52);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 236) & 2) != 0;
  return result;
}
