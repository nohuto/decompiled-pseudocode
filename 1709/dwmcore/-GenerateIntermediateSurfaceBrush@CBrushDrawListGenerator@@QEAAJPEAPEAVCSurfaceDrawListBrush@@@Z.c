/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180023768 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800237F0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E870 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x180040540 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x18004A790 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180059138 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005915C (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005AFD8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800631BC (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800844E4 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800B2B14 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x1800B707C (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BDC50 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1801C8C24 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        CBrushDrawListGenerator *this,
        struct CSurfaceDrawListBrush **a2,
        __int64 a3,
        __int64 a4)
{
  __m128 v4; // xmm3
  __m128 v5; // xmm10
  __int64 v6; // r11
  float v7; // xmm11_4
  float v10; // xmm13_4
  float v11; // xmm12_4
  __int64 v12; // r11
  __int64 v13; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v14; // r8
  signed int v15; // edi
  __int128 v16; // kr00_16
  CRectanglesShape *v17; // rcx
  CRectanglesShape *(__fastcall *v18)(CRectanglesShape *, char); // rax
  int v19; // xmm0_4
  unsigned int v20; // xmm1_4
  unsigned int v21; // xmm0_4
  unsigned int v22; // xmm1_4
  signed int v23; // eax
  CRectanglesShape *(__fastcall *v24)(CRectanglesShape *, char); // rax
  struct CMILMatrix *v25; // rdx
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm9_4
  struct CVisual *CurrentVisual; // rax
  int v31; // xmm1_4
  const struct CVisualTree **v32; // rcx
  signed int CpuClip; // eax
  signed int v34; // eax
  signed int v35; // eax
  CRectanglesShape *(__fastcall *v36)(CRectanglesShape *, char); // rax
  float *v37; // r9
  float m11; // xmm1_4
  float v39; // xmm2_4
  __int64 v40; // rax
  float v41; // xmm4_4
  __m128 v42; // xmm6
  float v43; // xmm5_4
  float v44; // xmm0_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm4_4
  FLOAT v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm0_4
  FLOAT v51; // xmm1_4
  float v52; // xmm0_4
  float v53; // xmm5_4
  __m128 v54; // xmm1
  __m128 v55; // xmm4
  float v56; // xmm7_4
  float v57; // xmm6_4
  __m128 v58; // xmm0
  __m128 v59; // xmm1
  float v60; // xmm0_4
  float v61; // xmm0_4
  CDrawingContext *v62; // rcx
  signed int v63; // eax
  CSurfaceDrawListBrush *v64; // rbx
  signed int v65; // eax
  signed int DrawList; // eax
  signed int v67; // eax
  signed int v68; // eax
  signed int v69; // eax
  signed int v70; // eax
  signed int v71; // eax
  const struct CDrawingContext *v72; // r8
  signed int v73; // eax
  struct D2D_MATRIX_3X2_F *v74; // r9
  __int128 v75; // kr10_16
  CSurfaceDrawListBrush *v76; // rcx
  char *v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r8
  CSurfaceDrawListBrush *v81; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v82; // [rsp+40h] [rbp-C8h] BYREF
  CRegionShape *v83; // [rsp+58h] [rbp-B0h] BYREF
  char v84; // [rsp+60h] [rbp-A8h]
  int v85; // [rsp+68h] [rbp-A0h]
  float v86[2]; // [rsp+70h] [rbp-98h] BYREF
  struct CRenderTargetImageSource *v87[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v88; // [rsp+88h] [rbp-80h] BYREF
  __int128 v89; // [rsp+98h] [rbp-70h]
  __int128 v90; // [rsp+A8h] [rbp-60h]
  _BYTE v91[20]; // [rsp+B8h] [rbp-50h]
  _OWORD v92[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v93; // [rsp+118h] [rbp+10h]
  _OWORD v94[4]; // [rsp+128h] [rbp+20h] BYREF
  int v95; // [rsp+168h] [rbp+60h]
  struct D2D_SIZE_F v96; // [rsp+178h] [rbp+70h] BYREF
  __int32 v97; // [rsp+180h] [rbp+78h]
  float v98; // [rsp+184h] [rbp+7Ch]
  _BYTE v99[20]; // [rsp+188h] [rbp+80h] BYREF
  int v100; // [rsp+19Ch] [rbp+94h]
  CRegionShape *v101; // [rsp+1A0h] [rbp+98h]
  int v102; // [rsp+1A8h] [rbp+A0h]
  __int128 v103; // [rsp+1B0h] [rbp+A8h] BYREF
  char v104; // [rsp+1C0h] [rbp+B8h]
  CMILRefCountBase *v105[310]; // [rsp+1C8h] [rbp+C0h] BYREF

  v5 = (__m128)*((unsigned int *)this + 2);
  v5.m128_f32[0] = v5.m128_f32[0] + 0.0;
  v6 = *(_QWORD *)this;
  v7 = *((float *)this + 3) + 0.0;
  v10 = 0.0;
  v87[0] = 0LL;
  v11 = 0.0;
  v97 = v5.m128_i32[0];
  v98 = v7;
  v96.width = 0.0;
  v96.height = 0.0;
  v95 = 0;
  CMatrixStack::Top((CMatrixStack *)(v6 + 480), (struct CMILMatrix *)v94, a3, a4);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v12 + 360) + 56LL))(*(_QWORD *)(v12 + 360), &v103);
  if ( !*((_DWORD *)this + 26) )
    goto LABEL_25;
  v81 = 0LL;
  *(_QWORD *)&v82.m[1][0] = &v81;
  *(_QWORD *)&v82.m[2][0] = 0LL;
  LOBYTE(v83) = 1;
  v15 = CBrushDrawListGenerator::ComputeBrushClamp(this, (struct CShape **)v82.m[2]);
  if ( (_BYTE)v83 )
  {
    v16 = *(_OWORD *)&v82.m[1][0];
    v17 = **(CRectanglesShape ***)&v82.m[1][0];
    if ( *(_QWORD *)&v82.m[2][0] != **(_QWORD **)&v82.m[1][0] )
    {
      if ( v17 )
      {
        v18 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v17;
        if ( v18 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v17, 1);
        else
          v18(v17, 1);
      }
      *(_QWORD *)v16 = *((_QWORD *)&v16 + 1);
    }
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x394u);
LABEL_58:
    if ( v81 )
    {
      v36 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v81;
      if ( v36 == CRectanglesShape::`scalar deleting destructor' )
        CRectanglesShape::`scalar deleting destructor'(v81, 1);
      else
        v36(v81, 1);
    }
    goto LABEL_110;
  }
  v19 = *((_DWORD *)this + 4);
  v20 = *((_DWORD *)this + 5);
  HIDWORD(v88) = 0;
  LODWORD(v88) = v19;
  v21 = *((_DWORD *)this + 6);
  *(_QWORD *)((char *)&v88 + 4) = v20;
  v89 = __PAIR64__(*((_DWORD *)this + 7), v21);
  v22 = *((_DWORD *)this + 9);
  *(_DWORD *)v91 = *((_DWORD *)this + 8);
  *(_QWORD *)&v91[4] = v22;
  *(_QWORD *)&v91[12] = 1065353216LL;
  *(_QWORD *)&v90 = 0LL;
  *((_QWORD *)&v90 + 1) = 1065353216LL;
  v23 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _BYTE *, __int128 *))(*(_QWORD *)v81 + 32LL))(
          v81,
          v99,
          &v88);
  v15 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x398u);
    goto LABEL_58;
  }
  if ( *(float *)v99 > 0.0 )
  {
    v96.width = *(FLOAT *)v99;
    v10 = *(float *)v99;
  }
  if ( *(float *)&v99[4] > 0.0 )
  {
    v96.height = *(FLOAT *)&v99[4];
    v11 = *(float *)&v99[4];
  }
  if ( v5.m128_f32[0] > *(float *)&v99[8] )
  {
    v5 = (__m128)*(unsigned int *)&v99[8];
    v97 = *(_DWORD *)&v99[8];
  }
  if ( v7 > *(float *)&v99[12] )
  {
    v7 = *(float *)&v99[12];
    v98 = *(float *)&v99[12];
  }
  if ( v5.m128_f32[0] <= v10 || v7 <= v11 )
  {
    v7 = 0.0;
    v5 = 0LL;
    v11 = 0.0;
    v98 = 0.0;
    v10 = 0.0;
    v97 = 0;
    v96.height = 0.0;
    v96.width = 0.0;
  }
  if ( v81 )
  {
    v24 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v81;
    if ( v24 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v81, 1);
    else
      v24(v81, 1);
  }
