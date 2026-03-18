/*
 * XREFs of ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x180077720
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x18008F1CC (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ABDFC (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18007816C (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     floor_0 @ 0x1800C5D56 (floor_0.c)
 */

char __fastcall IntersectAliasedBoundsRectFWithSurfaceRect(float *a1, _OWORD *a2, __int64 a3)
{
  int v5; // eax
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm0_4
  int v9; // eax
  float v10; // xmm0_4
  int v11; // eax
  char result; // al

  if ( *a1 >= 16777216.0 || a1[1] >= 16777216.0 || a1[2] < -16777215.0 || a1[3] < -16777215.0 )
  {
    result = 0;
  }
  else
  {
    *(_OWORD *)a3 = *a2;
    if ( *a1 >= -16777215.0 )
    {
      v5 = ((int)floor_0((float)(*a1 * 16.0) + 0.5) + 7) >> 4;
      if ( v5 > *(_DWORD *)a3 )
        *(_DWORD *)a3 = v5;
    }
    v6 = a1[1];
    if ( v6 >= -16777215.0 )
    {
      v7 = ((int)floor_0((float)(v6 * 16.0) + 0.5) + 7) >> 4;
      if ( v7 > *(_DWORD *)(a3 + 4) )
        *(_DWORD *)(a3 + 4) = v7;
    }
    v8 = a1[2];
    if ( v8 < 16777216.0 )
    {
      v9 = ((int)floor_0((float)(v8 * 16.0) + 0.5) + 7) >> 4;
      if ( v9 < *(_DWORD *)(a3 + 8) )
        *(_DWORD *)(a3 + 8) = v9;
    }
    v10 = a1[3];
    if ( v10 < 16777216.0 )
    {
      v11 = ((int)floor_0((float)(v10 * 16.0) + 0.5) + 7) >> 4;
      if ( v11 < *(_DWORD *)(a3 + 12) )
        *(_DWORD *)(a3 + 12) = v11;
    }
    result = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a3) ^ 1;
  }
  if ( !result )
  {
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  return result;
}
