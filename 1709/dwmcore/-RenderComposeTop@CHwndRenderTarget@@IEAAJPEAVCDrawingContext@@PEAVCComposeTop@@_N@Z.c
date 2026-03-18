/*
 * XREFs of ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801363AC
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801364D8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013DC08 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18013E324 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTop(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        bool a4)
{
  char v4; // bp
  signed int v9; // eax
  unsigned int v10; // ebx
  signed int v11; // eax
  signed int v12; // eax
  signed int v13; // eax
  signed int v14; // eax
  signed int v15; // eax

  v4 = 0;
  if ( !*((_QWORD *)this + 16)
    || *((_BYTE *)this + 806)
    || (v4 = 1, v9 = CDrawingContext::PushStereoContext(a2, 1LL, 0LL), v10 = v9, v9 >= 0) )
  {
    v11 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xAA3u);
    }
    else if ( v4 )
    {
      v12 = CDrawingContext::PopStereoContext(a2, 0LL);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xAA9u);
      }
      else
      {
        v13 = CDrawingContext::PushStereoContext(a2, 2LL, 0LL);
        v10 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xAAFu);
        }
        else
        {
          v14 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
          v10 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xAB3u);
          }
          else
          {
            v15 = CDrawingContext::PopStereoContext(a2, 0LL);
            v10 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xAB5u);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xA9Cu);
  }
  return v10;
}
