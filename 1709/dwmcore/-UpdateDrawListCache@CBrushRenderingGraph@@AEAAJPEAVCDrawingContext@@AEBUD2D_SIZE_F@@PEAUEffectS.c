/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180023768 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180046C8C (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18004889C (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x180048A10 (--0SamplerMode@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048B00 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?SetRenderingEffect@CBrushDrawListGenerator@@QEAAXPEAVCRenderingEffect@@@Z @ 0x18004ACD0 (-SetRenderingEffect@CBrushDrawListGenerator@@QEAAXPEAVCRenderingEffect@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800631BC (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V?$span@$$CBUSamplerMode@@@gsl@@@Z @ 0x18006CEDC (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V-$span@$$CBUSamplerMod.c)
 *     ?UpdateSurfaceProperties@CRenderingTechnique@@QEAAXI@Z @ 0x18006DF10 (-UpdateSurfaceProperties@CRenderingTechnique@@QEAAXI@Z.c)
 *     ?SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z @ 0x18006FDE4 (-SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x180070218 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x180070E28 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x18015359C (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetSubstituteColor@CBrushRenderingGraph@@AEAAXIAEBU_D3DCOLORVALUE@@@Z @ 0x18018852C (-SetSubstituteColor@CBrushRenderingGraph@@AEAAXIAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct EffectStage *a4,
        struct CDrawListCache *a5)
{
  CSurfaceDrawListBrush *v5; // r14
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rdx
  SamplerMode *v13; // rdi
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rsi
  char *v17; // rdi
  __int64 v18; // rbx
  char IsOpaque; // al
  CRenderingTechnique *v20; // r12
  __int64 v21; // rdi
  _BYTE *v22; // r15
  _QWORD *v23; // rsi
  __int64 v24; // r14
  char v25; // al
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v27; // r10
  int v28; // edx
  CSurfaceDrawListBrush *v29; // rbx
  int DrawList; // eax
  int v31; // ebx
  _QWORD *v32; // rdx
  struct CDrawingContext *v33; // r15
  char v34; // r14
  int v35; // eax
  __int64 j; // rsi
  char *v37; // rdi
  unsigned int v39; // edx
  char v40; // al
  CSurfaceDrawListBrush *v41; // r14
  CSurfaceDrawListBrush **v42; // r14
  struct CSurfaceDrawListBrush *v43; // r15
  CSurfaceDrawListBrush *v44; // rcx
  CSurfaceDrawListBrush *v45; // r8
  void *(__fastcall *v46)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  int v47; // eax
  CArrayBasedCoverageSet **v48; // rcx
  int v49; // eax
  void *(__fastcall *v50)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v51)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  int v52; // eax
  CArrayBasedCoverageSet **v53; // rcx
  char i; // [rsp+40h] [rbp-C0h]
  CSurfaceDrawListBrush *v55; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v56; // [rsp+50h] [rbp-B0h]
  CSurfaceDrawListBrush *v57; // [rsp+58h] [rbp-A8h] BYREF
  struct CDrawingContext *v58; // [rsp+60h] [rbp-A0h]
  CSurfaceDrawListBrush *v59; // [rsp+68h] [rbp-98h] BYREF
  CSurfaceDrawListBrush *v60[2]; // [rsp+70h] [rbp-90h] BYREF
  CRenderingTechnique *v61; // [rsp+80h] [rbp-80h]
  _DWORD v62[2]; // [rsp+88h] [rbp-78h] BYREF
  struct D2D_SIZE_F v63[2]; // [rsp+90h] [rbp-70h] BYREF
  CSurfaceDrawListBrush **v64; // [rsp+A0h] [rbp-60h]
  struct CSurfaceDrawListBrush *v65; // [rsp+A8h] [rbp-58h] BYREF
  char v66; // [rsp+B0h] [rbp-50h]
  CDrawListCache *v67; // [rsp+B8h] [rbp-48h]
  _OWORD v68[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v69; // [rsp+E0h] [rbp-20h]
  _BYTE v70[40]; // [rsp+F0h] [rbp-10h] BYREF
  int v71; // [rsp+118h] [rbp+18h]
  __int128 v72; // [rsp+128h] [rbp+28h]
  _QWORD v73[4]; // [rsp+138h] [rbp+38h]
  unsigned int v74; // [rsp+158h] [rbp+58h]
  char v75; // [rsp+15Dh] [rbp+5Dh]
  CMILRefCountBase *v76[310]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v77[16]; // [rsp+B10h] [rbp+A10h] BYREF

  v5 = this;
  v60[0] = this;
  v67 = a5;
  v58 = a2;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v76);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v70, a2, a3, 0LL);
  v9 = *((_QWORD *)v5 + 38);
  v11 = (unsigned int)(v10 + 4);
  v12 = *(unsigned int *)a4;
  v13 = (SamplerMode *)v77;
  v14 = 0;
  LODWORD(v57) = 0;
  v61 = *(CRenderingTechnique **)(v9 + 8 * v12);
  do
  {
    SamplerMode::SamplerMode(v13);
    v13 = (SamplerMode *)((char *)v13 + 3);
    --v11;
  }
  while ( v11 );
  v16 = 0LL;
  for ( i = 0; (unsigned int)v16 < *((_DWORD *)a4 + 1); LODWORD(v57) = v14 )
  {
    v17 = (char *)a4 + 104 * (unsigned int)v16;
    if ( v17[52] )
    {
      if ( !v17[53] )
      {
        v40 = InterpolationMode::FromD2D1InterpolationMode(v17[108] == 0);
        v55 = 0LL;
        v65 = 0LL;
        LOBYTE(v56) = v40;
        HIBYTE(v56) = 1;
        v66 = 1;
        v41 = (CSurfaceDrawListBrush *)&v77[2 * v16 + (unsigned int)v16];
        *(_WORD *)v41 = v56;
        v64 = &v55;
        v59 = v41;
        *((_BYTE *)v41 + 2) = 1;
        v31 = CSurfaceDrawListBrush::Create(
                (const struct CDrawListBitmap *)(v17 + 8),
                (const struct D2D_RECT_F *)(v17 + 92),
                &v65);
        if ( v66 )
        {
          v42 = v64;
          v43 = v65;
          v44 = *v64;
          if ( v65 != *v64 )
          {
            if ( v44 )
              CSurfaceDrawListBrush::`vector deleting destructor'(v44, 1u);
            *v42 = v43;
          }
          v14 = (int)v57;
          v41 = v59;
        }
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x41Au);
          if ( v55 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v55, 1u);
LABEL_86:
          v34 = i;
          v33 = v58;
          goto LABEL_36;
        }
        v68[0] = _xmm;
        v69 = 1065353216;
        v68[1] = _xmm;
        CDrawListBrush::SetBrushPrimitiveLayout(v55, v68, v41, v17 + 56, 0LL, 50529027, 0LL);
        v45 = v55;
        v55 = 0LL;
        v59 = v45;
        CBrushDrawListGenerator::AttachInput((__int64)v70, v16, &v59);
        if ( v59 )
        {
          v46 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v59;
          if ( v46 == CSurfaceDrawListBrush::`vector deleting destructor' )
          {
            CSurfaceDrawListBrush::`vector deleting destructor'(v59, 1u);
          }
          else if ( v46 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
          {
            CGeometryOnlyDrawListBrush::`vector deleting destructor'(v59, 1u);
          }
          else
          {
            v46(v59, 1u);
          }
        }
        if ( v55 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v55, 1u);
        v5 = v60[0];
      }
    }
    else
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v17 + 8) + 8LL))(*((_QWORD *)v17 + 8)) == 1 )
      {
        v18 = *((_QWORD *)v17 + 8);
        if ( *(_BYTE *)(v18 + 168) )
        {
          if ( *((_BYTE *)v61 + 32 * (unsigned int)v16 + 110) )
          {
            CDrawListBitmap::GetSize((CDrawListBitmap *)(v18 + 144), v62);
            v39 = *((_DWORD *)v17 + 14);
            v63[0].width = (float)v62[0];
            v63[0].height = (float)v62[1];
            CBrushRenderingGraph::SetSurfaceClamp(v5, v39, v63, (const struct D2D_RECT_F *)(v18 + 8));
            *(_BYTE *)(v18 + 168) = 0;
          }
        }
      }
      if ( v17[53] )
        CBrushRenderingGraph::SetSubstituteColor(v5, *((_DWORD *)v17 + 14), (const struct _D3DCOLORVALUE *)v17 + 2);
    }
    IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)(v17 + 8));
    v20 = v61;
    *((_BYTE *)v61 + 32 * v16 + 128) = IsOpaque;
    CRenderingTechnique::UpdateSurfaceProperties(v20, v16);
    v14 |= *((_DWORD *)v17 + 12);
    v16 = (unsigned int)(v16 + 1);
  }
  v21 = 0LL;
  v72 = _xmm;
  v75 = 1;
  v71 = v14;
  do
  {
    if ( (int)v21 < *((_DWORD *)a4 + 1) )
    {
      v15 = (int)v21;
      v22 = &v77[2 * (int)v21 + (int)v21];
      v23 = (_QWORD *)((char *)a4 + 104 * (int)v21 + 72);
      do
      {
        if ( !*((_BYTE *)v23 - 20) )
        {
          v24 = *v23;
          if ( *v23 )
          {
            i = 1;
            if ( v73[v21] == v24 )
              v24 = *(v23 - 1);
            v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
            v48 = (CArrayBasedCoverageSet **)(v23 - 8);
            if ( v47 == 1 )
            {
              CDrawListBitmap::operator=(v48, v24 + 144);
              *((_BYTE *)v23 - 19) = 0;
            }
            else
            {
              v49 = CDrawListBitmap::SetTransparent((CDrawListBitmap *)v48, v58);
              v31 = v49;
              if ( v49 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x46Bu);
                goto LABEL_86;
              }
              *((_BYTE *)v23 - 19) = 1;
            }
            v73[v21] = 0LL;
            v60[0] = (CSurfaceDrawListBrush *)v24;
            CBrushDrawListGenerator::AttachInput((__int64)v70, v21, v60);
            v15 = (__int64)v60[0];
            if ( v60[0] )
            {
              v50 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v60[0];
              if ( v50 == CSurfaceDrawListBrush::`vector deleting destructor' )
              {
                CSurfaceDrawListBrush::`vector deleting destructor'(v60[0], 1u);
              }
              else if ( v50 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
              {
                CGeometryOnlyDrawListBrush::`vector deleting destructor'(v60[0], 1u);
              }
              else
              {
                v50(v60[0], 1u);
              }
            }
            *(_WORD *)v22 = *(_WORD *)(v24 + 64);
            v25 = *(_BYTE *)(v24 + 66);
            goto LABEL_20;
          }
          if ( !v73[v21] )
          {
            v60[0] = *((CSurfaceDrawListBrush **)v23 - 1);
            CBrushDrawListGenerator::AttachInput((__int64)v70, v21, v60);
            if ( v60[0] )
            {
              v51 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v60[0];
              if ( v51 == CSurfaceDrawListBrush::`vector deleting destructor' )
              {
                CSurfaceDrawListBrush::`vector deleting destructor'(v60[0], 1u);
              }
              else if ( v51 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
              {
                CGeometryOnlyDrawListBrush::`vector deleting destructor'(v60[0], 1u);
              }
              else
              {
                v51(v60[0], 1u);
              }
            }
            v15 = *(v23 - 1);
            *(_WORD *)v22 = *(_WORD *)(v15 + 64);
            v25 = *(_BYTE *)(v15 + 66);
LABEL_20:
            v22[2] = v25;
          }
        }
        v21 = (unsigned int)(v21 + 1);
        v23 += 13;
        v22 += 3;
      }
      while ( (int)v21 < *((_DWORD *)a4 + 1) );
    }
    ObjectCache = CThreadContext::GetObjectCache((struct CBrushRenderingEffect *)v15);
    v27 = 0LL;
    v28 = *((_DWORD *)ObjectCache + 1);
    if ( v28 )
    {
      v27 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *v27;
      *((_DWORD *)ObjectCache + 1) = v28 - 1;
    }
    if ( v27 || (v27 = HeapAlloc(WPF::g_processHeap, 0, 0x88uLL)) != 0LL )
    {
      v63[0] = (struct D2D_SIZE_F)v77;
      v63[1] = (struct D2D_SIZE_F)*((unsigned int *)a4 + 1);
      *(_OWORD *)v60 = *(_OWORD *)&v63[0].width;
      v29 = (CSurfaceDrawListBrush *)CBrushRenderingEffect::CBrushRenderingEffect(
                                       (__int64)v27,
                                       v61,
                                       (__int64)a4,
                                       (__int64 *)v60);
    }
    else
    {
      v29 = 0LL;
    }
    v55 = v29;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v55);
    v55 = 0LL;
    v57 = v29;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v55);
    if ( !v29 )
    {
      v31 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x486u);
