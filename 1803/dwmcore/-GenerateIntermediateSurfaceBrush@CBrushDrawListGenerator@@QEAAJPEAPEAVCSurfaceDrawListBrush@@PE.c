/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18008E6C0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x180006488 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x18000F1C4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019248 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180040EA4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18006E250 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180076F8C (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18008AA10 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCShape@@@Z @ 0x18008BCE0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@PEAPEAVCSha.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009BA00 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A3B38 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C469C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     memcpy_s_0 @ 0x18017C6BC (memcpy_s_0.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        const struct CVisualTree ***this,
        struct CSurfaceDrawListBrush **a2,
        const struct CDrawListBrush *a3,
        struct CRenderingEffectFactory *a4)
{
  __m128 width_low; // xmm3
  CMatrixStack *v7; // rcx
  __int64 v9; // rbx
  rsize_t v10; // rdx
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  int v13; // esi
  __int64 v14; // rcx
  CRectanglesShape *v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  struct CMILMatrix *v18; // rdx
  FLOAT left_low; // xmm6_4
  FLOAT top_low; // xmm7_4
  FLOAT right_low; // xmm8_4
  FLOAT bottom_low; // xmm9_4
  struct CVisual *CurrentVisual; // rax
  int v24; // xmm1_4
  float left; // xmm0_4
  float top; // xmm2_4
  float bottom; // xmm1_4
  const struct CVisualTree **v28; // rcx
  int CpuClip; // eax
  int v30; // eax
  int v31; // eax
  float width; // xmm0_4
  float height; // xmm2_4
  float v34; // xmm1_4
  __int64 v35; // rcx
  float *v36; // r9
  bool v37; // zf
  float m11; // xmm2_4
  float dx; // xmm4_4
  const struct CVisualTree **v40; // rcx
  __m128 v41; // xmm0
  __m128 v42; // xmm1
  float v43; // xmm8_4
  float v44; // xmm6_4
  int v45; // eax
  float v46; // xmm8_4
  float v47; // xmm6_4
  struct IRenderTarget **v48; // rcx
  int v49; // eax
  struct IRenderTarget *v50; // rdi
  int v51; // eax
  int DrawList; // eax
  int v53; // eax
  CMILRefCountBase *v54; // rbx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  const struct CDrawingContext *v59; // r8
  int v60; // eax
  struct D2D_RECT_F v61; // xmm0
  struct D2D_MATRIX_3X2_F *v62; // r9
  CSurfaceDrawListBrush *v63; // rcx
  __int64 v64; // r11
  __int64 v65; // xmm1_8
  CSurfaceDrawListBrush *v66; // rcx
  CMILRefCountBase *v67; // rcx
  __int128 v69; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v70; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v71; // [rsp+60h] [rbp-A8h] BYREF
  CRectanglesShape *v72; // [rsp+70h] [rbp-98h] BYREF
  char v73; // [rsp+78h] [rbp-90h]
  char v74; // [rsp+80h] [rbp-88h]
  struct CRenderTargetImageSource *v75[2]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v76[4]; // [rsp+98h] [rbp-70h] BYREF
  __int16 v77; // [rsp+D8h] [rbp-30h]
  _OWORD v78[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v79; // [rsp+128h] [rbp+20h]
  struct D2D_RECT_F v80; // [rsp+138h] [rbp+30h] BYREF
  struct D2D_SIZE_F v81[2]; // [rsp+148h] [rbp+40h] BYREF
  struct D2D_RECT_F v82; // [rsp+158h] [rbp+50h] BYREF
  __int64 v83; // [rsp+168h] [rbp+60h]
  struct D2D_RECT_F v84; // [rsp+178h] [rbp+70h] BYREF
  int v85; // [rsp+188h] [rbp+80h]
  int v86; // [rsp+18Ch] [rbp+84h]
  CMILRefCountBase *v87[310]; // [rsp+198h] [rbp+90h] BYREF
  _OWORD Destination[4]; // [rsp+B48h] [rbp+A40h] BYREF
  int v89; // [rsp+B88h] [rbp+A80h]

  v7 = (CMatrixStack *)(*this + 60);
  v80 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v75[0] = 0LL;
  v79 = 0;
  CMatrixStack::Top(v7, (struct CMILMatrix *)v78);
  (*(void (__fastcall **)(const struct CVisualTree *, struct D2D_RECT_F *))(*(_QWORD *)(*this)[45] + 56LL))(
    (*this)[45],
    &v82);
  v9 = *((unsigned int *)this + 18);
  memcpy_s_0(Destination, v10, this + 5, 8 * v9);
  if ( a3 )
  {
    *((_QWORD *)Destination + v9) = a3;
    LODWORD(v9) = v9 + 1;
  }
  if ( (_DWORD)v9 )
  {
    v81[0] = (struct D2D_SIZE_F)(unsigned int)v9;
    *(_QWORD *)&v69 = 0LL;
    v81[1] = (struct D2D_SIZE_F)Destination;
    v84 = *(struct D2D_RECT_F *)&v81[0].width;
    *(_QWORD *)&v71 = &v69;
    *((_QWORD *)&v71 + 1) = 0LL;
    LOBYTE(v72) = 1;
    v13 = CBrushDrawListGenerator::ComputeBrushClamp((__int64 *)&v84, (CRectanglesShape **)&v71 + 1);
    if ( (_BYTE)v72 )
    {
      v14 = *((_QWORD *)&v71 + 1);
      v15 = *(CRectanglesShape **)v71;
      *(_QWORD *)v71 = *((_QWORD *)&v71 + 1);
      if ( v15 )
        std::default_delete<CShape>::operator()(v14, v15);
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2A9u);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v69 + 32LL))(v69, &v80, 0LL);
      v13 = v16;
      if ( v16 >= 0 )
      {
        v11 = v69;
        if ( (_QWORD)v69 )
          std::default_delete<CShape>::operator()(v17, (CRectanglesShape *)v69);
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x2ABu);
    }
    if ( (_QWORD)v69 )
      std::default_delete<CShape>::operator()(v35, (CRectanglesShape *)v69);
    goto LABEL_95;
  }
