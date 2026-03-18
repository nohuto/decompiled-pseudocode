/*
 * XREFs of ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x180061BE0
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180062824 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     PubSebRegisterRpc @ 0x1800CA238 (PubSebRegisterRpc.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureWNFHandles(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  int v5; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 108) || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK), v1 = v4, v4 >= 0) )
  {
    if ( !*((_QWORD *)this + 109) )
    {
      v5 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK);
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276934, 1u, v5, 0x218u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276934, 1u, v4, 0x212u);
  }
  return v1;
}
