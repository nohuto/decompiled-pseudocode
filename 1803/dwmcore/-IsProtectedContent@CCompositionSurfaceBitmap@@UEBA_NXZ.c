/*
 * XREFs of ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180047960
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006AFF4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800DD680 (-IsProtectedContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsProtectedContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 268) & 2) != 0;
  return result;
}
