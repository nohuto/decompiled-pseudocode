/*
 * XREFs of ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x1801BCDD8
 * Callers:
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x1801BCF14 (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801C3B48 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801C4524 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 */

__int64 __fastcall CTileBrushUtils::CreateTileBrushIntermediate(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        struct IRenderTargetBitmap **a6,
        struct CDrawingContext **a7,
        struct CMILMatrix *a8,
        int *a9,
        int *a10)
{
  __int128 v10; // xmm0
  int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  _QWORD v16[3]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+58h] [rbp-18h]

  v10 = *a4;
  v11 = 0;
  v16[1] = a2;
  v16[2] = a3;
  v17 = v10;
  v16[0] = a1;
  if ( *a1 )
  {
    v18 = a5;
    v14 = CViewportAlignedIntermediateRealizer::Realize((CViewportAlignedIntermediateRealizer *)v16, a6, a7, a8, a9);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x20Du);
      return v13;
    }
    v11 = 1;
    goto LABEL_6;
  }
  v12 = CDeviceAlignedIntermediateRealizer::Realize((CDeviceAlignedIntermediateRealizer *)v16, a6, a7, a8, a9);
  v13 = v12;
  if ( v12 >= 0 )
  {
LABEL_6:
    *a10 = v11;
    return v13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1FEu);
  return v13;
}