LABEL_25:
  v88 = v94[0];
  v89 = v94[1];
  v90 = v94[2];
  *(_OWORD *)v91 = v94[3];
  *(_DWORD *)&v91[16] = v95;
  if ( CMILMatrix::Invert((CMILMatrix *)&v88, v13, v14) )
  {
    v26 = (float)(int)v103;
    v27 = (float)SDWORD1(v103);
    v28 = (float)SDWORD2(v103);
    v29 = (float)SHIDWORD(v103);
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(*(_QWORD *)this + 8LL));
    *(float *)v99 = v26;
    v31 = *((_DWORD *)CurrentVisual + 39);
    v100 = *((_DWORD *)CurrentVisual + 40);
    *(_DWORD *)&v99[16] = v31;
    *(float *)&v99[4] = v27;
    *(float *)&v99[8] = v28;
    *(float *)&v99[12] = v29;
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v88, (__int64)v99, (int *)v99);
    if ( *(float *)v99 > v10 )
    {
      v96.width = *(FLOAT *)v99;
      v10 = *(float *)v99;
    }
    if ( *(float *)&v99[4] > v11 )
    {
      v96.height = *(FLOAT *)&v99[4];
      v11 = *(float *)&v99[4];
    }
    if ( v5.m128_f32[0] > *(float *)&v99[8] )
    {
      v5 = (__m128)*(unsigned int *)&v99[8];
      v97 = *(_DWORD *)&v99[8];
    }
    if ( v7 > *(float *)&v99[12] )
    {
      v7 = *(float *)&v99[12];
      v98 = *(float *)&v99[12];
    }
    if ( v5.m128_f32[0] <= v10 || v7 <= v11 )
    {
      v7 = 0.0;
      v5 = 0LL;
      v11 = 0.0;
      v98 = 0.0;
      v10 = 0.0;
      v97 = 0;
      v96.height = 0.0;
      v96.width = 0.0;
    }
  }
  v32 = *(const struct CVisualTree ***)this;
  v83 = 0LL;
  *(_OWORD *)&v82.m[1][0] = 0LL;
  v84 = 0;
  LOBYTE(v85) = 0;
  CpuClip = CDrawingContext::GetCpuClip(v32, v25, (struct CCpuClip *)v82.m[1]);
  v15 = CpuClip;
  if ( CpuClip < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CpuClip, 0x3B9u);
    goto LABEL_109;
  }
  if ( !*(_QWORD *)&v82.m[1][0] && !v83 )
    goto LABEL_53;
  v34 = CCpuClip::ResolveClip((CCpuClip *)v82.m[1], &v81);
  v15 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x3BEu);
    goto LABEL_109;
  }
  v35 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _BYTE *, _QWORD))(*(_QWORD *)v81 + 32LL))(v81, v99, 0LL);
  v15 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v35, 0x3C1u);
