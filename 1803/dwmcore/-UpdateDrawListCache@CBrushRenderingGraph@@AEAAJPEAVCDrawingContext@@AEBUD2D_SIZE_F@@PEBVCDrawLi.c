/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18008DD3C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180002AA0 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x180002B80 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectStage@@@Z @ 0x18008B120 (--0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectSt.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?IsPrimitiveClampedToContentRect@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x18008DAE8 (-IsPrimitiveClampedToContentRect@CSurfaceDrawListBrush@@QEBA_NXZ.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008DB20 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18008F7E0 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800B2E7C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800C1D78 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct EffectStage *a5,
        struct CDrawListCache *a6)
{
  const struct D2D_SIZE_F *v8; // r14
  struct CDrawingContext *v9; // rdi
  CSurfaceDrawListBrush *v10; // rdx
  int v11; // r12d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  char *v15; // rdi
  const struct D2D_RECT_F *v16; // rbx
  bool (__fastcall *v17)(__int64, int); // rax
  bool v18; // al
  CSurfaceDrawListBrush *v19; // r9
  CSurfaceDrawListBrush *v20; // rbx
  char *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  int DrawList; // eax
  int v25; // ebx
  unsigned int v26; // edx
  __int64 i; // rcx
  __int64 v28; // rdi
  unsigned int *v29; // rsi
  CSurfaceDrawListBrush *v31; // r8
  CSurfaceDrawListBrush *v32; // rcx
  CSurfaceDrawListBrush *v33; // rax
  __int64 v34; // rcx
  CColorDrawListBrush *v35; // rcx
  CSurfaceDrawListBrush *v36; // rax
  __int64 v37; // rcx
  CGeometryOnlyDrawListBrush *v38; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CSurfaceDrawListBrush *v41; // rax
  __int128 v42; // xmm0
  unsigned int v43; // [rsp+20h] [rbp-E0h]
  CSurfaceDrawListBrush *v44; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v45; // [rsp+38h] [rbp-C8h]
  __int16 v46; // [rsp+40h] [rbp-C0h] BYREF
  char v47; // [rsp+42h] [rbp-BEh]
  CSurfaceDrawListBrush **v48; // [rsp+50h] [rbp-B0h]
  struct CGeometryOnlyDrawListBrush *v49; // [rsp+58h] [rbp-A8h] BYREF
  char v50; // [rsp+60h] [rbp-A0h]
  CSurfaceDrawListBrush *v51; // [rsp+68h] [rbp-98h] BYREF
  __int128 v52; // [rsp+70h] [rbp-90h]
  struct CRenderingTechnique *v53; // [rsp+80h] [rbp-80h]
  struct CDrawingContext *v54; // [rsp+88h] [rbp-78h]
  CDrawListCache *v55; // [rsp+90h] [rbp-70h]
  char v56[8]; // [rsp+98h] [rbp-68h] BYREF
  struct CDrawingContext *v57; // [rsp+A0h] [rbp-60h] BYREF
  int v58; // [rsp+A8h] [rbp-58h]
  int v59; // [rsp+ACh] [rbp-54h]
  int v60; // [rsp+B0h] [rbp-50h]
  __int128 v61; // [rsp+B4h] [rbp-4Ch]
  _QWORD v62[4]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v63; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v64; // [rsp+ECh] [rbp-14h]
  char v65; // [rsp+EEh] [rbp-12h]
  void **v66[6]; // [rsp+F0h] [rbp-10h] BYREF
  CMILRefCountBase *v67[310]; // [rsp+120h] [rbp+20h] BYREF

  v55 = a6;
  v8 = a3;
  *(_QWORD *)&v52 = a3;
  v9 = a2;
  v54 = a2;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v67);
  v58 = 0;
  v59 = 0;
  v11 = 0;
  v12 = 0;
  v13 = *(unsigned int *)a5;
  v14 = *((_QWORD *)this + 18);
  v57 = v9;
  v60 = 0;
  v61 = _xmm;
  memset(v62, 0, sizeof(v62));
  v63 = 0;
  v64 = 256;
  v65 = 0;
  v53 = *(struct CRenderingTechnique **)(v14 + 8 * v13);
  if ( !*((_DWORD *)a5 + 1) )
  {
LABEL_18:
    LOBYTE(v64) = 1;
    v60 = v11;
    v44 = 0LL;
    v61 = _xmm;
    if ( !a4 )
    {
      v49 = 0LL;
      v48 = &v44;
      v50 = 1;
      v25 = CGeometryOnlyDrawListBrush::Create(&v49);
      if ( v50 )
      {
        v38 = *v48;
        *v48 = v49;
        if ( v38 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v38, 1);
      }
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x44Au);
LABEL_63:
        if ( v44 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v44, 1);
        goto LABEL_24;
      }
      width = v8->width;
      height = v8->height;
      v41 = v44;
      *(_QWORD *)&v52 = 0LL;
      *((_QWORD *)&v52 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
      v42 = v52;
      *((_BYTE *)v44 + 52) = 1;
      *((_DWORD *)v41 + 12) = 50529027;
      *((_OWORD *)v41 + 2) = v42;
      a4 = v44;
    }
    CBrushRenderingEffectFactory::CBrushRenderingEffectFactory((CBrushRenderingEffectFactory *)v66, v9, v53, a5);
    DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)&v57, v67, a4, v66);
    v25 = DrawList;
    if ( DrawList < 0 )
    {
      v43 = 1104;
    }
    else
    {
      DrawList = CDrawListCache::Update(v55, v9, (struct CDrawListEntryBuilder *)v67);
      v25 = DrawList;
      if ( DrawList >= 0 )
      {
        if ( v44 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v44, 1);
        v25 = 0;
        goto LABEL_24;
      }
      v43 = 1105;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, v43);
    goto LABEL_63;
  }
  while ( 1 )
  {
    v15 = (char *)a5 + 104 * v12;
    if ( !v15[52] )
    {
      v16 = (const struct D2D_RECT_F *)*((_QWORD *)v15 + 8);
      v17 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)&v16->left + 8LL);
      if ( v17 == CSurfaceDrawListBrush::IsOfType )
      {
        v18 = CSurfaceDrawListBrush::IsOfType((__int64)v16, 2);
      }
      else
      {
        v18 = v17((__int64)v16, 2);
        v16 = (const struct D2D_RECT_F *)*((_QWORD *)v15 + 8);
      }
      v19 = (CSurfaceDrawListBrush *)v16;
      if ( v18 && CSurfaceDrawListBrush::IsPrimitiveClampedToContentRect(v16) && *((_BYTE *)v53 + 44 * v12 + 110) )
      {
        LOBYTE(v16[3].top) = 0;
        v19 = (CSurfaceDrawListBrush *)*((_QWORD *)v15 + 8);
      }
      v20 = v19;
      v21 = (char *)&v62[v12];
      if ( v21 != v56 )
      {
        v10 = *(CSurfaceDrawListBrush **)v21;
        v20 = 0LL;
        *(_QWORD *)v21 = v19;
        v19 = 0LL;
        if ( v10 )
        {
          std::default_delete<CDrawListBrush>::operator()((__int64)v56, v10);
          v19 = 0LL;
        }
      }
      v22 = v63;
      v23 = v12 + 1;
      if ( v63 <= (unsigned int)v23 )
        v22 = v12 + 1;
      v63 = v22;
      if ( v19 )
        std::default_delete<CDrawListBrush>::operator()(v23, v20);
      goto LABEL_16;
    }
    if ( v15[53] )
      break;
    LOBYTE(v45) = InterpolationMode::FromD2D1InterpolationMode(*((_BYTE *)a5 + 104 * v12 + 108) == 0, v10, 0LL);
    v44 = v31;
    v49 = v31;
    HIBYTE(v45) = 1;
    v46 = v45;
    v48 = &v44;
    v47 = 1;
    v50 = 1;
    v25 = CSurfaceDrawListBrush::CreateWithTextureTransform(v15 + 8, &v46, v15 + 56, &v49);
    if ( v50 )
    {
      v32 = *v48;
      *v48 = v49;
      if ( v32 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v32, 1);
    }
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x41Du);
      if ( v44 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v44, 1);
      goto LABEL_24;
    }
    v33 = v44;
    v44 = 0LL;
    v51 = v33;
    CBrushDrawListGenerator::AttachInput((__int64)&v57, v12, &v51);
    v10 = v51;
    if ( v51 )
      std::default_delete<CDrawListBrush>::operator()(v34, v51);
    if ( v44 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v44, 1);
