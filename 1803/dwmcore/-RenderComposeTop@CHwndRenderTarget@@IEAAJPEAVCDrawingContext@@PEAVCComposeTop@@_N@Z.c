/*
 * XREFs of ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158940
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158A6C (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180161C64 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180162554 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
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
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  v4 = 0;
  if ( !*((_QWORD *)this + 23)
    || *((_BYTE *)this + 852)
    || (v4 = 1, v9 = CDrawingContext::PushStereoContext(a2, 1LL, 0LL), v10 = v9, v9 >= 0) )
  {
    v11 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA64u);
    }
    else if ( v4 )
    {
      v12 = CDrawingContext::PopStereoContext(a2, 0LL);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xA6Au);
      }
      else
      {
        v13 = CDrawingContext::PushStereoContext(a2, 2LL, 0LL);
        v10 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA70u);
        }
        else
        {
          v14 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
          v10 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xA74u);
          }
          else
          {
            v15 = CDrawingContext::PopStereoContext(a2, 0LL);
            v10 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xA76u);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xA5Du);
  }
  return v10;
}
