/*
 * XREFs of ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x18018450C
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x18018465C (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180185ADC (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 */

__int64 __fastcall CViewportAlignedIntermediateRealizer::CreateSurfaceAndContext(
        CViewportAlignedIntermediateRealizer *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        const struct CMILMatrix *a5,
        unsigned int a6,
        unsigned int a7,
        struct IRenderTargetBitmap **a8,
        struct CDrawingContext **a9)
{
  int SurfaceAndContext; // eax
  unsigned int v13; // ebx
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  int v16; // eax
  _OWORD v18[4]; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+70h] [rbp-18h]

  SurfaceAndContext = CBrushIntermediateRealizer::CreateSurfaceAndContext(this, a6, a7);
  v13 = SurfaceAndContext;
  if ( SurfaceAndContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceAndContext, 0x3B3u);
  }
  else
  {
    v19 = *((_DWORD *)a2 + 16);
    v14 = *((_OWORD *)a2 + 1);
    v18[0] = *(_OWORD *)a2;
    v18[1] = v14;
    v15 = *((_OWORD *)a2 + 3);
    v18[2] = *((_OWORD *)a2 + 2);
    v18[3] = v15;
    if ( a3 )
      CMILMatrix::Multiply((CMILMatrix *)v18, a3);
    CMILMatrix::Multiply((CMILMatrix *)v18, a4);
    CMILMatrix::Multiply((CMILMatrix *)v18, a5);
    v16 = CDrawingContext::PushTransformInternal(*a9, 0LL, (const struct CMILMatrix *)v18, 1, 1);
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3D0u);
  }
  return v13;
}
