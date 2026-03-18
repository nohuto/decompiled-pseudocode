/*
 * XREFs of ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801C3B48
 * Callers:
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x1801BCDD8 (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006512C (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x1801C3A3C (-CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAV.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x1801C589C (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 *     ?SetToInverseOf2DTranslateOrScale@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1801C7358 (-SetToInverseOf2DTranslateOrScale@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CDeviceAlignedIntermediateRealizer::Realize(
        const struct CMILMatrix **this,
        struct IRenderTargetBitmap **a2,
        struct CDrawingContext **a3,
        struct CMILMatrix *a4,
        int *a5)
{
  const struct CMILMatrix *v5; // rdx
  unsigned int v6; // ebx
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm9_4
  float v13; // xmm8_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  CDeviceAlignedIntermediateRealizer *v20; // rcx
  int SurfaceAndContext; // eax
  int v22; // eax
  unsigned int v24; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v25[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v26[64]; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+88h] [rbp-80h]
  _BYTE v28[64]; // [rsp+98h] [rbp-70h] BYREF
  int v29; // [rsp+D8h] [rbp-30h]
  _BYTE v30[64]; // [rsp+E8h] [rbp-20h] BYREF
  int v31; // [rsp+128h] [rbp+20h]
  float v32; // [rsp+138h] [rbp+30h] BYREF
  float v33; // [rsp+13Ch] [rbp+34h]
  float v34; // [rsp+140h] [rbp+38h]
  float v35; // [rsp+144h] [rbp+3Ch]
  float v36; // [rsp+148h] [rbp+40h] BYREF
  float v37; // [rsp+14Ch] [rbp+44h]
  float v38; // [rsp+150h] [rbp+48h]
  float v39; // [rsp+154h] [rbp+4Ch]

  v5 = *this;
  v6 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  CMILMatrix::Multiply(this[2], (const struct CMILMatrix *)((char *)v5 + 4), (struct CMILMatrix *)v26);
  CMILMatrix::Transform2DBoundsHelper<0>((const struct CMILMatrix *)((char *)*this + 4), (__int64)*this + 160, &v36);
  v10 = v36;
  v11 = v37;
  v12 = v38;
  v13 = v39;
  v32 = v36;
  v33 = v37;
  v34 = v38;
  v35 = v39;
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues() )
    goto LABEL_27;
  v14 = (__int64)*this + 176;
  v15 = *(float *)v14;
  if ( *(float *)v14 > v10 )
  {
    v32 = *(float *)v14;
    v10 = v15;
  }
  v16 = *(float *)(v14 + 4);
  v17 = v11;
  if ( v16 > v11 )
  {
    v33 = *(float *)(v14 + 4);
    v11 = v16;
    v17 = v16;
  }
  v18 = v12;
  if ( v12 > *(float *)(v14 + 8) )
  {
    v34 = *(float *)(v14 + 8);
    v12 = v34;
    v18 = v34;
  }
  v19 = v13;
  if ( v13 > *(float *)(v14 + 12) )
  {
    v35 = *(float *)(v14 + 12);
    v13 = v35;
    v19 = v35;
  }
  if ( v18 <= v10 || v19 <= v17 )
    goto LABEL_27;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v26, (__int64)(this + 3), &v36);
  if ( v36 > v10 )
  {
    v32 = v36;
    v10 = v36;
  }
  if ( v37 > v11 )
  {
    v33 = v37;
    v11 = v37;
  }
  if ( v12 > v38 )
  {
    v34 = v38;
    v12 = v38;
  }
  if ( v13 > v39 )
  {
    v35 = v39;
    v13 = v39;
  }
  if ( v12 > v10 && v13 > v11 )
  {
    CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
      v20,
      (struct MilRectF *)&v32,
      v25,
      &v24,
      (struct CMILMatrix *)v28);
    CMILMatrix::SetToInverseOf2DTranslateOrScale(a4, (const struct CMILMatrix *)v28);
    CMILMatrix::Multiply(this[1], (const struct CMILMatrix *)v26, (struct CMILMatrix *)v30);
    CMILMatrix::Multiply((CMILMatrix *)v30, (const struct CMILMatrix *)v28);
    SurfaceAndContext = CBrushIntermediateRealizer::CreateSurfaceAndContext(this, v25[0], v24);
    v6 = SurfaceAndContext;
    if ( SurfaceAndContext < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SurfaceAndContext, 0x9Bu);
    }
    else
    {
      v22 = CDrawingContext::PushTransformInternal(*a3, 0LL, (const struct CMILMatrix *)v30, 1, 1);
      v6 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x9Du);
    }
  }
  else
  {
LABEL_27:
    *a5 = 1;
  }
  return v6;
}
