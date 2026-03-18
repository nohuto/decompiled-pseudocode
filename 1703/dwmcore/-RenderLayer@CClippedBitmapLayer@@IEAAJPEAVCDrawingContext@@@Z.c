/*
 * XREFs of ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180157928
 * Callers:
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157AE0 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800112AC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18012D0E8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CClippedBitmapLayer::RenderLayer(CClippedBitmapLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  float v5; // xmm1_4
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+40h] [rbp-59h]
  struct CRenderTargetImageSource *v12; // [rsp+60h] [rbp-39h] BYREF
  _OWORD v13[4]; // [rsp+70h] [rbp-29h] BYREF
  __int16 v14; // [rsp+B0h] [rbp+17h]
  _DWORD v15[4]; // [rsp+C0h] [rbp+27h] BYREF

  v12 = 0LL;
  v15[0] = 0;
  v15[1] = 0;
  v13[0] = _xmm;
  v14 = 32085;
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v13[1] = _xmm;
  v5 = (float)*((int *)this + 7) + 0.0;
  v13[2] = _xmm;
  v13[3] = _xmm;
  *(float *)&v15[2] = _mm_cvtepi32_ps(v4).m128_f32[0] + 0.0;
  *(float *)&v15[3] = v5;
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  v6 = CRenderTargetImageSource::Create(*((struct IRenderTarget **)this + 1), 1, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB7u);
  }
  else
  {
    CMILMatrix::SetTranslation((CMILMatrix *)v13, *((float *)this + 28), *((float *)this + 29), 0.0);
    v8 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v13, 1, 0);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBEu);
    }
    else
    {
      v9 = CDrawingContext::DrawBitmapWithPartialOcclusion(
             a2,
             v12,
             (struct MilRectF *)v15,
             (struct MilRectF *)v15,
             1.0,
             *((_DWORD *)a2 + 1674),
             *((_DWORD *)a2 + 67),
             0,
             v11,
             1,
             0LL);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xCAu);
      CDrawingContext::PopTransformInternal(a2, 0);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v12);
  return v7;
}
