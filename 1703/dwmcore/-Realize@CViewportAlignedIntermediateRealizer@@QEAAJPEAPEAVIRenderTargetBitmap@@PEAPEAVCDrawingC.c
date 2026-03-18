/*
 * XREFs of ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x18018465C
 * Callers:
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18017FDC4 (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEB.c)
 * Callees:
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1800121E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800CA50C (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@000PEAHPEAUMilRectF@@2@Z @ 0x180183F6C (-CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@0.c)
 *     ?CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPEAI2PEAVCMILMatrix@@PEAVCMilPoint2F@@@Z @ 0x1801842C4 (-CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPE.c)
 *     ?CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEAV2@@Z @ 0x180184494 (-CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEA.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x18018450C (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180186254 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?SetToInverseOf2DTranslateOrScale@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180186698 (-SetToInverseOf2DTranslateOrScale@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CViewportAlignedIntermediateRealizer::Realize(
        const struct CMILMatrix **this,
        struct IRenderTargetBitmap **a2,
        struct CDrawingContext **a3,
        struct CMILMatrix *a4,
        int *a5)
{
  CMILMatrix *v9; // rcx
  unsigned int v10; // esi
  CMILMatrix *v11; // rcx
  CViewportAlignedIntermediateRealizer *v12; // rcx
  int SurfaceAndContext; // eax
  bool v15[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v17; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v18[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[64]; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+B0h] [rbp-50h]
  _BYTE v21[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v22; // [rsp+100h] [rbp+0h]
  _BYTE v23[64]; // [rsp+110h] [rbp+10h] BYREF
  int v24; // [rsp+150h] [rbp+50h]
  _BYTE v25[64]; // [rsp+160h] [rbp+60h] BYREF
  int v26; // [rsp+1A0h] [rbp+A0h]
  _BYTE v27[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v28; // [rsp+1F0h] [rbp+F0h]
  _BYTE v29[64]; // [rsp+200h] [rbp+100h] BYREF
  int v30; // [rsp+240h] [rbp+140h]
  _BYTE v31[16]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v32[16]; // [rsp+260h] [rbp+160h] BYREF

  v26 = 0;
  v22 = 0;
  v20 = 0;
  *a5 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  v9 = (const struct CMILMatrix *)((char *)*this + 4);
  v30 = 0;
  v10 = 0;
  v28 = 0;
  v24 = 0;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(v9, (struct CMILMatrix *)v19, (struct CMILMatrix *)v29, v15);
  if ( v15[0]
    && ((v11 = this[2]) == 0LL
     || (CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
           v11,
           (struct CMILMatrix *)v25,
           (struct CMILMatrix *)v21,
           v15),
         v15[0])) )
  {
    CViewportAlignedIntermediateRealizer::CalculateIdealSurfaceSpaceBaseTile(
      (CViewportAlignedIntermediateRealizer *)this,
      (const struct CMILMatrix *)((unsigned __int64)v25 & -(__int64)(this[2] != 0LL)),
      (const struct CMILMatrix *)((unsigned __int64)v21 & -(__int64)(this[2] != 0LL)),
      (const struct CMILMatrix *)v19,
      (const struct CMILMatrix *)((char *)*this + 4),
      a5,
      (struct MilRectF *)v32,
      (struct MilRectF *)v31);
    if ( !*a5 )
    {
      CViewportAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
        v12,
        (struct MilRectF *)v32,
        (struct MilRectF *)v31,
        a5,
        &v17,
        &v16,
        (struct CMILMatrix *)v27,
        (struct CMilPoint2F *)v18);
      if ( !*a5 )
      {
        CMILMatrix::SetToInverseOf2DTranslateOrScale((CMILMatrix *)v23, (const struct CMILMatrix *)v27);
        CMILMatrix::PrependTranslate((CMILMatrix *)v23, COERCE_FLOAT(v18[0] ^ _xmm), COERCE_FLOAT(v18[1] ^ _xmm));
        CViewportAlignedIntermediateRealizer::CalculateSurfaceToWorldMapping(
          (CViewportAlignedIntermediateRealizer *)-(__int64)this[2],
          (const struct CMILMatrix *)v23,
          (const struct CMILMatrix *)((unsigned __int64)v21 & -(__int64)(this[2] != 0LL)),
          (const struct CMILMatrix *)v19,
          a4);
        SurfaceAndContext = CViewportAlignedIntermediateRealizer::CreateSurfaceAndContext(
                              (CViewportAlignedIntermediateRealizer *)this,
                              this[1],
                              (const struct CMILMatrix *)((unsigned __int64)v25 & -(__int64)(this[2] != 0LL)),
                              (const struct CMILMatrix *)v19,
                              (const struct CMILMatrix *)v27,
                              v17,
                              v16,
                              a2,
                              a3);
        v10 = SurfaceAndContext;
        if ( SurfaceAndContext < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceAndContext, 0xCFu);
          ReleaseInterface<ID2D1Geometry>((__int64 *)a2);
          ReleaseInterface<CDrawingContext>((__int64 *)a3);
        }
      }
    }
  }
  else
  {
    *a5 = 1;
  }
  return v10;
}
