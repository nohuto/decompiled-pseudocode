/*
 * XREFs of ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028D70
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800C6070 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
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
