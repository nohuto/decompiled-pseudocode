/*
 * XREFs of ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0
 * Callers:
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18003D048 (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18003D31C (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18003EAB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180054460 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800807C0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180083620 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18009B960 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18015D440 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180162E00 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180163310 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18016F6E8 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x18016F9C8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18017F610 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x18005ABD4 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform2DBoundsHelper<1>(__int64 a1, __int64 a2, float *a3)
{
  float *v3; // r11
  char v4; // r8
  char v5; // di
  char v6; // bl
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
  char v19; // r9
  char v20; // r8
  char v21; // r8
  char v22; // al
  bool v23; // al
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  char v29; // r9
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  float v35; // xmm2_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  __int64 v38; // rcx
  float v39; // xmm0_4
  float v40; // [rsp+20h] [rbp-38h] BYREF
  float v41; // [rsp+24h] [rbp-34h]
  char v42; // [rsp+2Ch] [rbp-2Ch] BYREF

  v3 = a3;
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
    if ( v12 >= 0.000081380211
      || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 4)) & _xmm), v13 >= 0.000081380211)
      || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm), v14 >= 0.000081380211)
      || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)) & _xmm), v15 >= 0.000081380211)
      || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm), v16 >= 0.000081380211)
      || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm), v17 >= 0.000081380211)
      || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v18 >= 0.000081380211) )
    {
      v8 = 0;
      v19 = 48;
    }
    else
    {
      v8 = 1;
      v19 = 16;
    }
    v20 = v19 | v4 & 0xCF;
    *(_BYTE *)(a1 + 64) = v20;
    if ( !v8 )
      goto LABEL_21;
    *(_BYTE *)(a1 + 65) &= ~2u;
    *(_BYTE *)(a1 + 65) |= 0x3Du;
    *(_BYTE *)(a1 + 64) = v20 & 0x3F | 0x40;
  }
  if ( v8 )
  {
    *v3 = *(float *)a2 + *(float *)(a1 + 48);
    v3[1] = *(float *)(a2 + 4) + *(float *)(a1 + 52);
    v3[2] = *(float *)(a2 + 8) + *(float *)(a1 + 48);
    v3[3] = *(float *)(a2 + 12) + *(float *)(a1 + 52);
LABEL_5:
    v6 = 1;
    goto LABEL_6;
  }
LABEL_21:
  v21 = *(_BYTE *)(a1 + 65);
  v22 = (char)(v21 << 6) >> 6;
  if ( v22 )
  {
    v23 = v22 == 1;
  }
  else
  {
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 4)) & _xmm);
    if ( v24 >= 0.000081380211
      || (v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm), v25 >= 0.000081380211)
      || (v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)) & _xmm), v26 >= 0.000081380211)
      || (v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm), v27 >= 0.000081380211)
      || (v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v28 >= 0.000081380211) )
    {
      v23 = 0;
      v29 = 3;
    }
    else
    {
      v23 = 1;
      v29 = 1;
    }
    *(_BYTE *)(a1 + 65) = v29 | v21 & 0xFC;
  }
  if ( !v23 )
  {
    CMILMatrix::Transform2DRectToPerspective(
      (CMILMatrix *)a1,
      (const struct MilRectF *)a2,
      (struct MilPoint2F *const)&v40);
    result = &v40;
    v10 = 8;
    goto LABEL_7;
  }
  *v3 = (float)(*(float *)a2 * *(float *)a1) + *(float *)(a1 + 48);
  v3[1] = (float)(*(float *)(a2 + 4) * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
  v3[2] = (float)(*(float *)(a2 + 8) * *(float *)a1) + *(float *)(a1 + 48);
  v3[3] = (float)(*(float *)(a2 + 12) * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
  if ( *(float *)a1 > 0.0 && *(float *)(a1 + 20) > 0.0 )
    goto LABEL_5;
LABEL_6:
  result = v3;
  v10 = 4;
  v5 = 1;
LABEL_7:
  for ( i = 0; i < v10; ++i )
    ++result;
  if ( !v6 )
  {
    if ( v5 )
    {
      v30 = *v3;
      v31 = v3[2];
      if ( *v3 > v31 )
      {
        *v3 = v31;
        v3[2] = v30;
      }
      v32 = v3[1];
      v33 = v3[3];
      if ( v32 > v33 )
      {
        v3[1] = v33;
        v3[3] = v32;
      }
    }
    else
    {
      v34 = v40;
      result = (float *)&v42;
      v35 = v41;
      v36 = v40;
      v37 = v41;
      v38 = 3LL;
      do
      {
        v39 = *(result - 1);
        if ( v36 > v39 )
          v36 = *(result - 1);
        if ( v37 > *result )
          v37 = *result;
        if ( v39 > v34 )
          v34 = *(result - 1);
        if ( *result > v35 )
          v35 = *result;
        result += 2;
        --v38;
      }
      while ( v38 );
      *v3 = v36;
      v3[1] = v37;
      v3[2] = v34;
      v3[3] = v35;
    }
  }
  return result;
}
