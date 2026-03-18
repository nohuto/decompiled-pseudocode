/*
 * XREFs of ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180174870
 * Callers:
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180174960 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18006D6FC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CColorSpaceLayer::RenderLayer(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  struct IRenderTarget *v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct CRenderTargetImageSource *v10; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+48h] [rbp-20h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v4 = (struct IRenderTarget *)*((_QWORD *)this + 1);
  *(_QWORD *)&v11 = 0LL;
  v10 = 0LL;
  *((float *)&v11 + 2) = _mm_cvtepi32_ps(v2).m128_f32[0] + 0.0;
  *((float *)&v11 + 3) = _mm_cvtepi32_ps(v3).m128_f32[0] + 0.0;
  v6 = CRenderTargetImageSource::Create(v4, 1, &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x62u);
  }
  else
  {
    v8 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
           (__int64)a2,
           v10,
           &v11,
           (int *)&v11,
           *((_DWORD *)a2 + 1690),
           *((_DWORD *)a2 + 65),
           0);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6Au);
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v10);
  return v7;
}
