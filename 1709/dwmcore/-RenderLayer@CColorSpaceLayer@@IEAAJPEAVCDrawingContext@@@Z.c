/*
 * XREFs of ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014B9FC
 * Callers:
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014BAF0 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18003F3AC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CColorSpaceLayer::RenderLayer(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  struct IRenderTarget *v4; // rcx
  signed int v6; // eax
  unsigned int v7; // ebx
  signed int v8; // eax
  struct CRenderTargetImageSource *v10; // [rsp+40h] [rbp-28h] BYREF
  CCachedVisualImage *v11; // [rsp+48h] [rbp-20h] BYREF
  float v12; // [rsp+50h] [rbp-18h]
  float v13; // [rsp+54h] [rbp-14h]

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v4 = (struct IRenderTarget *)*((_QWORD *)this + 1);
  v11 = 0LL;
  v10 = 0LL;
  v12 = _mm_cvtepi32_ps(v2).m128_f32[0] + 0.0;
  v13 = _mm_cvtepi32_ps(v3).m128_f32[0] + 0.0;
  v6 = CRenderTargetImageSource::Create(v4, 1, &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x62u);
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x6Au);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v10);
  return v7;
}
