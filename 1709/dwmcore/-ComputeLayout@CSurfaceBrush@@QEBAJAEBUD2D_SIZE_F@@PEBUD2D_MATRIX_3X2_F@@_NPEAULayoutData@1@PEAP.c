/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1800C4D38
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180025800 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180025960 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180025B00 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801747B0 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetOpaqueBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x1801762F0 (-GetOpaqueBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180035280 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18008DC1C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180095178 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x1800B3674 (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800BB0EC (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C54F4 (-GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ComputeLayout(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        bool a4,
        struct CSurfaceBrush::LayoutData *a5,
        struct CShape **a6)
{
  DWORD v6; // edi
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 **); // rcx
  signed int SwapChainSize; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  struct CShape *v15; // rcx
  float bottom; // xmm9_4
  float right; // xmm10_4
  __m128 v18; // xmm11
  __m128 v19; // xmm12
  float height; // xmm6_4
  float width; // xmm7_4
  unsigned __int64 v22; // xmm0_8
  CComponentTransform2D *v23; // rcx
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm15_4
  struct D2D_RECT_F v27; // xmm7
  __m128 dx_low; // xmm14
  __m128 dy_low; // xmm13
  unsigned __int64 v30; // xmm6_8
  __m128 m22_low; // xmm6
  __m128 v32; // xmm0
  __m128 m11_low; // xmm6
  float m21; // xmm4_4
  float m11; // xmm2_4
  float m12; // xmm3_4
  __m128 v37; // xmm5
  float v38; // xmm0_4
  FLOAT v39; // xmm1_4
  float v40; // xmm1_4
  FLOAT v41; // xmm0_4
  __int64 v42; // rdx
  struct D2D_RECT_F v43; // xmm0
  struct CShape *v44; // rax
  __int64 *v45; // rdx
  struct D2D_SIZE_F v47; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v48; // [rsp+40h] [rbp-C8h] BYREF
  struct CShape *v49; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v50; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v51; // [rsp+60h] [rbp-A8h]
  float v52; // [rsp+68h] [rbp-A0h] BYREF
  float left; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct D2D_RECT_F v54; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v55[6]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-68h]
  __int64 v57; // [rsp+A8h] [rbp-60h]
  int v58; // [rsp+B0h] [rbp-58h]
  int v59; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C0h] [rbp-48h]
  __int64 v62; // [rsp+C4h] [rbp-44h]
  struct D2D_MATRIX_3X2_F v63; // [rsp+D8h] [rbp-30h] BYREF
  struct D2D_RECT_F v64; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v65[64]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v66[64]; // [rsp+148h] [rbp+40h] BYREF

  v6 = 0;
  if ( a2->width <= 0.0
    || a2->height <= 0.0
    || (v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 12)) == 0LL )
  {
    v6 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024F8, 1u, 0x88980007, 0x2C7u);
    return v6;
  }
  v49 = 0LL;
  v48 = 0LL;
  if ( (**v11)(v11, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v48) < 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(
           *((_QWORD *)this + 12),
           15LL) )
    {
      CCachedVisualImage::GetCurrentSize(
        (CCachedVisualImage *)((*((_QWORD *)this + 12) - 16LL) & -(__int64)(*((_QWORD *)this + 12) != 0LL)),
        (unsigned int *)&v52,
        (unsigned int *)&left);
      v19.m128_i32[0] = 0;
      *(_OWORD *)&v63.m11 = _xmm;
      right = (float)SLODWORD(v52);
      v18.m128_i32[0] = 0;
      v54.left = 0.0;
      bottom = (float)SLODWORD(left);
      v54.top = 0.0;
      width = (float)SLODWORD(v52);
      v22 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_N0_0), (__m128)LODWORD(FLOAT_N0_0)).m128_u64[0];
      height = (float)SLODWORD(left);
    }
    else
    {
      v19 = (__m128)*((unsigned int *)this + 30);
      v18 = (__m128)*((unsigned int *)this + 31);
      width = *((float *)this + 32) - v19.m128_f32[0];
      height = *((float *)this + 33) - v18.m128_f32[0];
      right = *((float *)this + 32);
      bottom = *((float *)this + 33);
      v54.left = *((FLOAT *)this + 30);
      LODWORD(v54.top) = v18.m128_i32[0];
      v22 = _mm_unpacklo_ps(_mm_xor_ps(v19, (__m128)_xmm), _mm_xor_ps(v18, (__m128)_xmm)).m128_u64[0];
      *(_OWORD *)&v63.m11 = _xmm;
    }
    v54.bottom = bottom;
    v54.right = right;
    v47.height = height;
    v47.width = width;
    *(_QWORD *)&v63.m[2][0] = v22;
  }
  else
  {
    SwapChainSize = CSurfaceBrush::GetSwapChainSize(this, a4, &v47, &v54, &v63);
    v6 = SwapChainSize;
    if ( SwapChainSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024F8, 1u, SwapChainSize, 0x2D9u);
      goto LABEL_7;
    }
    bottom = v54.bottom;
    right = v54.right;
    v18.m128_i32[0] = LODWORD(v54.top);
    v19.m128_i32[0] = LODWORD(v54.left);
    height = v47.height;
    width = v47.width;
  }
  StretchAlign::Arrange((CSurfaceBrush *)((char *)this + 80), &v50, &v47, a2, &v64);
  dy_low = (__m128)LODWORD(v63.dy);
  v23 = (CComponentTransform2D *)*((_QWORD *)this + 14);
  v24 = (float)(v64.right - v64.left) / width;
  v25 = (float)(v64.bottom - v64.top) / height;
  v26 = (float)(v63.m12 * v25) + (float)(v63.m11 * 0.0);
  v50.left = (float)(v24 * v63.m11) + (float)(v63.m12 * 0.0);
  left = v50.left;
  v50.top = v26;
  dx_low = (__m128)LODWORD(v63.dx);
  v50.bottom = (float)(v63.m22 * v25) + (float)(v63.m21 * 0.0);
  v50.right = (float)(v63.m21 * v24) + (float)(v63.m22 * 0.0);
  v52 = v50.right;
  v47.width = v50.bottom;
  v27 = v50;
  dx_low.m128_f32[0] = (float)((float)(v63.dx * v24) + (float)(v63.dy * 0.0)) + v64.left;
  dy_low.m128_f32[0] = (float)((float)(v63.dy * v25) + (float)(v63.dx * 0.0)) + v64.top;
  v51 = _mm_unpacklo_ps(dx_low, dy_low).m128_u64[0];
  v30 = v51;
  if ( v23 )
  {
    CComponentTransform2D::GetRealization(v23, a2, &v63);
    m22_low = (__m128)LODWORD(v63.m22);
    v64.left = (float)(v63.m21 * v26) + (float)(left * v63.m11);
    v64.top = (float)(v63.m12 * left) + (float)(v63.m22 * v26);
    v64.right = (float)(v52 * v63.m11) + (float)(v63.m21 * v47.width);
    v32 = dx_low;
    v64.bottom = (float)(v63.m22 * v47.width) + (float)(v63.m12 * v52);
    v27 = v64;
    m22_low.m128_f32[0] = (float)((float)(v63.m22 * dy_low.m128_f32[0]) + (float)(v63.m12 * dx_low.m128_f32[0]))
                        + v63.dy;
    v50 = v64;
    v32.m128_f32[0] = (float)((float)(dx_low.m128_f32[0] * v63.m11) + (float)(v63.m21 * dy_low.m128_f32[0])) + v63.dx;
    v30 = _mm_unpacklo_ps(v32, m22_low).m128_u64[0];
    v51 = v30;
  }
  if ( a3 )
  {
    m11_low = (__m128)LODWORD(a3->m11);
    m21 = a3->m21;
    m11 = a3->m11;
    m12 = a3->m12;
    v37 = (__m128)LODWORD(a3->m22);
    v38 = a3->m22 * v50.top;
    v63.m11 = (float)(a3->m11 * v50.left) + (float)(m21 * v50.top);
    v63.m12 = (float)(m12 * v50.left) + v38;
    m11_low.m128_f32[0] = (float)((float)(m11_low.m128_f32[0] * *(float *)&v51) + (float)(m21 * *((float *)&v51 + 1)))
                        + a3->dx;
    v63.m21 = (float)(m11 * v50.right) + (float)(m21 * v50.bottom);
    v39 = (float)(v37.m128_f32[0] * v50.bottom) + (float)(m12 * v50.right);
    v37.m128_f32[0] = (float)((float)(v37.m128_f32[0] * *((float *)&v51 + 1)) + (float)(m12 * *(float *)&v51)) + a3->dy;
    v63.m22 = v39;
    v27 = *(struct D2D_RECT_F *)&v63.m11;
    v30 = _mm_unpacklo_ps(m11_low, v37).m128_u64[0];
    v51 = v30;
  }
  if ( !a6 )
  {
LABEL_27:
    v43 = v54;
    *(struct D2D_RECT_F *)a5 = v27;
    *((_QWORD *)a5 + 2) = v30;
    *(struct D2D_RECT_F *)((char *)a5 + 24) = v43;
    if ( a6 )
    {
      v44 = v49;
      v15 = 0LL;
      v49 = 0LL;
      *a6 = v44;
    }
    else
    {
      v15 = v49;
    }
    v45 = v48;
    if ( !v48 )
      goto LABEL_11;
    v48 = 0LL;
    v14 = *v45;
    goto LABEL_9;
  }
  v40 = a2->height;
  v41 = a2->width + 0.0;
  v64.left = 0.0;
  v64.top = 0.0;
  v64.right = v41;
  v64.bottom = v40 + 0.0;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v66, (const struct MilRectF *)&v64);
  LODWORD(v64.left) = v19.m128_i32[0];
  LODWORD(v64.top) = v18.m128_i32[0];
  v64.right = right;
  v64.bottom = bottom;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v65, (const struct MilRectF *)&v64);
  v55[2] = 0;
  v55[3] = 0;
  v59 = 0;
  v61 = 0;
  *(_QWORD *)&v63.m11 = &v49;
  v55[1] = _mm_shuffle_ps((__m128)v27, (__m128)v27, 85).m128_u32[0];
  v55[4] = _mm_shuffle_ps((__m128)v27, (__m128)v27, 170).m128_u32[0];
  v55[5] = _mm_shuffle_ps((__m128)v27, (__m128)v27, 255).m128_u32[0];
  v55[0] = LODWORD(v27.left);
  v60 = v51;
  v62 = 1065353216LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 1065353216;
  *(_QWORD *)&v63.m[1][0] = 0LL;
  LOBYTE(v63.m[2][0]) = 1;
  v6 = CShape::Combine((__int64)v66, v42, (__int64)v65, (__int64)v55, 1, v63.m[1]);
  wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v63);
  if ( (v6 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024F8, 1u, v6, 0x323u);
    goto LABEL_30;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)v49 + 16LL))(v49) )
  {
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v65);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v66);
    goto LABEL_27;
  }
  v6 = -2003304441;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024F8, 1u, 0x88980007, 0x328u);
LABEL_30:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v65);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v66);
LABEL_7:
  v13 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    v14 = *v13;
LABEL_9:
    (*(void (**)(void))(v14 + 16))();
  }
  v15 = v49;
LABEL_11:
  if ( v15 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v15)(v15, 1LL);
  return v6;
}
