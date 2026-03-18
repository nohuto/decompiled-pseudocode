/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListPrimitiveBuilder@@@Z @ 0x18000994C (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000EB44 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18000F590 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180012220 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x18001ED24 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003F8F0 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003FA50 (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x1800598B4 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00 (-Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18009AD10 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB220 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AED48 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x1800C0018 (CopyIfNeeded_Matrix3x3_.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1800C12CC (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801AE144 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1801AE2EC (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        CBrushDrawListGenerator *this,
        struct CSurfaceDrawListBrush **a2,
        __int64 a3,
        double a4)
{
  __m128 v4; // xmm10
  __int64 v5; // r11
  float v6; // xmm11_4
  float v9; // xmm13_4
  float v10; // xmm12_4
  __int64 v11; // r11
  __int64 v12; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v13; // r8
  int v14; // edi
  __int128 v15; // kr00_16
  CRectanglesShape *v16; // rcx
  CRectanglesShape *(__fastcall *v17)(CRectanglesShape *, char); // rax
  int v18; // xmm0_4
  unsigned int v19; // xmm1_4
  unsigned int v20; // xmm0_4
  unsigned int v21; // xmm1_4
  int v22; // eax
  CRectanglesShape *(__fastcall *v23)(CRectanglesShape *, char); // rax
  struct CMILMatrix *v24; // rdx
  unsigned int v25; // xmm6_4
  unsigned int v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm9_4
  struct CVisual *CurrentVisual; // rax
  int v30; // xmm1_4
  const struct CVisualTree **v31; // rcx
  int CpuClip; // eax
  int v33; // eax
  int v34; // eax
  CRectanglesShape *(__fastcall *v35)(CRectanglesShape *, char); // rax
  float *v36; // r9
  float m11; // xmm1_4
  float v38; // xmm2_4
  float *v39; // rax
  __m128 v40; // xmm6
  float v41; // xmm4_4
  __m128 v42; // xmm5
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  FLOAT v46; // xmm1_4
  float v47; // xmm0_4
  FLOAT v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm4_4
  __m128 v52; // xmm9
  float v53; // xmm7_4
  float v54; // xmm6_4
  __m128 v55; // xmm0
  __m128 v56; // xmm1
  float v57; // xmm0_4
  float v58; // xmm0_4
  CDrawingContext *v59; // rcx
  int v60; // eax
  CRectanglesShape *v61; // rbx
  int v62; // eax
  int DrawList; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  struct D2D_MATRIX_3X2_F *v70; // r9
  __int128 v71; // kr10_16
  CSurfaceDrawListBrush *v72; // rcx
  char *v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r8
  CRectanglesShape *v77; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v78; // [rsp+40h] [rbp-C8h] BYREF
  CRectanglesShape *v79; // [rsp+58h] [rbp-B0h] BYREF
  char v80; // [rsp+60h] [rbp-A8h]
  __int64 v81; // [rsp+68h] [rbp-A0h]
  struct IImageSource *v82; // [rsp+70h] [rbp-98h] BYREF
  struct IImageSource *v83[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v84; // [rsp+88h] [rbp-80h]
  __int128 v85; // [rsp+98h] [rbp-70h]
  _BYTE v86[20]; // [rsp+A8h] [rbp-60h]
  _OWORD v87[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v88; // [rsp+108h] [rbp+0h]
  _OWORD v89[4]; // [rsp+118h] [rbp+10h] BYREF
  int v90; // [rsp+158h] [rbp+50h]
  struct D2D_SIZE_F v91; // [rsp+168h] [rbp+60h] BYREF
  float v92; // [rsp+170h] [rbp+68h]
  float v93; // [rsp+174h] [rbp+6Ch]
  struct CRenderTargetImageSource *v94; // [rsp+178h] [rbp+70h] BYREF
  float v95; // [rsp+180h] [rbp+78h]
  float v96; // [rsp+184h] [rbp+7Ch]
  int v97; // [rsp+188h] [rbp+80h]
  int v98; // [rsp+18Ch] [rbp+84h]
  _BYTE v99[20]; // [rsp+190h] [rbp+88h] BYREF
  int v100; // [rsp+1A4h] [rbp+9Ch]
  CRectanglesShape *v101; // [rsp+1A8h] [rbp+A0h]
  int v102; // [rsp+1B0h] [rbp+A8h]
  CMILRefCountBase *v103[310]; // [rsp+1B8h] [rbp+B0h] BYREF

  v4 = (__m128)*((unsigned int *)this + 2);
  v4.m128_f32[0] = v4.m128_f32[0] + 0.0;
  v5 = *(_QWORD *)this;
  v6 = *((float *)this + 3) + 0.0;
  v9 = 0.0;
  v82 = 0LL;
  v10 = 0.0;
  v92 = v4.m128_f32[0];
  v93 = v6;
  v91.width = 0.0;
  v91.height = 0.0;
  v90 = 0;
  CMatrixStack::Top((CMatrixStack *)(v5 + 472), (struct CMILMatrix *)v89);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v11 + 368) + 72LL))(*(_QWORD *)(v11 + 368), v99);
  if ( !*((_DWORD *)this + 26) )
    goto LABEL_25;
  v77 = 0LL;
  *(_QWORD *)&v78.m[1][0] = &v77;
  *(_QWORD *)&v78.m[2][0] = 0LL;
  LOBYTE(v79) = 1;
  v14 = CBrushDrawListGenerator::ComputeBrushClamp(this, (struct CShape **)v78.m[2]);
  if ( (_BYTE)v79 )
  {
    v15 = *(_OWORD *)&v78.m[1][0];
    v16 = **(CRectanglesShape ***)&v78.m[1][0];
    if ( *(_QWORD *)&v78.m[2][0] != **(_QWORD **)&v78.m[1][0] )
    {
      if ( v16 )
      {
        v17 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v16;
        if ( v17 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v16, 1);
        else
          v17(v16, 1);
      }
      *(_QWORD *)v15 = *((_QWORD *)&v15 + 1);
    }
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x379u);
LABEL_57:
    if ( v77 )
    {
      v35 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v77;
      if ( v35 == CRectanglesShape::`scalar deleting destructor' )
        CRectanglesShape::`scalar deleting destructor'(v77, 1);
      else
        v35(v77, 1);
    }
    goto LABEL_108;
  }
  v18 = *((_DWORD *)this + 4);
  v19 = *((_DWORD *)this + 5);
  HIDWORD(v83[1]) = 0;
  LODWORD(v83[0]) = v18;
  v20 = *((_DWORD *)this + 6);
  *(struct IImageSource **)((char *)v83 + 4) = (struct IImageSource *)v19;
  v84 = __PAIR64__(*((_DWORD *)this + 7), v20);
  v21 = *((_DWORD *)this + 9);
  *(_DWORD *)v86 = *((_DWORD *)this + 8);
  *(_QWORD *)&v86[4] = v21;
  *(_QWORD *)&v86[12] = 1065353216LL;
  *(_QWORD *)&v85 = 0LL;
  *((_QWORD *)&v85 + 1) = 1065353216LL;
  v22 = (*(__int64 (__fastcall **)(CRectanglesShape *, struct CRenderTargetImageSource **, struct IImageSource **))(*(_QWORD *)v77 + 32LL))(
          v77,
          &v94,
          v83);
  v14 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x37Du);
    goto LABEL_57;
  }
  if ( *(float *)&v94 > 0.0 )
  {
    LODWORD(v91.width) = (_DWORD)v94;
    v9 = *(float *)&v94;
  }
  if ( *((float *)&v94 + 1) > 0.0 )
  {
    v91.height = *((FLOAT *)&v94 + 1);
    v10 = *((float *)&v94 + 1);
  }
  if ( v4.m128_f32[0] > v95 )
  {
    v4 = (__m128)LODWORD(v95);
    v92 = v95;
  }
  if ( v6 > v96 )
  {
    v6 = v96;
    v93 = v96;
  }
  if ( v4.m128_f32[0] <= v9 || v6 <= v10 )
  {
    v6 = 0.0;
    v4 = 0LL;
    v10 = 0.0;
    v93 = 0.0;
    v9 = 0.0;
    v92 = 0.0;
    v91.height = 0.0;
    v91.width = 0.0;
  }
  if ( v77 )
  {
    v23 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v77;
    if ( v23 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v77, 1);
    else
      v23(v77, 1);
  }
LABEL_25:
  *(_OWORD *)v83 = v89[0];
  v84 = v89[1];
  v85 = v89[2];
  *(_OWORD *)v86 = v89[3];
  *(_DWORD *)&v86[16] = v90;
  if ( CMILMatrix::Invert((CMILMatrix *)v83, v12, v13) )
  {
    *(float *)&v25 = (float)*(int *)v99;
    *(float *)&v26 = (float)*(int *)&v99[4];
    v27 = (float)*(int *)&v99[8];
    v28 = (float)*(int *)&v99[12];
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(*(_QWORD *)this + 8LL));
    v94 = (struct CRenderTargetImageSource *)__PAIR64__(v26, v25);
    v30 = *((_DWORD *)CurrentVisual + 38);
    v98 = *((_DWORD *)CurrentVisual + 39);
    v97 = v30;
    v95 = v27;
    v96 = v28;
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)v83, (__int64)&v94, (float *)&v94);
    if ( *(float *)&v94 > v9 )
    {
      LODWORD(v91.width) = (_DWORD)v94;
      v9 = *(float *)&v94;
    }
    if ( *((float *)&v94 + 1) > v10 )
    {
      v91.height = *((FLOAT *)&v94 + 1);
      v10 = *((float *)&v94 + 1);
    }
    if ( v4.m128_f32[0] > v95 )
    {
      v4 = (__m128)LODWORD(v95);
      v92 = v95;
    }
    if ( v6 > v96 )
    {
      v6 = v96;
      v93 = v96;
    }
    if ( v4.m128_f32[0] <= v9 || v6 <= v10 )
    {
      v6 = 0.0;
      v4 = 0LL;
      v10 = 0.0;
      v93 = 0.0;
      v9 = 0.0;
      v92 = 0.0;
      v91.height = 0.0;
      v91.width = 0.0;
    }
  }
  v31 = *(const struct CVisualTree ***)this;
  v79 = 0LL;
  *(_OWORD *)&v78.m[1][0] = 0LL;
  v80 = 0;
  LOBYTE(v81) = 0;
  CpuClip = CDrawingContext::GetCpuClip(v31, v24, (struct CCpuClip *)v78.m[1]);
  v14 = CpuClip;
  if ( CpuClip < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CpuClip, 0x39Eu);
    goto LABEL_107;
  }
  if ( !(unsigned __int8)CCpuClip::HasClip((CCpuClip *)v78.m[1]) )
    goto LABEL_52;
  v33 = CCpuClip::ResolveClip((CCpuClip *)v78.m[1], &v77);
  v14 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x3A3u);
    goto LABEL_107;
  }
  v34 = (*(__int64 (__fastcall **)(CRectanglesShape *, struct CRenderTargetImageSource **, _QWORD))(*(_QWORD *)v77 + 32LL))(
          v77,
          &v94,
          0LL);
  v14 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x3A6u);
