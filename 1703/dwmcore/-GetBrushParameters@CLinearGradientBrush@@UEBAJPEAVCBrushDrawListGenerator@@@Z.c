/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A5C0
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180039590 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x18001A430 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18001A4AC (-InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@PEAUD2D_MATRI.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800379F0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800585B8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180059D68 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x180079B40 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00 (-Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800ABFD4 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800C2F24 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CLinearGradientBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  CComponentTransform2D *v4; // rcx
  unsigned int v5; // xmm3_4
  unsigned int v6; // xmm2_4
  float v7; // xmm1_4
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  unsigned int v10; // ecx
  struct D2D_SIZE_F *v11; // rax
  __m128 m21_low; // xmm2
  __m128 m22_low; // xmm1
  CCompositionSurfaceBitmap *v14; // rcx
  __int64 (__fastcall *v15)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  int v17; // ebx
  void (__fastcall *v18)(CDxHandleBitmapRealization *__hidden, unsigned int *, unsigned int *); // rax
  int v19; // eax
  float v20; // xmm1_4
  struct IImageSource *v21; // rcx
  __int128 v22; // kr00_16
  CSurfaceDrawListBrush *v23; // rcx
  CSurfaceDrawListBrush *v24; // r8
  void *(__fastcall *v26)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  unsigned int v27; // [rsp+20h] [rbp-89h]
  _BYTE v28[4]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-65h] BYREF
  CSurfaceDrawListBrush *v30; // [rsp+48h] [rbp-61h] BYREF
  struct D2D_SIZE_F v31[2]; // [rsp+50h] [rbp-59h] BYREF
  CDxHandleBitmapRealization *v32; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-41h] BYREF
  struct D2D_MATRIX_3X2_F v34; // [rsp+70h] [rbp-39h] BYREF
  __int64 v35; // [rsp+88h] [rbp-21h]
  int v36; // [rsp+90h] [rbp-19h]
  struct D2D_MATRIX_3X2_F v37; // [rsp+98h] [rbp-11h] BYREF
  _OWORD v38[2]; // [rsp+B0h] [rbp+7h] BYREF
  int v39; // [rsp+D0h] [rbp+27h]

  v30 = 0LL;
  v32 = 0LL;
  CBrushDrawListGenerator::Reset(a2);
  v4 = (CComponentTransform2D *)*((_QWORD *)this + 14);
  *(float *)&v5 = *((float *)a2 + 2) * *((float *)this + 34);
  *(float *)&v6 = *((float *)a2 + 3) * *((float *)this + 35);
  v7 = *((float *)a2 + 3) * *((float *)this + 37);
  *((float *)v38 + 2) = *((float *)a2 + 2) * *((float *)this + 36);
  *(_QWORD *)&v38[0] = __PAIR64__(v6, v5);
  *((float *)v38 + 3) = v7;
  *((float *)&v38[1] + 1) = (float)(*((float *)v38 + 2) - *(float *)&v5) + *(float *)&v6;
  *(float *)&v38[1] = *(float *)&v5 - (float)(v7 - *(float *)&v6);
  if ( v4 )
  {
    v8 = (__m128)*((unsigned int *)this + 32);
    v9 = (__m128)*((unsigned int *)this + 33);
    v8.m128_f32[0] = v8.m128_f32[0] - *((float *)this + 30);
    v9.m128_f32[0] = v9.m128_f32[0] - *((float *)this + 31);
    v31[0] = (struct D2D_SIZE_F)_mm_unpacklo_ps(v8, v9).m128_u64[0];
    CComponentTransform2D::GetRealization(v4, v31, &v34);
    v10 = 0;
    v11 = (struct D2D_SIZE_F *)v38;
    do
    {
      ++v10;
      m21_low = (__m128)LODWORD(v34.m21);
      m22_low = (__m128)LODWORD(v34.m22);
      v31[0] = *v11;
      m21_low.m128_f32[0] = (float)((float)(v34.m21 * v31[0].height) + (float)(v34.m11 * v31[0].width)) + v34.dx;
      m22_low.m128_f32[0] = (float)((float)(v34.m22 * v31[0].height) + (float)(v34.m12 * v31[0].width)) + v34.dy;
      *v11++ = (struct D2D_SIZE_F)_mm_unpacklo_ps(m21_low, m22_low).m128_u64[0];
    }
    while ( v10 < 3 );
  }
  v14 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 13);
  v15 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **))(*(_QWORD *)v14 + 72LL);
  if ( v15 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v14, &v32);
  else
    CurrentRenderingRealization = v15(v14, &v32);
  v17 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    v27 = 244;
    goto LABEL_29;
  }
  v18 = *(void (__fastcall **)(CDxHandleBitmapRealization *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v32 + 24LL);
  if ( v18 == CDxHandleBitmapRealization::GetSize )
    CDxHandleBitmapRealization::GetSize(v32, &v33, &v29);
  else
    v18(v32, &v33, &v29);
  v19 = CLinearGradientBrush::InferVisualToTextureTransform(this, (struct D2D_POINT_2F (*)[3])v38, &v37);
  v17 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xFCu);
LABEL_30:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_18;
  }
  v20 = *((float *)this + 31) + 0.5;
  v21 = (struct IImageSource *)*((_QWORD *)this + 13);
  v37.m12 = 0.0;
  v37.m22 = 0.0;
  LOBYTE(v34.m[2][0]) = 1;
  *(_OWORD *)&v34.m11 = (unsigned __int64)&v30;
  v37.dy = v20 / (float)(int)v29;
  *(_OWORD *)&v31[0].width = 0LL;
  v17 = CSurfaceDrawListBrush::Create(v21, (const struct D2D_RECT_F *)v31, (struct CSurfaceDrawListBrush **)v34.m[1]);
  if ( LOBYTE(v34.m[2][0]) )
  {
    v22 = *(_OWORD *)&v34.m11;
    v23 = **(CSurfaceDrawListBrush ***)&v34.m11;
    if ( *(_QWORD *)&v34.m[1][0] != **(_QWORD **)&v34.m11 )
    {
      if ( v23 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v23, 1u);
      *(_QWORD *)v22 = *((_QWORD *)&v22 + 1);
    }
  }
  if ( v17 < 0 )
  {
    v27 = 266;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v27);
    goto LABEL_30;
  }
  *(_QWORD *)&v34.m[0][1] = LODWORD(v37.m12);
  v34.m11 = v37.m11;
  *(_QWORD *)&v34.m[2][0] = LODWORD(v37.m22);
  v34.m22 = v37.m21;
  v35 = *(_QWORD *)&v37.m[2][0];
  v36 = 1065353216;
  v38[0] = _xmm;
  v39 = 1065353216;
  v38[1] = _xmm;
  v28[0] = InterpolationMode::FromD2D1InterpolationMode(1LL);
  v28[1] = *((_BYTE *)this + 152);
  v28[2] = 1;
  CDrawListBrush::SetBrushPrimitiveLayout((__int64)v30, (__int64)v38, (__int64)v28, (__int64)&v34, 0LL, 50529027, 0LL);
  v24 = v30;
  v30 = 0LL;
  v31[0] = (struct D2D_SIZE_F)v24;
  CBrushDrawListGenerator::AttachInput(a2, 0LL, v31);
  if ( v31[0] )
  {
    v26 = ***(void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))v31;
    if ( v26 == CSurfaceDrawListBrush::`vector deleting destructor' )
      CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)v31, 1u);
    else
      v26(*(CSurfaceDrawListBrush **)v31, 1u);
  }
  v17 = 0;
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v32);
  if ( v30 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v30, 1u);
  return (unsigned int)v17;
}
