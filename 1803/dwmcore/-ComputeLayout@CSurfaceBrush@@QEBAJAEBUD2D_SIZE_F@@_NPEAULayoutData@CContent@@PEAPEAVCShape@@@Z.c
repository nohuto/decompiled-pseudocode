/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300
 * Callers:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180003FF0 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180099560 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180099BF0 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180099D20 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099E90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18019DB00 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801A58D0 (-GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConten.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180047720 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800479A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1800641D0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18008AA10 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18008C630 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180096F50 (-GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800972A0 (-QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180097670 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x1800B414C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801A56AC (-GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18020A1C0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::ComputeLayout(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        bool a3,
        struct CContent::LayoutData *a4,
        struct CShape **a5)
{
  int v9; // r15d
  CCompositionSurfaceBitmap *v10; // rcx
  __int64 (__fastcall *v11)(CPrimitiveGroup *, const struct _GUID *, void **); // rax
  int v12; // eax
  __int64 v13; // rcx
  bool (__fastcall *v14)(__int64, int); // rax
  bool v15; // al
  __m128 v16; // xmm3
  __m128 v17; // xmm13
  float m12; // xmm5_4
  float m11; // xmm6_4
  float right; // xmm15_4
  float bottom; // xmm14_4
  unsigned __int64 v22; // xmm0_8
  int v23; // ecx
  float width; // xmm0_4
  float height; // xmm1_4
  __m128 v26; // xmm2
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm4_4
  __m128 width_low; // xmm2
  float v31; // xmm0_4
  float v32; // xmm3_4
  __m128 v33; // xmm2
  CComponentTransform2D *v34; // rcx
  __m128 v35; // xmm2
  __m128 m21_low; // xmm11
  float v37; // xmm4_4
  float v38; // xmm6_4
  __m128 v39; // xmm11
  __m128 v40; // xmm2
  __m128 v41; // xmm3
  __m128 v42; // xmm11
  __m128 v43; // xmm11
  __m128 v44; // xmm6
  unsigned __int64 v45; // xmm7_8
  void (__fastcall *v46)(CComponentTransform2D *, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *); // rax
  struct D2D_RECT_F v47; // xmm0
  CRectanglesShape *v48; // rdx
  void *v49; // rcx
  float v51; // xmm8_4
  float v52; // xmm9_4
  float v53; // xmm8_4
  float v54; // xmm9_4
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  CRectanglesShape *v59; // rdx
  __int64 (*v60)(void); // rax
  char IsEmpty; // al
  __int64 v62; // rcx
  __int64 v63; // rcx
  struct CShape *v64; // rax
  int SwapChainSize; // eax
  __int64 v66; // rax
  CCachedVisualImage *v67; // rcx
  int v68; // eax
  int v69; // eax
  unsigned int v70[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v71; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v72; // [rsp+58h] [rbp-B0h]
  void *v73; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_RECT_F v74; // [rsp+68h] [rbp-A0h] BYREF
  float v75[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v76; // [rsp+80h] [rbp-88h]
  unsigned __int32 v77; // [rsp+88h] [rbp-80h]
  unsigned __int32 v78; // [rsp+8Ch] [rbp-7Ch]
  __int64 v79; // [rsp+90h] [rbp-78h]
  __int128 v80; // [rsp+98h] [rbp-70h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-60h]
  int v82; // [rsp+B0h] [rbp-58h]
  float v83; // [rsp+B4h] [rbp-54h]
  int v84; // [rsp+B8h] [rbp-50h]
  __m128 v85; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v86; // [rsp+D8h] [rbp-30h]
  struct D2D_MATRIX_3X2_F v87; // [rsp+E0h] [rbp-28h] BYREF
  void **v88; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v89; // [rsp+100h] [rbp-8h]
  void *lpMem; // [rsp+108h] [rbp+0h] BYREF
  _BYTE *v91; // [rsp+110h] [rbp+8h]
  int v92; // [rsp+118h] [rbp+10h]
  __int64 v93; // [rsp+11Ch] [rbp+14h]
  _BYTE v94[16]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v95; // [rsp+138h] [rbp+30h]
  void **v96; // [rsp+148h] [rbp+40h] BYREF
  __int64 v97; // [rsp+150h] [rbp+48h]
  void *v98; // [rsp+158h] [rbp+50h] BYREF
  _BYTE *v99; // [rsp+160h] [rbp+58h]
  int v100; // [rsp+168h] [rbp+60h]
  __int64 v101; // [rsp+16Ch] [rbp+64h]
  _BYTE v102[16]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v103; // [rsp+188h] [rbp+80h]

  v9 = 0;
  if ( a2->width <= 0.0 || a2->height <= 0.0 || (v10 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 11)) == 0LL )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, -2003304441, 0x2F5u);
    return (unsigned int)v9;
  }
  *(_QWORD *)&v71.m11 = 0LL;
  v73 = 0LL;
  v11 = **(__int64 (__fastcall ***)(CPrimitiveGroup *, const struct _GUID *, void **))v10;
  if ( v11 == CCompositionSurfaceBitmap::QueryInterface )
  {
    v12 = CCompositionSurfaceBitmap::QueryInterface(v10, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v73);
  }
  else if ( v11 == CPrimitiveGroup::QueryInterface )
  {
    v12 = CPrimitiveGroup::QueryInterface(v10, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v73);
  }
  else
  {
    v12 = v11(v10, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v73);
  }
  if ( v12 >= 0 )
  {
    SwapChainSize = CSurfaceBrush::GetSwapChainSize(
                      this,
                      a3,
                      (struct D2D_SIZE_F *)&v87,
                      &v74,
                      (struct D2D_MATRIX_3X2_F *)v71.m[1]);
    v9 = SwapChainSize;
    if ( SwapChainSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, SwapChainSize, 0x307u);
LABEL_66:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v73);
      goto LABEL_68;
    }
    bottom = v74.bottom;
    right = v74.right;
    v17.m128_i32[0] = LODWORD(v74.left);
    m12 = v87.m12;
    m11 = v87.m11;
    v70[0] = LODWORD(v74.top);
  }
  else
  {
    v13 = *((_QWORD *)this + 11);
    v14 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v13 + 48LL);
    if ( v14 == CCompositionSurfaceBitmap::IsOfType )
    {
      v15 = CCompositionSurfaceBitmap::IsOfType(v13, 15);
    }
    else if ( v14 == CPrimitiveGroup::IsOfType )
    {
      v15 = CPrimitiveGroup::IsOfType(v13, 15);
    }
    else
    {
      v15 = v14(v13, 15);
    }
    if ( v15 )
    {
      v66 = *((_QWORD *)this + 11);
      v67 = (CCachedVisualImage *)(v66 - 16);
      if ( !v66 )
        v67 = 0LL;
      CCachedVisualImage::GetCurrentSize(v67, v70, (unsigned int *)&v87);
      v68 = v70[0];
      v70[0] = 0;
      v74.top = 0.0;
      v17.m128_i32[0] = 0;
      right = (float)v68;
      *(_OWORD *)&v71.m[1][0] = _xmm;
      bottom = (float)SLODWORD(v87.m11);
      m11 = (float)v68;
      v22 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_N0_0), (__m128)LODWORD(FLOAT_N0_0)).m128_u64[0];
      m12 = (float)SLODWORD(v87.m11);
    }
    else
    {
      v16 = (__m128)*((unsigned int *)this + 29);
      v17 = (__m128)*((unsigned int *)this + 28);
      m12 = *((float *)this + 31) - v16.m128_f32[0];
      m11 = *((float *)this + 30) - v17.m128_f32[0];
      right = *((float *)this + 30);
      bottom = *((float *)this + 31);
      v70[0] = *((_DWORD *)this + 29);
      LODWORD(v74.top) = v16.m128_i32[0];
      v22 = _mm_unpacklo_ps(_mm_xor_ps(v17, (__m128)(unsigned int)_xmm), _mm_xor_ps(v16, (__m128)(unsigned int)_xmm)).m128_u64[0];
      *(_OWORD *)&v71.m[1][0] = _xmm;
    }
    v74.bottom = bottom;
    v74.right = right;
    LODWORD(v74.left) = v17.m128_i32[0];
    v72 = v22;
  }
  v23 = *((_DWORD *)this + 20);
  *(_QWORD *)&v87.m11 = 0LL;
  if ( v23 )
  {
    if ( v23 == 1 )
    {
      width = a2->width;
      height = a2->height;
      *(_QWORD *)&v87.m11 = 0LL;
      v26 = _mm_shuffle_ps(*(__m128 *)&v87.m11, *(__m128 *)&v87.m11, 210);
      v26.m128_f32[0] = width;
      goto LABEL_19;
    }
    if ( (unsigned int)(v23 - 2) > 1 )
    {
      v29 = v87.m12;
      v27 = v87.m11;
    }
    else
    {
      v27 = a2->width;
      v28 = a2->height;
      v29 = a2->width / (float)(m11 / m12);
      if ( v29 >= v28 != (v23 == 3) )
      {
        v29 = a2->height;
        v27 = (float)(m11 / m12) * v28;
      }
    }
  }
  else
  {
    v27 = m11;
    v29 = m12;
  }
  width_low = (__m128)LODWORD(a2->width);
  width_low.m128_f32[0] = (float)(width_low.m128_f32[0] - v27) * *((float *)this + 18);
  v31 = (float)(a2->height - v29) * *((float *)this + 19);
  v32 = v27 + width_low.m128_f32[0];
  v33 = _mm_shuffle_ps(width_low, width_low, 225);
  v33.m128_f32[0] = v31;
  v26 = _mm_shuffle_ps(v33, v33, 198);
  height = v31 + v29;
  v26.m128_f32[0] = v32;
