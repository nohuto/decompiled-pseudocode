/*
 * XREFs of ?SetVisualTree@CHwndRenderTargetRemoteApp@@MEAAJPEAVCVisualTree@@@Z @ 0x180155DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B4D20 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::SetVisualTree(CHwndRenderTargetRemoteApp *this, struct CVisualTree *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CRenderTarget::SetVisualTree(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xCEu);
  return v3;
}
