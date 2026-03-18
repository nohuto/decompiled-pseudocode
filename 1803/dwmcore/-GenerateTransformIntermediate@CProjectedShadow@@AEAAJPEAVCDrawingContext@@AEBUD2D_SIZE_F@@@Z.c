/*
 * XREFs of ?GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B484C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B6640 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006EC50 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180089E50 (-InternalAddRef@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x18018895C (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 *     ?GetTransformIntermediateProjectionMatrix@CProjectedShadow@@AEBA?AVCMILMatrix@@PEAVCDrawingContext@@@Z @ 0x1801B5D14 (-GetTransformIntermediateProjectionMatrix@CProjectedShadow@@AEBA-AVCMILMatrix@@PEAVCDrawingConte.c)
 */

__int64 __fastcall CProjectedShadow::GenerateTransformIntermediate(
        CProjectedShadow *this,
        struct IRenderTarget **a2,
        const struct D2D_SIZE_F *a3)
{
  int v6; // eax
  int v7; // ebx
  struct IRenderTarget *v8; // rbx
  int v9; // eax
  CRenderTargetImageSource *v10; // rbx
  __int64 v11; // rbx
  __int64 TransformIntermediateProjectionMatrix; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  struct IImageSource *v16; // rbx
  CDrawingContext *v17; // rcx
  int v18; // eax
  unsigned int v20; // [rsp+28h] [rbp-89h]
  struct CRenderTargetImageSource *v21; // [rsp+38h] [rbp-79h] BYREF
  struct IRenderTarget *v22; // [rsp+40h] [rbp-71h] BYREF
  CRenderTargetImageSource *v23; // [rsp+48h] [rbp-69h] BYREF
  int v24; // [rsp+50h] [rbp-61h]
  __int64 v25[2]; // [rsp+58h] [rbp-59h] BYREF
  _OWORD v26[4]; // [rsp+68h] [rbp-49h] BYREF
  int v27; // [rsp+A8h] [rbp-9h]
  _BYTE v28[80]; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v29; // [rsp+130h] [rbp+7Fh] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v29 = 0LL;
  v25[0] = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v22);
  v24 = 29;
  v23 = (CRenderTargetImageSource *)"DWM ProjectedShadow Transform";
  v6 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v23, a3, 0, &v22);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x258u);
    goto LABEL_18;
  }
  v8 = v22;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v22 + 144LL))(v22, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v8 + 248LL))(v8, (unsigned int)DisplayId::None);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v21);
  v9 = CRenderTargetImageSource::Create(v8, 0, &v21);
  v7 = v9;
  if ( v9 < 0 )
  {
    v20 = 608;
    goto LABEL_15;
  }
  v23 = *(CRenderTargetImageSource **)(*((_QWORD *)this + 9) + 136LL);
  v10 = v23;
  Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  v7 = (*(__int64 (__fastcall **)(CRenderTargetImageSource *, __int64 *))(*(_QWORD *)v10 + 80LL))(v10, &v29);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v23);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x263u);
    goto LABEL_16;
  }
  v11 = v29;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v25);
  v9 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 136LL))(
         v11,
         (char *)a2 + 392,
         0LL,
         0LL,
         v25);
  v7 = v9;
  if ( v9 < 0 )
  {
    v20 = 617;
    goto LABEL_15;
  }
  TransformIntermediateProjectionMatrix = CProjectedShadow::GetTransformIntermediateProjectionMatrix(this, v28, a2);
  v13 = *(_OWORD *)(TransformIntermediateProjectionMatrix + 16);
  v26[0] = *(_OWORD *)TransformIntermediateProjectionMatrix;
  v14 = *(_OWORD *)(TransformIntermediateProjectionMatrix + 32);
  v26[1] = v13;
  v15 = *(_OWORD *)(TransformIntermediateProjectionMatrix + 48);
  LODWORD(TransformIntermediateProjectionMatrix) = *(_DWORD *)(TransformIntermediateProjectionMatrix + 64);
  v26[2] = v14;
  v26[3] = v15;
  v27 = TransformIntermediateProjectionMatrix;
  v9 = CDrawingContext::PushTransformInternal((CDrawingContext *)a2, 0LL, (const struct CMILMatrix *)v26, 0, 1);
  v7 = v9;
  if ( v9 < 0 )
  {
    v20 = 621;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v20);
    goto LABEL_16;
  }
  v23 = *(CRenderTargetImageSource **)(*((_QWORD *)this + 9) + 136LL);
  v16 = v23;
  Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(&v23);
  v7 = CDrawingContext::DrawBitmap((CDrawingContext *)a2, v16, 0);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v23);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x270u);
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
LABEL_16:
    CDrawingContext::PopLayer((CDrawingContext *)a2);
    goto LABEL_18;
  }
  CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  v18 = CDrawingContext::PopLayer(v17);
  v7 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x277u);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>(
      (CRenderTargetImageSource **)this + 12,
      &v21);
LABEL_18:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v22);
  return (unsigned int)v7;
}
