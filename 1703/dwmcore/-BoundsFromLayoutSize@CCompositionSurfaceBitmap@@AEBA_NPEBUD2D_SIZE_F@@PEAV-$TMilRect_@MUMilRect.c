/*
 * XREFs of ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8B0
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A788 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A7F0 (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000AD30 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000B0F0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::BoundsFromLayoutSize(__int64 a1, float *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( !a2 || (v3 = *(_QWORD *)(a1 + 464)) == 0 || (result = 1, *(_DWORD *)(v3 + 104) <= 1u) )
    result = 0;
  if ( a2 && (*a2 == 0.0 || a2[1] == 0.0) )
    result = 0;
  if ( result )
  {
    *a3 = 0;
    a3[1] = 0;
    a3[2] = *(_DWORD *)a2;
    a3[3] = *((_DWORD *)a2 + 1);
  }
  return result;
}
