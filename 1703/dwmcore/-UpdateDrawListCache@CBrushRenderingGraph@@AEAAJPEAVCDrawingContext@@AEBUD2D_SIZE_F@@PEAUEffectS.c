/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180180AA0 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListPrimitiveBuilder@@@Z @ 0x18000994C (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x1800151A8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@AEBV?$ArrayRef@$$CBUSamplerMode@@@@@Z @ 0x180015D50 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@AEBV-$ArrayRef@$$CBUSam.c)
 *     ?GetSurfaceSize@CBrushRenderingGraph@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18001637C (-GetSurfaceSize@CBrushRenderingGraph@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 *     ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x180016710 (-IsOpaque@CRenderTargetImageSource@@UEBA_NXZ.c)
 *     ?UpdateSurfaceProperties@CRenderingTechnique@@QEAAXI@Z @ 0x180016E98 (-UpdateSurfaceProperties@CRenderingTechnique@@QEAAXI@Z.c)
 *     ?SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z @ 0x18001A0A8 (-SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z.c)
 *     ?SetRenderingEffect@CBrushDrawListGenerator@@QEAAXPEAVCRenderingEffect@@@Z @ 0x18001A2EC (-SetRenderingEffect@CBrushDrawListGenerator@@QEAAXPEAVCRenderingEffect@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A3C8 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x18001A430 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003F8F0 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003FA50 (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005864C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800586FC (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180059D68 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00 (-Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800C2624 (--0SamplerMode@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C2E84 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800C2F24 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18014C8C8 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?SetSubstituteColor@CBrushRenderingGraph@@AEAAXIAEBU_D3DCOLORVALUE@@@Z @ 0x180180F98 (-SetSubstituteColor@CBrushRenderingGraph@@AEAAXIAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct EffectStage *a4,
        struct CDrawListCache *a5)
{
  CSurfaceDrawListBrush *v5; // r13
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rdx
  SamplerMode *v13; // rdi
  int v14; // r12d
  CSurfaceDrawListBrush *v15; // rcx
  unsigned int v16; // r15d
  __int64 v17; // rdi
  char v18; // al
  struct IImageSource *v19; // rcx
  _BYTE *v20; // r12
  int v21; // ebx
  CSurfaceDrawListBrush **v22; // r12
  struct CSurfaceDrawListBrush *v23; // r13
  CSurfaceDrawListBrush *v24; // rcx
  CRenderTargetImageSource *v25; // rcx
  __int64 (*v26)(void); // rax
  char IsOpaque; // al
  CRenderingTechnique *v28; // rcx
  int v29; // edi
  _BYTE *v30; // r12
  CSurfaceDrawListBrush **v31; // r14
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v33; // r10
  int v34; // edx
  int DrawList; // eax
  _QWORD *v36; // rdx
  CDrawingContext *v37; // r12
  char v38; // r15
  int v39; // eax
  __int64 j; // r14
  char *v41; // rdi
  void *(__fastcall *v43)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  __int64 v44; // rbx
  struct D2D_SIZE_F SurfaceSize; // rax
  unsigned int v46; // edx
  CSurfaceDrawListBrush *v47; // r15
  int StockTransparentImageNoRef; // eax
  void *(__fastcall *v49)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  char v50; // al
  void *(__fastcall *v51)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  char i; // [rsp+40h] [rbp-C0h]
  CSurfaceDrawListBrush *v53; // [rsp+48h] [rbp-B8h] BYREF
  CSurfaceDrawListBrush *v54; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v55; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  struct CDrawingContext *v57; // [rsp+68h] [rbp-98h]
  struct D2D_SIZE_F v58; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+78h] [rbp-88h]
  CRenderingTechnique *v60; // [rsp+80h] [rbp-80h]
  CSurfaceDrawListBrush **v61; // [rsp+88h] [rbp-78h]
  struct CSurfaceDrawListBrush *v62; // [rsp+90h] [rbp-70h] BYREF
  char v63; // [rsp+98h] [rbp-68h]
  CDrawListCache *v64; // [rsp+A0h] [rbp-60h]
  _OWORD v65[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v66; // [rsp+C8h] [rbp-38h]
  _BYTE v67[40]; // [rsp+D0h] [rbp-30h] BYREF
  int v68; // [rsp+F8h] [rbp-8h]
  __int128 v69; // [rsp+108h] [rbp+8h]
  _QWORD v70[4]; // [rsp+118h] [rbp+18h]
  unsigned int v71; // [rsp+138h] [rbp+38h]
  char v72; // [rsp+13Ch] [rbp+3Ch]
  _BYTE v73[2480]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v74[16]; // [rsp+AF0h] [rbp+9F0h] BYREF

  v5 = this;
  v54 = this;
  v64 = a5;
  v57 = a2;
  CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v73);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v67, a2, a3, 0LL);
  v9 = *((_QWORD *)v5 + 38);
  v11 = (unsigned int)(v10 + 4);
  v12 = *(unsigned int *)a4;
  v13 = (SamplerMode *)v74;
  v14 = 0;
  LODWORD(v56) = 0;
  v60 = *(CRenderingTechnique **)(v9 + 8 * v12);
  do
  {
    SamplerMode::SamplerMode(v13);
    v13 = (SamplerMode *)((char *)v13 + 3);
    --v11;
  }
  while ( v11 );
  v16 = 0;
  for ( i = 0; v16 < *((_DWORD *)a4 + 1); LODWORD(v56) = v14 )
  {
    v17 = 88LL * v16;
    if ( *((_BYTE *)a4 + v17 + 36) )
    {
      if ( !*((_BYTE *)a4 + v17 + 37) )
      {
        v18 = InterpolationMode::FromD2D1InterpolationMode(*((_BYTE *)a4 + v17 + 92) == 0);
        v19 = *(struct IImageSource **)((char *)a4 + v17 + 8);
        LOBYTE(v55) = v18;
        HIBYTE(v55) = 1;
        v53 = 0LL;
        v62 = 0LL;
        v63 = 1;
        v20 = &v74[2 * v16 + v16];
        *(_WORD *)v20 = v55;
        v61 = &v53;
        v58 = (struct D2D_SIZE_F)v20;
        v20[2] = 1;
        v21 = CSurfaceDrawListBrush::Create(v19, (const struct D2D_RECT_F *)((char *)a4 + v17 + 76), &v62);
        if ( v63 )
        {
          v22 = v61;
          v23 = v62;
          v24 = *v61;
          if ( v62 != *v61 )
          {
            if ( v24 )
              CSurfaceDrawListBrush::`vector deleting destructor'(v24, 1u);
            *v22 = v23;
          }
          v5 = v54;
          v20 = (_BYTE *)v58;
        }
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x435u);
          if ( v53 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v53, 1u);
LABEL_83:
          v38 = i;
          v37 = v57;
          goto LABEL_38;
        }
        v11 = 0LL;
        v66 = 1065353216;
        v65[0] = _xmm;
        v65[1] = _xmm;
        CDrawListBrush::SetBrushPrimitiveLayout(v53, v65, v20, (char *)a4 + v17 + 40, 0LL, 50529027, 0LL);
        v58 = (struct D2D_SIZE_F)v53;
        v53 = 0LL;
        CBrushDrawListGenerator::AttachInput(v67, v16, &v58);
        if ( v58 )
        {
          v43 = ***(void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))&v58;
          if ( v43 == CSurfaceDrawListBrush::`vector deleting destructor' )
            CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v58, 1u);
          else
            v43(*(CSurfaceDrawListBrush **)&v58, 1u);
        }
        if ( v53 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v53, 1u);
        v14 = v56;
      }
    }
    else
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)((char *)a4 + v17 + 48) + 8LL))(*(_QWORD *)((char *)a4 + v17 + 48)) == 1 )
      {
        v44 = *(_QWORD *)((char *)a4 + v17 + 48);
        if ( *(_BYTE *)(v44 + 152) && *((_BYTE *)v60 + 32 * v16 + 126) )
        {
          SurfaceSize = CBrushRenderingGraph::GetSurfaceSize(*(struct IImageSource **)(v44 + 144));
          v46 = *(_DWORD *)((char *)a4 + v17 + 40);
          v58 = SurfaceSize;
          CBrushRenderingGraph::SetSurfaceClamp(v5, v46, &v58, (const struct D2D_RECT_F *)(v44 + 8));
          *(_BYTE *)(v44 + 152) = 0;
        }
        v11 = 0LL;
      }
      if ( *((_BYTE *)a4 + v17 + 37) )
        CBrushRenderingGraph::SetSubstituteColor(
          v5,
          *(_DWORD *)((char *)a4 + v17 + 40),
          (const struct _D3DCOLORVALUE *)((char *)a4 + v17 + 16));
    }
    v25 = *(CRenderTargetImageSource **)((char *)a4 + v17 + 8);
    v26 = *(__int64 (**)(void))(*(_QWORD *)v25 + 96LL);
    if ( (char *)v26 == (char *)CRenderTargetImageSource::IsOpaque )
      IsOpaque = CRenderTargetImageSource::IsOpaque(v25);
    else
      IsOpaque = v26();
    v28 = v60;
    *((_BYTE *)v60 + 32 * v16 + 144) = IsOpaque;
    CRenderingTechnique::UpdateSurfaceProperties(v28, v16);
    v14 |= *(_DWORD *)((char *)a4 + v17 + 32);
    ++v16;
  }
  v29 = 0;
  v69 = _xmm;
  v72 = 1;
  v68 = v14;
  do
  {
    if ( v29 < *((_DWORD *)a4 + 1) )
    {
      v15 = (CSurfaceDrawListBrush *)v29;
      v30 = &v74[2 * v29 + v29];
      v31 = (CSurfaceDrawListBrush **)((char *)a4 + 88 * v29 + 56);
      do
      {
        if ( !*((_BYTE *)v31 - 20) )
        {
          v47 = *v31;
          if ( *v31 )
          {
            i = 1;
            if ( (CSurfaceDrawListBrush *)v70[v29] == v47 )
              v47 = *(v31 - 1);
            if ( (*(unsigned int (__fastcall **)(CSurfaceDrawListBrush *))(*(_QWORD *)v47 + 8LL))(v47) == 1 )
            {
              *(v31 - 6) = (CSurfaceDrawListBrush *)*((_QWORD *)v47 + 18);
              *((_BYTE *)v31 - 19) = 0;
            }
            else
            {
              StockTransparentImageNoRef = CDrawingContext::GetStockTransparentImageNoRef(v57, v31 - 6);
              v21 = StockTransparentImageNoRef;
              if ( StockTransparentImageNoRef < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, StockTransparentImageNoRef, 0x486u);
                goto LABEL_83;
              }
              *((_BYTE *)v31 - 19) = 1;
              v11 = 0LL;
            }
            v70[v29] = 0LL;
            v54 = v47;
            CBrushDrawListGenerator::AttachInput(v67, (unsigned int)v29, &v54);
            v15 = v54;
            if ( v54 )
            {
              v49 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v54;
              if ( v49 == CSurfaceDrawListBrush::`vector deleting destructor' )
                CSurfaceDrawListBrush::`vector deleting destructor'(v54, 1u);
              else
                v49(v54, 1u);
            }
            *(_WORD *)v30 = *((_WORD *)v47 + 32);
            v50 = *((_BYTE *)v47 + 66);
            goto LABEL_75;
          }
          if ( !v70[v29] )
          {
            v54 = *(v31 - 1);
            CBrushDrawListGenerator::AttachInput(v67, (unsigned int)v29, &v54);
            if ( v54 )
            {
              v51 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v54;
              if ( v51 == CSurfaceDrawListBrush::`vector deleting destructor' )
                CSurfaceDrawListBrush::`vector deleting destructor'(v54, 1u);
              else
                v51(v54, 1u);
            }
            v15 = *(v31 - 1);
            *(_WORD *)v30 = *((_WORD *)v15 + 32);
            v50 = *((_BYTE *)v15 + 66);
LABEL_75:
            v30[2] = v50;
          }
        }
        ++v29;
        v31 += 11;
        v30 += 3;
      }
      while ( v29 < *((_DWORD *)a4 + 1) );
    }
    ObjectCache = CThreadContext::GetObjectCache(v15);
    v33 = 0LL;
    v34 = *((_DWORD *)ObjectCache + 1);
    if ( v34 )
    {
      v33 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *v33;
      *((_DWORD *)ObjectCache + 1) = v34 - 1;
    }
    if ( v33 || (v33 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
    {
      v59 = *((_DWORD *)a4 + 1);
      v58 = (struct D2D_SIZE_F)v74;
      v11 = CBrushRenderingEffect::CBrushRenderingEffect((__int64)v33, v60, (__int64)a4, (__int64 *)&v58);
    }
    v53 = (CSurfaceDrawListBrush *)v11;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v53);
    v53 = 0LL;
    v56 = v11;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v53);
    if ( !v11 )
    {
      v21 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4A1u);
LABEL_82:
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v56);
      goto LABEL_83;
    }
    CBrushDrawListGenerator::SetRenderingEffect((CBrushDrawListGenerator *)v67, (struct CRenderingEffect *)v11);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v67,
                 (struct CDrawListPrimitiveBuilder *)v73);
    v21 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawList, 0x4A4u);
      goto LABEL_82;
    }
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v56);
    v11 = 0LL;
    v29 = *((_DWORD *)a4 + 1) - 1;
    v15 = (CSurfaceDrawListBrush *)v29;
    if ( v29 >= 0 )
    {
      v36 = (_QWORD *)((char *)a4 + 88 * v29 + 56);
      do
      {
        if ( !*((_BYTE *)v36 - 20) && v70[(_QWORD)v15] == *v36 )
          break;
        --v29;
        v36 -= 11;
        v15 = (CSurfaceDrawListBrush *)((char *)v15 - 1);
      }
      while ( (__int64)v15 >= 0 );
    }
  }
  while ( v29 >= 0 );
  v37 = v57;
  v38 = 0;
  v39 = CDrawListCache::Update(v64, v57, (struct CDrawListPrimitiveBuilder *)v73);
  v21 = v39;
  if ( v39 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x4B7u);
  else
    v21 = 0;
LABEL_38:
  for ( j = 0LL; (unsigned int)j < v71; j = (unsigned int)(j + 1) )
  {
    v41 = (char *)a4 + 88 * (unsigned int)j;
    if ( !v41[36] )
    {
      v70[j] = 0LL;
      if ( v38 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v41 + 6) + 8LL))(*((_QWORD *)v41 + 6)) == 1 )
        {
          *((_QWORD *)v41 + 1) = *(_QWORD *)(*((_QWORD *)v41 + 6) + 144LL);
          v41[37] = 0;
        }
        else
        {
          CDrawingContext::GetStockTransparentImageNoRef(v37, (struct IImageSource **)v41 + 1);
          v41[37] = 1;
        }
      }
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v67);
  CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v73);
  return (unsigned int)v21;
}
