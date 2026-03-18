/*
 * XREFs of ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x1801F0EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007C740 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x1801F1780 (-SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyFrontToBackBuffer(CHwStereoFullScreenRenderTarget *this)
{
  unsigned int v1; // r14d
  char *v2; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = *((_DWORD *)this + 98);
  v2 = (char *)this + 384;
  v4 = CHwStereoFullScreenRenderTarget::SetStereoContext((char *)this + 384, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1EBu);
  }
  else
  {
    v6 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(
           (CSwapChainBase **)this - 27,
           1u,
           *((_BYTE *)this + 433) != 0);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1EFu);
    }
    else if ( !*((_BYTE *)this + 433) )
    {
      v7 = CHwStereoFullScreenRenderTarget::SetStereoContext(v2, 2LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1F3u);
      }
      else
      {
        v8 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((CSwapChainBase **)this - 27, 2u, 1);
        v5 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1F5u);
      }
    }
  }
  CHwStereoFullScreenRenderTarget::SetStereoContext(v2, v1);
  return v5;
}
