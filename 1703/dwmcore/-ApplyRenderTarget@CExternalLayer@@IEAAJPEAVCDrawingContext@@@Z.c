/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18001528C
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180015530 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157570 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000CD28 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18000F688 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18000F988 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z @ 0x1800151D4 (--$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z.c)
 *     ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x1800168A0 (-GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800A0D6C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  struct IRenderTarget *v3; // rdx
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
  v3 = (struct IRenderTarget *)*((_QWORD *)this + 1);
  *(_QWORD *)&v20.r = 0LL;
  *(_QWORD *)&v20.b = 0LL;
  v5 = CDrawingContext::PushRenderTarget(a2, v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 137;
    goto LABEL_16;
  }
  v7 = (CHwTextureRenderTarget *)*((_QWORD *)this + 1);
  *((_BYTE *)this + 33) = 1;
  v8 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **))(*(_QWORD *)v7 + 192LL);
  if ( v8 == CHwTextureRenderTarget::GetBitmapTexture )
    BitmapTexture = CHwTextureRenderTarget::GetBitmapTexture(v7, &v15);
  else
    BitmapTexture = v8(v7, &v15);
  v6 = BitmapTexture;
  if ( BitmapTexture < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapTexture, 0x97u);
    goto LABEL_9;
  }
  v16 = 0;
  v17 = 0;
  v10 = (float)*((int *)v15 + 35);
  v18 = (float)*((int *)v15 + 34);
  v19 = v10;
  v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v16, 1, 1, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 158;
    goto LABEL_16;
  }
  v11 = CDrawingContext::Clear((CD2DContext **)a2, &v20);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA1u);
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    goto LABEL_9;
  }
  CScopedClipStack::PopGpuClipFromScope((struct CDrawingContext *)((char *)a2 + 912));
  v16 = 0;
  v17 = 0;
  *((_BYTE *)a2 + 6769) = 1;
  v12 = (float)*((int *)this + 7);
  v18 = (float)*((int *)this + 6);
  v19 = v12;
  v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v16, 1, 1, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 176;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v14);
    goto LABEL_9;
  }
  *((_BYTE *)this + 34) = 1;
LABEL_9:
  ReleaseInterfaceNoNULL<CD3DTexture>(v15);
  return v6;
}
