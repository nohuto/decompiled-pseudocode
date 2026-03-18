/*
 * XREFs of ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x1800A781C
 * Callers:
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A84D0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18009EF08 (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::CalcPartiallyVisibleRectangleSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5)
{
  char v8; // bl
  const struct CMILMatrix *TopByReference; // rax
  CMatrixStack *v10; // r10
  const struct CMILMatrix *v11; // rax
  __int64 v12; // r11
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  __int64 v17; // r9
  __int64 v18; // rcx
  _BYTE v20[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v21; // [rsp+48h] [rbp-30h] BYREF
  float v22; // [rsp+58h] [rbp-20h] BYREF
  float v23; // [rsp+5Ch] [rbp-1Ch]
  float v24; // [rsp+60h] [rbp-18h]
  float v25; // [rsp+64h] [rbp-14h]

  v8 = 0;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 472));
  if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference) )
  {
    v11 = CMatrixStack::GetTopByReference(v10);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v11, v12, (float *)&v21);
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)(a1 + 912), 1, (__int64)&v22);
    v13 = *(float *)&v21;
    if ( v22 > *(float *)&v21 )
    {
      *(float *)&v21 = v22;
      v13 = v22;
    }
    v14 = *((float *)&v21 + 1);
    if ( v23 > *((float *)&v21 + 1) )
    {
      *((float *)&v21 + 1) = v23;
      v14 = v23;
    }
    v15 = *((float *)&v21 + 2);
    if ( *((float *)&v21 + 2) > v24 )
    {
      v15 = v24;
      *((float *)&v21 + 2) = v24;
    }
    v16 = *((float *)&v21 + 3);
    if ( *((float *)&v21 + 3) > v25 )
    {
      v16 = v25;
      *((float *)&v21 + 3) = v25;
    }
    if ( v15 <= v13 || v16 <= v14 )
      v21 = 0uLL;
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v21) )
    {
      *a5 = 0;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 6771) )
        return v8;
      v18 = *(_QWORD *)(a1 + 6680);
      if ( !v18 )
        return v8;
      v20[0] = 0;
      if ( (int)COcclusionContext::ComputeVisibleRegion(v18, &v21, a3, v17, v20, a4, a5) < 0 || !v20[0] )
        return v8;
    }
    return 1;
  }
  return v8;
}
