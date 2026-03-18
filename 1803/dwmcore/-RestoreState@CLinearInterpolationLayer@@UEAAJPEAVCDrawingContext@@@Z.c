/*
 * XREFs of ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801764E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180007C2C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024A00 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180176318 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RestoreState(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  CDrawingContext::PopRenderOptionsInternal(a2, 0);
  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x85u);
  }
  else
  {
    v6 = CLinearInterpolationLayer::RenderLayer(this, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x87u);
  }
  return v5;
}