LABEL_16:
    v11 |= *((_DWORD *)v15 + 12);
    if ( ++v12 >= *((_DWORD *)a5 + 1) )
    {
      v9 = v54;
      v8 = (const struct D2D_SIZE_F *)v52;
      goto LABEL_18;
    }
  }
  v44 = 0LL;
  v48 = &v44;
  v49 = 0LL;
  v50 = 1;
  v25 = CColorDrawListBrush::Create((struct _D3DCOLORVALUE *)v15 + 2, &v49);
  if ( v50 )
  {
    v35 = *v48;
    *v48 = v49;
    if ( v35 )
      CColorDrawListBrush::`vector deleting destructor'(v35, 1);
  }
  if ( v25 >= 0 )
  {
    v36 = v44;
    v44 = 0LL;
    v51 = v36;
    CBrushDrawListGenerator::AttachInput((__int64)&v57, v12, &v51);
    v10 = v51;
    if ( v51 )
      std::default_delete<CDrawListBrush>::operator()(v37, v51);
    if ( v44 )
      CColorDrawListBrush::`vector deleting destructor'(v44, 1);
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x424u);
  if ( v44 )
    CColorDrawListBrush::`vector deleting destructor'(v44, 1);
LABEL_24:
  v26 = v63;
  for ( i = 0LL; (unsigned int)i < v26; i = (unsigned int)(i + 1) )
  {
    if ( !*((_BYTE *)a5 + 104 * (unsigned int)i + 52) )
    {
      v62[i] = 0LL;
      v26 = v63;
    }
  }
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v57);
  v28 = 4LL;
  v29 = &v63;
  do
  {
    v29 -= 2;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v29);
    --v28;
  }
  while ( v28 );
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v67);
  return (unsigned int)v25;
}
