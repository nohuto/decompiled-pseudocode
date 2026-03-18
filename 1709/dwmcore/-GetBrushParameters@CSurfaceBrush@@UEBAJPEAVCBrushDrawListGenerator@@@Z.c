/*
 * XREFs of ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180024990 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180027268 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180028230 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800298A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180046C8C (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x180048924 (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180070124 (-Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@AEBUD2D_RECT_F@@P.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x18009F110 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1800C4D38 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetBrushParameters(CPrimitiveGroup **this, struct CBrushDrawListGenerator *a2)
{
  __int64 v3; // rcx
  int v5; // esi
  unsigned int v6; // r14d
  int v7; // eax
  struct IImageSource *v8; // rdx
  CPrimitiveGroup *v9; // rcx
  __int64 (__fastcall *v10)(CPrimitiveGroup *, __int64); // rax
  char v11; // al
  int DrawListGeneratorNoRef; // eax
  CSurfaceDrawListBrush **v13; // r14
  struct CSurfaceDrawListBrush *v14; // r15
  CPrimitiveGroupDrawListBrush *v15; // rcx
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  CSurfaceDrawListBrush *v20; // r14
  CSurfaceDrawListBrush **v21; // r15
  CSurfaceDrawListBrush *v22; // rbx
  CSurfaceDrawListBrush *v23; // rcx
  int v24; // eax
  const struct CDrawingContext *v26; // r8
  int v27; // eax
  __int64 v28; // r14
  char v29; // al
  CPrimitiveGroup *v30; // rcx
  int v31; // r14d
  __int64 (__fastcall *v32)(CPrimitiveGroup *, __int64); // rax
  char v33; // al
  CSurfaceDrawListBrush **v34; // r15
  struct CSurfaceDrawListBrush *v35; // r12
  CSurfaceDrawListBrush *v36; // rcx
  __int64 v37; // rcx
  char *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r8
  CSurfaceDrawListBrush **v41; // r12
  CSurfaceDrawListBrush *v42; // r15
  CSurfaceDrawListBrush *v43; // rbx
  CSurfaceDrawListBrush *v44; // rcx
  int v45; // eax
  CSurfaceDrawListBrush *v46; // rcx
  CSurfaceDrawListBrush *v47; // rcx
  void *(__fastcall *v48)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  CPrimitiveGroup *v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  void *(__fastcall *v52)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v53)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v54)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v55)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  __int16 v56; // [rsp+30h] [rbp-69h] BYREF
  bool v57; // [rsp+33h] [rbp-66h] BYREF
  CSurfaceDrawListBrush *v58; // [rsp+38h] [rbp-61h] BYREF
  CSurfaceDrawListBrush **v59; // [rsp+40h] [rbp-59h] BYREF
  struct CSurfaceDrawListBrush *v60; // [rsp+48h] [rbp-51h] BYREF
  int v61; // [rsp+50h] [rbp-49h]
  int v62; // [rsp+54h] [rbp-45h]
  int v63; // [rsp+58h] [rbp-41h]
  int v64; // [rsp+5Ch] [rbp-3Dh]
  float v65; // [rsp+60h] [rbp-39h]
  struct CPrimitiveGroupDrawListGenerator *v66; // [rsp+68h] [rbp-31h] BYREF
  __int128 v67; // [rsp+70h] [rbp-29h] BYREF
  char v68; // [rsp+80h] [rbp-19h]
  CSurfaceDrawListBrush **v69; // [rsp+88h] [rbp-11h] BYREF
  int v70; // [rsp+90h] [rbp-9h]
  int v71; // [rsp+94h] [rbp-5h]
  int v72; // [rsp+98h] [rbp-1h]
  int v73; // [rsp+9Ch] [rbp+3h]
  struct D2D_RECT_F v74; // [rsp+A0h] [rbp+7h] BYREF

  v3 = *((_QWORD *)a2 + 6);
  v5 = 0;
  if ( v3 )
  {
    *((_QWORD *)a2 + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  *((_BYTE *)a2 + 109) = 0;
  v6 = 0;
  *((_DWORD *)a2 + 10) = 0;
  for ( *(_OWORD *)((char *)a2 + 56) = _xmm; v6 < *((_DWORD *)a2 + 26); ++v6 )
  {
    if ( *((_QWORD *)a2 + v6 + 9) )
    {
      v47 = (CSurfaceDrawListBrush *)*((_QWORD *)a2 + v6 + 9);
      if ( v47 )
      {
        v48 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v47;
        if ( v48 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'(v47, 1u);
        }
        else if ( v48 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
        {
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v47, 1u);
        }
        else
        {
          ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64, void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int)))v48)(
            v47,
            1LL,
            CSurfaceDrawListBrush::`vector deleting destructor');
        }
      }
      *((_QWORD *)a2 + v6 + 9) = 0LL;
    }
  }
  *((_DWORD *)a2 + 26) = 0;
  if ( this[12] )
  {
    v7 = CSurfaceBrush::ComputeLayout(
           (CSurfaceBrush *)this,
           (const struct D2D_SIZE_F *)a2 + 1,
           0LL,
           0,
           (struct CSurfaceBrush::LayoutData *)&v69,
           0LL);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1D8u);
LABEL_28:
      if ( v5 < 0 )
        CBrushDrawListGenerator::Reset(a2);
      return (unsigned int)v5;
    }
    v8 = this[13];
    if ( !v8 )
    {
      v9 = this[12];
      v10 = *(__int64 (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)v9 + 48LL);
      if ( (char *)v10 == (char *)CPrimitiveGroup::IsOfType )
        v11 = CPrimitiveGroup::IsOfType(v9, 98LL);
      else
        v11 = v10(v9, 98LL);
      if ( v11 )
      {
        DrawListGeneratorNoRef = CPrimitiveGroup::GetDrawListGeneratorNoRef(
                                   this[12],
                                   *(struct CDrawingContext **)a2,
                                   &v66);
        v5 = DrawListGeneratorNoRef;
        if ( DrawListGeneratorNoRef < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListGeneratorNoRef, 0x21Eu);
        }
        else
        {
          v59 = &v58;
          v58 = 0LL;
          v60 = 0LL;
          LOBYTE(v61) = 1;
          v5 = CPrimitiveGroupDrawListBrush::Create(v66, &v74, &v60);
          if ( (_BYTE)v61 )
          {
            v13 = v59;
            v14 = v60;
            v15 = *v59;
            if ( v60 != *v59 )
            {
              if ( v15 )
                CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v15, 1u);
              *v13 = v14;
            }
          }
          if ( v5 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x224u);
          }
          else
          {
            v16 = *((unsigned int *)this + 23);
            LODWORD(v60) = 0;
            v62 = 0;
            HIDWORD(v60) = v70;
            v59 = v69;
            v63 = v72;
            v61 = v71;
            v65 = FLOAT_1_0;
            v64 = v73;
            LOBYTE(v56) = InterpolationMode::FromD2D1InterpolationMode(v16);
            HIBYTE(v56) = 1;
            v17 = (char *)v58 + 28;
            *((_DWORD *)v58 + 6) = 0;
            CopyIfNeeded_Matrix3x3_(v17, &v59);
            v19 = v18 + 64;
            if ( (__int16 *)v19 != &v56 )
            {
              *(_WORD *)v19 = v56;
              *(_BYTE *)(v19 + 2) = 1;
            }
            v20 = v58;
            v21 = (CSurfaceDrawListBrush **)((char *)a2 + 72);
            v58 = 0LL;
            v22 = v20;
            if ( (struct CPrimitiveGroupDrawListGenerator **)((char *)a2 + 72) != &v66 )
            {
              v23 = *v21;
              v22 = 0LL;
              if ( v20 != *v21 )
              {
                if ( v23 )
                {
                  v54 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v23;
                  if ( v54 == CSurfaceDrawListBrush::`vector deleting destructor' )
                  {
                    CSurfaceDrawListBrush::`vector deleting destructor'(v23, 1u);
                  }
                  else if ( v54 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
                  {
                    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v23, 1u);
                  }
                  else
                  {
                    v54(v23, 1u);
                  }
                }
                *v21 = v20;
              }
            }
            v24 = 1;
            if ( *((_DWORD *)a2 + 26) > 1u )
              v24 = *((_DWORD *)a2 + 26);
            *((_DWORD *)a2 + 26) = v24;
            if ( v22 )
            {
              v55 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v22;
              if ( v55 == CSurfaceDrawListBrush::`vector deleting destructor' )
              {
                CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1u);
              }
              else if ( v55 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
              {
                CGeometryOnlyDrawListBrush::`vector deleting destructor'(v22, 1u);
              }
              else
              {
                v55(v22, 1u);
              }
            }
          }
          if ( v58 )
            CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v58, 1u);
        }
      }
      goto LABEL_28;
    }
    v26 = *(const struct CDrawingContext **)a2;
    v68 = 0;
    v67 = 0LL;
    v27 = CDrawListBitmap::FromImageSource((CDrawListBitmap *)&v67, v8, v26, 0, 0);
    v5 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1DDu);
      goto LABEL_53;
    }
    v28 = v67;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v67 + 32LL))(v67) && *((_BYTE *)this[2] + 1296) )
    {
      *(_OWORD *)((char *)a2 + 56) = _xmm;
      *((_BYTE *)a2 + 109) = 0;
      *((_DWORD *)a2 + 10) = 4;
LABEL_53:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v67 + 1);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v67);
      goto LABEL_28;
    }
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
    v30 = this[12];
    v31 = v29 != 0 ? 2 : 0;
    v32 = *(__int64 (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)v30 + 48LL);
    if ( (char *)v32 == (char *)CCompositionSurfaceBitmap::IsOfType )
      v33 = CCompositionSurfaceBitmap::IsOfType(v30, 15LL);
    else
      v33 = v32(v30, 15LL);
    if ( v33 )
    {
      v49 = this[12];
      v50 = (__int64)v49 + 365;
      if ( !v49 )
        v50 = 381LL;
      v51 = v31 | 4;
      if ( *(_BYTE *)v50 != 2 )
        v51 = v31;
      v31 = v51;
    }
    else if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)&v67, &v57) )
    {
      v31 |= 0x10u;
      if ( v57 )
        v31 |= 0x80u;
    }
    v58 = 0LL;
    v59 = &v58;
    v60 = 0LL;
    LOBYTE(v61) = 1;
    v5 = CSurfaceDrawListBrush::Create((const struct CDrawListBitmap *)&v67, &v74, &v60);
    if ( (_BYTE)v61 )
    {
      v34 = v59;
      v35 = v60;
      v36 = *v59;
      if ( v60 != *v59 )
      {
        if ( v36 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v36, 1u);
        *v34 = v35;
      }
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x20Cu);
      v46 = v58;
      if ( !v58 )
        goto LABEL_53;
    }
    else
    {
      v37 = *((unsigned int *)this + 23);
      LODWORD(v60) = 0;
      v62 = 0;
      HIDWORD(v60) = v70;
      v59 = v69;
      v63 = v72;
      v61 = v71;
      v65 = FLOAT_1_0;
      v64 = v73;
      LOBYTE(v56) = InterpolationMode::FromD2D1InterpolationMode(v37);
      HIBYTE(v56) = 1;
      v38 = (char *)v58 + 28;
      *((_DWORD *)v58 + 6) = 0;
      CopyIfNeeded_Matrix3x3_(v38, &v59);
      v40 = v39 + 64;
      if ( (__int16 *)v40 != &v56 )
      {
        *(_WORD *)v40 = v56;
        *(_BYTE *)(v40 + 2) = 1;
      }
      *((_BYTE *)v58 + 168) = 1;
      v41 = (CSurfaceDrawListBrush **)((char *)a2 + 72);
      v42 = v58;
      v58 = 0LL;
      v43 = v42;
      if ( (struct CPrimitiveGroupDrawListGenerator **)((char *)a2 + 72) != &v66 )
      {
        v44 = *v41;
        v43 = 0LL;
        if ( v42 != *v41 )
        {
          if ( v44 )
          {
            v52 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v44;
            if ( v52 == CSurfaceDrawListBrush::`vector deleting destructor' )
            {
              CSurfaceDrawListBrush::`vector deleting destructor'(v44, 1u);
            }
            else if ( v52 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
            {
              CGeometryOnlyDrawListBrush::`vector deleting destructor'(v44, 1u);
            }
            else
            {
              v52(v44, 1u);
            }
          }
          *v41 = v42;
        }
      }
      v45 = 1;
      if ( *((_DWORD *)a2 + 26) > 1u )
        v45 = *((_DWORD *)a2 + 26);
      *((_DWORD *)a2 + 26) = v45;
      if ( v43 )
      {
        v53 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v43;
        if ( v53 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'(v43, 1u);
        }
        else if ( v53 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
        {
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v43, 1u);
        }
        else
        {
          v53(v43, 1u);
        }
      }
      v46 = v58;
      *((_DWORD *)a2 + 10) = v31;
      if ( !v46 )
        goto LABEL_53;
    }
    CSurfaceDrawListBrush::`vector deleting destructor'(v46, 1u);
    goto LABEL_53;
  }
  return (unsigned int)v5;
}
