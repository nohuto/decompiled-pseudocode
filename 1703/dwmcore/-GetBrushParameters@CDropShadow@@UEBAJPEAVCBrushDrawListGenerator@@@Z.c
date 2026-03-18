/*
 * XREFs of ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180171530
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800585B8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180059D68 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00 (-Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z @ 0x1800BFED4 (-SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x1800C0018 (CopyIfNeeded_Matrix3x3_.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800C0104 (-Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x1800C01DC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18015C31C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18015F9E8 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?IsRectangular@CDropShadow@@AEBA_NXZ @ 0x180171E38 (-IsRectangular@CDropShadow@@AEBA_NXZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801AE144 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CDropShadow::GetBrushParameters(CDropShadow *this, struct CBrushDrawListGenerator *a2)
{
  float v2; // xmm6_4
  float v4; // xmm7_4
  float *v6; // rcx
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  struct CGeometryOnlyDrawListBrush *v13; // rcx
  int v14; // edi
  _QWORD *v15; // r15
  __int64 v16; // r12
  _QWORD *v17; // r14
  struct CObjectCache *ObjectCache; // rax
  struct CGeometryOnlyDrawListBrush *v19; // rcx
  CSurfaceDrawListBrush *(__fastcall *v20)(CSurfaceDrawListBrush *, char); // rax
  CDrawListBrush *v21; // rdi
  struct CObjectCache *v22; // rax
  float v23; // xmm2_4
  float v24; // xmm2_4
  int v25; // xmm1_4
  __int128 v26; // xmm0
  struct CGeometryOnlyDrawListBrush *v27; // rcx
  CDrawListBrush *v28; // rbx
  struct CObjectCache *v29; // rax
  int v30; // eax
  struct IImageSource *v31; // rcx
  struct D2D_MATRIX_3X2_F *v32; // r9
  _QWORD *v33; // r14
  __int64 v34; // r15
  CSurfaceDrawListBrush *v35; // rcx
  char *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r8
  float v39; // xmm4_4
  float v40; // xmm4_4
  __int64 v41; // rax
  float v42; // xmm1_4
  CSurfaceDrawListBrush *(__fastcall *v43)(CSurfaceDrawListBrush *, char); // rax
  __int16 v45; // [rsp+38h] [rbp-99h] BYREF
  char v46; // [rsp+3Ah] [rbp-97h]
  CDrawListBrush *lpMem; // [rsp+40h] [rbp-91h] BYREF
  struct D2D_RECT_F lpMem_8; // [rsp+48h] [rbp-89h] BYREF
  FLOAT bottom; // [rsp+58h] [rbp-79h]
  int v50; // [rsp+5Ch] [rbp-75h]
  __int64 v51; // [rsp+60h] [rbp-71h]
  int v52; // [rsp+68h] [rbp-69h]
  struct D2D_RECT_F v53; // [rsp+70h] [rbp-61h] BYREF
  struct D2D_RECT_F v54; // [rsp+80h] [rbp-51h] BYREF
  __int128 v55; // [rsp+90h] [rbp-41h]
  int v56; // [rsp+A0h] [rbp-31h]
  __int128 v57; // [rsp+A8h] [rbp-29h] BYREF

  v2 = *((float *)a2 + 2);
  v4 = *((float *)a2 + 3);
  v53.left = 0.0;
  v53.top = 0.0;
  v53.right = v2;
  v53.bottom = v4;
  CBrushDrawListGenerator::Reset(a2);
  if ( IsEmpty((const struct D2D_RECT_F *)((char *)this + 116))
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 28)) & _xmm) >= 0.0000011920929 )
  {
LABEL_18:
    v23 = *((float *)this + 25);
    if ( v23 >= 1.0 )
    {
      v26 = *((_OWORD *)this + 5);
    }
    else
    {
      v24 = v23 * *((float *)this + 23);
      v25 = *((_DWORD *)this + 21);
      LODWORD(v57) = *((_DWORD *)this + 20);
      DWORD2(v57) = *((_DWORD *)this + 22);
      *((float *)&v57 + 3) = v24;
      DWORD1(v57) = v25;
      v26 = v57;
    }
    *((_BYTE *)a2 + 108) = 0;
    *(_OWORD *)((char *)a2 + 56) = v26;
    v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 20) + 112LL))(
            *((_QWORD *)this + 20),
            0LL,
            0LL,
            &v57);
    v14 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x1A6u);
    }
    else
    {
      *(_QWORD *)&lpMem_8.left = 0LL;
      v31 = (struct IImageSource *)*((_QWORD *)this + 20);
      lpMem_8.right = *((float *)&v57 + 2) - *(float *)&v57;
      lpMem = 0LL;
      *(_QWORD *)&v54.left = &lpMem;
      lpMem_8.bottom = *((float *)&v57 + 3) - *((float *)&v57 + 1);
      *(_QWORD *)&v54.right = 0LL;
      LOBYTE(v55) = 1;
      v14 = CSurfaceDrawListBrush::Create(v31, &lpMem_8, (struct CSurfaceDrawListBrush **)&v54.right);
      if ( (_BYTE)v55 )
      {
        v33 = *(_QWORD **)&v54.left;
        v34 = *(_QWORD *)&v54.right;
        v35 = **(CSurfaceDrawListBrush ***)&v54.left;
        if ( *(_QWORD *)&v54.right != **(_QWORD **)&v54.left )
        {
          if ( v35 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v35, 1);
          *v33 = v34;
        }
      }
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1ACu);
      }
      else
      {
        D2DMatrixHelper::ComputeRectangleTransform((CDrawListBrush *)((char *)lpMem + 8), &v53, &v54, v32);
        lpMem_8.right = 0.0;
        v50 = 0;
        *(_QWORD *)&lpMem_8.left = *(_QWORD *)&v54.left;
        v36 = (char *)lpMem + 28;
        lpMem_8.bottom = v54.right;
        bottom = v54.bottom;
        v51 = v55;
        v52 = 1065353216;
        v45 = 257;
        *((_DWORD *)lpMem + 6) = 0;
        CopyIfNeeded_Matrix3x3_((__int64)v36, (__int64)&lpMem_8);
        v38 = v37 + 64;
        if ( (__int16 *)v38 != &v45 )
        {
          *(_WORD *)v38 = v45;
          *(_BYTE *)(v38 + 2) = 1;
        }
        if ( CDropShadow::IsRectangular(this) )
        {
          lpMem_8 = 0LL;
          if ( this == CDropShadow::s_pFastShadow )
            v39 = FLOAT_32_0;
          else
            v39 = *((float *)this + 24) + *((float *)this + 24);
          if ( (float)(*((float *)&v57 + 2) - *(float *)&v57) > (float)(v39 + v39) )
          {
            lpMem_8.left = v39;
            lpMem_8.right = v39;
          }
          if ( (float)(*((float *)&v57 + 3) - *((float *)&v57 + 1)) > (float)(v39 + v39) )
          {
            lpMem_8.top = v39;
            lpMem_8.bottom = v39;
          }
          if ( !Insets::IsEmpty((const struct Insets *)&lpMem_8) )
          {
            v41 = 0LL;
            v42 = (float)(*((float *)this + 24) + *((float *)this + 24)) / v40;
            do
            {
              *(float *)((char *)&v53.left + v41) = v42 * *(float *)((char *)&lpMem_8.left + v41);
              v41 += 4LL;
            }
            while ( v41 < 16 );
            CDrawListBrush::SetNineGridLayout(
              lpMem,
              (CDrawListBrush *)((char *)lpMem + 28),
              (CDrawListBrush *)((char *)lpMem + 64),
              (const struct Insets *)&lpMem_8,
              (const struct Insets *)&v53,
              0);
          }
        }
        *(_QWORD *)&lpMem_8.left = lpMem;
        lpMem = 0LL;
        CBrushDrawListGenerator::AttachInput((__int64)a2, 1u, (__int64)&lpMem_8);
        if ( *(_QWORD *)&lpMem_8.left )
        {
          v43 = ***(CSurfaceDrawListBrush *(__fastcall ****)(CSurfaceDrawListBrush *, char))&lpMem_8.left;
          if ( v43 == CSurfaceDrawListBrush::`vector deleting destructor' )
            CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&lpMem_8.left, 1);
          else
            v43(*(CSurfaceDrawListBrush **)&lpMem_8.left, 1);
        }
      }
      if ( lpMem )
        CSurfaceDrawListBrush::`vector deleting destructor'(lpMem, 1);
    }
    goto LABEL_55;
  }
  LODWORD(v7) = COERCE_UNSIGNED_INT(*((float *)this + 27) - *((float *)this + 24)) ^ _xmm;
  LODWORD(v8) = COERCE_UNSIGNED_INT(*((float *)this + 26) - *((float *)this + 24)) ^ _xmm;
  lpMem = 0LL;
  v9 = v8 + *v6;
  v10 = v8 + v6[2];
  *(_QWORD *)&lpMem_8.left = &lpMem;
  v11 = v7 + v6[1];
  v12 = v7 + v6[3];
  *(_QWORD *)&lpMem_8.right = 0LL;
  LOBYTE(bottom) = 1;
  *(float *)&v57 = v9 - 0.0;
  *((float *)&v57 + 2) = v2 - v10;
  *((float *)&v57 + 1) = v11 - 0.0;
  *((float *)&v57 + 3) = v4 - v12;
  v14 = CGeometryOnlyDrawListBrush::Create(&v53, (struct CGeometryOnlyDrawListBrush **)&lpMem_8.right);
  if ( LOBYTE(bottom) )
  {
    v15 = *(_QWORD **)&lpMem_8.left;
    v16 = *(_QWORD *)&lpMem_8.right;
    v17 = **(_QWORD ***)&lpMem_8.left;
    if ( *(_QWORD *)&lpMem_8.right != **(_QWORD **)&lpMem_8.left )
    {
      if ( v17 )
      {
        ObjectCache = CThreadContext::GetObjectCache(v13);
        if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
        {
          WPF::ProcessHeapImpl::Free(v17);
        }
        else
        {
          *v17 = *((_QWORD *)ObjectCache + 1);
          ++*((_DWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = v17;
        }
      }
      *v15 = v16;
    }
  }
  if ( v14 >= 0 )
  {
    v56 = 1065353216;
    v45 = 257;
    v54 = (struct D2D_RECT_F)_xmm;
    v46 = 1;
    v55 = _xmm;
    CDrawListBrush::SetNineGridLayout(
      lpMem,
      (const struct Matrix3x3 *)&v54,
      (const struct SamplerMode *)&v45,
      (const struct Insets *)&v57,
      (const struct Insets *)&v57,
      1);
    *(_QWORD *)&lpMem_8.left = lpMem;
    lpMem = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64)&lpMem_8);
    v19 = *(struct CGeometryOnlyDrawListBrush **)&lpMem_8.left;
    if ( *(_QWORD *)&lpMem_8.left )
    {
      v20 = ***(CSurfaceDrawListBrush *(__fastcall ****)(CSurfaceDrawListBrush *, char))&lpMem_8.left;
      if ( v20 == CSurfaceDrawListBrush::`vector deleting destructor' )
        CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&lpMem_8.left, 1);
      else
        v20(*(CSurfaceDrawListBrush **)&lpMem_8.left, 1);
    }
    v21 = lpMem;
    if ( lpMem )
    {
      v22 = CThreadContext::GetObjectCache(v19);
      if ( *((_DWORD *)v22 + 1) >= *(_DWORD *)v22 )
      {
        WPF::ProcessHeapImpl::Free(v21);
      }
      else
      {
        *(_QWORD *)v21 = *((_QWORD *)v22 + 1);
        ++*((_DWORD *)v22 + 1);
        *((_QWORD *)v22 + 1) = v21;
      }
    }
    goto LABEL_18;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x18Bu);
  v28 = lpMem;
  if ( lpMem )
  {
    v29 = CThreadContext::GetObjectCache(v27);
    if ( *((_DWORD *)v29 + 1) >= *(_DWORD *)v29 )
    {
      WPF::ProcessHeapImpl::Free(v28);
    }
    else
    {
      *(_QWORD *)v28 = *((_QWORD *)v29 + 1);
      ++*((_DWORD *)v29 + 1);
      *((_QWORD *)v29 + 1) = v28;
    }
  }
LABEL_55:
  if ( v14 < 0 )
    CBrushDrawListGenerator::Reset(a2);
  return (unsigned int)v14;
}
