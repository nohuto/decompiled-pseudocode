/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$DynArrayIANoCtor@UEffectInput@@$03$0A@@@AEBV?$DynArrayIANoCtor@UEffectInput@@$04$0A@@@PEAUEffectInput@@@Z @ 0x18001932C (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$Dyn.c)
 * Callees:
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x18001A430 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180041464 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180058040 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800585B8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005864C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800586FC (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180059D68 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180059DB0 (--4-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00 (-Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z @ 0x1800BFF3C (-ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x1800C0018 (CopyIfNeeded_Matrix3x3_.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800C0104 (-Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x1800C01DC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CoordMap@@QEAA@XZ @ 0x18013335C (--0CoordMap@@QEAA@XZ.c)
 *     ??1CoordMap@@QEAA@XZ @ 0x1801333C0 (--1CoordMap@@QEAA@XZ.c)
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18014C8C8 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?TryTransformLayout@CDrawListBrush@@QEAA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015FA50 (-TryTransformLayout@CDrawListBrush@@QEAA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct EffectInput *a4)
{
  double v4; // xmm3_8
  unsigned __int64 v6; // rbx
  D2D1::Matrix3x2F *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  int IntermediateSurfaceBrush; // esi
  CSurfaceDrawListBrush *(__fastcall ***v16)(CSurfaceDrawListBrush *, char); // rbx
  CSurfaceDrawListBrush *(__fastcall *v17)(CSurfaceDrawListBrush *, char); // rax
  _QWORD *v18; // rdi
  __int64 v19; // r15
  CSurfaceDrawListBrush *v20; // rcx
  CSurfaceDrawListBrush *(__fastcall ***v21)(CSurfaceDrawListBrush *, char); // rdi
  CSurfaceDrawListBrush *(__fastcall *v22)(CSurfaceDrawListBrush *, char); // rax
  int v23; // edi
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  CSurfaceDrawListBrush *(__fastcall *v26)(CSurfaceDrawListBrush *, char); // rax
  int StockTransparentImageNoRef; // eax
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  struct D2D_RECT_F v30; // xmm1
  struct CGeometryOnlyDrawListBrush *v31; // rcx
  _QWORD *v32; // rdi
  __int64 v33; // r15
  _QWORD *v34; // rbx
  struct CObjectCache *ObjectCache; // rax
  char *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rax
  int v40; // eax
  int AllHollowRects; // eax
  int v42; // eax
  __int128 v43; // kr00_16
  CSurfaceDrawListBrush *v44; // rcx
  struct CGeometryOnlyDrawListBrush *v45; // rcx
  _QWORD *v46; // rbx
  struct CObjectCache *v47; // rax
  CSurfaceDrawListBrush *(__fastcall *v48)(CSurfaceDrawListBrush *, char); // rax
  void *lpMem; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v51; // [rsp+48h] [rbp-B8h] BYREF
  char v52; // [rsp+4Ah] [rbp-B6h]
  struct D2D_RECT_F v53; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v54; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+70h] [rbp-90h]
  struct D2D_RECT_F v56; // [rsp+78h] [rbp-88h] BYREF
  _BYTE matrix[32]; // [rsp+88h] [rbp-78h] BYREF
  int v58; // [rsp+A8h] [rbp-58h]
  void *v59[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C4h] [rbp-3Ch]
  _BYTE v62[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v63[16]; // [rsp+E0h] [rbp-20h] BYREF
  struct D2D_MATRIX_3X2_F v64; // [rsp+F0h] [rbp-10h] BYREF
  int v65; // [rsp+108h] [rbp+8h]
  __int64 v66; // [rsp+110h] [rbp+10h]
  __int128 v67; // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  unsigned int v69; // [rsp+148h] [rbp+48h]
  void *v70[58]; // [rsp+150h] [rbp+50h] BYREF

  v6 = (unsigned __int64)*((unsigned int *)a4 + 8) << 6;
  v10 = 0LL;
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(v6 + v11 + 8);
  if ( v12 )
    v10 = (D2D1::Matrix3x2F *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
                                *(_QWORD *)(v6 + v11 + 8),
                                *(unsigned int *)(v6 + v11 + 16));
  if ( v10 && D2D1::Matrix3x2F::IsIdentity(v10) )
    v10 = 0LL;
  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v63,
    a2,
    a3,
    (const struct D2D_MATRIX_3X2_F *)v10);
  v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v6 + *((_QWORD *)this + 2)) + 240LL))(
          *(_QWORD *)(v6 + *((_QWORD *)this + 2)),
          v63);
  *(_QWORD *)a4 = 0LL;
  *((_BYTE *)a4 + 29) = 1;
  IntermediateSurfaceBrush = v13;
  *((_DWORD *)a4 + 6) = 0;
  *(_OWORD *)((char *)a4 + 8) = 0LL;
  if ( v13 == -2003304441 )
  {
    IntermediateSurfaceBrush = 0;
    goto LABEL_47;
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA2u);
    goto LABEL_92;
  }
  v16 = 0LL;
  lpMem = 0LL;
  if ( v69 <= 1 && !v66 )
  {
    if ( v69 != 1 || !v68 )
      goto LABEL_37;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v68 + 8LL))(v68) == 1
      || !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v68 + 8LL))(v68) )
    {
      *(_QWORD *)&v56.left = v68;
      v68 = 0LL;
      std::unique_ptr<CDrawListBrush>::operator=((CSurfaceDrawListBrush **)&lpMem, (CSurfaceDrawListBrush **)&v56);
      if ( *(_QWORD *)&v56.left )
      {
        v17 = ***(CSurfaceDrawListBrush *(__fastcall ****)(CSurfaceDrawListBrush *, char))&v56.left;
        if ( v17 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v56.left, 1);
        else
          v17(*(CSurfaceDrawListBrush **)&v56.left, 1);
      }
      v16 = (CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))lpMem;
      if ( CDrawListBrush::TryTransformLayout((CDrawListBrush *)lpMem, &v64) )
        goto LABEL_36;
      CBrushDrawListGenerator::AttachInput((__int64)v63, 0, (__int64)&lpMem);
      v16 = (CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))lpMem;
    }
  }
  lpMem = 0LL;
  *(_QWORD *)&v53.left = &lpMem;
  *(_QWORD *)&v53.right = 0LL;
  LOBYTE(v54) = 1;
  IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                               (CBrushDrawListGenerator *)v63,
                               (struct CSurfaceDrawListBrush **)&v53.right,
                               v14,
                               v4);
  if ( (_BYTE)v54 )
  {
    v18 = *(_QWORD **)&v53.left;
    v19 = *(_QWORD *)&v53.right;
    v20 = **(CSurfaceDrawListBrush ***)&v53.left;
    if ( *(_QWORD *)&v53.right != **(_QWORD **)&v53.left )
    {
      if ( v20 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v20, 1);
      *v18 = v19;
    }
  }
  if ( IntermediateSurfaceBrush < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0xCBu);
    if ( lpMem )
      CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1);
    if ( v16 )
    {
      v48 = **v16;
      if ( v48 == CSurfaceDrawListBrush::`vector deleting destructor' )
        CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v16, 1);
      else
        v48((CSurfaceDrawListBrush *)v16, 1);
    }
    goto LABEL_92;
  }
  v21 = (CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))lpMem;
  lpMem = 0LL;
  if ( v21 != v16 )
  {
    if ( v16 )
    {
      v22 = **v16;
      if ( v22 == CSurfaceDrawListBrush::`vector deleting destructor' )
        CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v16, 1);
      else
        v22((CSurfaceDrawListBrush *)v16, 1);
    }
    v16 = v21;
  }
  v23 = v65;
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v63);
  v65 = v23 | 0x80;
  if ( lpMem )
    CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1);
