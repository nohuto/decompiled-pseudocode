/*
 * XREFs of ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003CCF8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180045DA4 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180079450 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18013A398 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180148524 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x18018DBEC (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800408C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x180040B1C (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::Create(struct CComposition *a1, struct CDrawingContext **a2)
{
  CDrawingContext *v4; // rax
  CDrawingContext *v5; // rax
  struct CDrawingContext *v6; // rdi
  CDrawingContext *v7; // rsi
  signed int v8; // eax
  int v9; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CDrawingContext *)WPF::ProcessHeapImpl::AllocClear(0x1AB8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CDrawingContext::CDrawingContext(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = (CDrawingContext *)((char *)v5 + 16);
    CMILCOMBase::InternalAddRef((CDrawingContext *)((char *)v5 + 16));
    v8 = CDrawingContext::Initialize(v7);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x26Cu);
    else
      *a2 = v6;
    if ( v9 < 0 )
      CMILCOMBase::InternalRelease(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x268u);
  }
  return (unsigned int)v9;
}
