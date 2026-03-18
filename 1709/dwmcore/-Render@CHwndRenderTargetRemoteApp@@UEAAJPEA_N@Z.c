/*
 * XREFs of ?Render@CHwndRenderTargetRemoteApp@@UEAAJPEA_N@Z @ 0x180147A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800185B0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::Render(CHwndRenderTargetRemoteApp *this, bool *a2)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  signed int v5; // eax

  v3 = CHwndRenderTarget::Render(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xA0u);
  }
  else
  {
    v5 = CHwndRenderTarget::Present(this, 0, 0);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xA2u);
  }
  return v4;
}
