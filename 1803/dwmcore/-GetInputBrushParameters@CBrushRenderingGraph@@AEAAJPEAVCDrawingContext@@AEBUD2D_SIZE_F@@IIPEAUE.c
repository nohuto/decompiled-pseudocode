/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18008E6C0
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18008DC58 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180002AA0 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x180002B80 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x180006514 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     FindBaseSimpleInputBrush @ 0x18008B3A4 (FindBaseSimpleInputBrush.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008DB20 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x18008EA1C (-GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18008F7E0 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180099560 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180099930 (-PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017C73C (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1801BD260 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x180217F04 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  CSurfaceDrawListBrush *v8; // rbx
  __int64 v9; // r12
  FLOAT height; // xmm1_4
  CSurfaceBrush *v11; // rdi
  int (*v12)(CSurfaceBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *); // rax
  int v13; // eax
  int IntermediateSurfaceBrush; // esi
  int (*v15)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  const struct D2D1::Matrix3x2F *SurfaceTransform; // rax
  _QWORD *BaseSimpleInputBrush; // rax
  __int64 v19; // rdi
  bool (__fastcall *v20)(__int64, int); // rax
  bool v21; // al
  struct _D3DCOLORVALUE *v22; // r12
  char v23; // al
  _QWORD *v24; // rax
  __int64 v25; // r15
  bool (__fastcall *v26)(__int64, int); // rax
  bool v27; // al
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdi
  char v32; // al
  bool (__fastcall *v33)(__int64, int); // rax
  bool v34; // al
  bool (__fastcall *v35)(__int64, int); // rax
  bool v36; // al
  CSurfaceDrawListBrush *v37; // rdi
  struct CDrawingContext *v38; // r15
  int v39; // eax
  int *v40; // rdi
  __int64 v41; // r14
  __int64 v42; // rcx
  __int64 v44; // xmm1_8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  struct CRenderingEffectFactory *v48; // r9
  CGeometryOnlyDrawListBrush *v49; // rcx
  FLOAT v50; // xmm0_4
  FLOAT v51; // xmm1_4
  CDrawListBrush *v52; // rax
  __int128 v53; // xmm0
  CSurfaceDrawListBrush *v54; // rcx
  CSurfaceDrawListBrush *v55; // rdx
  int v56; // edi
  CColorDrawListBrush *v57; // rcx
  CDrawListBrush *v58; // rcx
  __int64 v59; // rcx
  CDrawListBrush *v60; // rcx
  __int128 v61; // xmm0
  int v62; // eax
  FLOAT v63; // xmm0_4
  CEmptyRegionDrawListBrush *v64; // rcx
  CSurfaceDrawListBrush *v65; // rcx
  int v66; // eax
  CColorDrawListBrush *v67; // rcx
  unsigned int v68; // [rsp+20h] [rbp-B9h]
  CDrawListBrush *v69; // [rsp+30h] [rbp-A9h] BYREF
  CSurfaceDrawListBrush *v70; // [rsp+38h] [rbp-A1h] BYREF
  struct CGeometryOnlyDrawListBrush *v71[2]; // [rsp+40h] [rbp-99h] BYREF
  char v72; // [rsp+50h] [rbp-89h]
  CSurfaceDrawListBrush *v73; // [rsp+58h] [rbp-81h] BYREF
  CColorDrawListBrush *v74; // [rsp+60h] [rbp-79h] BYREF
  struct CColorDrawListBrush *v75[2]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v76; // [rsp+78h] [rbp-61h]
  struct CDrawingContext *v77; // [rsp+80h] [rbp-59h] BYREF
  FLOAT width; // [rsp+88h] [rbp-51h]
  FLOAT v79; // [rsp+8Ch] [rbp-4Dh]
  int v80; // [rsp+90h] [rbp-49h]
  __int128 v81; // [rsp+94h] [rbp-45h]
  CSurfaceDrawListBrush *v82; // [rsp+A8h] [rbp-31h]
  __int64 v83; // [rsp+B0h] [rbp-29h]
  __int64 v84; // [rsp+B8h] [rbp-21h]
  __int64 v85; // [rsp+C0h] [rbp-19h]
  int v86; // [rsp+C8h] [rbp-11h] BYREF
  __int16 v87; // [rsp+CCh] [rbp-Dh]
  char v88; // [rsp+CEh] [rbp-Bh]
  D2D1_MATRIX_3X2_F matrix; // [rsp+D0h] [rbp-9h] BYREF

  LODWORD(v69) = a4;
  v74 = a2;
  v8 = 0LL;
  v9 = *((unsigned int *)a6 + 12);
  *(_OWORD *)((char *)a6 + 24) = 0LL;
  height = a3->height;
  v11 = *(CSurfaceBrush **)(*((_QWORD *)this + 2) + 24 * v9);
  width = a3->width;
  v80 = 0;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0;
  v88 = 0;
  v81 = _xmm;
  v77 = a2;
  v79 = height;
  v87 = 256;
  v12 = *(int (**)(CSurfaceBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v11 + 288LL);
  if ( v12 == CSurfaceBrush::PrepareForDrawing )
    v13 = CSurfaceBrush::PrepareForDrawing(v11, a2, a3);
  else
    v13 = ((__int64 (__fastcall *)(CSurfaceBrush *))v12)(v11);
  IntermediateSurfaceBrush = v13;
  if ( v13 < 0 )
  {
    v68 = 138;
    goto LABEL_124;
  }
  v15 = *(int (**)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *))(*(_QWORD *)v11 + 296LL);
  if ( v15 == CSurfaceBrush::GetBrushParameters )
    BrushParameters = CSurfaceBrush::GetBrushParameters(v11, (struct CBrushDrawListGenerator *)&v77);
  else
    BrushParameters = ((__int64 (__fastcall *)(CSurfaceBrush *, struct CDrawingContext **))v15)(v11, &v77);
  IntermediateSurfaceBrush = BrushParameters;
  if ( BrushParameters < 0 )
  {
    v22 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_113;
  }
  v8 = v82;
  v82 = 0LL;
  v73 = v8;
  if ( !v8 )
  {
    v22 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_92;
  }
  SurfaceTransform = (const struct D2D1::Matrix3x2F *)CBrushRenderingGraph::GetSurfaceTransform(this, v9);
  if ( SurfaceTransform )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v75, (CSurfaceDrawListBrush *)((char *)v8 + 8), SurfaceTransform);
    v44 = v76;
    *(_OWORD *)v45 = *(_OWORD *)v75;
    *(_QWORD *)(v45 + 16) = v44;
  }
  BaseSimpleInputBrush = FindBaseSimpleInputBrush(v8);
  v19 = (__int64)BaseSimpleInputBrush;
  if ( !BaseSimpleInputBrush )
  {
    if ( CCommonRegistryData::m_fFlattenVirtualSurfaceBrush
      || (v46 = 44LL * a5,
          v47 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * (unsigned int)v69),
          *(_BYTE *)(v47 + v46 + 108))
      || *(_BYTE *)(v47 + v46 + 109) )
    {
      CBrushDrawListGenerator::AttachInput((__int64)&v77, 0, &v73);
      v69 = 0LL;
      v71[0] = (struct CGeometryOnlyDrawListBrush *)&v69;
      v71[1] = 0LL;
      v72 = 1;
      IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create(&v71[1]);
      if ( v72 )
      {
        v49 = *(CGeometryOnlyDrawListBrush **)v71[0];
        *(_QWORD *)v71[0] = v71[1];
        if ( v49 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v49, 1);
      }
      if ( IntermediateSurfaceBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0xC9u);
      }
      else
      {
        v50 = a3->width;
        v51 = a3->height;
        v52 = v69;
        v71[0] = 0LL;
        *(FLOAT *)&v71[1] = v50;
        *((_BYTE *)v69 + 52) = 1;
        *((_DWORD *)v52 + 12) = 50529027;
        *((FLOAT *)&v71[1] + 1) = v51;
        v53 = *(_OWORD *)v71;
        v71[1] = 0LL;
        v72 = 1;
        *((_OWORD *)v52 + 2) = v53;
        v71[0] = (struct CGeometryOnlyDrawListBrush *)&v70;
        v70 = 0LL;
        IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                     (CBrushDrawListGenerator *)&v77,
                                     &v71[1],
                                     v69,
                                     v48);
        if ( v72 )
        {
          v54 = *(CSurfaceDrawListBrush **)v71[0];
          *(_QWORD *)v71[0] = v71[1];
          if ( v54 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v54, 1);
        }
        if ( IntermediateSurfaceBrush >= 0 )
        {
          v55 = v73;
          v8 = v70;
          v70 = 0LL;
          v73 = v8;
          if ( v55 )
            std::default_delete<CDrawListBrush>::operator()((__int64)v54, v55);
          v56 = v80;
          CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v77);
          v80 = v56 | 0x100;
          if ( v70 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v70, 1);
          if ( v69 )
            CGeometryOnlyDrawListBrush::`vector deleting destructor'(v69, 1);
          goto LABEL_71;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0xCDu);
        if ( v70 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v70, 1);
      }
      if ( v69 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v69, 1);
      goto LABEL_77;
    }
LABEL_71:
    v22 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_14;
  }
  v20 = *(bool (__fastcall **)(__int64, int))(*BaseSimpleInputBrush + 8LL);
  if ( v20 == CSurfaceDrawListBrush::IsOfType )
    v21 = CSurfaceDrawListBrush::IsOfType(v19, 0);
  else
    v21 = v20(v19, 0);
  v22 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
  if ( v21 )
  {
    v69 = 0LL;
    v71[1] = 0LL;
    v71[0] = (struct CGeometryOnlyDrawListBrush *)&v69;
    *(_OWORD *)&v22->r = v81;
    v72 = 1;
    IntermediateSurfaceBrush = CColorDrawListBrush::Create((struct _D3DCOLORVALUE *)((char *)a6 + 24), &v71[1]);
    if ( v72 )
    {
      v57 = *(CColorDrawListBrush **)v71[0];
      *(_QWORD *)v71[0] = v71[1];
      if ( v57 )
        CColorDrawListBrush::`vector deleting destructor'(v57, 1);
    }
    if ( IntermediateSurfaceBrush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0xBBu);
      v60 = v69;
LABEL_89:
      if ( v60 )
        CColorDrawListBrush::`vector deleting destructor'(v60, 1);
      goto LABEL_46;
    }
    CDrawListBrush::CopyPrimitiveClamp(v69, (const struct CDrawListBrush *)v19);
    v58 = v69;
    *(_OWORD *)((char *)v69 + 8) = *(_OWORD *)(v19 + 8);
    *((_QWORD *)v58 + 3) = *(_QWORD *)(v19 + 24);
    v70 = v69;
    v69 = 0LL;
    (*(void (__fastcall **)(CSurfaceDrawListBrush *, CSurfaceDrawListBrush **))(*(_QWORD *)v8 + 40LL))(v8, &v70);
    if ( v70 )
      std::default_delete<CDrawListBrush>::operator()(v59, v70);
    if ( v69 )
      CColorDrawListBrush::`vector deleting destructor'(v69, 1);
  }
