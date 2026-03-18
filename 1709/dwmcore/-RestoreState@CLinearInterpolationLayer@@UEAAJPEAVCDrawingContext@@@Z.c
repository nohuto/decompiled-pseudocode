/*
 * XREFs of ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041C44 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081490 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014D014 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RestoreState(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax

  CDrawingContext::PopRenderOptionsInternal(a2, 0);
  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x85u);
  }
  else
  {
    v6 = CLinearInterpolationLayer::RenderLayer(this, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x87u);
  }
  return v5;
}
