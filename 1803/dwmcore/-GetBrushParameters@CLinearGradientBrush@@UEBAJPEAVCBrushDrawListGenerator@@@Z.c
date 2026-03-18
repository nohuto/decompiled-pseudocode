/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180011A40
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180098B70 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180011930 (-InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRec.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011D9C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180076F8C (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180096F50 (-GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800B2E7C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800C1D78 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CLinearGradientBrush *this,
        const struct CDrawingContext **a2)
{
  int CurrentSurface; // ebx
  bool v5; // zf
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  CComponentTransform2D *v12; // rcx
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  void (*v15)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *); // rax
  unsigned int v16; // ecx
  float *v17; // rax
  float v18; // xmm1_4
  float v19; // xmm6_4
  struct D2D_SIZE_U Size; // rax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  CSurfaceDrawListBrush *v24; // rcx
  CSurfaceDrawListBrush *v25; // rax
  __int64 v26; // rcx
  unsigned int v28; // eax
  _BYTE v29[16]; // [rsp+38h] [rbp-79h] BYREF
  D2D_SIZE_F v30; // [rsp+48h] [rbp-69h] BYREF
  struct IImageSource *v31; // [rsp+50h] [rbp-61h] BYREF
  CSurfaceDrawListBrush *v32; // [rsp+58h] [rbp-59h] BYREF
  __int128 v33; // [rsp+60h] [rbp-51h] BYREF
  char v34; // [rsp+70h] [rbp-41h]
  struct D2D_MATRIX_3X2_F v35; // [rsp+78h] [rbp-39h] BYREF
  float v36; // [rsp+90h] [rbp-21h] BYREF
  float v37; // [rsp+94h] [rbp-1Dh]
  float v38; // [rsp+98h] [rbp-19h]
  float v39; // [rsp+9Ch] [rbp-15h]
  float v40; // [rsp+A0h] [rbp-11h]
  int v41; // [rsp+A4h] [rbp-Dh]
  float v42; // [rsp+A8h] [rbp-9h]
  int v43; // [rsp+ACh] [rbp-5h]
  int v44; // [rsp+B0h] [rbp-1h]
  float v45; // [rsp+B4h] [rbp+3h]
  float v46; // [rsp+B8h] [rbp+7h] BYREF
  float v47; // [rsp+BCh] [rbp+Bh]
  float v48; // [rsp+C0h] [rbp+Fh]
  float v49; // [rsp+C4h] [rbp+13h]
  float v50; // [rsp+C8h] [rbp+17h]
  float v51; // [rsp+CCh] [rbp+1Bh]
  int v52; // [rsp+D0h] [rbp+1Fh]
  float v53; // [rsp+D4h] [rbp+23h]
  float v54; // [rsp+D8h] [rbp+27h]

  v32 = 0LL;
  v31 = 0LL;
  v34 = 0;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v31);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this);
  if ( CurrentSurface < 0 )
  {
    v28 = 146;
    goto LABEL_26;
  }
  CurrentSurface = CDrawListBitmap::FromImageSource((CDrawListBitmap *)&v33, v31, *a2, 0);
  if ( CurrentSurface < 0 )
  {
    v28 = 148;
    goto LABEL_26;
  }
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
  v5 = *((_DWORD *)this + 25) == 1;
  v6 = *((float *)this + 44);
  v7 = *((float *)this + 45);
  v8 = *((float *)this + 46);
  v9 = *((float *)this + 47);
  v46 = v6;
  v47 = v7;
  v48 = v8;
  v49 = v9;
  if ( v5 )
  {
    v10 = *((float *)a2 + 3);
    v8 = v8 * *((float *)a2 + 2);
    v11 = *((float *)a2 + 2) * v6;
    v48 = v8;
    v46 = v11;
    v6 = v11;
    v49 = v10 * v9;
    v9 = v10 * v9;
    v47 = v10 * v7;
    v7 = v10 * v7;
  }
  v12 = (CComponentTransform2D *)*((_QWORD *)this + 20);
  v50 = v6 - (float)(v9 - v7);
  v51 = (float)(v8 - v6) + v7;
  if ( v12 )
  {
    v13 = (__m128)LODWORD(v38);
    v14 = (__m128)LODWORD(v39);
    v13.m128_f32[0] = v38 - v36;
    v14.m128_f32[0] = v39 - v37;
    v30 = (D2D_SIZE_F)_mm_unpacklo_ps(v13, v14).m128_u64[0];
    v15 = *(void (**)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v12 + 176LL);
    if ( v15 == CComponentTransform2D::GetRealization )
      CComponentTransform2D::GetRealization(v12, &v30, &v35);
    else
      ((void (__fastcall *)(CComponentTransform2D *, D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))v15)(v12, &v30, &v35);
    v16 = 0;
    v17 = &v46;
    do
    {
      ++v16;
      v18 = (float)(v35.m12 * *v17) + (float)(v35.m22 * v17[1]);
      *v17 = (float)((float)(v35.m21 * v17[1]) + (float)(v35.m11 * *v17)) + v35.dx;
      v17[1] = v18 + v35.dy;
      v17 += 2;
    }
    while ( v16 < 3 );
  }
  CurrentSurface = CLinearGradientBrush::InferVisualToTextureTransform((__int64)this, &v46, (__int64)&v36);
  if ( CurrentSurface < 0 )
  {
    v28 = 188;
    goto LABEL_26;
  }
  v19 = v37 + 0.5;
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)&v33);
  v47 = 0.0;
  v48 = 0.0;
  v21 = *(_DWORD *)(*(_QWORD *)&Size + 4LL);
  v41 = 0;
  v43 = 0;
  v50 = 0.0;
  v51 = 0.0;
  v54 = FLOAT_1_0;
  v46 = v40;
  v49 = v42;
  v45 = v19 / (float)v21;
  v53 = v45;
  v52 = v44;
  v29[0] = InterpolationMode::FromD2D1InterpolationMode(1LL, v22, v23);
  v29[1] = *((_BYTE *)this + 96);
  *(_OWORD *)&v35.m11 = (unsigned __int64)&v32;
  v29[2] = 1;
  LOBYTE(v35.m[2][0]) = 1;
  CurrentSurface = CSurfaceDrawListBrush::CreateWithTextureTransform(&v33, v29, &v46, v35.m[1]);
  if ( LOBYTE(v35.m[2][0]) )
  {
    v24 = **(CSurfaceDrawListBrush ***)&v35.m11;
    **(_QWORD **)&v35.m11 = *(_QWORD *)&v35.m[1][0];
    if ( v24 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v24, 1u);
  }
  if ( CurrentSurface < 0 )
  {
    v28 = 203;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"\a", 1u, CurrentSurface, v28);
    CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
    goto LABEL_18;
  }
  v25 = v32;
  v32 = 0LL;
  v30 = (D2D_SIZE_F)v25;
  CBrushDrawListGenerator::AttachInput(a2, 0LL, &v30);
  if ( v30 )
    ((void (__fastcall *)(_QWORD, _QWORD))std::default_delete<CDrawListBrush>::operator())(v26, v30);
  CurrentSurface = 0;
LABEL_18:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v33 + 8);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v31);
  if ( v32 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v32, 1u);
  return (unsigned int)CurrentSurface;
}
