/*
 * XREFs of ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801580C8
 * Callers:
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801581D0 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CColorSpaceLayer::RenderLayer(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  struct IRenderTarget *v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v10; // [rsp+40h] [rbp-48h]
  struct CRenderTargetImageSource *v11; // [rsp+60h] [rbp-28h] BYREF
  _DWORD v12[4]; // [rsp+68h] [rbp-20h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v4 = (struct IRenderTarget *)*((_QWORD *)this + 1);
  v12[0] = 0;
  v12[1] = 0;
  v11 = 0LL;
  *(float *)&v12[2] = _mm_cvtepi32_ps(v2).m128_f32[0] + 0.0;
  *(float *)&v12[3] = _mm_cvtepi32_ps(v3).m128_f32[0] + 0.0;
  v6 = CRenderTargetImageSource::Create(v4, 1, &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x64u);
  }
  else
  {
    v8 = CDrawingContext::DrawBitmapWithPartialOcclusion(
           a2,
           v11,
           (struct MilRectF *)v12,
           (struct MilRectF *)v12,
           1.0,
           *((_DWORD *)a2 + 1674),
           *((_DWORD *)a2 + 67),
           0,
           v10,
           1,
           0LL);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x6Fu);
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v11);
  return v7;
}