LABEL_109:
    CShapePtr::Release(&v83);
    goto LABEL_110;
  }
  if ( *(float *)v99 > v10 )
  {
    v96.width = *(FLOAT *)v99;
    v10 = *(float *)v99;
  }
  if ( *(float *)&v99[4] > v11 )
  {
    v96.height = *(FLOAT *)&v99[4];
    v11 = *(float *)&v99[4];
  }
  if ( v5.m128_f32[0] > *(float *)&v99[8] )
  {
    v5 = (__m128)*(unsigned int *)&v99[8];
    v97 = *(_DWORD *)&v99[8];
  }
  if ( v7 > *(float *)&v99[12] )
  {
    v7 = *(float *)&v99[12];
    v98 = *(float *)&v99[12];
  }
  if ( v5.m128_f32[0] <= v10 || v7 <= v11 )
  {
    v7 = 0.0;
    v5 = 0LL;
    v11 = 0.0;
    v98 = 0.0;
    v10 = 0.0;
    v97 = 0;
    v96.height = 0.0;
    v96.width = 0.0;
  }
LABEL_53:
  CShapePtr::Release(&v83);
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v96) )
  {
    *a2 = 0LL;
LABEL_55:
    v15 = 0;
    goto LABEL_110;
  }
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v94, (float *)&v96, (float *)&v81);
  m11 = FLOAT_1_0;
  v39 = FLOAT_1_0;
  v82.m11 = FLOAT_1_0;
  v86[0] = FLOAT_1_0;
  if ( *((_DWORD *)this + 26) == 1 )
  {
    v40 = *((_QWORD *)this + 9);
    if ( v40 )
    {
      v41 = *(float *)(v40 + 40);
      v4 = (__m128)*(unsigned int *)(v40 + 44);
      v42 = (__m128)*(unsigned int *)(v40 + 52);
      v43 = *(float *)(v40 + 56);
      v44 = *((float *)this + 5) * *(float *)(v40 + 28);
      v45 = *(float *)(v40 + 32) * *((float *)this + 7);
      v82.m21 = (float)(*(float *)(v40 + 32) * *((float *)this + 6))
              + (float)(*((float *)this + 4) * *(float *)(v40 + 28));
      v46 = v41 * *((float *)this + 4);
      v47 = v41 * *((float *)this + 5);
      v48 = v45 + v44;
      v49 = v4.m128_f32[0];
      v4.m128_f32[0] = v4.m128_f32[0] * *((float *)this + 7);
      v50 = v49 * *((float *)this + 6);
      v82.m22 = v48;
      v51 = v46 + v50;
      v52 = v43 * *((float *)this + 6);
      v53 = v43 * *((float *)this + 7);
      v82.dx = v51;
      v54 = v42;
      v54.m128_f32[0] = v42.m128_f32[0] * *((float *)this + 4);
      v42.m128_f32[0] = v42.m128_f32[0] * *((float *)this + 5);
      v82.dy = v47 + v4.m128_f32[0];
      v54.m128_f32[0] = (float)(v54.m128_f32[0] + v52) + *((float *)this + 8);
      v42.m128_f32[0] = (float)(v42.m128_f32[0] + v53) + *((float *)this + 9);
      v83 = (CRegionShape *)_mm_unpacklo_ps(v54, v42).m128_u64[0];
      D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)v82.m[1], &v82, v86, v37);
      m11 = v82.m11;
      v39 = v86[0];
    }
  }
  v55 = v5;
  v55.m128_f32[0] = v5.m128_f32[0] - v10;
  v56 = v96.width / fmaxf(1.0, m11 * v96.width);
  v57 = *(float *)&v81 / fmaxf(1.0, v39 * *(float *)&v81);
  v58 = v55;
  v59.m128_f32[0] = (float)(v5.m128_f32[0] - v10) * v56;
  v58.m128_f32[0] = (float)(int)v59.m128_f32[0];
  LODWORD(v81) = _mm_cmplt_ss(v58, v59).m128_u32[0];
  v58.m128_f32[0] = (float)(v7 - v11) * v57;
  v4.m128_f32[0] = (float)(int)v58.m128_f32[0];
  v96.width = (float)((int)v59.m128_f32[0] - (int)v81);
  LODWORD(v81) = _mm_cmplt_ss(v4, v58).m128_u32[0];
  v60 = (float)(DWORD2(v103) - v103);
  v96.height = (float)((int)(float)((float)(v7 - v11) * v57) - (int)v81);
  if ( v96.width > v60 )
  {
    v96.width = (float)(DWORD2(v103) - v103);
    v56 = v60 / v55.m128_f32[0];
  }
  v61 = (float)(HIDWORD(v103) - DWORD1(v103));
  if ( (float)((int)(float)((float)(v7 - v11) * v57) - (int)v81) > v61 )
  {
    v96.height = (float)(HIDWORD(v103) - DWORD1(v103));
    v57 = v61 / (float)(v7 - v11);
  }
  v81 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v81);
  v62 = *(CDrawingContext **)this;
  *(_QWORD *)v99 = "DWM Drawlist Brush intermediate";
  *(_DWORD *)&v99[8] = 31;
  v63 = CDrawingContext::PushOffScreenRenderingLayer(v62, (const struct CResourceTag *)v99, &v96, 1, &v81);
  v15 = v63;
  if ( v63 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v63, 0x401u);
    goto LABEL_95;
  }
  v64 = v81;
  (*(void (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v81 + 136LL))(v81, 1LL);
  v92[1] = _xmm;
  v93 = 32085;
  v92[2] = _xmm;
  v92[0] = _xmm;
  v92[3] = _xmm;
  CMILMatrix::Translate((CMILMatrix *)v92, COERCE_FLOAT(LODWORD(v10) ^ _xmm), COERCE_FLOAT(LODWORD(v11) ^ _xmm));
  CMILMatrix::Scale((CMILMatrix *)v92, v56, v57, 1.0);
  v65 = CDrawingContext::PushTransformInternal(*(CDrawingContext **)this, 0LL, (const struct CMILMatrix *)v92, 0, 1);
  v15 = v65;
  if ( v65 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v65, 0x40Au);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v81);
    goto LABEL_104;
  }
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
  DrawList = CBrushDrawListGenerator::GenerateDrawList(this, v105);
  v15 = DrawList;
  if ( DrawList < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DrawList, 0x40Eu);
    goto LABEL_102;
  }
  v96 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)&v96);
  v67 = CDrawListCache::Create((struct CDrawListCache **)&v96);
  v15 = v67;
  if ( v67 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v67, 0x411u);
    goto LABEL_98;
  }
  v68 = CDrawListCache::Update(
          *(CDrawListCache **)&v96,
          *(struct CDrawingContext **)this,
          (struct CDrawListEntryBuilder *)v105);
  v15 = v68;
  if ( v68 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v68, 0x412u);
    goto LABEL_98;
  }
  v69 = CDrawListCache::Render(*(_QWORD *)&v96, *(CDrawingContext **)this, (struct CMILMatrix *)v92, 1.0);
  v15 = v69;
  if ( v69 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v69, 0x418u);
