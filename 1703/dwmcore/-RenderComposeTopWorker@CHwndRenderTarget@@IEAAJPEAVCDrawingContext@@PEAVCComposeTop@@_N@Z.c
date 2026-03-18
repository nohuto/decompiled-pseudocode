/*
 * XREFs of ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800D1EE8
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18006C2A4 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000CD28 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800A0D6C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180128ED4 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180128F5C (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18012D0E8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801349C8 (-NewContentRendered@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180134B34 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017676C (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAVCShape@@PEAV-$TMilRect_.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTopWorker(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r12
  int v9; // eax
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  int v14; // eax
  __int64 v15; // rdx
  int v17; // eax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-50h]
  float v26; // [rsp+30h] [rbp-40h] BYREF
  float v27; // [rsp+34h] [rbp-3Ch]
  float v28; // [rsp+38h] [rbp-38h]
  float v29; // [rsp+3Ch] [rbp-34h]
  float v30; // [rsp+40h] [rbp-30h] BYREF
  float v31; // [rsp+44h] [rbp-2Ch]
  float v32; // [rsp+48h] [rbp-28h]
  float v33; // [rsp+4Ch] [rbp-24h]
  _BYTE v34[16]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( a4 )
  {
    (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 15) + 64LL))(*((_QWORD *)this + 15), &v30);
    v18 = *((_QWORD *)this + 97);
    if ( !v18 || (v19 = *(_BYTE *)(v18 + 1097) == 0, v20 = 232LL, v19) )
      v20 = 164LL;
    v17 = CComposeTop::FullRender(a3, a2, (char *)this + v20, &v30);
    v4 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xB7Au);
      return v4;
    }
  }
  else
  {
    if ( !*((_QWORD *)a3 + 1) )
      goto LABEL_20;
    (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 15) + 280LL))(*((_QWORD *)this + 15), &v30);
    v5 = 1;
    v9 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v30, 1, 0, 0);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB89u);
      return v4;
    }
    v21 = *((_QWORD *)this + 97);
    if ( !v21 || (v19 = *(_BYTE *)(v21 + 1097) == 0, v22 = 232LL, v19) )
      v22 = 164LL;
    v4 = 0;
    if ( *((_QWORD *)a3 + 1) )
    {
      v23 = CComposeTop::RenderWorker(a3, a2, (char *)this + v22);
      v4 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x144u);
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      v25 = 2965;
      v24 = v4;
      goto LABEL_42;
    }
    v10 = v26;
    if ( v30 > v26 )
    {
      v26 = v30;
      v10 = v30;
    }
    v11 = v27;
    if ( v31 > v27 )
    {
      v27 = v31;
      v11 = v31;
    }
    v12 = v28;
    if ( v28 > v32 )
    {
      v12 = v32;
      v28 = v32;
    }
    v13 = v29;
    if ( v29 > v33 )
    {
      v13 = v33;
      v29 = v33;
    }
    if ( v12 <= v10 || v13 <= v11 )
    {
      v29 = 0.0;
      v28 = 0.0;
      v27 = 0.0;
      v26 = 0.0;
    }
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v26) )
    {
      v14 = CHwndRenderTarget::NotifyRenderedRect(this, &v26, 0LL);
      v4 = v14;
      if ( v14 < 0 )
      {
        v25 = 2978;
      }
      else
      {
        CHwndRenderTarget::RenderTargetRectToDesktopRect(this, v15, &v26, v34);
        v14 = CComposeTop::NewContentRendered(a3);
        v4 = v14;
        if ( v14 >= 0 )
          goto LABEL_20;
        v25 = 2992;
      }
      v24 = v14;
LABEL_42:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, v25);
LABEL_23:
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      return v4;
    }
  }
LABEL_20:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_23;
  return v4;
}
