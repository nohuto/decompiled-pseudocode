/*
 * XREFs of ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B7190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800B2E7C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800C48C4 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowBackdropBrush::GetBrushParameters(
        CWindowBackdropBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int WindowBackgroundTreatmentEffectInput; // eax
  int v4; // edi
  CSurfaceDrawListBrush *v5; // r8
  CSurfaceDrawListBrush *v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int16 v10; // [rsp+30h] [rbp-69h] BYREF
  char v11; // [rsp+32h] [rbp-67h]
  CSurfaceDrawListBrush *v12; // [rsp+40h] [rbp-59h] BYREF
  CSurfaceDrawListBrush *v13; // [rsp+48h] [rbp-51h] BYREF
  CSurfaceDrawListBrush **v14; // [rsp+50h] [rbp-49h]
  CSurfaceDrawListBrush *v15; // [rsp+58h] [rbp-41h] BYREF
  char v16; // [rsp+60h] [rbp-39h]
  __int128 v17; // [rsp+70h] [rbp-29h] BYREF
  char v18; // [rsp+80h] [rbp-19h]
  __int128 v19; // [rsp+88h] [rbp-11h]
  char v20; // [rsp+9Dh] [rbp+4h]
  _QWORD v21[8]; // [rsp+A0h] [rbp+7h] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v18 = 0;
  v21[0] = 0LL;
  v17 = 0LL;
  v21[1] = 0LL;
  EffectInput::Reset((struct EffectInput *)&v17);
  WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                           *(CDrawingContext **)a2,
                                           (const struct D2D_SIZE_F *)a2 + 1,
                                           (struct EffectInput *)&v17);
  if ( WindowBackgroundTreatmentEffectInput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowBackgroundTreatmentEffectInput, 0x32u);
LABEL_15:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_16;
  }
  if ( v20 )
  {
    v8 = v19;
    *((_BYTE *)a2 + 76) = 0;
    *(_OWORD *)((char *)a2 + 20) = v8;
    goto LABEL_16;
  }
  v12 = 0LL;
  v15 = 0LL;
  v10 = SamplerMode::k_ClampClampLinear;
  v11 = 1;
  v14 = &v12;
  v16 = 1;
  v4 = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64)&v17, &v10, v21, &v15);
  if ( v16 )
  {
    v5 = *v14;
    *v14 = v15;
    if ( v5 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v5, 1);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3Cu);
    if ( v12 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v12, 1);
    goto LABEL_15;
  }
  v6 = v12;
  v12 = 0LL;
  v13 = v6;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, &v13);
  if ( v13 )
    std::default_delete<CDrawListBrush>::operator()(v7, v13);
  if ( v12 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v12, 1);
LABEL_16:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17 + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v17);
  return 0LL;
}
