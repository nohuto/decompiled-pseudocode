/*
 * XREFs of ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18015FFB4
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x180161300 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E870 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x1800B24EC (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z @ 0x180160A68 (-GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z.c)
 */

__int64 __fastcall CDropShadow::GenerateMaskIntermediate(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDropShadow::ShadowIntermediates *a4)
{
  signed int v8; // eax
  int v9; // ebx
  struct IRenderTarget *v10; // rbx
  int v11; // eax
  signed int MaskContentNoRef; // eax
  signed int v13; // eax
  DWORD v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-39h]
  _BYTE v17[8]; // [rsp+30h] [rbp-29h] BYREF
  struct CRenderTargetImageSource *v18; // [rsp+38h] [rbp-21h] BYREF
  struct IRenderTarget *v19; // [rsp+40h] [rbp-19h] BYREF
  struct CSpriteVisualContent *v20; // [rsp+48h] [rbp-11h] BYREF
  const char *v21; // [rsp+50h] [rbp-9h] BYREF
  int v22; // [rsp+58h] [rbp-1h]
  __int128 v23; // [rsp+60h] [rbp+7h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v23 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v17[0] = 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v19);
  v22 = 19;
  v21 = "DWM DropShadow Mask";
  v8 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v21, a3, 0, &v19);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x281u);
    goto LABEL_17;
  }
  v10 = v19;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v19 + 136LL))(v19, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v10 + 208LL))(v10, (unsigned int)DisplayId::None);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  v11 = CRenderTargetImageSource::Create(v10, 0, &v18);
  v9 = v11;
  if ( v11 < 0 )
  {
    v16 = 650;
    goto LABEL_13;
  }
  MaskContentNoRef = CDropShadow::GetMaskContentNoRef(this, a4, &v20);
  v9 = MaskContentNoRef;
  if ( MaskContentNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, MaskContentNoRef, 0x28Cu);
LABEL_15:
    CDrawingContext::PopLayer(a2);
    goto LABEL_17;
  }
  v11 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v9 = v11;
  if ( v11 < 0 )
  {
    v16 = 654;
LABEL_13:
    v14 = v11;
    goto LABEL_14;
  }
  v9 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(*(_QWORD *)v20 + 160LL))(
         v20,
         a2,
         a3,
         v17,
         &v23);
  CDrawingContext::PopTransformInternal(a2, 1);
  if ( v9 < 0 )
  {
    v16 = 662;
    v14 = v9;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, v16);
    goto LABEL_15;
  }
  v13 = CDrawingContext::PopLayer(a2);
  v9 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x29Au);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>((__int64 *)a4 + 1, (__int64 *)&v18);
LABEL_17:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v9;
}
