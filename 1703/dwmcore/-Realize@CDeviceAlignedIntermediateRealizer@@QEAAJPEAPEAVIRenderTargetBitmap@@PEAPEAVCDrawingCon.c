/*
 * XREFs of ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x180183CA0
 * Callers:
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18017FDC4 (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEB.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FE50 (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x180183B94 (-CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAV.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180185ADC (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 *     ?SetToInverseOf2DTranslateOrScale@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180186698 (-SetToInverseOf2DTranslateOrScale@CMILMatrix@@QEAAXAEBV1@@Z.c)
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
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm0_4
  CDeviceAlignedIntermediateRealizer *v17; // rcx
  int SurfaceAndContext; // eax
  int v19; // eax
  unsigned int v21; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v22[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v23[64]; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+88h] [rbp-80h]
  _BYTE v25[64]; // [rsp+98h] [rbp-70h] BYREF
  int v26; // [rsp+D8h] [rbp-30h]
  _BYTE v27[64]; // [rsp+E8h] [rbp-20h] BYREF
  int v28; // [rsp+128h] [rbp+20h]
  float v29; // [rsp+138h] [rbp+30h] BYREF
  float v30; // [rsp+13Ch] [rbp+34h]
  float v31; // [rsp+140h] [rbp+38h]
  float v32; // [rsp+144h] [rbp+3Ch]
  float v33; // [rsp+148h] [rbp+40h] BYREF
  float v34; // [rsp+14Ch] [rbp+44h]
  float v35; // [rsp+150h] [rbp+48h]
  float v36; // [rsp+154h] [rbp+4Ch]

  v5 = *this;
  v6 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  CMILMatrix::Multiply(this[2], (const struct CMILMatrix *)((char *)v5 + 4), (struct CMILMatrix *)v23);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)*this + 4, (__int64)*this + 160, &v33);
  v10 = v33;
  v11 = v34;
  v12 = v35;
  v13 = v36;
  v29 = v33;
  v30 = v34;
  v31 = v35;
  v32 = v36;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues() )
    goto LABEL_27;
  v14 = (__int64)*this + 176;
  v15 = *(float *)v14;
  if ( *(float *)v14 > v10 )
  {
    v29 = *(float *)v14;
    v10 = v15;
  }
  v16 = *(float *)(v14 + 4);
  if ( v16 > v11 )
  {
    v30 = *(float *)(v14 + 4);
    v11 = v16;
  }
  if ( v12 > *(float *)(v14 + 8) )
  {
    v12 = *(float *)(v14 + 8);
    v31 = v12;
  }
  if ( v13 > *(float *)(v14 + 12) )
  {
    v13 = *(float *)(v14 + 12);
    v32 = v13;
  }
  if ( v12 <= v10 || v13 <= v11 )
    goto LABEL_27;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v23, (__int64)(this + 3), &v33);
  if ( v33 > v10 )
  {
    v29 = v33;
    v10 = v33;
  }
  if ( v34 > v11 )
  {
    v30 = v34;
    v11 = v34;
  }
  if ( v12 > v35 )
  {
    v12 = v35;
    v31 = v35;
  }
  if ( v13 > v36 )
  {
    v13 = v36;
    v32 = v36;
  }
  if ( v12 > v10 && v13 > v11 )
  {
    CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
      v17,
      (struct MilRectF *)&v29,
      v22,
      &v21,
      (struct CMILMatrix *)v25);
    CMILMatrix::SetToInverseOf2DTranslateOrScale(a4, (const struct CMILMatrix *)v25);
    CMILMatrix::Multiply(this[1], (const struct CMILMatrix *)v23, (struct CMILMatrix *)v27);
    CMILMatrix::Multiply((CMILMatrix *)v27, (const struct CMILMatrix *)v25);
    SurfaceAndContext = CBrushIntermediateRealizer::CreateSurfaceAndContext(this, v22[0], v21);
    v6 = SurfaceAndContext;
    if ( SurfaceAndContext < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceAndContext, 0x9Bu);
    }
    else
    {
      v19 = CDrawingContext::PushTransformInternal(*a3, 0LL, (const struct CMILMatrix *)v27, 1, 1);
      v6 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x9Du);
    }
  }
  else
  {
LABEL_27:
    *a5 = 1;
  }
  return v6;
}
