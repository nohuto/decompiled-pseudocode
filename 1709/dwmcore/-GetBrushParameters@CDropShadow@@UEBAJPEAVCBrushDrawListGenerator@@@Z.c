/*
 * XREFs of ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801602C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z @ 0x180070EA4 (-SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x18007267C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800726A8 (-Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BDC50 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1801523FC (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180155A94 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ @ 0x18015F720 (-CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ.c)
 *     ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x180160E0C (-IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z.c)
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEBA_KAEBQEAVCVisual@@@Z @ 0x180161474 (-_Hashval@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compa.c)
 */

__int64 __fastcall CDropShadow::GetBrushParameters(CDropShadow *this, struct CBrushDrawListGenerator *a2)
{
  float v2; // xmm6_4
  float v4; // xmm7_4
  struct CVisual *v6; // r13
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // r9
  _QWORD *i; // rcx
  _QWORD *v13; // rax
  float *v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  unsigned int v19; // xmm3_4
  float v20; // xmm1_4
  unsigned int v21; // xmm2_4
  struct CGeometryOnlyDrawListBrush *v22; // rcx
  signed int v23; // edi
  __int128 v24; // kr00_16
  _QWORD *v25; // r14
  struct CObjectCache *ObjectCache; // rax
  struct CGeometryOnlyDrawListBrush *v27; // rcx
  CGeometryOnlyDrawListBrush *(__fastcall *v28)(CGeometryOnlyDrawListBrush *, char); // rax
  CDrawListBrush *v29; // rdi
  struct CObjectCache *v30; // rax
  float v31; // xmm2_4
  float v32; // xmm2_4
  int v33; // xmm1_4
  __int128 v34; // xmm0
  struct CGeometryOnlyDrawListBrush *v35; // rcx
  CDrawListBrush *v36; // rbx
  struct CObjectCache *v37; // rax
  __int64 v38; // r14
  __int64 v39; // rcx
  signed int v40; // eax
  signed int v41; // eax
  struct D2D_MATRIX_3X2_F *v42; // r9
  _QWORD *v43; // r14
  __int64 v44; // r15
  CSurfaceDrawListBrush *v45; // rcx
  char *v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r8
  float v49; // xmm4_4
  float v50; // xmm4_4
  __int64 v51; // rax
  float v52; // xmm1_4
  CGeometryOnlyDrawListBrush *(__fastcall *v53)(CGeometryOnlyDrawListBrush *, char); // rax
  __int16 v55; // [rsp+38h] [rbp-A9h] BYREF
  char v56; // [rsp+3Ah] [rbp-A7h]
  CDrawListBrush *lpMem; // [rsp+40h] [rbp-A1h] BYREF
  struct D2D_RECT_F lpMem_8; // [rsp+48h] [rbp-99h] BYREF
  __int128 v59; // [rsp+58h] [rbp-89h] BYREF
  char v60; // [rsp+68h] [rbp-79h]
  struct D2D_RECT_F v61; // [rsp+70h] [rbp-71h] BYREF
  __int64 v62; // [rsp+80h] [rbp-61h]
  struct D2D_RECT_F v63; // [rsp+88h] [rbp-59h] BYREF
  __int128 v64; // [rsp+98h] [rbp-49h] BYREF
  __int128 v65; // [rsp+A8h] [rbp-39h]
  int v66; // [rsp+B8h] [rbp-29h]
  CSurfaceDrawListBrush *v67[2]; // [rsp+C0h] [rbp-21h] BYREF

  v2 = *((float *)a2 + 2);
  v4 = *((float *)a2 + 3);
  v63.left = 0.0;
  v63.top = 0.0;
  v63.right = v2;
  v63.bottom = v4;
  CBrushDrawListGenerator::Reset(a2);
  v67[0] = CDrawingContext::GetCurrentVisual((CDrawingContext *)(*(_QWORD *)a2 + 8LL));
  *(_QWORD *)&lpMem_8.left = (char *)this + 200;
  v6 = v67[0];
  if ( CDropShadow::CanUseVisualBrushAsMaskBrush(this) )
  {
    v7 = (_QWORD *)((char *)this + 80);
    v8 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Hashval(
           (char *)this + 80,
           v67);
    v9 = *((_QWORD *)this + 12);
    v10 = 2 * v8;
    v11 = *(_QWORD **)(v9 + 16 * v8);
    for ( i = v11; ; i = (_QWORD *)*i )
    {
      v13 = v11 == (_QWORD *)*v7 ? (_QWORD *)*v7 : **(_QWORD ***)(v9 + 8 * v10 + 8);
      if ( i == v13 )
        break;
      if ( v6 == (struct CVisual *)i[2] )
        goto LABEL_11;
    }
    i = (_QWORD *)*v7;
LABEL_11:
    if ( i != (_QWORD *)*v7 )
      *(_QWORD *)&lpMem_8.left = i + 3;
  }
  if ( IsEmpty((const struct D2D_RECT_F *)((char *)this + 180)) )
    goto LABEL_32;
  v15 = *((float *)this + 40);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 44)) & _xmm) >= 0.0000011920929 )
    goto LABEL_32;
  LODWORD(v16) = COERCE_UNSIGNED_INT(*((float *)this + 43) - v15) ^ _xmm;
  LODWORD(v17) = COERCE_UNSIGNED_INT(*((float *)this + 42) - v15) ^ _xmm;
  lpMem = 0LL;
  v18 = v17 + v14[2];
  *(float *)&v19 = v17 + *v14;
  *(_QWORD *)&v59 = &lpMem;
  v20 = v16 + v14[3];
  *(float *)&v21 = v16 + v14[1];
  *((_QWORD *)&v59 + 1) = 0LL;
  v67[0] = (CSurfaceDrawListBrush *)__PAIR64__(v21, v19);
  v60 = 1;
  *(float *)&v67[1] = v2 - v18;
  *((float *)&v67[1] + 1) = v4 - v20;
  v23 = CGeometryOnlyDrawListBrush::Create(&v63, (struct CGeometryOnlyDrawListBrush **)&v59 + 1);
  if ( v60 )
  {
    v24 = v59;
    v25 = *(_QWORD **)v59;
    if ( *((_QWORD *)&v59 + 1) != *(_QWORD *)v59 )
    {
      if ( v25 )
      {
        ObjectCache = CThreadContext::GetObjectCache(v22);
        if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
        {
          WPF::ProcessHeapImpl::Free(v25);
        }
        else
        {
          *v25 = *((_QWORD *)ObjectCache + 1);
          ++*((_DWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = v25;
        }
      }
      *(_QWORD *)v24 = *((_QWORD *)&v24 + 1);
    }
  }
  if ( v23 >= 0 )
  {
    v66 = 1065353216;
    v55 = 257;
    v64 = _xmm;
    v56 = 1;
    v65 = _xmm;
    CDrawListBrush::SetNineGridLayout(
      lpMem,
      (const struct Matrix3x3 *)&v64,
      (const struct SamplerMode *)&v55,
      (const struct Insets *)v67,
      (const struct Insets *)v67,
      1);
    v67[0] = lpMem;
    lpMem = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)a2, 0, v67);
    v27 = v67[0];
    if ( v67[0] )
    {
      v28 = **(CGeometryOnlyDrawListBrush *(__fastcall ***)(CGeometryOnlyDrawListBrush *, char))v67[0];
      if ( v28 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v67[0], 1);
      }
      else if ( v28 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
      {
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v67[0], 1);
      }
      else
      {
        v28(v67[0], 1);
      }
    }
    v29 = lpMem;
    if ( lpMem )
    {
      v30 = CThreadContext::GetObjectCache(v27);
      if ( *((_DWORD *)v30 + 1) >= *(_DWORD *)v30 )
      {
        WPF::ProcessHeapImpl::Free(v29);
      }
      else
      {
        *(_QWORD *)v29 = *((_QWORD *)v30 + 1);
        ++*((_DWORD *)v30 + 1);
        *((_QWORD *)v30 + 1) = v29;
      }
    }
