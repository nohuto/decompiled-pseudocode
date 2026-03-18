/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C129C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180040EA4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006D0EC (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x1800AD784 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18013E378 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1801616C8 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801617B0 (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x180163178 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x180163288 (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 *     ?GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180198808 (-GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180210250 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v1; // r12
  int v3; // eax
  _DWORD *v4; // r15
  _DWORD *v5; // r13
  struct ID2D1StrokeStyle1 **v6; // r14
  CGeometry *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  CGeometryOnlyDrawListBrush *v11; // rbx
  int v12; // eax
  CRectanglesShape **v13; // rcx
  CGeometry *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  float v19; // xmm1_4
  float v20; // xmm3_4
  int v21; // eax
  CRectanglesShape **v22; // rcx
  float v23; // xmm6_4
  float v24; // xmm7_4
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // ebx
  CGeometryOnlyDrawListBrush *v29; // rcx
  __int64 v30; // rcx
  int v31; // xmm2_4
  CGeometryOnlyDrawListBrush *v32; // rax
  __int64 v33; // xmm1_8
  int v34; // ebx
  CGeometryOnlyDrawListBrush *v35; // rcx
  int DrawList; // eax
  int v37; // eax
  int v38; // eax
  CGeometry *v39; // rcx
  int v40; // eax
  int v41; // eax
  int D2DGradientBrush; // eax
  int v43; // eax
  CGeometry *v44; // rcx
  int ShapeData; // eax
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  float v49; // xmm1_4
  int v50; // eax
  CRectanglesShape **v51; // rcx
  CRectanglesShape **v52; // rcx
  CRectanglesShape **v53; // rcx
  __int64 v54; // rax
  CGeometryOnlyDrawListBrush *v55; // rcx
  int v56; // eax
  unsigned int v57; // ebx
  struct ID2D1StrokeStyle1 *v59; // [rsp+28h] [rbp-E0h]
  CGeometryOnlyDrawListBrush *v60; // [rsp+38h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v61; // [rsp+40h] [rbp-C8h] BYREF
  CDrawListCache *v62; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v63; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-B0h]
  struct CShape *v65; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+68h] [rbp-A0h]
  struct CShape *v67; // [rsp+70h] [rbp-98h] BYREF
  __int64 v68; // [rsp+78h] [rbp-90h]
  struct CShape *v69; // [rsp+80h] [rbp-88h] BYREF
  char v70; // [rsp+88h] [rbp-80h]
  CSurfaceDrawListBrush *v71; // [rsp+90h] [rbp-78h] BYREF
  __int128 v72; // [rsp+98h] [rbp-70h]
  __int128 v73; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-50h]
  struct CGeometryOnlyDrawListBrush *v75[2]; // [rsp+C0h] [rbp-48h] BYREF
  int v76; // [rsp+D0h] [rbp-38h]
  int v77; // [rsp+D4h] [rbp-34h]
  __int64 v78; // [rsp+D8h] [rbp-30h] BYREF
  float v79; // [rsp+E0h] [rbp-28h]
  float v80; // [rsp+E4h] [rbp-24h]
  int v81; // [rsp+E8h] [rbp-20h]
  __int128 v82; // [rsp+ECh] [rbp-1Ch]
  __int64 v83; // [rsp+100h] [rbp-8h]
  __int64 v84; // [rsp+108h] [rbp+0h]
  __int64 v85; // [rsp+110h] [rbp+8h]
  __int64 v86; // [rsp+118h] [rbp+10h]
  int v87; // [rsp+120h] [rbp+18h]
  __int16 v88; // [rsp+124h] [rbp+1Ch]
  char v89; // [rsp+126h] [rbp+1Eh]
  struct _D3DCOLORVALUE v90; // [rsp+128h] [rbp+20h] BYREF
  struct _D3DCOLORVALUE v91; // [rsp+138h] [rbp+30h] BYREF
  struct D2D_MATRIX_3X2_F v92; // [rsp+148h] [rbp+40h] BYREF
  CMILRefCountBase *v93[310]; // [rsp+168h] [rbp+60h] BYREF

  v1 = &v92;
  *(_OWORD *)&v92.m11 = _xmm;
  *((_BYTE *)this + 536) = 0;
  *((_BYTE *)this + 538) = 0;
  *(_QWORD *)&v92.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v93);
  v62 = 0LL;
  v3 = CDrawListCache::Create(&v62);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x39u);
    goto LABEL_96;
  }
  v4 = (_DWORD *)*((_QWORD *)this + 64);
  v5 = (_DWORD *)*((_QWORD *)this + 65);
  if ( v4 == v5 )
    goto LABEL_96;
  v6 = (struct ID2D1StrokeStyle1 **)(v4 + 10);
  while ( 1 )
  {
    switch ( *v4 )
    {
      case 1:
        v1 = (struct D2D_MATRIX_3X2_F *)(v6 - 4);
        *((_BYTE *)this + 536) = 1;
        goto LABEL_59;
      case 2:
        v44 = *(v6 - 4);
        v69 = 0LL;
        v70 = 0;
        ShapeData = CGeometry::GetShapeData(v44, 0LL, &v69);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x4Bu);
        }
        else
        {
          v46 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v46 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x50u);
          }
          else
          {
            v47 = *((_QWORD *)this + 42);
            *(struct _D3DCOLORVALUE *)&v91.r = *(struct _D3DCOLORVALUE *)(v6 - 3);
            v48 = *(_DWORD *)(v47 + 3104);
            if ( v48 )
              v49 = *(float *)(*(_QWORD *)(v47 + 3120) + 4LL * (unsigned int)(v48 - 1));
            else
              v49 = FLOAT_1_0;
            v91.a = v91.a * v49;
            v50 = CDrawingContext::FillShapeWithColor((CDrawingContext *)v47, v69, &v91);
            if ( v50 >= 0 )
            {
              v22 = &v69;
              goto LABEL_57;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x56u);
          }
        }
        v53 = &v69;
        goto LABEL_94;
      case 3:
        v39 = *(v6 - 4);
        v60 = 0LL;
        v65 = 0LL;
        LOBYTE(v66) = 0;
        v40 = CGeometry::GetShapeData(v39, 0LL, &v65);
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x62u);
        }
        else
        {
          v41 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v41 >= 0 )
          {
            D2DGradientBrush = CLinearGradientBrush::GetD2DGradientBrush(
                                 *(v6 - 1),
                                 *((struct CDrawingContext **)this + 42),
                                 (const struct D2D_RECT_F *)(v6 - 3),
                                 &v60);
            if ( D2DGradientBrush >= 0 )
            {
              v11 = v60;
              (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v60 + 32LL))(v60);
              v43 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 42), v65, v11);
              if ( v43 >= 0 )
              {
                v13 = &v65;
                goto LABEL_49;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x6Fu);
              v51 = &v65;
              goto LABEL_81;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGradientBrush, 0x6Cu);
            v52 = &v65;
