/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEAY03$$CBUEffectInput@@AEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@PEAU4@@Z @ 0x18006EFF8 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEAY03$$C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180048A30 (--4-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048B00 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?TryTransformLayout@CDrawListBrush@@QEAA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180070DEC (-TryTransformLayout@CDrawListBrush@@QEAA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x180070E28 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x18007267C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800726A8 (-Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180095758 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1800A0244 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CoordMap@@QEAA@XZ @ 0x18011C784 (--0CoordMap@@QEAA@XZ.c)
 *     ??1CoordMap@@QEAA@XZ @ 0x18011C804 (--1CoordMap@@QEAA@XZ.c)
 *     ?ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z @ 0x18011CAA4 (-ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x18015359C (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct EffectInput *a4)
{
  unsigned __int64 v5; // rbx
  D2D1::Matrix3x2F *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  CPrimitiveGroup **v12; // rcx
  __int64 (__fastcall *v13)(CPrimitiveGroup **, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  int IntermediateSurfaceBrush; // esi
  void *(__fastcall ***v16)(CSurfaceDrawListBrush *__hidden, unsigned int); // rbx
  __int128 v17; // xmm0
  __int64 v18; // rax
  void *(__fastcall *v20)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  struct CGeometryOnlyDrawListBrush *v21; // rdi
  struct CGeometryOnlyDrawListBrush *v22; // r15
  CSurfaceDrawListBrush *v23; // rcx
  void *(__fastcall ***v24)(CSurfaceDrawListBrush *__hidden, unsigned int); // rdi
  void *(__fastcall *v25)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  int v26; // edi
  __int128 v27; // xmm0
  void *(__fastcall *v28)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  int v29; // eax
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  struct CGeometryOnlyDrawListBrush *v32; // rcx
  struct CGeometryOnlyDrawListBrush *v33; // rdi
  struct CGeometryOnlyDrawListBrush *v34; // r15
  _QWORD *v35; // rbx
  struct CObjectCache *ObjectCache; // rax
  char *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r8
  struct CGeometryOnlyDrawListBrush *v40; // rcx
  _QWORD *v41; // rbx
  struct CObjectCache *v42; // rax
  int v43; // eax
  int AllHollowRects; // eax
  int v45; // eax
  __int128 v46; // kr00_16
  CSurfaceDrawListBrush *v47; // rcx
  void *(__fastcall *v48)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *lpMem; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v50; // [rsp+48h] [rbp-B8h] BYREF
  char v51; // [rsp+4Ah] [rbp-B6h]
  struct CGeometryOnlyDrawListBrush *v52[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v53; // [rsp+60h] [rbp-A0h]
  struct D2D_RECT_F v54; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v55[2]; // [rsp+78h] [rbp-88h] BYREF
  int v56; // [rsp+98h] [rbp-68h]
  _BYTE matrix[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v58; // [rsp+C0h] [rbp-40h]
  void *v59[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v60; // [rsp+D8h] [rbp-28h]
  __int64 v61; // [rsp+DCh] [rbp-24h]
  _BYTE v62[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v63[16]; // [rsp+100h] [rbp+0h] BYREF
  struct D2D_MATRIX_3X2_F v64; // [rsp+110h] [rbp+10h] BYREF
  int v65; // [rsp+128h] [rbp+28h]
  __int64 v66; // [rsp+130h] [rbp+30h]
  __int128 v67; // [rsp+138h] [rbp+38h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  unsigned int v69; // [rsp+168h] [rbp+68h]
  _BYTE v70[464]; // [rsp+170h] [rbp+70h] BYREF

  v5 = (unsigned __int64)*((unsigned int *)a4 + 12) << 6;
  v9 = 0LL;
  v10 = *((_QWORD *)this + 2);
  v11 = *(_QWORD *)(v5 + v10 + 8);
  if ( v11 )
    v9 = (D2D1::Matrix3x2F *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(
                               *(_QWORD *)(v5 + v10 + 8),
                               *(unsigned int *)(v5 + v10 + 16));
  if ( v9 && D2D1::Matrix3x2F::IsIdentity(v9) )
    v9 = 0LL;
  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v63,
    a2,
    a3,
    (const struct D2D_MATRIX_3X2_F *)v9);
  v12 = *(CPrimitiveGroup ***)(v5 + *((_QWORD *)this + 2));
  v13 = (__int64 (__fastcall *)(CPrimitiveGroup **, struct CBrushDrawListGenerator *))*((_QWORD *)*v12 + 32);
  if ( v13 == CSurfaceBrush::GetBrushParameters )
    BrushParameters = CSurfaceBrush::GetBrushParameters(v12, (struct CBrushDrawListGenerator *)v63);
  else
    BrushParameters = v13(v12, (struct CBrushDrawListGenerator *)v63);
  *((_DWORD *)a4 + 10) = 0;
  *((_BYTE *)a4 + 45) = 1;
  IntermediateSurfaceBrush = BrushParameters;
  *(_OWORD *)((char *)a4 + 24) = 0LL;
  if ( BrushParameters == -2003304441 )
  {
    IntermediateSurfaceBrush = 0;
    goto LABEL_22;
  }
  if ( BrushParameters < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BrushParameters, 0xA1u);
    goto LABEL_24;
  }
  v16 = 0LL;
  lpMem = 0LL;
  if ( v69 <= 1 && !v66 )
  {
    if ( v69 != 1 || !v68 )
      goto LABEL_56;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v68 + 8LL))(v68) == 1
      || !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v68 + 8LL))(v68) )
    {
      *(_QWORD *)&v54.left = v68;
      v68 = 0LL;
      std::unique_ptr<CDrawListBrush>::operator=((CSurfaceDrawListBrush **)&lpMem, (CSurfaceDrawListBrush **)&v54);
      if ( *(_QWORD *)&v54.left )
      {
        v20 = ***(void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))&v54.left;
        if ( v20 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v54.left, 1u);
        }
        else if ( v20 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
        {
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)&v54.left, 1u);
        }
        else
        {
          v20(*(CSurfaceDrawListBrush **)&v54.left, 1u);
        }
      }
      v16 = (void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))lpMem;
      if ( CDrawListBrush::TryTransformLayout((CDrawListBrush *)lpMem, &v64) )
        goto LABEL_15;
      CBrushDrawListGenerator::AttachInput((__int64)v63, 0, (CSurfaceDrawListBrush **)&lpMem);
      v16 = (void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))lpMem;
    }
  }
  lpMem = 0LL;
  v52[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
  v52[1] = 0LL;
  v53 = 1;
  IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                               (CBrushDrawListGenerator *)v63,
                               &v52[1]);
  if ( v53 )
  {
    v21 = v52[0];
    v22 = v52[1];
    v23 = *(CSurfaceDrawListBrush **)v52[0];
    if ( v52[1] != *(struct CGeometryOnlyDrawListBrush **)v52[0] )
    {
      if ( v23 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v23, 1u);
      *(_QWORD *)v21 = v22;
    }
  }
  if ( IntermediateSurfaceBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0xCAu);
    if ( lpMem )
      CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1u);
    if ( v16 )
    {
      v48 = **v16;
      if ( v48 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v16, 1u);
      }
      else if ( v48 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
      {
        CGeometryOnlyDrawListBrush::`vector deleting destructor'((CGeometryOnlyDrawListBrush *)v16, 1u);
      }
      else
      {
        v48((CSurfaceDrawListBrush *)v16, 1u);
      }
    }
    goto LABEL_24;
  }
  v24 = (void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))lpMem;
  lpMem = 0LL;
  if ( v24 != v16 )
  {
    if ( v16 )
    {
      v25 = **v16;
      if ( v25 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v16, 1u);
      }
      else if ( v25 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
      {
        CGeometryOnlyDrawListBrush::`vector deleting destructor'((CGeometryOnlyDrawListBrush *)v16, 1u);
      }
      else
      {
        v25((CSurfaceDrawListBrush *)v16, 1u);
      }
    }
    v16 = v24;
  }
  v26 = v65;
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v63);
  v65 = v26 | 0x80;
  if ( lpMem )
    CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1u);
