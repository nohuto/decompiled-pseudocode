/*
 * XREFs of ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x1801750CC
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800097C0 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006C978 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderMask(
        CTreeEffectLayer *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawingContext *a3,
        struct IRenderTargetBitmap *a4)
{
  float width; // xmm1_4
  float height; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  struct CRenderTargetImageSource *v16; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v17[4]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v18[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( !a4 )
    return 0LL;
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, _QWORD, unsigned __int64))(*(_QWORD *)a4 + 224LL))(
      a4,
      *((_QWORD *)a3 + 48),
      ((unsigned __int64)a3 + 8) & -(__int64)(a3 != 0LL));
  width = a2->width;
  height = a2->height;
  v18[0] = 0;
  v18[1] = 0;
  v17[0] = 0;
  v17[1] = 0;
  v16 = 0LL;
  *(float *)&v18[2] = width;
  v11 = width / *((float *)this + 68);
  *(float *)&v18[3] = height;
  v12 = height / *((float *)this + 69);
  *(float *)&v17[2] = v11;
  *(float *)&v17[3] = v12;
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v16);
  v13 = CRenderTargetImageSource::Create(a4, 1, &v16);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x345u);
  }
  else
  {
    v15 = CDrawingContext::DrawBitmap(a3, v16, (__int64)v18, (const struct MilRectF *)v17, 0, 0);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x34Eu);
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v16);
  return v14;
}
