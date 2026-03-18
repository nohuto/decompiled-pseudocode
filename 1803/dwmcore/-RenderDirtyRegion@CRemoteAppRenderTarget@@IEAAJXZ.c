/*
 * XREFs of ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CF20
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CBE8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x18015CE70 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800422F4 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x18013D130 (-SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x18013E5CC (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015C864 (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801626C4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RenderDirtyRegion(CRemoteAppRenderTarget *this)
{
  CDrawingContext *DrawingContext; // r15
  struct COcclusionContext *v3; // rdx
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // xmm1_4
  int v7; // eax
  char v8; // dl
  unsigned int v9; // ebx
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // r14
  __int64 v15; // r8
  int v16; // eax
  unsigned int v18; // [rsp+28h] [rbp-49h]
  struct D2D_RECT_F v19; // [rsp+68h] [rbp-9h] BYREF
  __m128 v20; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v21[16]; // [rsp+88h] [rbp+17h] BYREF

  DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this);
  v3 = (struct COcclusionContext *)*((_QWORD *)this + 25);
  v4 = (float)*((int *)this + 73);
  v20.m128_f32[0] = (float)*((int *)this + 72);
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 74));
  v20.m128_f32[1] = v4;
  v6 = (float)*((int *)this + 75);
  v20.m128_i32[2] = _mm_cvtepi32_ps(v5).m128_u32[0];
  v20.m128_f32[3] = v6;
  CDrawingContext::SetOcclusionContext(DrawingContext, v3);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 144LL))(
    *((_QWORD *)this + 22),
    *((unsigned int *)this + 25));
  v7 = CDrawingContext::BeginFrame(
         DrawingContext,
         *((struct IRenderTarget **)this + 22),
         (_OWORD *)this + 9,
         1,
         (__int64)this + 208,
         0LL,
         0,
         0LL);
  v8 = 0;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x15Fu);
    return v9;
  }
  v10 = *((_QWORD *)this + 24);
  if ( !*(_BYTE *)(v10 + 2883) )
  {
    v12 = *(_DWORD *)(v10 + 1276);
    v13 = 0;
    if ( v12 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        v15 = *((_QWORD *)this + 25);
        v19 = *(struct D2D_RECT_F *)(v14 + v10 + 1116);
        if ( v15 )
          v19 = *(struct D2D_RECT_F *)CDirtyRegion::GetUnOccludedDirtyRegion(
                                        *((_QWORD *)this + 24),
                                        (__int64)v21,
                                        v15,
                                        *((const struct CVisualTree **)this + 15),
                                        v8,
                                        v13,
                                        (__int64)&v20);
        if ( !IsEmpty(&v19) )
        {
          v16 = CDrawingContext::DrawVisualTree(
                  DrawingContext,
                  *((_QWORD *)this + 15),
                  (__m128 *)&v19,
                  0LL,
                  0x7FFFFFFF,
                  *((_BYTE *)this + 160),
                  v8,
                  1,
                  v8,
                  v8,
                  v8,
                  v8);
          v9 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x184u);
            goto LABEL_19;
          }
          v11 = CRemoteAppRenderTarget::NotifyRenderedRect((__int64)this, &v19.left);
          v8 = 0;
          v9 = v11;
          if ( v11 < 0 )
          {
            v18 = 390;
            goto LABEL_6;
          }
        }
        ++v13;
        v14 += 16LL;
        if ( v13 >= v12 )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
  v11 = CDrawingContext::DrawVisualTree(
          DrawingContext,
          *((_QWORD *)this + 15),
          &v20,
          0LL,
          0x7FFFFFFF,
          *((_BYTE *)this + 160),
          0,
          1,
          0,
          0,
          0,
          0);
  v9 = v11;
  if ( v11 < 0 )
  {
    v18 = 360;
    goto LABEL_6;
  }
  v11 = CRemoteAppRenderTarget::NotifyRenderedRect((__int64)this, 0LL);
  v8 = 0;
  v9 = v11;
  if ( v11 >= 0 )
  {
LABEL_17:
    if ( g_LockAndReadOffscreenTarget != v8 )
      CDrawingContext::ReadTexture(DrawingContext);
    goto LABEL_19;
  }
  v18 = 361;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v18);
LABEL_19:
  CDrawingContext::EndFrame(DrawingContext);
  return v9;
}
