/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180071090
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180024990 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180046C8C (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x180070E28 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180070F84 (-InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRec.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800716F8 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180095178 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CComponentTransform2D **this,
        const struct CDrawingContext **a2)
{
  int CurrentSurface; // eax
  int v5; // ebx
  CComponentTransform2D *v6; // rcx
  unsigned int v7; // xmm3_4
  unsigned int v8; // xmm2_4
  float v9; // xmm1_4
  __m128 right_low; // xmm0
  __m128 bottom_low; // xmm1
  unsigned int v12; // ecx
  float *v13; // rax
  float v14; // xmm0_4
  float v15; // xmm6_4
  struct D2D_SIZE_U Size; // rax
  int v17; // ecx
  __int128 v18; // kr00_16
  CSurfaceDrawListBrush *v19; // rcx
  CSurfaceDrawListBrush *v20; // r8
  CSurfaceDrawListBrush *(__fastcall *v22)(CSurfaceDrawListBrush *, char); // rax
  unsigned int v23; // [rsp+28h] [rbp-E0h]
  _BYTE v24[8]; // [rsp+48h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v25; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_SIZE_F v26; // [rsp+58h] [rbp-B0h] BYREF
  struct IImageSource *v27; // [rsp+60h] [rbp-A8h] BYREF
  struct IImageSource *v28[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  struct D2D_MATRIX_3X2_F v30; // [rsp+80h] [rbp-88h] BYREF
  int v31; // [rsp+98h] [rbp-70h]
  float v32; // [rsp+9Ch] [rbp-6Ch]
  int v33; // [rsp+A0h] [rbp-68h]
  struct D2D_RECT_F v34; // [rsp+A8h] [rbp-60h] BYREF
  FLOAT v35; // [rsp+B8h] [rbp-50h]
  unsigned int v36; // [rsp+BCh] [rbp-4Ch]
  FLOAT v37; // [rsp+C0h] [rbp-48h]
  unsigned int v38; // [rsp+C4h] [rbp-44h]
  int v39; // [rsp+C8h] [rbp-40h]
  float v40; // [rsp+CCh] [rbp-3Ch]
  __int128 v41; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v42; // [rsp+E0h] [rbp-28h]
  int v43; // [rsp+F0h] [rbp-18h]

  v25 = 0LL;
  v27 = 0LL;
  LOBYTE(v29) = 0;
  *(_OWORD *)v28 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this, *a2, &v27, &v34);
  v5 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v23 = 124;
    goto LABEL_27;
  }
  CurrentSurface = CDrawListBitmap::FromImageSource((CDrawListBitmap *)v28, v27, *a2, 0, 0);
  v5 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v23 = 126;
    goto LABEL_27;
  }
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
  v6 = this[20];
  *(float *)&v7 = *((float *)a2 + 2) * *((float *)this + 44);
  *(float *)&v8 = *((float *)a2 + 3) * *((float *)this + 45);
  v9 = *((float *)a2 + 3) * *((float *)this + 47);
  *((float *)&v41 + 2) = *((float *)a2 + 2) * *((float *)this + 46);
  *(_QWORD *)&v41 = __PAIR64__(v8, v7);
  *((float *)&v41 + 3) = v9;
  *((float *)&v42 + 1) = (float)(*((float *)&v41 + 2) - *(float *)&v7) + *(float *)&v8;
  *(float *)&v42 = *(float *)&v7 - (float)(v9 - *(float *)&v8);
  if ( v6 )
  {
    right_low = (__m128)LODWORD(v34.right);
    bottom_low = (__m128)LODWORD(v34.bottom);
    right_low.m128_f32[0] = v34.right - v34.left;
    bottom_low.m128_f32[0] = v34.bottom - v34.top;
    v26 = (struct D2D_SIZE_F)_mm_unpacklo_ps(right_low, bottom_low).m128_u64[0];
    CComponentTransform2D::GetRealization(v6, &v26, &v30);
    v12 = 0;
    v13 = (float *)&v41;
    do
    {
      ++v12;
      v14 = (float)(v30.m12 * *v13) + (float)(v13[1] * v30.m22);
      *v13 = (float)((float)(*v13 * v30.m11) + (float)(v13[1] * v30.m21)) + v30.dx;
      v13[1] = v14 + v30.dy;
      v13 += 2;
    }
    while ( v12 < 3 );
  }
  CurrentSurface = CLinearGradientBrush::InferVisualToTextureTransform((__int64)this, (float *)&v41, (__int64)&v34);
  v5 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v23 = 158;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentSurface, v23);
    goto LABEL_28;
  }
  v15 = v34.top + 0.5;
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)v28, &v26);
  LOBYTE(v30.m[2][0]) = 1;
  v17 = *(_DWORD *)(*(_QWORD *)&Size + 4LL);
  v36 = 0;
  v38 = 0;
  *(_OWORD *)&v30.m11 = (unsigned __int64)&v25;
  v40 = v15 / (float)v17;
  v34 = 0LL;
  v5 = CSurfaceDrawListBrush::Create(
         (const struct CDrawListBitmap *)v28,
         &v34,
         (struct CSurfaceDrawListBrush **)v30.m[1]);
  if ( LOBYTE(v30.m[2][0]) )
  {
    v18 = *(_OWORD *)&v30.m11;
    v19 = **(CSurfaceDrawListBrush ***)&v30.m11;
    if ( *(_QWORD *)&v30.m[1][0] != **(_QWORD **)&v30.m11 )
    {
      if ( v19 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1);
      *(_QWORD *)v18 = *((_QWORD *)&v18 + 1);
    }
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xACu);
LABEL_28:
    CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
    goto LABEL_15;
  }
  *(_QWORD *)&v30.m[0][1] = v36;
  v30.m11 = v35;
  *(_QWORD *)&v30.m[2][0] = v38;
  v30.m22 = v37;
  v32 = v40;
  v31 = v39;
  v33 = 1065353216;
  v41 = _xmm;
  v43 = 1065353216;
  v42 = _xmm;
  v24[0] = InterpolationMode::FromD2D1InterpolationMode(1);
  v24[1] = *((_BYTE *)this + 105);
  v24[2] = 1;
  CDrawListBrush::SetBrushPrimitiveLayout((__int64)v25, (__int64)&v41, (__int64)v24, (__int64)&v30, 0LL, 50529027, 0LL);
  v20 = v25;
  v25 = 0LL;
  v26 = (struct D2D_SIZE_F)v20;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (CSurfaceDrawListBrush **)&v26);
  if ( v26 )
  {
    v22 = ***(CSurfaceDrawListBrush *(__fastcall ****)(CSurfaceDrawListBrush *, char))&v26;
    if ( v22 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v26, 1);
    }
    else if ( (char *)v22 == (char *)CGeometryOnlyDrawListBrush::`vector deleting destructor' )
    {
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)&v26, 1u);
    }
    else
    {
      v22(*(CSurfaceDrawListBrush **)&v26, 1);
    }
  }
  v5 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v28[1]);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v28);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  if ( v25 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v25, 1);
  return (unsigned int)v5;
}
