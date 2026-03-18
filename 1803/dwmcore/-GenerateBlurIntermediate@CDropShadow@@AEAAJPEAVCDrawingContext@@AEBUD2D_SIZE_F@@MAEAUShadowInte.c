/*
 * XREFs of ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowIntermediates@1@@Z @ 0x180189550
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18018AC70 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180161240 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x18018895C (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 */

__int64 __fastcall CDropShadow::GenerateBlurIntermediate(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        struct CDropShadow::ShadowIntermediates *a5)
{
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  struct IRenderTarget *v10; // rbx
  int v11; // eax
  struct CDropShadow::ShadowIntermediates *v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22; // [rsp+38h] [rbp-38h] BYREF
  struct CRenderTargetImageSource *v23; // [rsp+40h] [rbp-30h] BYREF
  struct IRenderTarget *v24; // [rsp+48h] [rbp-28h] BYREF
  const char *v25; // [rsp+50h] [rbp-20h] BYREF
  int v26; // [rsp+58h] [rbp-18h]
  CDropShadow *v27; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+38h] BYREF

  v27 = this;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v7 = *((_QWORD *)a2 + 48);
  v28 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v24);
  v26 = 19;
  v25 = "DWM DropShadow Blur";
  v8 = CDrawingContext::PushOffScreenRenderingLayer(
         (struct IRenderTarget **)a2,
         (const struct CResourceTag *)&v25,
         a3,
         0,
         &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x23Fu);
    goto LABEL_17;
  }
  v10 = v24;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v24 + 144LL))(v24, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v10 + 248LL))(v10, (unsigned int)DisplayId::None);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v23);
  v11 = CRenderTargetImageSource::Create(v10, 0, &v23);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x248u);
    goto LABEL_15;
  }
  v12 = a5;
  v13 = *(_QWORD *)a5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 80LL))(v13, &v22);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x24Bu);
    goto LABEL_15;
  }
  v15 = v22;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  v16 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v15 + 136LL))(
          v15,
          (char *)a2 + 392,
          0LL,
          0LL,
          &v21);
  v9 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x251u);
    goto LABEL_15;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 224LL))(v7, 6LL, &v28);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x254u);
    goto LABEL_15;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v28 + 112LL))(v28, 0LL, v21, 1LL);
  *(float *)&v27 = a4 / 3.0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, CDropShadow **, int))(*(_QWORD *)v28 + 72LL))(v28, 0LL, 0LL, &v27, 4);
  LODWORD(v27) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, CDropShadow **, int))(*(_QWORD *)v28 + 72LL))(
    v28,
    1LL,
    0LL,
    &v27,
    4);
  LODWORD(v27) = 0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, CDropShadow **, int))(*(_QWORD *)v28 + 72LL))(
    v28,
    2LL,
    0LL,
    &v27,
    4);
  *(float *)&v27 = a4;
  *((float *)&v27 + 1) = a4;
  v18 = CDrawingContext::FillEffect(a2, v28, 0LL, (__int64)&v27);
  v9 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x261u);
LABEL_15:
    CDrawingContext::PopLayer(a2);
    goto LABEL_17;
  }
  v19 = CDrawingContext::PopLayer(a2);
  v9 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x266u);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>(
      (CRenderTargetImageSource **)v12 + 1,
      &v23);
LABEL_17:
  if ( v28 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v28 + 112LL))(v28, 0LL, 0LL, 1LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v24);
  return v9;
}