LABEL_11:
  Destination[0] = v78[0];
  Destination[1] = v78[1];
  Destination[2] = v78[2];
  Destination[3] = v78[3];
  v89 = v79;
  if ( CMILMatrix::Invert((CMILMatrix *)Destination, v11, v12) )
  {
    left_low = (float)SLODWORD(v82.left);
    top_low = (float)SLODWORD(v82.top);
    right_low = (float)SLODWORD(v82.right);
    bottom_low = (float)SLODWORD(v82.bottom);
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(*this + 1));
    v84.left = left_low;
    v24 = *((_DWORD *)CurrentVisual + 39);
    v86 = *((_DWORD *)CurrentVisual + 40);
    v85 = v24;
    v84.top = top_low;
    v84.right = right_low;
    v84.bottom = bottom_low;
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)Destination, (__int64)&v84, (__m128 *)&v84);
    left = v80.left;
    if ( v84.left > v80.left )
    {
      v80.left = v84.left;
      left = v84.left;
    }
    top = v80.top;
    if ( v84.top > v80.top )
    {
      v80.top = v84.top;
      top = v84.top;
    }
    width_low = (__m128)LODWORD(v80.right);
    if ( v80.right > v84.right )
    {
      v80.right = v84.right;
      width_low = (__m128)LODWORD(v84.right);
    }
    bottom = v80.bottom;
    if ( v80.bottom > v84.bottom )
    {
      v80.bottom = v84.bottom;
      bottom = v84.bottom;
    }
    if ( width_low.m128_f32[0] <= left || bottom <= top )
    {
      v80.bottom = 0.0;
      v80.right = 0.0;
      v80.top = 0.0;
      v80.left = 0.0;
    }
  }
  v28 = *this;
  v72 = 0LL;
  v71 = 0LL;
  v73 = 0;
  v74 = 0;
  CpuClip = CDrawingContext::GetCpuClip(v28, v18, (CRectanglesShape **)&v71);
  v13 = CpuClip;
  if ( CpuClip < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CpuClip, 0x2CBu);
    goto LABEL_94;
  }
  if ( !(_QWORD)v71 && !v72 )
    goto LABEL_39;
  v30 = CCpuClip::ResolveClip((CCpuClip *)&v71, (const struct CShape **)&v69);
  v13 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x2D0u);
    goto LABEL_94;
  }
  v31 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_SIZE_F *, _QWORD))(*(_QWORD *)v69 + 32LL))(v69, v81, 0LL);
  v13 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x2D3u);
