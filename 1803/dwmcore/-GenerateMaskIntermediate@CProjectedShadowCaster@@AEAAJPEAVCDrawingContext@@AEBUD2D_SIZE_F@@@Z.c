/*
 * XREFs of ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0014
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0EF4 (-UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x18018895C (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801A054C (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CProjectedShadowCaster::GenerateMaskIntermediate(
        CRenderTargetImageSource **this,
        struct IRenderTarget **a2,
        const struct D2D_SIZE_F *a3)
{
  int v6; // eax
  int v7; // ebx
  struct IRenderTarget *v8; // rbx
  struct CSpriteVisualContent *EffectiveMaskBrush; // r14
  CDrawingContext *v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  _BYTE v14[8]; // [rsp+30h] [rbp-40h] BYREF
  struct CRenderTargetImageSource *v15; // [rsp+38h] [rbp-38h] BYREF
  struct IRenderTarget *v16; // [rsp+40h] [rbp-30h] BYREF
  const char *v17; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+50h] [rbp-20h]
  __int128 v19; // [rsp+58h] [rbp-18h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v19 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v14[0] = 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v16);
  v18 = 24;
  v17 = "DWM ProjectedShadow Mask";
  v6 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v17, a3, 0, &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x209u);
    goto LABEL_13;
  }
  v8 = v16;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v16 + 144LL))(v16, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v8 + 248LL))(v8, (unsigned int)DisplayId::None);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v15);
  v7 = CRenderTargetImageSource::Create(v8, 0, &v15);
  if ( v7 < 0 )
  {
    v12 = 530;
    goto LABEL_11;
  }
  EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush((CProjectedShadowCaster *)this);
  v7 = CDrawingContext::PushTransformInternal(
         (CDrawingContext *)a2,
         0LL,
         (const struct CMILMatrix *)&CMILMatrix::Identity,
         0,
         1);
  if ( v7 < 0 )
  {
    v12 = 534;
    goto LABEL_11;
  }
  v7 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct IRenderTarget **, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(*(_QWORD *)EffectiveMaskBrush + 160LL))(
         EffectiveMaskBrush,
         a2,
         a3,
         v14,
         &v19);
  CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  if ( v7 < 0 )
  {
    v12 = 542;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v12);
    CDrawingContext::PopLayer((CDrawingContext *)a2);
    goto LABEL_13;
  }
  v11 = CDrawingContext::PopLayer(v10);
  v7 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x222u);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>(this + 15, &v15);
LABEL_13:
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v7;
}
