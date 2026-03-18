/*
 * XREFs of ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x1801B7B60
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18002F534 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x1801B8320 (-SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyFrontToBackBuffer(CHwStereoFullScreenRenderTarget *this)
{
  unsigned int v1; // r14d
  char *v2; // rsi
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax
  signed int v7; // eax
  signed int v8; // eax

  v1 = *((_DWORD *)this + 94);
  v2 = (char *)this + 368;
  v4 = CHwStereoFullScreenRenderTarget::SetStereoContext((char *)this + 368, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x1CDu);
  }
  else
  {
    v6 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(
           (CD3DDeviceLevel1 **)this - 24,
           1u,
           *((_BYTE *)this + 401) != 0);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x1D1u);
    }
    else if ( !*((_BYTE *)this + 401) )
    {
      v7 = CHwStereoFullScreenRenderTarget::SetStereoContext(v2, 2LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1D5u);
      }
      else
      {
        v8 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((CD3DDeviceLevel1 **)this - 24, 2u, 1);
        v5 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1D7u);
      }
    }
  }
  CHwStereoFullScreenRenderTarget::SetStereoContext(v2, v1);
  return v5;
}