LABEL_94:
    CShapePtr::Release(&v72);
    goto LABEL_95;
  }
  width = v80.left;
  if ( v81[0].width > v80.left )
  {
    v80.left = v81[0].width;
    width = v81[0].width;
  }
  height = v80.top;
  if ( v81[0].height > v80.top )
  {
    v80.top = v81[0].height;
    height = v81[0].height;
  }
  width_low = (__m128)LODWORD(v80.right);
  if ( v80.right > v81[1].width )
  {
    v80.right = v81[1].width;
    width_low = (__m128)LODWORD(v81[1].width);
  }
  v34 = v80.bottom;
  if ( v80.bottom > v81[1].height )
  {
    v80.bottom = v81[1].height;
    v34 = v81[1].height;
  }
  if ( width_low.m128_f32[0] <= width || v34 <= height )
  {
    v80.bottom = 0.0;
    v80.right = 0.0;
    v80.top = 0.0;
    v80.left = 0.0;
  }
LABEL_39:
  CShapePtr::Release(&v72);
  if ( IsEmpty(&v80) )
  {
    *a2 = 0LL;
    goto LABEL_95;
  }
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v78, (float *)v81, (float *)&v69);
  v37 = *((_DWORD *)this + 18) == 1;
  v70.m11 = FLOAT_1_0;
  m11 = FLOAT_1_0;
  v70.dx = FLOAT_1_0;
  dx = FLOAT_1_0;
  if ( v37 )
  {
    v40 = this[5];
    if ( v40 )
    {
      D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)(v40 + 1), &v70, &v70.dx, v36);
      m11 = v70.m11;
      dx = v70.dx;
    }
  }
  v41 = (__m128)LODWORD(FLOAT_1_0);
  v42.m128_f32[0] = (float)(v81[0].width / fmaxf(1.0, m11 * v81[0].width)) * (float)(v80.right - v80.left);
  v41.m128_f32[0] = (float)(int)v42.m128_f32[0];
  v43 = (float)(int)((int)v42.m128_f32[0] - _mm_cmplt_ss(v41, v42).m128_u32[0]);
  v81[0].width = v43;
  v42.m128_f32[0] = (float)(*(float *)&v69 / fmaxf(1.0, dx * *(float *)&v69)) * (float)(v80.bottom - v80.top);
  width_low.m128_f32[0] = (float)(int)v42.m128_f32[0];
  LODWORD(v69) = _mm_cmplt_ss(width_low, v42).m128_u32[0];
  v44 = (float)((int)v42.m128_f32[0] - v69);
  v45 = LODWORD(v82.right) - LODWORD(v82.left);
  v81[0].height = v44;
  if ( v43 > (float)(LODWORD(v82.right) - LODWORD(v82.left)) )
  {
    v81[0].width = (float)v45;
    v43 = (float)v45;
  }
  if ( v44 > (float)(LODWORD(v82.bottom) - LODWORD(v82.top)) )
  {
    v81[0].height = (float)(LODWORD(v82.bottom) - LODWORD(v82.top));
    v44 = v81[0].height;
  }
  *(_QWORD *)&v69 = 0LL;
  v46 = v43 / (float)(v80.right - v80.left);
  v47 = v44 / (float)(v80.bottom - v80.top);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v69);
  v48 = *this;
  *(_QWORD *)&v84.left = "DWM Drawlist Brush intermediate";
  LODWORD(v84.right) = 31;
  v49 = CDrawingContext::PushOffScreenRenderingLayer(
          v48,
          (const struct CResourceTag *)&v84,
          v81,
          1,
          (struct IRenderTargetBitmap **)&v69);
  v13 = v49;
  if ( v49 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x317u);
