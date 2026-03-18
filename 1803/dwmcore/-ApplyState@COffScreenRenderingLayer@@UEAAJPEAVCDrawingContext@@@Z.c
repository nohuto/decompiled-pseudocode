/*
 * XREFs of ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800246D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024AB0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18006B474 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18006BBF0 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall COffScreenRenderingLayer::ApplyState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x4Au);
  }
  else
  {
    v6 = CExternalLayer::ApplyState(this, a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x4Du);
      CDrawingContext::PopAlpha(a2, 0);
    }
  }
  return v5;
}
