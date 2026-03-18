/*
 * XREFs of ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800BFD70
 * Callers:
 *     <none>
 * Callees:
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18003B4F0 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18003B6C0 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081630 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall COffScreenRenderingLayer::ApplyState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax

  v4 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x4Au);
  }
  else
  {
    v6 = CExternalLayer::ApplyState(this, a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x4Du);
      CDrawingContext::PopAlpha(a2, 0);
    }
  }
  return v5;
}