LABEL_77:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v69);
    goto LABEL_95;
  }
  v50 = (struct IRenderTarget *)v69;
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v69 + 144LL))(v69, 1LL);
  v76[1] = _xmm;
  v77 = 32085;
  v76[2] = _xmm;
  v76[0] = _xmm;
  v76[3] = _xmm;
  CMILMatrix::Translate(
    (CMILMatrix *)v76,
    COERCE_FLOAT(LODWORD(v80.left) ^ _xmm),
    COERCE_FLOAT(LODWORD(v80.top) ^ _xmm));
  CMILMatrix::Scale((CMILMatrix *)v76, v46, v47, 1.0);
  v51 = CDrawingContext::PushTransformInternal((CDrawingContext *)*this, 0LL, (const struct CMILMatrix *)v76, 0, 1);
  v13 = v51;
  if ( v51 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x320u);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v69);
    goto LABEL_89;
  }
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v87);
  DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)this, v87, a3, 0LL);
  v13 = DrawList;
  if ( DrawList < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x324u);
    goto LABEL_87;
  }
  v81[0] = 0LL;
  v53 = CDrawListCache::Create((struct CDrawListCache **)v81);
  v13 = v53;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x327u);
    v67 = (CMILRefCountBase *)v81[0];
    if ( !*(_QWORD *)v81 )
      goto LABEL_87;
    goto LABEL_82;
  }
  v54 = (CMILRefCountBase *)v81[0];
  v55 = CDrawListCache::Update(
          *(CDrawListCache **)v81,
          (struct CDrawingContext *)*this,
          (struct CDrawListEntryBuilder *)v87);
  v13 = v55;
  if ( v55 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x328u);
    goto LABEL_80;
  }
  v56 = CDrawListCache::Render((__int64)v54, (CDrawingContext *)*this, (CMILMatrix *)v76, 1.0);
  v13 = v56;
  if ( v56 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x32Eu);
LABEL_80:
    if ( !v54 )
    {
LABEL_87:
      CDrawListEntryBuilder::~CDrawListEntryBuilder(v87);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v69);
      CDrawingContext::PopTransformInternal((CDrawingContext *)*this, 1);
LABEL_89:
      CDrawingContext::PopLayer((CDrawingContext *)*this);
      goto LABEL_95;
    }
    v67 = v54;
LABEL_82:
    CMILRefCountBase::Release(v67);
    goto LABEL_87;
  }
  CDrawingContext::PopTransformInternal((CDrawingContext *)*this, 1);
  v57 = CDrawingContext::PopLayer((CDrawingContext *)*this);
  v13 = v57;
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x335u);
    goto LABEL_74;
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(v75);
  v58 = CRenderTargetImageSource::Create(v50, 1, v75);
  v13 = v58;
  if ( v58 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x339u);
LABEL_74:
    if ( v54 )
      CMILRefCountBase::Release(v54);
    CDrawListEntryBuilder::~CDrawListEntryBuilder(v87);
    goto LABEL_77;
  }
  if ( v54 )
    CMILRefCountBase::Release(v54);
  CDrawListEntryBuilder::~CDrawListEntryBuilder(v87);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v69);
  v59 = (const struct CDrawingContext *)*this;
  *(_QWORD *)&v69 = 0LL;
  v71 = 0LL;
  LOBYTE(v72) = 0;
  v60 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v71, v75[0], v59, 0);
  v13 = v60;
  if ( v60 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x34Au);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v71 + 1);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v71);
    v66 = (CSurfaceDrawListBrush *)v69;
    if ( !(_QWORD)v69 )
      goto LABEL_95;
    goto LABEL_69;
  }
  CDrawListBitmap::GetSize((CDrawListBitmap *)&v71, v81);
  v82.left = 0.0;
  v82.top = 0.0;
  LOBYTE(v83) = 1;
  LOWORD(v70.m11) = SamplerMode::k_ClampClampLinear;
  BYTE2(v70._11) = 1;
  v82.right = (float)SLODWORD(v81[0].width);
  v82.bottom = (float)SLODWORD(v81[0].height);
  v61 = v82;
  *(_QWORD *)&v82.left = &v69;
  *(_QWORD *)&v82.right = 0LL;
  v84 = v61;
  v13 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)&v71, (__int16 *)&v70, (__int128 *)&v84, &v82.right);
  if ( (_BYTE)v83 )
  {
    v63 = **(CSurfaceDrawListBrush ***)&v82.left;
    **(_QWORD **)&v82.left = *(_QWORD *)&v82.right;
    if ( v63 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v63, 1);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x351u);
  }
  else
  {
    v82 = v80;
    v84 = v80;
    D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)(v69 + 80), &v84, &v82, v62);
    v64 = v69;
    v65 = v83;
    *(struct D2D_RECT_F *)(v69 + 8) = v82;
    *(_QWORD *)(v64 + 24) = v65;
    *a2 = (struct CSurfaceDrawListBrush *)v69;
    *(_QWORD *)&v69 = 0LL;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v71 + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v71);
  v66 = (CSurfaceDrawListBrush *)v69;
  if ( (_QWORD)v69 )
LABEL_69:
    CSurfaceDrawListBrush::`vector deleting destructor'(v66, 1);
LABEL_95:
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(v75);
  return (unsigned int)v13;
}