LABEL_107:
    CShapePtr::Release(&v79);
    goto LABEL_108;
  }
  if ( *(float *)&v94 > v9 )
  {
    LODWORD(v91.width) = (_DWORD)v94;
    v9 = *(float *)&v94;
  }
  if ( *((float *)&v94 + 1) > v10 )
  {
    v91.height = *((FLOAT *)&v94 + 1);
    v10 = *((float *)&v94 + 1);
  }
  if ( v4.m128_f32[0] > v95 )
  {
    v4 = (__m128)LODWORD(v95);
    v92 = v95;
  }
  if ( v6 > v96 )
  {
    v6 = v96;
    v93 = v96;
  }
  if ( v4.m128_f32[0] <= v9 || v6 <= v10 )
  {
    v6 = 0.0;
    v4 = 0LL;
    v10 = 0.0;
    v93 = 0.0;
    v9 = 0.0;
    v92 = 0.0;
    v91.height = 0.0;
    v91.width = 0.0;
  }
LABEL_52:
  CShapePtr::Release(&v79);
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v91) )
  {
    *a2 = 0LL;
LABEL_54:
    v14 = 0;
    goto LABEL_108;
  }
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v89, (float *)&v91, (float *)&v77);
  m11 = FLOAT_1_0;
  v38 = FLOAT_1_0;
  v78.m11 = FLOAT_1_0;
  *(float *)&v94 = FLOAT_1_0;
  if ( *((_DWORD *)this + 26) == 1 )
  {
    v39 = (float *)*((_QWORD *)this + 9);
    if ( v39 )
    {
      *(_OWORD *)&a4 = *((unsigned int *)this + 6);
      v40 = (__m128)*((unsigned int *)this + 4);
      v41 = *((float *)this + 7);
      v42 = (__m128)*((unsigned int *)this + 5);
      v43 = *((float *)this + 4) * v39[10];
      v44 = v39[7] * v40.m128_f32[0];
      v40.m128_f32[0] = v40.m128_f32[0] * v39[13];
      v45 = v41 * v39[8];
      v78.m21 = v44 + (float)(*((float *)this + 6) * v39[8]);
      v46 = (float)(v42.m128_f32[0] * v39[7]) + v45;
      v47 = *(float *)&a4 * v39[11];
      *(float *)&a4 = *(float *)&a4 * v39[14];
      v78.m22 = v46;
      v48 = v43 + v47;
      v49 = v42.m128_f32[0] * v39[10];
      v42.m128_f32[0] = v42.m128_f32[0] * v39[13];
      v50 = v41 * v39[11];
      v51 = v41 * v39[14];
      v40.m128_f32[0] = (float)(v40.m128_f32[0] + *(float *)&a4) + *((float *)this + 8);
      v78.dx = v48;
      v78.dy = v49 + v50;
      v42.m128_f32[0] = (float)(v42.m128_f32[0] + v51) + *((float *)this + 9);
      v79 = (CRectanglesShape *)_mm_unpacklo_ps(v40, v42).m128_u64[0];
      D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)v78.m[1], &v78, (float *)&v94, v36);
      m11 = v78.m11;
      v38 = *(float *)&v94;
    }
  }
  v52 = v4;
  v52.m128_f32[0] = v4.m128_f32[0] - v9;
  v53 = v91.width / fmaxf(1.0, m11 * v91.width);
  v54 = *(float *)&v77 / fmaxf(1.0, v38 * *(float *)&v77);
  v55 = v52;
  v56.m128_f32[0] = (float)(v4.m128_f32[0] - v9) * v53;
  v55.m128_f32[0] = (float)(int)v56.m128_f32[0];
  LODWORD(v77) = _mm_cmplt_ss(v55, v56).m128_u32[0];
  v55.m128_f32[0] = (float)(v6 - v10) * v54;
  *(float *)&a4 = (float)(int)v55.m128_f32[0];
  v91.width = (float)((int)v56.m128_f32[0] - (int)v77);
  LODWORD(v77) = _mm_cmplt_ss(*(__m128 *)&a4, v55).m128_u32[0];
  v57 = (float)(*(_DWORD *)&v99[8] - *(_DWORD *)v99);
  v91.height = (float)((int)(float)((float)(v6 - v10) * v54) - (int)v77);
  if ( v91.width > v57 )
  {
    v91.width = (float)(*(_DWORD *)&v99[8] - *(_DWORD *)v99);
    v53 = v57 / v52.m128_f32[0];
  }
  v58 = (float)(*(_DWORD *)&v99[12] - *(_DWORD *)&v99[4]);
  if ( (float)((int)(float)((float)(v6 - v10) * v54) - (int)v77) > v58 )
  {
    v91.height = (float)(*(_DWORD *)&v99[12] - *(_DWORD *)&v99[4]);
    v54 = v58 / (float)(v6 - v10);
  }
  v77 = 0LL;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v77);
  v59 = *(CDrawingContext **)this;
  v94 = (struct CRenderTargetImageSource *)"DWM Drawlist Brush intermediate";
  LODWORD(v95) = 31;
  v60 = CDrawingContext::PushOffScreenRenderingLayer(v59, (const struct CResourceTag *)&v94, &v91, 1, &v77);
  v14 = v60;
  if ( v60 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x3E6u);
    goto LABEL_94;
  }
  v61 = v77;
  (*(void (__fastcall **)(CRectanglesShape *, __int64))(*(_QWORD *)v77 + 152LL))(v77, 1LL);
  v87[1] = _xmm;
  v88 = 32085;
  v87[2] = _xmm;
  v87[0] = _xmm;
  v87[3] = _xmm;
  CMILMatrix::Translate((CMILMatrix *)v87, COERCE_FLOAT(LODWORD(v9) ^ _xmm), COERCE_FLOAT(LODWORD(v10) ^ _xmm));
  CMILMatrix::Scale((CMILMatrix *)v87, v53, v54, 1.0);
  v62 = CDrawingContext::PushTransformInternal(*(CDrawingContext **)this, 0LL, (const struct CMILMatrix *)v87, 0, 1);
  v14 = v62;
  if ( v62 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x3EFu);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v77);
    goto LABEL_104;
  }
  CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v103);
  DrawList = CBrushDrawListGenerator::GenerateDrawList(this, v103);
  v14 = DrawList;
  if ( DrawList < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawList, 0x3F3u);
    goto LABEL_102;
  }
  v91 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v91);
  v64 = CDrawListCache::Create((struct CDrawListCache **)&v91);
  v14 = v64;
  if ( v64 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0x3F6u);
    goto LABEL_98;
  }
  v65 = CDrawListCache::Update(
          *(CDrawListCache **)&v91,
          *(struct CDrawingContext **)this,
          (struct CDrawListPrimitiveBuilder *)v103);
  v14 = v65;
  if ( v65 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x3F7u);
    goto LABEL_98;
  }
  v66 = CDrawListCache::Render(*(_QWORD *)&v91, *(CDrawingContext **)this, (struct CMILMatrix *)v87, 1.0);
  v14 = v66;
  if ( v66 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x3FDu);