LABEL_84:
            CShapePtr::Release(v52);
            v55 = v60;
            if ( !v60 )
              goto LABEL_96;
            v54 = *(_QWORD *)v60;
            goto LABEL_86;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x67u);
        }
        v53 = &v65;
LABEL_94:
        CShapePtr::Release(v53);
        goto LABEL_96;
    }
    if ( *v4 == 4 )
      break;
    if ( *v4 == 5 )
    {
      v14 = *(v6 - 4);
      v67 = 0LL;
      LOBYTE(v68) = 0;
      v15 = CGeometry::GetShapeData(v14, 0LL, &v67);
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB7u);
      }
      else
      {
        v16 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xBCu);
        }
        else
        {
          v17 = *((_QWORD *)this + 42);
          *(struct _D3DCOLORVALUE *)&v90.r = *(struct _D3DCOLORVALUE *)(v6 - 3);
          v18 = *(_DWORD *)(v17 + 3104);
          if ( v18 )
            v19 = *(float *)(*(_QWORD *)(v17 + 3120) + 4LL * (unsigned int)(v18 - 1));
          else
            v19 = FLOAT_1_0;
          v20 = *((float *)v6 - 2);
          v59 = *v6;
          v90.a = v90.a * v19;
          v21 = CDrawingContext::StrokeShapeWithColor((CDrawingContext *)v17, v67, &v90, v20, v59);
          if ( v21 >= 0 )
          {
            v22 = &v67;
LABEL_57:
            CShapePtr::Release(v22);
            goto LABEL_59;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC6u);
        }
      }
      v53 = &v67;
      goto LABEL_94;
    }
    if ( *v4 == 6 )
    {
      v7 = *(v6 - 4);
      v60 = 0LL;
      v63 = 0LL;
      LOBYTE(v64) = 0;
      v8 = CGeometry::GetShapeData(v7, 0LL, &v63);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xD2u);
      }
      else
      {
        v9 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
        if ( v9 >= 0 )
        {
          v10 = CLinearGradientBrush::GetD2DGradientBrush(
                  *(v6 - 1),
                  *((struct CDrawingContext **)this + 42),
                  (const struct D2D_RECT_F *)(v6 - 3),
                  &v60);
          if ( v10 >= 0 )
          {
            v11 = v60;
            (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v60 + 32LL))(v60);
            v12 = CDrawingContext::StrokeShapeWithBrush(*((CDrawingContext **)this + 42), v63, v11, *(float *)v6, v6[1]);
            if ( v12 >= 0 )
            {
              v13 = &v63;
LABEL_49:
              CShapePtr::Release(v13);
              (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v11 + 16LL))(v11);
              goto LABEL_59;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xE3u);
            v51 = &v63;
LABEL_81:
            CShapePtr::Release(v51);
            if ( !v11 )
              goto LABEL_96;
            v54 = *(_QWORD *)v11;
            v55 = v11;
LABEL_86:
            (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(v54 + 16))(v55);
            goto LABEL_96;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xDCu);
          v52 = &v63;
          goto LABEL_84;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xD7u);
      }
      v53 = &v63;
      goto LABEL_94;
    }
