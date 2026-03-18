/*
 * XREFs of ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18000D414 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18000D88C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18000DC2C (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000DE04 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18000DEDC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000EC78 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18000F62C (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1800A6148 (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800A62D0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x1800A781C (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18012CFA4 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18014D7E0 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::GetTopGpuClipInScope(__int64 *a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4

  result = *((unsigned int *)a1 + 6);
  if ( (_DWORD)result && (v5 = 5LL * (unsigned int)(result - 1), result = *a1, *(_DWORD *)(*a1 + 16 * v5 + 4)) )
  {
    result = *((unsigned int *)a1 + 516);
    if ( (_DWORD)result )
    {
      v6 = (unsigned int)(result - 1);
      result = a1[260];
      v7 = *(_OWORD *)(result + 16 * v6);
    }
    else
    {
      v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
  }
  else
  {
    v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  *(_OWORD *)a3 = v7;
  if ( a2 )
  {
    result = *((unsigned int *)a1 + 6);
    if ( (_DWORD)result )
    {
      v8 = 5LL * (unsigned int)(result - 1);
      result = *a1;
      if ( *(_DWORD *)(*a1 + 16 * v8 + 8) )
      {
        v9 = 120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1);
        result = a1[104];
        v10 = *(float *)(v9 + result + 96);
        if ( v10 > *(float *)a3 )
          *(float *)a3 = v10;
        v11 = *(float *)(v9 + result + 100);
        if ( v11 > *(float *)(a3 + 4) )
          *(float *)(a3 + 4) = v11;
        v12 = *(float *)(v9 + result + 104);
        if ( *(float *)(a3 + 8) > v12 )
          *(float *)(a3 + 8) = v12;
        v13 = *(float *)(v9 + result + 108);
        if ( *(float *)(a3 + 12) > v13 )
          *(float *)(a3 + 12) = v13;
        if ( *(float *)(a3 + 8) <= *(float *)a3 || *(float *)(a3 + 12) <= *(float *)(a3 + 4) )
        {
          *(_DWORD *)(a3 + 12) = 0;
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 4) = 0;
          *(_DWORD *)a3 = 0;
        }
      }
    }
  }
  return result;
}
