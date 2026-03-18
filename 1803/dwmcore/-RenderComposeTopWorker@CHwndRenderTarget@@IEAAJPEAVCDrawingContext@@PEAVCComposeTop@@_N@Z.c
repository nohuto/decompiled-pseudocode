/*
 * XREFs of ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158A6C
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158940 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18013BDF4 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18013D0F8 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180158EBC (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801626C4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADA10 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADAF8 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADC70 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTopWorker(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r12
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  float left; // xmm0_4
  float top; // xmm2_4
  float right; // xmm3_4
  float bottom; // xmm1_4
  int v21; // eax
  __int64 v22; // rdx
  unsigned int v24; // [rsp+20h] [rbp-50h]
  struct D2D_RECT_F v25; // [rsp+30h] [rbp-40h] BYREF
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
    (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 22) + 336LL))(*((_QWORD *)this + 22), &v26);
    v5 = 1;
    v13 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v26, 1, 0, 0);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xAB5u);
      return v4;
    }
    v14 = *((_QWORD *)this + 105);
    if ( !v14 || (v10 = *(_BYTE *)(v14 + 1195) == 0, v15 = 288LL, v10) )
      v15 = 220LL;
    v4 = 0;
    if ( *((_QWORD *)a3 + 1) )
    {
      v16 = CComposeTop::RenderWorker(a3, a2, (char *)this + v15);
      v4 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x12Au);
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xAC1u);
    }
    else
    {
      left = v25.left;
      if ( v26 > v25.left )
      {
        v25.left = v26;
        left = v26;
      }
      top = v25.top;
      if ( v27 > v25.top )
      {
        v25.top = v27;
        top = v27;
      }
      right = v25.right;
      if ( v25.right > v28 )
      {
        v25.right = v28;
        right = v28;
      }
      bottom = v25.bottom;
      if ( v25.bottom > v29 )
      {
        v25.bottom = v29;
        bottom = v29;
      }
      if ( right <= left || bottom <= top )
      {
        v25.bottom = 0.0;
        v25.right = 0.0;
        v25.top = 0.0;
        v25.left = 0.0;
      }
      if ( IsEmpty(&v25) )
        goto LABEL_37;
      v21 = CHwndRenderTarget::NotifyRenderedRect((__int64)this, (__int128 *)&v25, 0);
      v4 = v21;
      if ( v21 < 0 )
      {
        v24 = 2766;
      }
      else
      {
        CHwndRenderTarget::RenderTargetRectToDesktopRect(this, v22, &v25, v30);
        v21 = CComposeTop::NewContentRendered(a3);
        v4 = v21;
        if ( v21 >= 0 )
          goto LABEL_37;
        v24 = 2780;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v24);
    }
LABEL_40:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 22) + 48LL))(*((_QWORD *)this + 22), &v26);
  v9 = *((_QWORD *)this + 105);
  if ( !v9 || (v10 = *(_BYTE *)(v9 + 1195) == 0, v11 = 288LL, v10) )
    v11 = 220LL;
  v12 = CComposeTop::FullRender(a3, a2, (char *)this + v11, &v26);
  v4 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xAA6u);
    return v4;
  }
LABEL_37:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_40;
  return v4;
}