LABEL_59:
    v4 += 14;
    v6 += 7;
    if ( v4 == v5 )
      goto LABEL_96;
  }
  v23 = *((float *)v6 - 6) - *((float *)v6 - 8);
  v24 = *((float *)v6 - 5) - *((float *)v6 - 7);
  v25 = (__int64)*(v6 - 2);
  v78 = *((_QWORD *)this + 42);
  v79 = v23;
  v80 = v24;
  v61 = 0LL;
  v81 = 0;
  v82 = _xmm;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0;
  v88 = 256;
  v89 = 0;
  v26 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 296LL))(v25, &v78);
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x81u);
    goto LABEL_78;
  }
  v27 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL);
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x83u);
    goto LABEL_78;
  }
  if ( v87 )
    goto LABEL_33;
  v60 = 0LL;
  v75[0] = (struct CGeometryOnlyDrawListBrush *)&v60;
  v75[1] = 0LL;
  LOBYTE(v76) = 1;
  v28 = CGeometryOnlyDrawListBrush::Create(&v75[1]);
  if ( (_BYTE)v76 )
  {
    v29 = *(CGeometryOnlyDrawListBrush **)v75[0];
    *(_QWORD *)v75[0] = v75[1];
    if ( v29 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v29, 1);
  }
  if ( v28 >= 0 )
  {
    v71 = v60;
    v60 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&v78, 0, &v71);
    if ( v71 )
      std::default_delete<CDrawListBrush>::operator()(v30, v71);
    if ( v60 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v60, 1);
LABEL_33:
    v31 = *((_DWORD *)v6 - 7);
    v76 = *((_DWORD *)v6 - 8);
    v77 = v31;
    *(_OWORD *)v75 = _xmm;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v73,
      (const struct D2D1::Matrix3x2F *)v75,
      (const struct D2D1::Matrix3x2F *)v1);
    v33 = v74;
    *(_OWORD *)((char *)v32 + 8) = v73;
    *((_QWORD *)v32 + 3) = v33;
    if ( *((_BYTE *)v32 + 52) )
    {
      v75[1] = 0LL;
      v75[0] = (struct CGeometryOnlyDrawListBrush *)&v61;
      LOBYTE(v76) = 1;
      v34 = CGeometryOnlyDrawListBrush::Create(&v75[1]);
      if ( (_BYTE)v76 )
      {
        v35 = *(CGeometryOnlyDrawListBrush **)v75[0];
        *(_QWORD *)v75[0] = v75[1];
        if ( v35 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v35, 1);
      }
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x9Eu);
        goto LABEL_78;
      }
      v32 = v61;
    }
    *(_QWORD *)&v72 = 0LL;
    *((_BYTE *)v32 + 52) = 1;
    *((_DWORD *)v32 + 12) = 50529027;
    *((_QWORD *)&v72 + 1) = __PAIR64__(LODWORD(v24), LODWORD(v23));
    *((_OWORD *)v32 + 2) = v72;
    DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)&v78, v93, v61, 0LL);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0xA8u);
      goto LABEL_78;
    }
    v37 = CDrawListCache::Update(v62, *((struct CDrawingContext **)this + 42), (struct CDrawListEntryBuilder *)v93);
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xAAu);
      goto LABEL_78;
    }
    v38 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 42), v62);
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xABu);
      goto LABEL_78;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v93);
    CDrawListCache::Invalidate(v62);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v78);
    if ( v61 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v61, 1);
    goto LABEL_59;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x89u);
  if ( v60 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v60, 1);
LABEL_78:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v78);
  if ( v61 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v61, 1);
LABEL_96:
  v56 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL);
  v57 = v56;
  if ( v56 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0xEBu);
  if ( v62 )
    CMILRefCountBase::Release(v62);
  CDrawListEntryBuilder::~CDrawListEntryBuilder(v93);
  return v57;
}
