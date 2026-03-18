/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180024B90
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024AB0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z @ 0x180024ED4 (--$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x180062FD8 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800654E0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800657F0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x1800783E0 (-GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18013D0F8 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  CHwTextureRenderTarget *v7; // rcx
  __int64 (__fastcall *v8)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **); // rax
  int BitmapTexture; // eax
  float v10; // xmm1_4
  int v11; // eax
  float v12; // xmm1_4
  unsigned int v14; // [rsp+20h] [rbp-40h]
  struct CD3DTexture *v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h] BYREF
  int v17; // [rsp+3Ch] [rbp-24h]
  float v18; // [rsp+40h] [rbp-20h]
  float v19; // [rsp+44h] [rbp-1Ch]
  struct _D3DCOLORVALUE v20; // [rsp+48h] [rbp-18h] BYREF

  v15 = 0LL;
  v3 = *((_QWORD *)this + 1);
  *(_QWORD *)&v20.r = 0LL;
  *(_QWORD *)&v20.b = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3);
  v5 = CDrawingContext::PushRenderTarget(a2, *((struct IRenderTarget **)this + 1));
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 137;
    goto LABEL_16;
  }
  v7 = (CHwTextureRenderTarget *)*((_QWORD *)this + 1);
  *((_BYTE *)this + 33) = 1;
  v8 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **))(*(_QWORD *)v7 + 240LL);
  if ( v8 == CHwTextureRenderTarget::GetBitmapTexture )
    BitmapTexture = CHwTextureRenderTarget::GetBitmapTexture(v7, &v15);
  else
    BitmapTexture = v8(v7, &v15);
  v6 = BitmapTexture;
  if ( BitmapTexture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapTexture, 0x97u);
    goto LABEL_9;
  }
  v16 = 0;
  v17 = 0;
  v10 = (float)*((int *)v15 + 33);
  v18 = (float)*((int *)v15 + 32);
  v19 = v10;
  v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v16, 1, 1, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 158;
    goto LABEL_16;
  }
  v11 = CDrawingContext::Clear(a2, &v20);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA1u);
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    goto LABEL_9;
  }
  CScopedClipStack::PopGpuClipFromScope((struct CDrawingContext *)((char *)a2 + 1008));
  v16 = 0;
  v17 = 0;
  *((_BYTE *)a2 + 6825) = 1;
  v12 = (float)*((int *)this + 7);
  v18 = (float)*((int *)this + 6);
  v19 = v12;
  v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v16, 1, 1, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 176;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v14);
    goto LABEL_9;
  }
  *((_BYTE *)this + 34) = 1;
LABEL_9:
  ReleaseInterfaceNoNULL<CD3DTexture>(v15);
  return v6;
}