LABEL_98:
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v91);
LABEL_102:
    CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v103);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v77);
    CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
LABEL_104:
    CDrawingContext::PopLayer(*(CDrawingContext **)this);
    goto LABEL_108;
  }
  CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
  v67 = CDrawingContext::PopLayer(*(CDrawingContext **)this);
  v14 = v67;
  if ( v67 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x404u);
    goto LABEL_93;
  }
  v94 = 0LL;
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v94);
  v68 = CRenderTargetImageSource::Create(v61, 1, &v94);
  v14 = v68;
  if ( v68 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v68, 0x409u);
    goto LABEL_92;
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v82);
  v69 = (**(__int64 (__fastcall ***)(struct CRenderTargetImageSource *, GUID *, struct IImageSource **))v94)(
          v94,
          &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552,
          &v82);
  v14 = v69;
  if ( v69 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x40Bu);
LABEL_92:
    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v94);
LABEL_93:
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v91);
    CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v103);
LABEL_94:
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v77);
    goto LABEL_108;
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v94);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v91);
  CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v103);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v77);
  *(_DWORD *)v99 = 0;
  *(_DWORD *)&v99[4] = 0;
  *(float *)&v99[8] = v4.m128_f32[0] - v9;
  *(float *)&v99[12] = v6 - v10;
  v77 = 0LL;
  *(_QWORD *)&v78.m[1][0] = &v77;
  *(_QWORD *)&v78.m[2][0] = 0LL;
  LOBYTE(v79) = 1;
  v14 = CSurfaceDrawListBrush::Create(v82, (const struct D2D_RECT_F *)v99, (struct CSurfaceDrawListBrush **)v78.m[2]);
  if ( (_BYTE)v79 )
  {
    v71 = *(_OWORD *)&v78.m[1][0];
    v72 = **(CSurfaceDrawListBrush ***)&v78.m[1][0];
    if ( *(_QWORD *)&v78.m[2][0] != **(_QWORD **)&v78.m[1][0] )
    {
      if ( v72 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v72, 1);
      *(_QWORD *)v71 = *((_QWORD *)&v71 + 1);
    }
  }
  if ( v14 >= 0 )
  {
    *(float *)v99 = v9;
    *(float *)&v99[4] = v10;
    *(_DWORD *)&v99[8] = v4.m128_i32[0];
    *(float *)&v99[12] = v6;
    D2DMatrixHelper::ComputeRectangleTransform(
      (CRectanglesShape *)((char *)v77 + 8),
      (const struct D2D_RECT_F *)v99,
      (const struct D2D_RECT_F *)v78.m[1],
      v70);
    *(_DWORD *)&v99[8] = 0;
    v100 = 0;
    *(_QWORD *)v99 = *(_QWORD *)&v78.m[1][0];
    v73 = (char *)v77 + 28;
    *(_QWORD *)&v99[12] = *(_QWORD *)&v78.m[2][0];
    v101 = v79;
    v102 = 1065353216;
    LOWORD(v78.m11) = 257;
    *((_DWORD *)v77 + 6) = 0;
    CopyIfNeeded_Matrix3x3_((__int64)v73, (__int64)v99);
    v75 = v74 + 64;
    if ( (struct D2D_MATRIX_3X2_F *)v75 != &v78 )
    {
      *(_WORD *)v75 = LOWORD(v78.m11);
      *(_BYTE *)(v75 + 2) = 1;
    }
    *((_BYTE *)v77 + 152) = 1;
    *a2 = v77;
    goto LABEL_54;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x41Eu);
  if ( v77 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v77, 1);
LABEL_108:
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v82);
  return (unsigned int)v14;
}
