/*
 * XREFs of ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18006C2A4
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800D1EE8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18012D120 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012D294 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTop(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        bool a4)
{
  char v4; // bp
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-28h]

  v4 = 0;
  if ( *((_QWORD *)this + 16) )
  {
    if ( !*((_BYTE *)this + 793) )
    {
      v4 = 1;
      v9 = CDrawingContext::PushStereoContext(a2, 1LL);
      v10 = v9;
      if ( v9 < 0 )
      {
        v13 = 2865;
        goto LABEL_17;
      }
    }
  }
  v9 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = 2872;
    goto LABEL_17;
  }
  if ( v4 )
  {
    v11 = CDrawingContext::PopStereoContext(a2, 0LL);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB3Eu);
      return v10;
    }
    v9 = CDrawingContext::PushStereoContext(a2, 2LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      v13 = 2884;
    }
    else
    {
      v9 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
      v10 = v9;
      if ( v9 < 0 )
      {
        v13 = 2888;
      }
      else
      {
        v9 = CDrawingContext::PopStereoContext(a2, 0LL);
        v10 = v9;
        if ( v9 >= 0 )
          return v10;
        v13 = 2890;
      }
    }
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v13);
  }
  return v10;
}