LABEL_19:
  v34 = (CComponentTransform2D *)*((_QWORD *)this + 13);
  v35 = _mm_shuffle_ps(v26, v26, 39);
  v35.m128_f32[0] = height;
  m21_low = (__m128)LODWORD(v71.m21);
  *(__m128 *)&v87.m11 = _mm_shuffle_ps(v35, v35, 57);
  v37 = (float)(v87.m21 - v87.m11) / m11;
  m21_low.m128_f32[0] = (float)(v71.m21 * v37) + (float)(v71.m22 * 0.0);
  v38 = (float)(v87.m22 - v87.m12) / m12;
  v39 = _mm_shuffle_ps(m21_low, m21_low, 225);
  v40 = (__m128)HIDWORD(v72);
  v41 = (__m128)(unsigned int)v72;
  v39.m128_f32[0] = (float)(v71.m22 * v38) + (float)(v71.m21 * 0.0);
  v42 = _mm_shuffle_ps(v39, v39, 198);
  v42.m128_f32[0] = (float)(v71.dx * v37) + (float)(v71.dy * 0.0);
  v43 = _mm_shuffle_ps(v42, v42, 39);
  v43.m128_f32[0] = (float)(v71.dy * v38) + (float)(v71.dx * 0.0);
  v40.m128_f32[0] = (float)(*((float *)&v72 + 1) * v38) + (float)(*(float *)&v72 * 0.0);
  v44 = _mm_shuffle_ps(v43, v43, 57);
  v41.m128_f32[0] = (float)((float)(*(float *)&v72 * v37) + (float)(*((float *)&v72 + 1) * 0.0)) + v87.m11;
  v40.m128_f32[0] = v40.m128_f32[0] + v87.m12;
  *(__m128 *)&v71.m[1][0] = v44;
  v72 = _mm_unpacklo_ps(v41, v40).m128_u64[0];
  v45 = v72;
  if ( v34 )
  {
    v46 = *(void (__fastcall **)(CComponentTransform2D *, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v34 + 176LL);
    if ( v46 == CComponentTransform2D::GetRealization )
      CComponentTransform2D::GetRealization(v34, a2, &v87);
    else
      v46(v34, a2, &v87);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v85,
      (const struct D2D1::Matrix3x2F *)v71.m[1],
      (const struct D2D1::Matrix3x2F *)&v87);
    v45 = v86;
    v44 = v85;
    v72 = v86;
  }
  if ( !a5 )
    goto LABEL_24;
  v51 = a2->width;
  v52 = a2->height;
  v98 = v102;
  v97 = 0LL;
  v99 = v102;
  v53 = v51 + 0.0;
  v96 = &CRectanglesShape::`vftable';
  v54 = v52 + 0.0;
  v100 = 1;
  v101 = 1LL;
  v103 = 0LL;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v98, 0x10u);
  if ( v103 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
    v103 = 0LL;
  }
  *(_QWORD *)&v87.m[1][0] = __PAIR64__(LODWORD(v54), LODWORD(v53));
  *(_QWORD *)&v87.m11 = 0LL;
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    (__int64)&v98,
    &v87,
    1u);
  v89 = 0LL;
  lpMem = v94;
  v88 = &CRectanglesShape::`vftable';
  v91 = v94;
  v92 = 1;
  v93 = 1LL;
  v95 = 0LL;
  DynArrayImpl<0>::ShrinkToSize((__int64)&lpMem, 0x10u);
  if ( v95 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
    v95 = 0LL;
  }
  *(_QWORD *)&v87.m11 = __PAIR64__(v70[0], v17.m128_u32[0]);
  *(_QWORD *)&v87.m[1][0] = __PAIR64__(LODWORD(bottom), LODWORD(right));
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    (__int64)&lpMem,
    &v87,
    1u);
  v75[0] = v44.m128_f32[0];
  LODWORD(v75[1]) = _mm_shuffle_ps(v44, v44, 85).m128_u32[0];
  *(_QWORD *)&v71.m[1][0] = &v71;
  v77 = _mm_shuffle_ps(v44, v44, 170).m128_u32[0];
  v80 = _xmm;
  v78 = _mm_shuffle_ps(v44, v44, 255).m128_u32[0];
  v81 = v72;
  v83 = FLOAT_1_0;
  v84 = 0;
  v76 = 0LL;
  v79 = 0LL;
  v82 = 0;
  *(_QWORD *)&v71.m[2][0] = 0LL;
  LOBYTE(v72) = 1;
  v56 = CShape::TryOptimizedCombinePaths(
          (struct CRectanglesShape *)&v96,
          v55,
          (CShape *)&v88,
          v75,
          1,
          (struct CShape **)v71.m[2]);
  v9 = v56;
  if ( v56 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x199u);
  }
  else if ( !*(_QWORD *)&v71.m[2][0] )
  {
    v69 = CShape::D2DCombine(&v96, v57, &v88, v75, 1, v71.m[2]);
    v9 = v69;
    if ( v69 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x1A8u);
  }
  if ( (_BYTE)v72 )
  {
    v58 = *(_QWORD *)&v71.m[1][0];
    v59 = **(CRectanglesShape ***)&v71.m[1][0];
    **(_QWORD **)&v71.m[1][0] = *(_QWORD *)&v71.m[2][0];
    if ( v59 )
      std::default_delete<CShape>::operator()(v58, v59);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, v9, 0x34Cu);
