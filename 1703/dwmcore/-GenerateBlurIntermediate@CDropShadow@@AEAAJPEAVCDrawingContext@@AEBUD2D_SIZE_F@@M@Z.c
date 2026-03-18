/*
 * XREFs of ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180170EF4
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180172120 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000E0E0 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000EB44 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0 (-GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x1801708D0 (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 */

__int64 __fastcall CDropShadow::GenerateBlurIntermediate(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4)
{
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  struct IRenderTarget *v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v20; // [rsp+38h] [rbp-19h] BYREF
  __int64 v21; // [rsp+40h] [rbp-11h] BYREF
  __int64 v22; // [rsp+48h] [rbp-9h] BYREF
  struct CRenderTargetImageSource *v23; // [rsp+50h] [rbp-1h] BYREF
  struct IRenderTarget *v24; // [rsp+58h] [rbp+7h] BYREF
  const char *v25; // [rsp+60h] [rbp+Fh] BYREF
  int v26; // [rsp+68h] [rbp+17h]
  _BYTE v27[8]; // [rsp+70h] [rbp+1Fh] BYREF
  int v28; // [rsp+78h] [rbp+27h]
  float v29; // [rsp+C0h] [rbp+6Fh] BYREF
  float v30; // [rsp+C4h] [rbp+73h]

  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v7 = *((_QWORD *)a2 + 49);
  v20 = 0LL;
  v28 = 0;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v24);
  v26 = 19;
  v25 = "DWM DropShadow Blur";
  v8 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v25, a3, 0, &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x268u);
    goto LABEL_17;
  }
  v10 = v24;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v24 + 152LL))(v24, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v10 + 200LL))(v10, (unsigned int)DisplayId::None);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v23);
  v11 = CRenderTargetImageSource::Create(v10, 0, &v23);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x271u);
    goto LABEL_15;
  }
  v12 = *((_QWORD *)this + 18);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v22);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 72LL))(v12, &v22);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x274u);
    goto LABEL_15;
  }
  ID2DContextOwner::GetCurrentRenderTargetInfo(
    (struct CDrawingContext *)((char *)a2 + 8),
    (struct RenderTargetInfo *)v27);
  v14 = v22;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v21);
  v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 112LL))(
          v14,
          v27,
          0LL,
          0LL,
          &v21);
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x27Cu);
    goto LABEL_15;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 256LL))(v7, 8LL, &v20);
  v9 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x27Fu);
    goto LABEL_15;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v20 + 112LL))(v20, 0LL, v21, 1LL);
  v29 = a4 / 3.0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, float *, int))(*(_QWORD *)v20 + 72LL))(v20, 0LL, 0LL, &v29, 4);
  LODWORD(v29) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v20 + 72LL))(v20, 1LL, 0LL, &v29, 4);
  v29 = 0.0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v20 + 72LL))(v20, 2LL, 0LL, &v29, 4);
  v29 = a4;
  v30 = a4;
  v17 = CDrawingContext::FillEffect(a2, v20, 0LL, (__int64)&v29, 1);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x28Cu);
LABEL_15:
    CDrawingContext::PopLayer(a2);
    goto LABEL_17;
  }
  v18 = CDrawingContext::PopLayer(a2);
  v9 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x291u);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>((__int64 *)this + 19, (__int64 *)&v23);
LABEL_17:
  if ( v20 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v20 + 112LL))(v20, 0LL, 0LL, 1LL);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v24);
  return v9;
}
