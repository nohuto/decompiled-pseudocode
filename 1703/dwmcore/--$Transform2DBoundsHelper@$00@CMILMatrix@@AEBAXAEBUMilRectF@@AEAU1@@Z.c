/*
 * XREFs of ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040
 * Callers:
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180002F70 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180003270 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18000DC2C (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000DE04 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000EC78 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180013C90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800143E0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800145D8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180052FA0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180087B20 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801613E8 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801616C0 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180173C60 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18017A340 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x18009A530 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform2DBoundsHelper<1>(__int64 a1, __int64 a2, float *a3)
{
  char v4; // r8
  char v5; // si
  char v6; // di
  char v7; // al
  bool v8; // al
  float *result; // rax
  unsigned int v10; // edx
  unsigned int i; // ecx
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  char v19; // r10
  char v20; // r9
  char v21; // r9
  char v22; // al
  bool v23; // r8
  float v24; // xmm1_4
  float v25; // xmm5_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  char v29; // r10
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // [rsp+30h] [rbp-48h] BYREF
  float v39; // [rsp+34h] [rbp-44h]
  float v40; // [rsp+38h] [rbp-40h]
  float v41; // [rsp+3Ch] [rbp-3Ch]
  float v42; // [rsp+40h] [rbp-38h]
  float v43; // [rsp+44h] [rbp-34h]
  float v44; // [rsp+48h] [rbp-30h]
  float v45; // [rsp+4Ch] [rbp-2Ch]

  v4 = *(_BYTE *)(a1 + 64);
  v5 = 0;
  v6 = 0;
  v7 = (char)(4 * v4) >> 6;
  if ( v7 )
  {
    v8 = v7 == 1;
  }
  else
  {
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a1 - 1.0)) & _xmm);
    if ( v12 >= 0.00012207031
      || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 4)) & _xmm), v13 >= 0.00012207031)
      || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm), v14 >= 0.00012207031)
      || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)) & _xmm), v15 >= 0.00012207031)
      || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm), v16 >= 0.00012207031)
      || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm), v17 >= 0.00012207031)
      || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v18 >= 0.00012207031) )
    {
      v8 = 0;
      v19 = 0;
    }
    else
    {
      v8 = 1;
      v19 = 1;
    }
    v20 = v4 ^ (v4 ^ (-16 - 32 * v19)) & 0x30;
    *(_BYTE *)(a1 + 64) = v20;
    if ( !v8 )
      goto LABEL_20;
    *(_BYTE *)(a1 + 65) &= ~2u;
    *(_BYTE *)(a1 + 65) |= 0x3Du;
    *(_BYTE *)(a1 + 64) = v20 & 0x3F | 0x40;
  }
  if ( v8 )
  {
    v5 = 1;
    v6 = 1;
    *a3 = *(float *)(a1 + 48) + *(float *)a2;
    a3[1] = *(float *)(a2 + 4) + *(float *)(a1 + 52);
    a3[2] = *(float *)(a2 + 8) + *(float *)(a1 + 48);
    a3[3] = *(float *)(a2 + 12) + *(float *)(a1 + 52);
    goto LABEL_5;
  }
LABEL_20:
  v21 = *(_BYTE *)(a1 + 65);
  v22 = (char)(v21 << 6) >> 6;
  if ( v22 )
  {
    v23 = v22 == 1;
  }
  else
  {
    v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 4)) & _xmm);
    if ( v28 >= 0.00012207031
      || (v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm), v30 >= 0.00012207031)
      || (v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)) & _xmm), v31 >= 0.00012207031)
      || (v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm), v32 >= 0.00012207031)
      || (v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v33 >= 0.00012207031) )
    {
      v23 = 0;
      v29 = 0;
    }
    else
    {
      v23 = 1;
      v29 = 1;
    }
    *(_BYTE *)(a1 + 65) = v21 ^ (v21 ^ (-1 - 2 * v29)) & 3;
  }
  if ( !v23 )
  {
    CMILMatrix::Transform2DRectToPerspective(
      (CMILMatrix *)a1,
      (const struct MilRectF *)a2,
      (struct MilPoint2F *const)&v38);
    result = &v38;
    v10 = 8;
    goto LABEL_6;
  }
  v5 = 1;
  *a3 = (float)(*(float *)a2 * *(float *)a1) + *(float *)(a1 + 48);
  a3[1] = (float)(*(float *)(a2 + 4) * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
  a3[2] = (float)(*(float *)(a2 + 8) * *(float *)a1) + *(float *)(a1 + 48);
  a3[3] = (float)(*(float *)(a2 + 12) * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
  if ( *(float *)a1 > 0.0 && *(float *)(a1 + 20) > 0.0 )
    v6 = 1;
LABEL_5:
  result = a3;
  v10 = 4;
LABEL_6:
  for ( i = 0; i < v10; ++i )
    ++result;
  if ( !v6 )
  {
    if ( v5 )
    {
      v34 = *a3;
      v35 = a3[2];
      if ( *a3 > v35 )
      {
        *a3 = v35;
        a3[2] = v34;
      }
      v36 = a3[1];
      v37 = a3[3];
      if ( v36 > v37 )
      {
        a3[1] = v37;
        a3[3] = v36;
      }
    }
    else
    {
      v24 = v40;
      if ( v38 > v40 )
        v25 = v40;
      else
        v25 = v38;
      v26 = v39;
      if ( v39 > v41 )
        v26 = v41;
      if ( v40 <= v38 )
        v24 = v38;
      v27 = v39;
      if ( v41 > v39 )
        v27 = v41;
      if ( v25 > v42 )
        v25 = v42;
      if ( v26 > v43 )
        v26 = v43;
      if ( v42 > v24 )
        v24 = v42;
      if ( v43 > v27 )
        v27 = v43;
      if ( v25 > v44 )
        v25 = v44;
      if ( v26 > v45 )
        v26 = v45;
      if ( v44 > v24 )
        v24 = v44;
      if ( v45 > v27 )
        v27 = v45;
      *a3 = v25;
      a3[1] = v26;
      a3[2] = v24;
      a3[3] = v27;
    }
  }
  return result;
}
