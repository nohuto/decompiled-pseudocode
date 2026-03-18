/*
 * XREFs of ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x1801C7DEC
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED380 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800292D8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     floor @ 0x1800DB784 (floor.c)
 */

bool __fastcall IntersectAliasedBoundsRectFWithSurfaceRect(float *a1, _OWORD *a2, int *a3)
{
  int v5; // eax
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm0_4
  int v9; // eax
  float v10; // xmm0_4
  int v11; // eax
  bool result; // al

  if ( *a1 >= 16777216.0 || a1[1] >= 16777216.0 || a1[2] < -16777215.0 || a1[3] < -16777215.0 )
  {
    result = 0;
  }
  else
  {
    *(_OWORD *)a3 = *a2;
    if ( *a1 >= -16777215.0 )
    {
      v5 = ((int)floor((float)(*a1 * 16.0) + 0.5) + 7) >> 4;
      if ( v5 > *a3 )
        *a3 = v5;
    }
    v6 = a1[1];
    if ( v6 >= -16777215.0 )
    {
      v7 = ((int)floor((float)(v6 * 16.0) + 0.5) + 7) >> 4;
      if ( v7 > a3[1] )
        a3[1] = v7;
    }
    v8 = a1[2];
    if ( v8 < 16777216.0 )
    {
      v9 = ((int)floor((float)(v8 * 16.0) + 0.5) + 7) >> 4;
      if ( v9 < a3[2] )
        a3[2] = v9;
    }
    v10 = a1[3];
    if ( v10 < 16777216.0 )
    {
      v11 = ((int)floor((float)(v10 * 16.0) + 0.5) + 7) >> 4;
      if ( v11 < a3[3] )
        a3[3] = v11;
    }
    result = !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a3);
  }
  if ( !result )
  {
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
  }
  return result;
}