LABEL_98:
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)&v96);
LABEL_102:
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v81);
    CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
LABEL_104:
    CDrawingContext::PopLayer(*(CDrawingContext **)this);
    goto LABEL_110;
  }
  CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
  v70 = CDrawingContext::PopLayer(*(CDrawingContext **)this);
  v15 = v70;
  if ( v70 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v70, 0x41Fu);
    goto LABEL_94;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v87);
  v71 = CRenderTargetImageSource::Create(v64, 1, v87);
  v15 = v71;
  if ( v71 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v71, 0x423u);
LABEL_94:
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)&v96);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
LABEL_95:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v81);
    goto LABEL_110;
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)&v96);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v81);
  v72 = *(const struct CDrawingContext **)this;
  v81 = 0LL;
  v103 = 0LL;
  v104 = 0;
  v73 = CDrawListBitmap::FromImageSource((CDrawListBitmap *)&v103, v87[0], v72, 0, 0);
  v15 = v73;
  if ( v73 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v73, 0x434u);
  }
  else
  {
    CDrawListBitmap::GetSize((CDrawListBitmap *)&v103, &v96);
    *(_DWORD *)v99 = 0;
    *(_DWORD *)&v99[4] = 0;
    *(_QWORD *)&v82.m[2][0] = 0LL;
    LOBYTE(v83) = 1;
    *(_QWORD *)&v82.m[1][0] = &v81;
    *(float *)&v99[8] = (float)SLODWORD(v96.width);
    *(float *)&v99[12] = (float)SLODWORD(v96.height);
    v15 = CSurfaceDrawListBrush::Create(
            (const struct CDrawListBitmap *)&v103,
            (const struct D2D_RECT_F *)v99,
            (struct CSurfaceDrawListBrush **)v82.m[2]);
    if ( (_BYTE)v83 )
    {
      v75 = *(_OWORD *)&v82.m[1][0];
      v76 = **(CSurfaceDrawListBrush ***)&v82.m[1][0];
      if ( *(_QWORD *)&v82.m[2][0] != **(_QWORD **)&v82.m[1][0] )
      {
        if ( v76 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v76, 1);
        *(_QWORD *)v75 = *((_QWORD *)&v75 + 1);
      }
    }
    if ( v15 >= 0 )
    {
      *(float *)v99 = v10;
      *(float *)&v99[4] = v11;
      *(_DWORD *)&v99[8] = v5.m128_i32[0];
      *(float *)&v99[12] = v7;
      D2DMatrixHelper::ComputeRectangleTransform(
        (CSurfaceDrawListBrush *)((char *)v81 + 8),
        (const struct D2D_RECT_F *)v99,
        (const struct D2D_RECT_F *)v82.m[1],
        v74);
      *(_DWORD *)&v99[8] = 0;
      v100 = 0;
      *(_QWORD *)v99 = *(_QWORD *)&v82.m[1][0];
      v77 = (char *)v81 + 28;
      *(_QWORD *)&v99[12] = *(_QWORD *)&v82.m[2][0];
      v101 = v83;
      v102 = 1065353216;
      LOWORD(v82.m11) = 257;
      *((_DWORD *)v81 + 6) = 0;
      CopyIfNeeded_Matrix3x3_((__int64)v77, (__int64)v99);
      v79 = v78 + 64;
      if ( (struct D2D_MATRIX_3X2_F *)v79 != &v82 )
      {
        *(_WORD *)v79 = LOWORD(v82.m11);
        *(_BYTE *)(v79 + 2) = 1;
      }
      *((_BYTE *)v81 + 168) = 1;
      *a2 = v81;
      v81 = 0LL;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v103 + 1);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v103);
      if ( v81 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v81, 1);
      goto LABEL_55;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x43Au);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v103 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v103);
  if ( v81 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v81, 1);
LABEL_110:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v87);
  return (unsigned int)v15;
}