LABEL_14:
  if ( v8 )
  {
    v23 = 0;
    goto LABEL_16;
  }
LABEL_92:
  v23 = 1;
LABEL_16:
  if ( v23 )
  {
    v61 = v81;
    v62 = v80;
    *((_BYTE *)a6 + 45) = 1;
    *(_OWORD *)&v22->r = v61;
    *((_DWORD *)a6 + 10) = v62;
LABEL_113:
    v38 = v74;
    goto LABEL_41;
  }
  matrix = *(D2D1_MATRIX_3X2_F *)((char *)v8 + 8);
  if ( D2D1IsMatrixInvertible(&matrix) )
  {
    v24 = FindBaseSimpleInputBrush(v8);
    v25 = (__int64)v24;
    if ( v24
      && ((v26 = *(bool (__fastcall **)(__int64, int))(*v24 + 8LL), v26 != CSurfaceDrawListBrush::IsOfType)
        ? (v27 = v26(v25, 2))
        : (v27 = CSurfaceDrawListBrush::IsOfType(v25, 2)),
          v27) )
    {
      v28 = *(_QWORD *)a6;
      v29 = *(_QWORD *)(v25 + 56);
      if ( *(_QWORD *)a6 != v29 )
      {
        if ( v29 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 8LL))(*(_QWORD *)(v25 + 56));
          v28 = *(_QWORD *)a6;
        }
        *(_QWORD *)a6 = v29;
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v30 = *((_QWORD *)a6 + 1);
      v31 = *(_QWORD *)(v25 + 64);
      if ( v30 != v31 )
      {
        if ( v31 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 8LL))(*(_QWORD *)(v25 + 64));
          v30 = *((_QWORD *)a6 + 1);
        }
        *((_QWORD *)a6 + 1) = v31;
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      *((_BYTE *)a6 + 16) = *(_BYTE *)(v25 + 72);
      v32 = 0;
    }
    else
    {
      v32 = 1;
    }
    *((_BYTE *)a6 + 45) = v32;
    v33 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v8 + 8LL);
    if ( v33 == CSurfaceDrawListBrush::IsOfType )
      v34 = CSurfaceDrawListBrush::IsOfType((__int64)v8, 5);
    else
      v34 = v33((__int64)v8, 5);
    if ( !v34 )
    {
      v35 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v8 + 8LL);
      v36 = v35 == CSurfaceDrawListBrush::IsOfType
          ? CSurfaceDrawListBrush::IsOfType((__int64)v8, 4)
          : v35((__int64)v8, 4);
      v37 = v8;
      if ( !v36 )
      {
        v38 = v74;
LABEL_40:
        v39 = v80;
        v8 = 0LL;
        *((_QWORD *)a6 + 7) = v37;
        *((_DWORD *)a6 + 10) = v39;
LABEL_41:
        if ( IntermediateSurfaceBrush != -2147024846
          && IntermediateSurfaceBrush != -2147022876
          && IntermediateSurfaceBrush != -2003304441 )
        {
          goto LABEL_44;
        }
        goto LABEL_95;
      }
    }
    v63 = a3->width;
    v71[0] = 0LL;
    v38 = v74;
    v71[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(a3->height), LODWORD(v63));
    v70 = 0LL;
    v75[0] = (struct CColorDrawListBrush *)&v70;
    v75[1] = 0LL;
    LOBYTE(v76) = 1;
    IntermediateSurfaceBrush = CEmptyRegionDrawListBrush::Create(v74, (struct D2D_RECT_F *)v71);
    if ( (_BYTE)v76 )
    {
      v64 = *(CEmptyRegionDrawListBrush **)v75[0];
      *(_QWORD *)v75[0] = v75[1];
      if ( v64 )
        CEmptyRegionDrawListBrush::`scalar deleting destructor'(v64, 1u);
    }
    if ( IntermediateSurfaceBrush >= 0 )
    {
      v65 = 0LL;
      v37 = v70;
      v70 = 0LL;
      if ( v73 )
      {
        std::default_delete<CDrawListBrush>::operator()(0LL, v73);
        v65 = v70;
      }
      if ( v65 )
        CEmptyRegionDrawListBrush::`scalar deleting destructor'(v65, 1u);
      goto LABEL_40;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x118u);
    if ( v70 )
      CEmptyRegionDrawListBrush::`scalar deleting destructor'(v70, 1u);
LABEL_77:
    v8 = v73;
    goto LABEL_46;
  }
  v38 = v74;
  IntermediateSurfaceBrush = -2003304441;
LABEL_95:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
    McTemplateU0d(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
      (unsigned int)IntermediateSurfaceBrush);
  *((_BYTE *)a6 + 45) = 1;
  IntermediateSurfaceBrush = 0;
  *((_DWORD *)a6 + 10) = 0;
LABEL_44:
  if ( IntermediateSurfaceBrush < 0 )
  {
    v68 = 307;
LABEL_124:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, v68);
    goto LABEL_46;
  }
  if ( *((_BYTE *)a6 + 45) )
  {
    v66 = CDrawListBitmap::SetTransparent(a6, v38);
    IntermediateSurfaceBrush = v66;
    if ( v66 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x138u);
      goto LABEL_46;
    }
    if ( !*((_QWORD *)a6 + 7) )
    {
      v74 = 0LL;
      v75[0] = (struct CColorDrawListBrush *)&v74;
      v75[1] = 0LL;
      LOBYTE(v76) = 1;
      IntermediateSurfaceBrush = CColorDrawListBrush::Create(v22, &v75[1]);
      if ( (_BYTE)v76 )
      {
        v67 = *(CColorDrawListBrush **)v75[0];
        *(_QWORD *)v75[0] = v75[1];
        if ( v67 )
          CColorDrawListBrush::`vector deleting destructor'(v67, 1);
      }
      if ( IntermediateSurfaceBrush >= 0 )
      {
        *((_QWORD *)a6 + 7) = v74;
        goto LABEL_46;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x140u);
      v60 = v74;
      goto LABEL_89;
    }
  }
LABEL_46:
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v77);
  v40 = &v86;
  v41 = 4LL;
  do
  {
    v40 -= 2;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v40);
    --v41;
  }
  while ( v41 );
  if ( v8 )
    std::default_delete<CDrawListBrush>::operator()(v42, v8);
  return (unsigned int)IntermediateSurfaceBrush;
}
