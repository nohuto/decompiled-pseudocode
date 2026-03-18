/*
 * XREFs of ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x18006E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B4D20 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::SetVisualTree(CHwndRenderTarget *this, struct CVisualTree *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CRenderTarget::SetVisualTree(this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x257u);
  else
    *((_BYTE *)this + 787) = 1;
  return v4;
}
