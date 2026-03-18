/*
 * XREFs of ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184
 * Callers:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000CE8C (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001E2BC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18004EC58 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800572A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18007B3D0 (-GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV-$TMilR.c)
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x18007D430 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A84D0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180140A00 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017676C (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAVCShape@@PEAV-$TMilRect_.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x180176CCC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801776AC (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18017798C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x180183CA0 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1801A31EC (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PE.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x1801B3098 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180099FB0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18009A2A0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18009AB60 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1801861DC (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801863D0 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::Multiply(const struct CMILMatrix *a1, const struct CMILMatrix *a2, struct CMILMatrix *a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  int v5; // eax
  __int64 v6; // r9
  CMILMatrix *v7; // r11
  char v8; // cl
  float v9; // xmm3_4
  CMILMatrix *v10; // rcx
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  int v20; // xmm5_4
  CMILMatrix *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // r11
  __int128 v24; // xmm1
  int v25; // eax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // [rsp+28h] [rbp-19h] BYREF
  __int128 v32; // [rsp+38h] [rbp-9h]
  __int128 v33; // [rsp+48h] [rbp+7h]
  __int128 v34; // [rsp+58h] [rbp+17h]
  int v35; // [rsp+68h] [rbp+27h]

  if ( a3 == a2 )
  {
    v24 = *((_OWORD *)a1 + 1);
    v25 = *((_DWORD *)a1 + 16);
    v31 = *(_OWORD *)a1;
    v26 = *((_OWORD *)a1 + 2);
    v35 = v25;
    v32 = v24;
    v27 = *((_OWORD *)a1 + 3);
    v33 = v26;
    v34 = v27;
    CMILMatrix::Multiply((CMILMatrix *)&v31, a2);
    v28 = v32;
    v5 = v35;
    *(_OWORD *)v4 = v31;
    v29 = v33;
    *(_OWORD *)(v4 + 16) = v28;
    v30 = v34;
    *(_OWORD *)(v4 + 32) = v29;
    *(_OWORD *)(v4 + 48) = v30;
    goto LABEL_4;
  }
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a1 + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)a1 + 16);
  if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(a3, a2, a3, a2) )
  {
    *(_OWORD *)v4 = *(_OWORD *)v3;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(v3 + 16);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(v3 + 32);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(v3 + 48);
    v5 = *(_DWORD *)(v3 + 64);
LABEL_4:
    *(_DWORD *)(v4 + 64) = v5;
    return;
  }
  CMILMatrix::Ensure3DFlags((CMILMatrix *)v3);
  v8 = *(_BYTE *)(v6 + 64);
  if ( (v8 & 3) != 1 )
  {
    if ( (v8 & 0xC) == 4 )
    {
      v9 = *(float *)(v6 + 56);
      v10 = v7;
      v11 = *(float *)(v6 + 52);
      v12 = *(float *)(v6 + 48);
    }
    else
    {
      if ( (v8 & 0xC0) == 0x40 )
      {
        v13 = *(float *)(v6 + 48);
        CMILMatrix::Scale(v7, *(float *)v6, *(float *)(v6 + 20), *(float *)(v6 + 40));
        v11 = v15;
        v12 = v13;
      }
      else
      {
        if ( (*(_BYTE *)(v6 + 65) & 0xC) != 4 )
        {
          v22 = (_OWORD *)Windows::Foundation::Numerics::operator*(&v31, v7, v6);
          *(_OWORD *)v23 = *v22;
          *(_OWORD *)(v23 + 16) = v22[1];
          *(_OWORD *)(v23 + 32) = v22[2];
          *(_OWORD *)(v23 + 48) = v22[3];
          *(_DWORD *)(v23 + 64) = 0;
          return;
        }
        v16 = *(float *)(v6 + 4);
        v17 = *(float *)(v6 + 40);
        v18 = *(float *)(v6 + 48);
        v19 = *(float *)(v6 + 52);
        CMILMatrix::Rotate90(v7);
        CMILMatrix::Scale(v21, COERCE_FLOAT(v20 ^ _xmm), v16, v17);
        v11 = v19;
        v12 = v18;
      }
      v9 = v14;
    }
    CMILMatrix::Translate(v10, v12, v11, v9);
  }
}
