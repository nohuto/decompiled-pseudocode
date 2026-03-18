/*
 * XREFs of ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x180189860
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18018AC70 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInte.c)
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
 *     ?GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z @ 0x18018A30C (-GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z.c)
 */

__int64 __fastcall CDropShadow::GenerateMaskIntermediate(
        CDropShadow *this,
        struct IRenderTarget **a2,
        const struct D2D_SIZE_F *a3,
        struct CDropShadow::ShadowIntermediates *a4)
{
  int v8; // eax
  int MaskContentNoRef; // ebx
  struct IRenderTarget *v10; // rbx
  CDrawingContext *v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  _BYTE v15[8]; // [rsp+30h] [rbp-29h] BYREF
  struct CRenderTargetImageSource *v16; // [rsp+38h] [rbp-21h] BYREF
  struct IRenderTarget *v17; // [rsp+40h] [rbp-19h] BYREF
  struct CSpriteVisualContent *v18; // [rsp+48h] [rbp-11h] BYREF
  const char *v19; // [rsp+50h] [rbp-9h] BYREF
  int v20; // [rsp+58h] [rbp-1h]
  __int128 v21; // [rsp+60h] [rbp+7h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v21 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v15[0] = 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
  v20 = 19;
  v19 = "DWM DropShadow Mask";
  v8 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v19, a3, 0, &v17);
  MaskContentNoRef = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x204u);
    goto LABEL_15;
  }
  v10 = v17;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v17 + 144LL))(v17, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v10 + 248LL))(v10, (unsigned int)DisplayId::None);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v16);
  MaskContentNoRef = CRenderTargetImageSource::Create(v10, 0, &v16);
  if ( MaskContentNoRef < 0 )
  {
    v13 = 525;
    goto LABEL_13;
  }
  MaskContentNoRef = CDropShadow::GetMaskContentNoRef(this, a4, &v18);
  if ( MaskContentNoRef < 0 )
  {
    v13 = 527;
    goto LABEL_13;
  }
  MaskContentNoRef = CDrawingContext::PushTransformInternal(
                       (CDrawingContext *)a2,
                       0LL,
                       (const struct CMILMatrix *)&CMILMatrix::Identity,
                       0,
                       1);
  if ( MaskContentNoRef < 0 )
  {
    v13 = 529;
    goto LABEL_13;
  }
  MaskContentNoRef = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct IRenderTarget **, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(*(_QWORD *)v18 + 160LL))(
                       v18,
                       a2,
                       a3,
                       v15,
                       &v21);
  CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  if ( MaskContentNoRef < 0 )
  {
    v13 = 537;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MaskContentNoRef, v13);
    CDrawingContext::PopLayer((CDrawingContext *)a2);
    goto LABEL_15;
  }
  v12 = CDrawingContext::PopLayer(v11);
  MaskContentNoRef = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x21Du);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>((CRenderTargetImageSource **)a4, &v16);
LABEL_15:
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
  return (unsigned int)MaskContentNoRef;
}
