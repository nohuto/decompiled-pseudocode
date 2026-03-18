/*
 * XREFs of ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801364D8
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801363AC (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800437C8 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180043A30 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180119FB8 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180136914 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18013E6D8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D57C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D664 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D7D0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTopWorker(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  DWORD v4; // ebx
  char v5; // r12
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  signed int v12; // eax
  signed int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  signed int v16; // eax
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  signed int v21; // eax
  __int64 v22; // rdx
  unsigned int v24; // [rsp+20h] [rbp-50h]
  __int128 v25; // [rsp+30h] [rbp-40h] BYREF
  float v26; // [rsp+40h] [rbp-30h] BYREF
  float v27; // [rsp+44h] [rbp-2Ch]
  float v28; // [rsp+48h] [rbp-28h]
  float v29; // [rsp+4Ch] [rbp-24h]
  _BYTE v30[16]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !*((_QWORD *)a3 + 1) )
      goto LABEL_37;
    (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 15) + 288LL))(*((_QWORD *)this + 15), &v26);
    v5 = 1;
    v13 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v26, 1, 0, 0);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xAF4u);
      return v4;
    }
    v14 = *((_QWORD *)this + 99);
    if ( !v14 || (v10 = *(_BYTE *)(v14 + 1183) == 0, v15 = 232LL, v10) )
      v15 = 164LL;
    v4 = 0;
    if ( *((_QWORD *)a3 + 1) )
    {
      v16 = CComposeTop::RenderWorker(a3, a2, (char *)this + v15);
      v4 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x12Au);
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xB00u);
    }
    else
    {
      v17 = *(float *)&v25;
      if ( v26 > *(float *)&v25 )
      {
        *(float *)&v25 = v26;
        v17 = v26;
      }
      v18 = *((float *)&v25 + 1);
      if ( v27 > *((float *)&v25 + 1) )
      {
        *((float *)&v25 + 1) = v27;
        v18 = v27;
      }
      v19 = *((float *)&v25 + 2);
      if ( *((float *)&v25 + 2) > v28 )
      {
        v19 = v28;
        *((float *)&v25 + 2) = v28;
      }
      v20 = *((float *)&v25 + 3);
      if ( *((float *)&v25 + 3) > v29 )
      {
        v20 = v29;
        *((float *)&v25 + 3) = v29;
      }
      if ( v19 <= v17 || v20 <= v18 )
        v25 = 0uLL;
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v25) )
        goto LABEL_37;
      v21 = CHwndRenderTarget::NotifyRenderedRect((__int64)this, &v25, 0);
      v4 = v21;
      if ( v21 < 0 )
      {
        v24 = 2829;
      }
      else
      {
        CHwndRenderTarget::RenderTargetRectToDesktopRect(this, v22, &v25, v30);
        v21 = CComposeTop::NewContentRendered(a3);
        v4 = v21;
        if ( v21 >= 0 )
          goto LABEL_37;
        v24 = 2843;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, v24);
    }
LABEL_40:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15), &v26);
  v9 = *((_QWORD *)this + 99);
  if ( !v9 || (v10 = *(_BYTE *)(v9 + 1183) == 0, v11 = 232LL, v10) )
    v11 = 164LL;
  v12 = CComposeTop::FullRender(a3, a2, (char *)this + v11, &v26);
  v4 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xAE5u);
    return v4;
  }
LABEL_37:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_40;
  return v4;
}