LABEL_65:
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v88);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v96);
    goto LABEL_66;
  }
  v60 = *(__int64 (**)(void))(**(_QWORD **)&v71.m11 + 16LL);
  if ( (char *)v60 == (char *)CRectanglesShape::IsEmpty )
    IsEmpty = CRectanglesShape::IsEmpty(*(CRectanglesShape **)&v71.m11);
  else
    IsEmpty = v60();
  if ( IsEmpty )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, -2003304441, 0x351u);
    goto LABEL_65;
  }
  v88 = &CRectanglesShape::`vftable';
  HIDWORD(v93) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&lpMem, 0x10u);
  if ( v95 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
    v95 = 0LL;
  }
  if ( lpMem != v91 )
  {
    operator delete(lpMem);
    lpMem = 0LL;
  }
  v62 = v89;
  if ( v89 )
  {
    v89 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  }
  v96 = &CRectanglesShape::`vftable';
  HIDWORD(v101) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v98, 0x10u);
  if ( v103 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
    v103 = 0LL;
  }
  if ( v98 != v99 )
  {
    operator delete(v98);
    v98 = 0LL;
  }
  v63 = v97;
  if ( v97 )
  {
    v97 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
  }
LABEL_24:
  v47 = v74;
  *(__m128 *)a4 = v44;
  *((_QWORD *)a4 + 2) = v45;
  *(struct D2D_RECT_F *)((char *)a4 + 24) = v47;
  if ( a5 )
  {
    v64 = *(struct CShape **)&v71.m11;
    v48 = 0LL;
    *(_QWORD *)&v71.m11 = 0LL;
    *a5 = v64;
  }
  else
  {
    v48 = *(CRectanglesShape **)&v71.m11;
  }
  v49 = v73;
  if ( !v73 )
    goto LABEL_27;
  v73 = 0LL;
  (*(void (__fastcall **)(void *, CRectanglesShape *))(*(_QWORD *)v49 + 16LL))(v49, v48);
LABEL_68:
  v48 = *(CRectanglesShape **)&v71.m11;
LABEL_27:
  if ( v48 )
    std::default_delete<CShape>::operator()((__int64)v49, v48);
  return (unsigned int)v9;
}
