/*
 * XREFs of ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x180162198
 * Callers:
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180171320 (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 * Callees:
 *     ??_ECOffScreenRenderingLayer@@UEAAPEAXI@Z @ 0x180024620 (--_ECOffScreenRenderingLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x1801769A8 (-Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushGammaBlendLayer(struct IRenderTarget **this, const struct MilPointAndSizeL *a2)
{
  int v3; // ebx
  unsigned int v4; // eax
  COffScreenRenderingLayer *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = CGammaBlendLayer::Create(this[45], a2, &v6);
  if ( v3 < 0 )
  {
    v4 = 5784;
  }
  else
  {
    v3 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v6, 1, 0);
    if ( v3 >= 0 )
      return (unsigned int)v3;
    v4 = 5792;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v4);
  if ( v6 )
    COffScreenRenderingLayer::`vector deleting destructor'(v6, 1);
  return (unsigned int)v3;
}