LABEL_36:
  if ( !v16 )
  {
LABEL_37:
    v24 = v67;
    *((_DWORD *)a4 + 6) = v65;
    *(_OWORD *)((char *)a4 + 8) = v24;
    goto LABEL_47;
  }
  if ( ((unsigned int (__fastcall *)(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char)))(*v16)[1])(v16) <= 1 )
  {
    *(_QWORD *)matrix = *(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))((char *)v16 + 28);
    *(_QWORD *)&matrix[8] = v16[5];
    *(_QWORD *)&matrix[16] = _mm_unpacklo_ps((__m128)*((unsigned int *)v16 + 13), (__m128)*((unsigned int *)v16 + 14)).m128_u64[0];
    if ( D2D1IsMatrixInvertible((const D2D1_MATRIX_3X2_F *)matrix) )
    {
      if ( ((unsigned int (__fastcall *)(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char)))(*v16)[1])(v16) == 1 )
      {
        *(_QWORD *)a4 = v16[18];
        *((_BYTE *)a4 + 29) = 0;
      }
      v25 = v67;
      *((_DWORD *)a4 + 6) = v65;
      *((_QWORD *)a4 + 5) = v16;
      v16 = 0LL;
      *(_OWORD *)((char *)a4 + 8) = v25;
    }
  }
  if ( v16 )
  {
    v26 = **v16;
    if ( v26 == CSurfaceDrawListBrush::`vector deleting destructor' )
      CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v16, 1);
    else
      v26((CSurfaceDrawListBrush *)v16, 1);
  }
LABEL_47:
  if ( !*((_BYTE *)a4 + 29) )
    goto LABEL_61;
  StockTransparentImageNoRef = CDrawingContext::GetStockTransparentImageNoRef(a2, (struct IImageSource **)a4);
  IntermediateSurfaceBrush = StockTransparentImageNoRef;
  if ( StockTransparentImageNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, StockTransparentImageNoRef, 0x108u);
    goto LABEL_92;
  }
  if ( *((_QWORD *)a4 + 5) )
    goto LABEL_61;
  width = a3->width;
  v53.left = 0.0;
  v53.top = 0.0;
  height = a3->height;
  v53.right = width;
  v53.bottom = height;
  v30 = v53;
  lpMem = 0LL;
  *(_QWORD *)&v53.left = &lpMem;
  v56 = v30;
  *(_QWORD *)&v53.right = 0LL;
  LOBYTE(v54) = 1;
  IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create(&v56, (struct CGeometryOnlyDrawListBrush **)&v53.right);
  if ( (_BYTE)v54 )
  {
    v32 = *(_QWORD **)&v53.left;
    v33 = *(_QWORD *)&v53.right;
    v34 = **(_QWORD ***)&v53.left;
    if ( *(_QWORD *)&v53.right != **(_QWORD **)&v53.left )
    {
      if ( v34 )
      {
        ObjectCache = CThreadContext::GetObjectCache(v31);
        if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
        {
          WPF::ProcessHeapImpl::Free(v34);
        }
        else
        {
          *v34 = *((_QWORD *)ObjectCache + 1);
          ++*((_DWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = v34;
        }
      }
      *v32 = v33;
    }
  }
  if ( IntermediateSurfaceBrush >= 0 )
  {
    *(_OWORD *)matrix = _xmm;
    v58 = 1065353216;
    *(_OWORD *)&matrix[16] = _xmm;
    v36 = (char *)lpMem + 28;
    v51 = 257;
    *((_DWORD *)lpMem + 6) = 0;
    CopyIfNeeded_Matrix3x3_((__int64)v36, (__int64)matrix);
    v38 = v37 + 64;
    if ( (__int16 *)v38 != &v51 )
    {
      *(_WORD *)v38 = v51;
      *(_BYTE *)(v38 + 2) = 1;
    }
    *((_QWORD *)a4 + 5) = lpMem;
LABEL_61:
    v39 = *((_QWORD *)a4 + 5);
    if ( *(_DWORD *)(v39 + 24) == 1 && *(_BYTE *)(v39 + 100) )
    {
      CoordMap::CoordMap((CoordMap *)v70);
      v40 = CDrawListBrush::ContributeToCoordMap(*((struct D2D_RECT_F **)a4 + 5), 0LL, (struct CoordMap *)v70);
      IntermediateSurfaceBrush = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x122u);
      }
      else
      {
        v60 = 1;
        v59[0] = v62;
        v61 = 1LL;
        v59[1] = v62;
        AllHollowRects = CoordMap::GetAllHollowRects((__int64)v70, (__int64)v59);
        IntermediateSurfaceBrush = AllHollowRects;
        if ( AllHollowRects < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, AllHollowRects, 0x125u);
        }
        else if ( HIDWORD(v61) )
        {
          v42 = CDrawingContext::GetStockTransparentImageNoRef(a2, (struct IImageSource **)&v56);
          IntermediateSurfaceBrush = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x12Eu);
          }
          else
          {
            *(_QWORD *)matrix = &lpMem;
            v53 = (struct D2D_RECT_F)_xmm;
            lpMem = 0LL;
            *(_QWORD *)&matrix[8] = 0LL;
            matrix[16] = 1;
            IntermediateSurfaceBrush = CSurfaceDrawListBrush::Create(
                                         *(struct IImageSource **)&v56.left,
                                         &v53,
                                         (struct CSurfaceDrawListBrush **)&matrix[8]);
            if ( matrix[16] )
            {
              v43 = *(_OWORD *)matrix;
              v44 = **(CSurfaceDrawListBrush ***)matrix;
              if ( *(_QWORD *)&matrix[8] != **(_QWORD **)matrix )
              {
                if ( v44 )
                  CSurfaceDrawListBrush::`vector deleting destructor'(v44, 1);
                *(_QWORD *)v43 = *((_QWORD *)&v43 + 1);
              }
            }
            if ( IntermediateSurfaceBrush < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x134u);
              if ( lpMem )
                CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1);
            }
            else
            {
              *(_OWORD *)matrix = _xmm;
              v58 = 1065353216;
              *(_OWORD *)&matrix[16] = _xmm;
              v55 = 1065353216;
              v53 = (struct D2D_RECT_F)_xmm;
              v51 = 257;
              v54 = _xmm;
              v52 = 1;
              CDrawListBrush::SetBrushPrimitiveLayout(
                (__int64)lpMem,
                (__int64)&v53,
                (__int64)&v51,
                (__int64)matrix,
                (_OWORD *)v59[0],
                0,
                0LL);
              *((_BYTE *)lpMem + 152) = 1;
              *((_QWORD *)a4 + 6) = lpMem;
            }
          }
        }
        DynArrayImpl<1>::~DynArrayImpl<1>(v59);
      }
      CoordMap::~CoordMap(v70);
    }
    goto LABEL_92;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x111u);
  v46 = lpMem;
  if ( lpMem )
  {
    v47 = CThreadContext::GetObjectCache(v45);
    if ( *((_DWORD *)v47 + 1) >= *(_DWORD *)v47 )
    {
      WPF::ProcessHeapImpl::Free(v46);
    }
    else
    {
      *v46 = *((_QWORD *)v47 + 1);
      ++*((_DWORD *)v47 + 1);
      *((_QWORD *)v47 + 1) = v46;
    }
  }
LABEL_92:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v63);
  return (unsigned int)IntermediateSurfaceBrush;
}