LABEL_15:
  if ( !v16 )
  {
LABEL_56:
    v27 = v67;
    *((_DWORD *)a4 + 10) = v65;
    *(_OWORD *)((char *)a4 + 24) = v27;
    goto LABEL_22;
  }
  if ( ((unsigned int (__fastcall *)(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int)))(*v16)[1])(v16) <= 1 )
  {
    *(_QWORD *)matrix = *(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))((char *)v16 + 28);
    *(_QWORD *)&matrix[8] = v16[5];
    *(_QWORD *)&matrix[16] = _mm_unpacklo_ps((__m128)*((unsigned int *)v16 + 13), (__m128)*((unsigned int *)v16 + 14)).m128_u64[0];
    if ( D2D1IsMatrixInvertible((const D2D1_MATRIX_3X2_F *)matrix) )
    {
      if ( ((unsigned int (__fastcall *)(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int)))(*v16)[1])(v16) == 1 )
      {
        CDrawListBitmap::operator=((CArrayBasedCoverageSet **)a4, (__int64)(v16 + 18));
        *((_BYTE *)a4 + 45) = 0;
      }
      v17 = v67;
      *((_DWORD *)a4 + 10) = v65;
      *((_QWORD *)a4 + 7) = v16;
      v16 = 0LL;
      *(_OWORD *)((char *)a4 + 24) = v17;
    }
  }
  if ( v16 )
  {
    v28 = **v16;
    if ( v28 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v16, 1u);
    }
    else if ( v28 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
    {
      CGeometryOnlyDrawListBrush::`vector deleting destructor'((CGeometryOnlyDrawListBrush *)v16, 1u);
    }
    else
    {
      v28((CSurfaceDrawListBrush *)v16, 1u);
    }
  }
LABEL_22:
  if ( !*((_BYTE *)a4 + 45) )
    goto LABEL_23;
  v29 = CDrawListBitmap::SetTransparent(a4, a2);
  IntermediateSurfaceBrush = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x107u);
    goto LABEL_24;
  }
  if ( *((_QWORD *)a4 + 7) )
    goto LABEL_23;
  width = a3->width;
  v54.left = 0.0;
  v54.top = 0.0;
  height = a3->height;
  v54.right = width;
  v54.bottom = height;
  lpMem = 0LL;
  v52[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
  v52[1] = 0LL;
  v53 = 1;
  IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create(&v54, &v52[1]);
  if ( v53 )
  {
    v33 = v52[0];
    v34 = v52[1];
    v35 = *(_QWORD **)v52[0];
    if ( v52[1] != *(struct CGeometryOnlyDrawListBrush **)v52[0] )
    {
      if ( v35 )
      {
        ObjectCache = CThreadContext::GetObjectCache(v32);
        if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
        {
          WPF::ProcessHeapImpl::Free(v35);
        }
        else
        {
          *v35 = *((_QWORD *)ObjectCache + 1);
          ++*((_DWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = v35;
        }
      }
      *(_QWORD *)v33 = v34;
    }
  }
  if ( IntermediateSurfaceBrush >= 0 )
  {
    *(_OWORD *)matrix = _xmm;
    v58 = 1065353216;
    *(_OWORD *)&matrix[16] = _xmm;
    v37 = (char *)lpMem + 28;
    v50 = 257;
    *((_DWORD *)lpMem + 6) = 0;
    CopyIfNeeded_Matrix3x3_(v37, matrix);
    v39 = v38 + 64;
    if ( (__int16 *)v39 != &v50 )
    {
      *(_WORD *)v39 = v50;
      *(_BYTE *)(v39 + 2) = 1;
    }
    *((_QWORD *)a4 + 7) = lpMem;
LABEL_23:
    v18 = *((_QWORD *)a4 + 7);
    if ( *(_DWORD *)(v18 + 24) == 1 && *(_BYTE *)(v18 + 100) )
    {
      CoordMap::CoordMap((CoordMap *)v70);
      v43 = CDrawListBrush::ContributeToCoordMap(*((struct D2D_RECT_F **)a4 + 7), 0, (struct CoordMap *)v70);
      IntermediateSurfaceBrush = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x121u);
      }
      else
      {
        v60 = 1;
        v59[0] = v62;
        v61 = 1LL;
        v59[1] = v62;
        AllHollowRects = CoordMap::GetAllHollowRects(v70, v59);
        IntermediateSurfaceBrush = AllHollowRects;
        if ( AllHollowRects < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllHollowRects, 0x124u);
        }
        else if ( HIDWORD(v61) )
        {
          lpMem = 0LL;
          v53 = 0;
          *(_OWORD *)v52 = 0LL;
          v45 = CDrawListBitmap::SetTransparent((CDrawListBitmap *)v52, a2);
          IntermediateSurfaceBrush = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x12Eu);
          }
          else
          {
            *(_QWORD *)matrix = &lpMem;
            *(_QWORD *)&matrix[8] = 0LL;
            matrix[16] = 1;
            v54 = (struct D2D_RECT_F)_xmm;
            IntermediateSurfaceBrush = CSurfaceDrawListBrush::Create(
                                         (const struct CDrawListBitmap *)v52,
                                         &v54,
                                         (struct CSurfaceDrawListBrush **)&matrix[8]);
            if ( matrix[16] )
            {
              v46 = *(_OWORD *)matrix;
              v47 = **(CSurfaceDrawListBrush ***)matrix;
              if ( *(_QWORD *)&matrix[8] != **(_QWORD **)matrix )
              {
                if ( v47 )
                  CSurfaceDrawListBrush::`vector deleting destructor'(v47, 1u);
                *(_QWORD *)v46 = *((_QWORD *)&v46 + 1);
              }
            }
            if ( IntermediateSurfaceBrush < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x133u);
            }
            else
            {
              *(_OWORD *)matrix = _xmm;
              v58 = 1065353216;
              *(_OWORD *)&matrix[16] = _xmm;
              v56 = 1065353216;
              v55[0] = _xmm;
              v50 = 257;
              v55[1] = _xmm;
              v51 = 1;
              CDrawListBrush::SetBrushPrimitiveLayout(lpMem, v55, &v50, matrix, v59[0], 0, 0LL);
              *((_BYTE *)lpMem + 168) = 1;
              *((_QWORD *)a4 + 8) = lpMem;
              lpMem = 0LL;
            }
          }
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v52[1]);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v52);
          if ( lpMem )
            CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1u);
        }
        DynArrayImpl<1>::~DynArrayImpl<1>(v59);
      }
      CoordMap::~CoordMap((CoordMap *)v70);
    }
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x110u);
  v41 = lpMem;
  if ( lpMem )
  {
    v42 = CThreadContext::GetObjectCache(v40);
    if ( *((_DWORD *)v42 + 1) >= *(_DWORD *)v42 )
    {
      WPF::ProcessHeapImpl::Free(v41);
    }
    else
    {
      *v41 = *((_QWORD *)v42 + 1);
      ++*((_DWORD *)v42 + 1);
      *((_QWORD *)v42 + 1) = v41;
    }
  }
LABEL_24:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v63);
  return (unsigned int)IntermediateSurfaceBrush;
}
