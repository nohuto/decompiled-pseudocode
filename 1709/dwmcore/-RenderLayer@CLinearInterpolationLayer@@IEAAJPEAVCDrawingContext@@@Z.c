/*
 * XREFs of ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014D014
 * Callers:
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014D1E0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18003F3AC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18013E6D8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x18018FC20 (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RenderLayer(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  float v5; // xmm1_4
  signed int v6; // eax
  CCachedVisualImage *v7; // rsi
  unsigned int v8; // ebx
  signed int v9; // eax
  signed int v10; // eax
  struct CRenderTargetImageSource *v12; // [rsp+40h] [rbp-39h] BYREF
  _OWORD v13[4]; // [rsp+50h] [rbp-29h] BYREF
  __int16 v14; // [rsp+90h] [rbp+17h]
  CCachedVisualImage *v15; // [rsp+A0h] [rbp+27h] BYREF
  float v16; // [rsp+A8h] [rbp+2Fh]
  float v17; // [rsp+ACh] [rbp+33h]

  v12 = 0LL;
  v15 = 0LL;
  v13[0] = _xmm;
  v14 = 32085;
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v13[1] = _xmm;
  v5 = (float)*((int *)this + 7);
  v13[2] = _xmm;
  v13[3] = _xmm;
  v16 = _mm_cvtepi32_ps(v4).m128_f32[0] + 0.0;
  v17 = v5 + 0.0;
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  v6 = CRenderTargetImageSource::Create(*((struct IRenderTarget **)this + 1), 1, &v12);
  v7 = v12;
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xA1u);
  }
  else
  {
    CMILMatrix::Set2DScaleAndOffset(
      (CMILMatrix *)v13,
      1.0 / *((float *)this + 28),
      1.0 / *((float *)this + 29),
      *((float *)this + 30),
      *((float *)this + 31));
    v9 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v13, 1, 0);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xADu);
    }
    else
    {
      v10 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
              (__int64)a2,
              v7,
              &v15,
              (int *)&v15,
              *((_DWORD *)a2 + 1690),
              *((_DWORD *)a2 + 65),
              0);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xB6u);
      CDrawingContext::PopTransformInternal(a2, 0);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
