/*
 * XREFs of ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x18006E2D0
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18006C860 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     PubSebRegisterRpc @ 0x1800B0CE4 (PubSebRegisterRpc.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureWNFHandles(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  int v5; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 101)
    || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (char *)this + 808), v1 = v4, v4 >= 0) )
  {
    if ( !*((_QWORD *)this + 102) )
    {
      v5 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK, (char *)this + 816);
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801F3578, 1u, v5, 0x200u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F3578, 1u, v4, 0x1FAu);
  }
  return v1;
}
