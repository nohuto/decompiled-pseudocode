/*
 * XREFs of ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180099560
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18008E6C0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180098B70 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009CE90 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180003AE0 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x1800058E4 (-Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEA.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x1800059D0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800479A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180097670 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800C1D78 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetBrushParameters(
        CPrimitiveGroupDrawListGenerator ***this,
        struct CBrushDrawListGenerator *a2)
{
  int v4; // esi
  unsigned int v5; // ebx
  int v6; // eax
  struct IImageSource *v7; // rdx
  const struct CDrawingContext *v8; // r8
  int v9; // eax
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rcx
  char v13; // si
  int v14; // r15d
  int v15; // r12d
  bool (__fastcall *v16)(__int64, int); // rax
  bool v17; // al
  int v18; // eax
  struct CPrimitiveGroupDrawListGenerator *v19; // rcx
  int v20; // ecx
  int v21; // ecx
  CSurfaceDrawListBrush *v22; // r8
  CSurfaceDrawListBrush *v23; // rax
  CSurfaceDrawListBrush *v24; // rcx
  CSurfaceDrawListBrush **v25; // rax
  CSurfaceDrawListBrush *v26; // rdx
  CSurfaceDrawListBrush *v27; // rbx
  CSurfaceDrawListBrush *v28; // r8
  int v29; // eax
  __int64 v31; // rcx
  bool (__fastcall *v32)(__int64, int); // rax
  bool v33; // al
  int DrawListGeneratorNoRef; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  CPrimitiveGroupDrawListBrush *v38; // rcx
  CSurfaceDrawListBrush *v39; // rax
  CSurfaceDrawListBrush *v40; // rcx
  CSurfaceDrawListBrush *v41; // rax
  __int128 v42; // xmm0
  CSurfaceDrawListBrush *v43; // r8
  CSurfaceDrawListBrush **v44; // rax
  CSurfaceDrawListBrush *v45; // rbx
  CSurfaceDrawListBrush *v46; // rdx
  int v47; // eax
  CSurfaceDrawListBrush *v48; // rdx
  CPrimitiveGroupDrawListGenerator **v49; // rax
  __int64 v50; // rcx
  char v51; // bl
  __int16 v52; // [rsp+30h] [rbp-69h] BYREF
  char v53; // [rsp+32h] [rbp-67h]
  CSurfaceDrawListBrush *v54; // [rsp+40h] [rbp-59h] BYREF
  struct CPrimitiveGroupDrawListGenerator *v55; // [rsp+48h] [rbp-51h] BYREF
  CSurfaceDrawListBrush **v56; // [rsp+50h] [rbp-49h]
  CSurfaceDrawListBrush *v57; // [rsp+58h] [rbp-41h] BYREF
  char v58; // [rsp+60h] [rbp-39h]
  __int128 v59; // [rsp+68h] [rbp-31h] BYREF
  char v60; // [rsp+78h] [rbp-21h]
  char v61; // [rsp+80h] [rbp-19h] BYREF
  char v62; // [rsp+88h] [rbp-11h] BYREF
  __int128 v63; // [rsp+90h] [rbp-9h] BYREF
  __int64 v64; // [rsp+A0h] [rbp+7h]
  __int128 v65; // [rsp+A8h] [rbp+Fh] BYREF

  v4 = 0;
  *((_BYTE *)a2 + 76) = 0;
  v5 = 0;
  *((_DWORD *)a2 + 4) = 0;
  for ( *(_OWORD *)((char *)a2 + 20) = _xmm; v5 < *((_DWORD *)a2 + 18); ++v5 )
  {
    v48 = (CSurfaceDrawListBrush *)*((_QWORD *)a2 + v5 + 5);
    *((_QWORD *)a2 + v5 + 5) = 0LL;
    if ( v48 )
      std::default_delete<CDrawListBrush>::operator()((__int64)this, v48);
  }
  *((_DWORD *)a2 + 18) = 0;
  if ( this[11] )
  {
    v6 = CSurfaceBrush::ComputeLayout(
           (CSurfaceBrush *)this,
           (const struct D2D_SIZE_F *)a2 + 1,
           0,
           (struct CContent::LayoutData *)&v63,
           0LL);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x232u);
      goto LABEL_34;
    }
    v7 = (struct IImageSource *)this[12];
    if ( v7 )
    {
      v8 = *(const struct CDrawingContext **)a2;
      v60 = 0;
      v59 = 0LL;
      v9 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v59, v7, v8, 0);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x237u);
      }
      else
      {
        v10 = v59;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v59 + 32LL))(v59) && *((_BYTE *)this[2] + 1344) )
        {
          *(_OWORD *)((char *)a2 + 20) = _xmm;
          *((_BYTE *)a2 + 76) = 0;
          *((_DWORD *)a2 + 4) = 4;
LABEL_30:
          if ( *((_QWORD *)&v59 + 1) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v59 + 1) + 16LL))(*((_QWORD *)&v59 + 1));
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          goto LABEL_34;
        }
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
        v12 = (__int64)this[11];
        v13 = 2;
        v14 = v11 != 0 ? 2 : 0;
        v15 = v14;
        v16 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 48LL);
        if ( v16 == CCompositionSurfaceBitmap::IsOfType )
          v17 = CCompositionSurfaceBitmap::IsOfType(v12, 15);
        else
          v17 = v16(v12, 15);
        if ( v17 )
        {
          v49 = this[11];
          v50 = (__int64)v49 + 365;
          if ( !v49 )
            v50 = 381LL;
          v14 |= 4u;
          if ( *(_BYTE *)v50 != 2 )
            v14 = v15;
        }
        else
        {
          v55 = 0LL;
          v18 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct CPrimitiveGroupDrawListGenerator **))v10)(
                  v10,
                  &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
                  &v55);
          v19 = v55;
          if ( v18 >= 0 )
          {
            v51 = (*(__int64 (__fastcall **)(struct CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v55 + 96LL))(v55);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v55);
            v14 |= 0x10u;
            if ( v51 )
              v14 |= 0x100u;
          }
          else if ( v55 )
          {
            v55 = 0LL;
            (*(void (__fastcall **)(struct CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
        v20 = *((_DWORD *)this + 21);
        v54 = 0LL;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 || v21 != 2 )
            v13 = 1;
        }
        else
        {
          v13 = 0;
        }
        LOBYTE(v52) = v13;
        HIBYTE(v52) = 1;
        v53 = 1;
        v56 = &v54;
        v57 = 0LL;
        v58 = 1;
        v4 = CSurfaceDrawListBrush::CreateWithContentRect(&v59, &v52, &v65, &v57);
        if ( v58 )
        {
          v22 = *v56;
          *v56 = v57;
          if ( v22 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1);
        }
        if ( v4 >= 0 )
        {
          v23 = v54;
          v24 = 0LL;
          *(_OWORD *)((char *)v54 + 8) = v63;
          *((_QWORD *)v23 + 3) = v64;
          v25 = (CSurfaceDrawListBrush **)((char *)a2 + 40);
          v26 = v54;
          v54 = 0LL;
          v27 = v26;
          if ( (char *)a2 + 40 != &v61 )
          {
            v28 = *v25;
            v27 = 0LL;
            *v25 = v26;
            v26 = 0LL;
            if ( v28 )
            {
              std::default_delete<CDrawListBrush>::operator()(0LL, v28);
              v24 = v54;
              v26 = 0LL;
            }
          }
          v29 = 1;
          if ( *((_DWORD *)a2 + 18) > 1u )
            v29 = *((_DWORD *)a2 + 18);
          *((_DWORD *)a2 + 18) = v29;
          if ( v26 )
          {
            std::default_delete<CDrawListBrush>::operator()((__int64)v24, v27);
            v24 = v54;
          }
          *((_DWORD *)a2 + 4) = v14;
          if ( v24 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v24, 1);
          v10 = v59;
          goto LABEL_30;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x267u);
        if ( v54 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v54, 1);
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v59 + 1);
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v59);
LABEL_34:
      if ( v4 < 0 )
        CBrushDrawListGenerator::Reset(a2);
      return (unsigned int)v4;
    }
    v31 = (__int64)this[11];
    v32 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v31 + 48LL);
    if ( v32 == CPrimitiveGroup::IsOfType )
      v33 = CPrimitiveGroup::IsOfType(v31, 106);
    else
      v33 = v32(v31, 106);
    if ( !v33 )
      goto LABEL_34;
    DrawListGeneratorNoRef = CPrimitiveGroup::GetDrawListGeneratorNoRef(this[11], *(struct CDrawingContext **)a2, &v55);
    v4 = DrawListGeneratorNoRef;
    if ( DrawListGeneratorNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListGeneratorNoRef, 0x275u);
      goto LABEL_34;
    }
    v37 = *((unsigned int *)this + 21);
    v54 = 0LL;
    LOBYTE(v52) = InterpolationMode::FromD2D1InterpolationMode(v37, v35, v36);
    HIBYTE(v52) = 1;
    v56 = &v54;
    v53 = 1;
    v57 = 0LL;
    v58 = 1;
    v4 = CPrimitiveGroupDrawListBrush::Create(v55, &v52, &v57);
    if ( v58 )
    {
      v38 = *v56;
      *v56 = v57;
      if ( v38 )
        CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v38, 1);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x27Bu);
    }
    else
    {
      v39 = v54;
      v40 = 0LL;
      *(_OWORD *)((char *)v54 + 8) = v63;
      *((_QWORD *)v39 + 3) = v64;
      v41 = v54;
      *((_BYTE *)v54 + 52) = 1;
      v42 = v65;
      *((_DWORD *)v41 + 12) = 50529027;
      *((_OWORD *)v41 + 2) = v42;
      v43 = v54;
      v44 = (CSurfaceDrawListBrush **)((char *)a2 + 40);
      v54 = 0LL;
      v45 = v43;
      if ( (char *)a2 + 40 != &v62 )
      {
        v46 = *v44;
        v45 = 0LL;
        *v44 = v43;
        v43 = 0LL;
        if ( v46 )
        {
          std::default_delete<CDrawListBrush>::operator()(0LL, v46);
          v40 = v54;
          v43 = 0LL;
        }
      }
      v47 = 1;
      if ( *((_DWORD *)a2 + 18) > 1u )
        v47 = *((_DWORD *)a2 + 18);
      *((_DWORD *)a2 + 18) = v47;
      if ( !v43 )
        goto LABEL_51;
      std::default_delete<CDrawListBrush>::operator()((__int64)v40, v45);
    }
    v40 = v54;
LABEL_51:
    if ( v40 )
      CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v40, 1);
    goto LABEL_34;
  }
  return (unsigned int)v4;
}
