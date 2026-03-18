/*
 * XREFs of ?GenerateBlurIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18019FD0C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0EF4 (-UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
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

__int64 __fastcall CProjectedShadowCaster::GenerateBlurIntermediate(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  struct IRenderTarget *v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  struct CRenderTargetImageSource *v21; // [rsp+40h] [rbp-20h] BYREF
  struct IRenderTarget *v22; // [rsp+48h] [rbp-18h] BYREF
  const char *v23; // [rsp+50h] [rbp-10h] BYREF
  int v24; // [rsp+58h] [rbp-8h]
  float v25; // [rsp+98h] [rbp+38h] BYREF
  float v26; // [rsp+9Ch] [rbp+3Ch]
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v6 = *((_QWORD *)a2 + 48);
  v27 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v22);
  v24 = 24;
  v23 = "DWM ProjectedShadow Blur";
  v7 = CDrawingContext::PushOffScreenRenderingLayer(
         (struct IRenderTarget **)a2,
         (const struct CResourceTag *)&v23,
         a3,
         0,
         &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x242u);
    goto LABEL_17;
  }
  v9 = v22;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v22 + 144LL))(v22, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v9 + 248LL))(v9, (unsigned int)DisplayId::None);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v21);
  v10 = CRenderTargetImageSource::Create(v9, 0, &v21);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x24Bu);
    goto LABEL_15;
  }
  v11 = *((_QWORD *)this + 15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 80LL))(v11, &v20);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x24Eu);
    goto LABEL_15;
  }
  v13 = v20;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  v14 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v13 + 136LL))(
          v13,
          (char *)a2 + 392,
          0LL,
          0LL,
          &v19);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x254u);
    goto LABEL_15;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 224LL))(v6, 6LL, &v27);
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x257u);
    goto LABEL_15;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v27 + 112LL))(v27, 0LL, v19, 1LL);
  v25 = *((float *)this + 23) / 3.0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, float *, int))(*(_QWORD *)v27 + 72LL))(v27, 0LL, 0LL, &v25, 4);
  LODWORD(v25) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v27 + 72LL))(v27, 1LL, 0LL, &v25, 4);
  v25 = 0.0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v27 + 72LL))(v27, 2LL, 0LL, &v25, 4);
  v25 = *((float *)this + 23);
  v26 = v25;
  v16 = CDrawingContext::FillEffect(a2, v27, 0LL, (__int64)&v25);
  v8 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x264u);
LABEL_15:
    CDrawingContext::PopLayer(a2);
    goto LABEL_17;
  }
  v17 = CDrawingContext::PopLayer(a2);
  v8 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x269u);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>(
      (CRenderTargetImageSource **)this + 16,
      &v21);
LABEL_17:
  if ( v27 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v27 + 112LL))(v27, 0LL, 0LL, 1LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v22);
  return v8;
}
