/*
 * XREFs of ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x1801A00C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x1800705E4 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x1801A0760 (-SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z.c)
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

  v1 = *((_DWORD *)this + 50);
  v2 = (char *)this + 192;
  v4 = CHwStereoFullScreenRenderTarget::SetStereoContext((char *)this + 192, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1C1u);
  }
  else
  {
    v6 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((_DWORD *)this - 44, 1u, *((_BYTE *)this + 225) != 0);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1C5u);
    }
    else if ( !*((_BYTE *)this + 225) )
    {
      v7 = CHwStereoFullScreenRenderTarget::SetStereoContext(v2, 2LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1C9u);
      }
      else
      {
        v8 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((_DWORD *)this - 44, 2u, 1);
        v5 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1CBu);
      }
    }
  }
  CHwStereoFullScreenRenderTarget::SetStereoContext(v2, v1);
  return v5;
}