LABEL_32:
    v31 = *((float *)this + 41);
    if ( v31 >= 1.0 )
    {
      v34 = *((_OWORD *)this + 9);
    }
    else
    {
      v32 = v31 * *((float *)this + 39);
      v33 = *((_DWORD *)this + 37);
      LODWORD(v67[0]) = *((_DWORD *)this + 36);
      LODWORD(v67[1]) = *((_DWORD *)this + 38);
      *((float *)&v67[1] + 1) = v32;
      HIDWORD(v67[0]) = v33;
      v34 = *(_OWORD *)v67;
    }
    v38 = *(_QWORD *)&lpMem_8.left;
    *(_OWORD *)((char *)a2 + 56) = v34;
    *((_BYTE *)a2 + 109) = 0;
    v60 = 0;
    v39 = *(_QWORD *)(v38 + 24);
    v59 = 0LL;
    v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, CSurfaceDrawListBrush **))(*(_QWORD *)v39 + 120LL))(
            v39,
            0LL,
            0LL,
            v67);
    v23 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v40, 0x1F7u);
    }
    else
    {
      v41 = CDrawListBitmap::FromImageSource(
              (CDrawListBitmap *)&v59,
              *(struct IImageSource **)(v38 + 24),
              *(const struct CDrawingContext **)a2,
              0,
              0);
      v23 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v41, 0x1F8u);
      }
      else
      {
        *(_QWORD *)&lpMem_8.left = 0LL;
        lpMem_8.right = *(float *)&v67[1] - *(float *)v67;
        lpMem = 0LL;
        *(_QWORD *)&v61.left = &lpMem;
        *(_QWORD *)&v61.right = 0LL;
        lpMem_8.bottom = *((float *)&v67[1] + 1) - *((float *)v67 + 1);
        LOBYTE(v62) = 1;
        v23 = CSurfaceDrawListBrush::Create(
                (const struct CDrawListBitmap *)&v59,
                &lpMem_8,
                (struct CSurfaceDrawListBrush **)&v61.right);
        if ( (_BYTE)v62 )
        {
          v43 = *(_QWORD **)&v61.left;
          v44 = *(_QWORD *)&v61.right;
          v45 = **(CSurfaceDrawListBrush ***)&v61.left;
          if ( *(_QWORD *)&v61.right != **(_QWORD **)&v61.left )
          {
            if ( v45 )
              CSurfaceDrawListBrush::`vector deleting destructor'(v45, 1);
            *v43 = v44;
          }
        }
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x1FEu);
        }
        else
        {
          D2DMatrixHelper::ComputeRectangleTransform((CDrawListBrush *)((char *)lpMem + 8), &v63, &v61, v42);
          *(FLOAT *)&v64 = v61.left;
          v46 = (char *)lpMem + 28;
          *(_QWORD *)((char *)&v64 + 4) = LODWORD(v61.top);
          HIDWORD(v64) = LODWORD(v61.right);
          *(_QWORD *)&v65 = LODWORD(v61.bottom);
          *((_QWORD *)&v65 + 1) = v62;
          v66 = 1065353216;
          v55 = 257;
          *((_DWORD *)lpMem + 6) = 0;
          CopyIfNeeded_Matrix3x3_((__int64)v46, (__int64)&v64);
          v48 = v47 + 64;
          if ( (__int16 *)v48 != &v55 )
          {
            *(_WORD *)v48 = v55;
            *(_BYTE *)(v48 + 2) = 1;
          }
          if ( CDropShadow::IsRectangular(this, v6) )
          {
            lpMem_8 = 0LL;
            if ( this == CDropShadow::s_pFastShadow )
              v49 = FLOAT_32_0;
            else
              v49 = *((float *)this + 40) + *((float *)this + 40);
            if ( (float)(*(float *)&v67[1] - *(float *)v67) > (float)(v49 + v49) )
            {
              lpMem_8.left = v49;
              lpMem_8.right = v49;
            }
            if ( (float)(*((float *)&v67[1] + 1) - *((float *)v67 + 1)) > (float)(v49 + v49) )
            {
              lpMem_8.top = v49;
              lpMem_8.bottom = v49;
            }
            if ( !Insets::IsEmpty((const struct Insets *)&lpMem_8) )
            {
              v51 = 0LL;
              v52 = (float)(*((float *)this + 40) + *((float *)this + 40)) / v50;
              do
              {
                *(float *)((char *)&v63.left + v51) = v52 * *(float *)((char *)&lpMem_8.left + v51);
                v51 += 4LL;
              }
              while ( v51 < 16 );
              CDrawListBrush::SetNineGridLayout(
                lpMem,
                (CDrawListBrush *)((char *)lpMem + 28),
                (CDrawListBrush *)((char *)lpMem + 64),
                (const struct Insets *)&lpMem_8,
                (const struct Insets *)&v63,
                0);
            }
          }
          *(_QWORD *)&lpMem_8.left = lpMem;
          lpMem = 0LL;
          CBrushDrawListGenerator::AttachInput((__int64)a2, 1u, (CSurfaceDrawListBrush **)&lpMem_8);
          if ( *(_QWORD *)&lpMem_8.left )
          {
            v53 = ***(CGeometryOnlyDrawListBrush *(__fastcall ****)(CGeometryOnlyDrawListBrush *, char))&lpMem_8.left;
            if ( v53 == CSurfaceDrawListBrush::`vector deleting destructor' )
            {
              CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&lpMem_8.left, 1);
            }
            else if ( v53 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
            {
              CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)&lpMem_8.left, 1);
            }
            else
            {
              v53(*(CGeometryOnlyDrawListBrush **)&lpMem_8.left, 1);
            }
          }
        }
        if ( lpMem )
          CSurfaceDrawListBrush::`vector deleting destructor'(lpMem, 1);
      }
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v59 + 1);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v59);
    goto LABEL_74;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x1DAu);
  v36 = lpMem;
  if ( lpMem )
  {
    v37 = CThreadContext::GetObjectCache(v35);
    if ( *((_DWORD *)v37 + 1) >= *(_DWORD *)v37 )
    {
      WPF::ProcessHeapImpl::Free(v36);
    }
    else
    {
      *(_QWORD *)v36 = *((_QWORD *)v37 + 1);
      ++*((_DWORD *)v37 + 1);
      *((_QWORD *)v37 + 1) = v36;
    }
  }
LABEL_74:
  if ( v23 < 0 )
    CBrushDrawListGenerator::Reset(a2);
  return (unsigned int)v23;
}