LABEL_85:
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v57);
      goto LABEL_86;
    }
    CBrushDrawListGenerator::SetRenderingEffect((CBrushDrawListGenerator *)v70, v29);
    DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)v70, v76);
    v31 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x489u);
      goto LABEL_85;
    }
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v57);
    v21 = (unsigned int)(*((_DWORD *)a4 + 1) - 1);
    v15 = (int)v21;
    if ( (int)v21 >= 0 )
    {
      v32 = (_QWORD *)((char *)a4 + 104 * (int)v21 + 72);
      do
      {
        if ( !*((_BYTE *)v32 - 20) && v73[v15] == *v32 )
          break;
        v21 = (unsigned int)(v21 - 1);
        v32 -= 13;
        --v15;
      }
      while ( v15 >= 0 );
    }
  }
  while ( (int)v21 >= 0 );
  v33 = v58;
  v34 = 0;
  v35 = CDrawListCache::Update(v67, v58, (struct CDrawListEntryBuilder *)v76);
  v31 = v35;
  if ( v35 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x49Cu);
  else
    v31 = 0;
LABEL_36:
  for ( j = 0LL; (unsigned int)j < v74; j = (unsigned int)(j + 1) )
  {
    v37 = (char *)a4 + 104 * (unsigned int)j;
    if ( !v37[52] )
    {
      v73[j] = 0LL;
      if ( v34 )
      {
        v52 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v37 + 8) + 8LL))(*((_QWORD *)v37 + 8));
        v53 = (CArrayBasedCoverageSet **)(v37 + 8);
        if ( v52 == 1 )
        {
          CDrawListBitmap::operator=(v53, *((_QWORD *)v37 + 8) + 144LL);
          v37[53] = 0;
        }
        else
        {
          CDrawListBitmap::SetTransparent((CDrawListBitmap *)v53, v33);
          v37[53] = 1;
        }
      }
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v70);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v76);
  return (unsigned int)v31;
}
