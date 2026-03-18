/*
 * XREFs of ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18003B5DC
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18003CC3C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18003B568 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushAllDeferredClipping(CDrawingContext *this)
{
  int v2; // eax
  unsigned int v3; // edi

  v2 = CDrawingContext::FlushDeferredD2DLayers(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x17A8u);
  }
  else if ( *((_BYTE *)this + 6826) )
  {
    *(_WORD *)((char *)this + 6825) = 1;
  }
  return v3;
}
