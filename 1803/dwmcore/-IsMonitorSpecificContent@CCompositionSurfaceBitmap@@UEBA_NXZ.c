/*
 * XREFs of ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800072F0
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006AFF4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800DD670 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::IsMonitorSpecificContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( v1 && (*(_BYTE *)(v1 + 268) & 1) != 0 )
  {
    if ( *(_QWORD *)(v1 + 160) )
      return 1;
  }
  return result;
}
