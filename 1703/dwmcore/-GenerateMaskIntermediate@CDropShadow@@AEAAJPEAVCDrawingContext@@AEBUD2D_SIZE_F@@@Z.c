/*
 * XREFs of ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18017122C
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180172120 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000EB44 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x1801708D0 (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 *     ?GetMaskContentNoRef@CDropShadow@@AEAAJPEAPEAVCSpriteVisualContent@@@Z @ 0x180171B18 (-GetMaskContentNoRef@CDropShadow@@AEAAJPEAPEAVCSpriteVisualContent@@@Z.c)
 */

__int64 __fastcall CDropShadow::GenerateMaskIntermediate(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v6; // eax
  int v7; // ebx
  struct IRenderTarget *v8; // rbx
  int v9; // eax
  int MaskContentNoRef; // eax
  int v11; // eax
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-60h]
  _BYTE v15[8]; // [rsp+30h] [rbp-50h] BYREF
  struct CRenderTargetImageSource *v16; // [rsp+38h] [rbp-48h] BYREF
  struct IRenderTarget *v17; // [rsp+40h] [rbp-40h] BYREF
  struct CSpriteVisualContent *v18; // [rsp+48h] [rbp-38h] BYREF
  const char *v19; // [rsp+50h] [rbp-30h] BYREF
  int v20; // [rsp+58h] [rbp-28h]
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v21 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v15[0] = 0;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v17);
  v20 = 19;
  v19 = "DWM DropShadow Mask";
  v6 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v19, a3, 0, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x22Du);
    goto LABEL_17;
  }
  v8 = v17;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v17 + 152LL))(v17, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v8 + 200LL))(v8, (unsigned int)DisplayId::None);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v16);
  v9 = CRenderTargetImageSource::Create(v8, 0, &v16);
  v7 = v9;
  if ( v9 < 0 )
  {
    v14 = 566;
    goto LABEL_13;
  }
  MaskContentNoRef = CDropShadow::GetMaskContentNoRef(this, &v18);
  v7 = MaskContentNoRef;
  if ( MaskContentNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MaskContentNoRef, 0x238u);
LABEL_15:
    CDrawingContext::PopLayer(a2);
    goto LABEL_17;
  }
  v9 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v7 = v9;
  if ( v9 < 0 )
  {
    v14 = 570;
LABEL_13:
    v12 = v9;
    goto LABEL_14;
  }
  v7 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(*(_QWORD *)v18 + 144LL))(
         v18,
         a2,
         a3,
         v15,
         &v21);
  CDrawingContext::PopTransformInternal(a2, 1);
  if ( v7 < 0 )
  {
    v14 = 578;
    v12 = v7;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v14);
    goto LABEL_15;
  }
  v11 = CDrawingContext::PopLayer(a2);
  v7 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x246u);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>((__int64 *)this + 18, (__int64 *)&v16);
LABEL_17:
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v7;
}
