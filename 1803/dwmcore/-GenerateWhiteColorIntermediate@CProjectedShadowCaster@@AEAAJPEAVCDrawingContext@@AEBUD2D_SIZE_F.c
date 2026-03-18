/*
 * XREFs of ?GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A01F0
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
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180161240 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x18018895C (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 */

__int64 __fastcall CProjectedShadowCaster::GenerateWhiteColorIntermediate(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v3; // r14
  int v7; // eax
  int v8; // ebx
  struct IRenderTarget *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // eax
  int v15; // [rsp+30h] [rbp-69h] BYREF
  __int64 v16; // [rsp+38h] [rbp-61h] BYREF
  __int64 v17; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+48h] [rbp-51h] BYREF
  struct CRenderTargetImageSource *v19; // [rsp+50h] [rbp-49h] BYREF
  struct IRenderTarget *v20; // [rsp+58h] [rbp-41h] BYREF
  const char *v21; // [rsp+60h] [rbp-39h] BYREF
  int v22; // [rsp+68h] [rbp-31h]
  _BYTE v23[60]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v24; // [rsp+ACh] [rbp+13h]
  __int64 v25; // [rsp+B4h] [rbp+1Bh]
  int v26; // [rsp+BCh] [rbp+23h]

  v3 = *((_QWORD *)a2 + 48);
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  memset_0(v23, 0, sizeof(v23));
  v24 = 0x3F8000003F800000LL;
  v26 = 0;
  v25 = 0x3F8000003F800000LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v20);
  v22 = 25;
  v21 = "DWM ProjectedShadow Color";
  v7 = CDrawingContext::PushOffScreenRenderingLayer(
         (struct IRenderTarget **)a2,
         (const struct CResourceTag *)&v21,
         a3,
         0,
         &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x29Bu);
    goto LABEL_23;
  }
  v9 = v20;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v20 + 144LL))(v20, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v9 + 248LL))(v9, (unsigned int)DisplayId::None);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v19);
  v8 = CRenderTargetImageSource::Create(v9, 0, &v19);
  if ( v8 < 0 )
  {
    v13 = 676;
    goto LABEL_21;
  }
  v10 = *((_QWORD *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 80LL))(v10, &v18);
  if ( v8 < 0 )
  {
    v13 = 679;
    goto LABEL_21;
  }
  v11 = v18;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  v8 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 136LL))(
         v11,
         (char *)a2 + 392,
         0LL,
         0LL,
         &v17);
  if ( v8 < 0 )
  {
    v13 = 685;
    goto LABEL_21;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 224LL))(v3, 0LL, &v16);
  if ( v8 < 0 )
  {
    v13 = 687;
    goto LABEL_21;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v16 + 112LL))(v16, 0LL, v17, 1LL);
  v15 = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v16 + 72LL))(v16, 1LL, 0LL, &v15, 4);
  if ( v8 < 0 )
  {
    v13 = 689;
    goto LABEL_21;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, int))(*(_QWORD *)v16 + 72LL))(
         v16,
         0LL,
         0LL,
         v23,
         80);
  if ( v8 < 0 )
  {
    v13 = 690;
    goto LABEL_21;
  }
  v15 = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v16 + 72LL))(v16, 2LL, 0LL, &v15, 4);
  if ( v8 < 0 )
  {
    v13 = 691;
    goto LABEL_21;
  }
  v8 = CDrawingContext::FillEffect(a2, v16, 0LL, 0LL);
  if ( v8 < 0 )
  {
    v13 = 697;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v13);
    CDrawingContext::PopLayer(a2);
    goto LABEL_23;
  }
  v12 = CDrawingContext::PopLayer(a2);
  v8 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2BDu);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>(
      (CRenderTargetImageSource **)this + 17,
      &v19);
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v8;
}
