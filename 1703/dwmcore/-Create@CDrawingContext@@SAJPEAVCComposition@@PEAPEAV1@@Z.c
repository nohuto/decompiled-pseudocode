/*
 * XREFs of ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800847E0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800B4B70 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180185ADC (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800A99D0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x1800A9C48 (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::Create(struct CComposition *a1, struct CDrawingContext **a2)
{
  CDrawingContext *v4; // rax
  CDrawingContext *v5; // rax
  struct CDrawingContext *v6; // rdi
  CDrawingContext *v7; // rsi
  int v8; // eax
  int v9; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CDrawingContext *)WPF::ProcessHeapImpl::AllocClear(0x1A80uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v5 = CDrawingContext::CDrawingContext(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = (CDrawingContext *)((char *)v5 + 16);
    CBitmapOfDeviceBitmaps::AddRef((CDrawingContext *)((char *)v5 + 16));
    v8 = CDrawingContext::Initialize(v7);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x271u);
    else
      *a2 = v6;
    if ( v9 < 0 )
      CMILCOMBase::InternalRelease(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x26Du);
  }
  return (unsigned int)v9;
}
