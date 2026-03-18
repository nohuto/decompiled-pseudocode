/*
 * XREFs of ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180061BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800423A0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::SetVisualTree(CHwndRenderTarget *this, struct CVisualTree *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CRenderTarget::SetVisualTree(this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x273u);
  else
    *((_BYTE *)this + 161) = 1;
  return v4;
}
