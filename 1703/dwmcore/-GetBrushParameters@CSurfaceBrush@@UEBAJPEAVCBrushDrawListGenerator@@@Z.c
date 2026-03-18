/*
 * XREFs of ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180038860
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180039590 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ @ 0x18000C334 (-EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037CE0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800585B8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180059D68 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00 (-Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800BB1F0 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x1800C0018 (CopyIfNeeded_Matrix3x3_.c)
 *     ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0 (-GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800C2F24 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x180161B30 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetImageSourceForRender@CCachedVisualImage@@QEAAJAEBURenderTargetInfo@@PEAPEAVIImageSource@@@Z @ 0x180165654 (-GetImageSourceForRender@CCachedVisualImage@@QEAAJAEBURenderTargetInfo@@PEAPEAVIImageSource@@@Z.c)
 *     ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1801BA380 (-Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@AEBUD2D_RECT_F@@P.c)
 */

__int64 __fastcall CSurfaceBrush::GetBrushParameters(CSurfaceBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v3; // esi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BOOL8 (__fastcall *v8)(__int64, int); // rax
  bool v9; // al
  struct IImageSource *v10; // rbx
  char v11; // al
  int v12; // edi
  CSurfaceDrawListBrush **v13; // rbx
  struct CPrimitiveGroupDrawListBrush *v14; // r12
  CSurfaceDrawListBrush *v15; // rcx
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  CSurfaceDrawListBrush *v20; // r12
  CSurfaceDrawListBrush *v21; // rbx
  CSurfaceDrawListBrush **v22; // r13
  CSurfaceDrawListBrush *v23; // rcx
  int v24; // eax
  ID2DContextOwner *v26; // rcx
  __int64 v27; // rbx
  void *(__fastcall *v28)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v29)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  CPrimitiveGroup *v30; // rbx
  int v31; // eax
  struct CPrimitiveGroupDrawListGenerator *v32; // rcx
  struct CPrimitiveGroupDrawListBrush *v33; // r12
  CPrimitiveGroupDrawListBrush *v34; // rcx
  __int64 v35; // rcx
  char *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r8
  void *(__fastcall *v39)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  CSurfaceDrawListBrush **v40; // [rsp+30h] [rbp-39h] BYREF
  struct CPrimitiveGroupDrawListBrush *v41; // [rsp+38h] [rbp-31h] BYREF
  int v42; // [rsp+40h] [rbp-29h]
  int v43; // [rsp+44h] [rbp-25h]
  int v44; // [rsp+48h] [rbp-21h]
  int v45; // [rsp+4Ch] [rbp-1Dh]
  float v46; // [rsp+50h] [rbp-19h]
  struct IImageSource *v47; // [rsp+58h] [rbp-11h] BYREF
  CSurfaceDrawListBrush **v48; // [rsp+60h] [rbp-9h] BYREF
  int v49; // [rsp+68h] [rbp-1h]
  int v50; // [rsp+6Ch] [rbp+3h]
  int v51; // [rsp+70h] [rbp+7h]
  int v52; // [rsp+74h] [rbp+Bh]
  struct D2D_RECT_F v53; // [rsp+78h] [rbp+Fh] BYREF
  CSurfaceDrawListBrush *v54; // [rsp+D0h] [rbp+67h] BYREF
  CPrimitiveGroupDrawListBrush *v55; // [rsp+E0h] [rbp+77h] BYREF
  CSurfaceDrawListBrush *v56; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0;
  CBrushDrawListGenerator::Reset(a2);
  if ( *((_QWORD *)this + 12) )
  {
    v5 = CSurfaceBrush::ComputeLayout(
           this,
           (const struct D2D_SIZE_F *)a2 + 1,
           0LL,
           (struct CSurfaceBrush::LayoutData *)&v48,
           0LL);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1C7u);
    }
    else
    {
      v6 = *((_QWORD *)this + 12);
      if ( *((_QWORD *)this + 13) )
      {
        v7 = *(_QWORD *)v6;
        v47 = 0LL;
        v8 = *(_BOOL8 (__fastcall **)(__int64, int))(v7 + 48);
        if ( v8 == CCompositionSurfaceBitmap::IsOfType )
          v9 = CCompositionSurfaceBitmap::IsOfType(v6, 61);
        else
          v9 = v8(v6, 61);
        if ( v9 )
        {
          v26 = (ID2DContextOwner *)(*(_QWORD *)a2 + 8LL);
          LODWORD(v41) = 0;
          ID2DContextOwner::GetCurrentRenderTargetInfo(v26, (struct RenderTargetInfo *)&v40);
          v27 = *((_QWORD *)this + 12);
          Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v47);
          CCachedVisualImage::GetImageSourceForRender(
            (CCachedVisualImage *)((v27 - 16) & -(__int64)(v27 != 0)),
            (const struct RenderTargetInfo *)&v40,
            &v47);
        }
        else
        {
          Microsoft::WRL::ComPtr<IImageSource>::operator=(&v47, (char *)this + 104);
        }
        v10 = v47;
        if ( (*(unsigned __int8 (__fastcall **)(struct IImageSource *))(*(_QWORD *)v47 + 32LL))(v47)
          && *(_BYTE *)(*((_QWORD *)this + 2) + 1360LL) )
        {
          *(_OWORD *)((char *)a2 + 56) = _xmm;
          *((_BYTE *)a2 + 108) = 0;
          *((_DWORD *)a2 + 10) = 4;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(struct IImageSource *))(*(_QWORD *)v10 + 32LL))(v10);
          v54 = 0LL;
          v12 = 0;
          if ( v11 )
            v12 = 2;
          LODWORD(v55) = v12;
          Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v54);
          if ( (**(int (__fastcall ***)(struct IImageSource *, GUID *, CSurfaceDrawListBrush **))v10)(
                 v10,
                 &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
                 &v54) >= 0 )
            LODWORD(v55) = v12 | 0x10;
          Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v54);
          v56 = 0LL;
          v40 = &v56;
          v41 = 0LL;
          LOBYTE(v42) = 1;
          v3 = CSurfaceDrawListBrush::Create(v10, &v53, &v41);
          if ( (_BYTE)v42 )
          {
            v13 = v40;
            v14 = v41;
            v15 = *v40;
            if ( v41 != *v40 )
            {
              if ( v15 )
                CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1u);
              *v13 = v14;
            }
          }
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1FBu);
          }
          else
          {
            v16 = *((unsigned int *)this + 23);
            LODWORD(v41) = 0;
            v43 = 0;
            HIDWORD(v41) = v49;
            v40 = v48;
            v44 = v51;
            v42 = v50;
            v46 = FLOAT_1_0;
            v45 = v52;
            LOBYTE(v54) = InterpolationMode::FromD2D1InterpolationMode(v16);
            BYTE1(v54) = 1;
            v17 = (char *)v56 + 28;
            *((_DWORD *)v56 + 6) = 0;
            CopyIfNeeded_Matrix3x3_(v17);
            v19 = v18 + 64;
            if ( (CSurfaceDrawListBrush **)v19 != &v54 )
            {
              *(_WORD *)v19 = (_WORD)v54;
              *(_BYTE *)(v19 + 2) = 1;
            }
            *((_BYTE *)v56 + 152) = 1;
            v20 = v56;
            v56 = 0LL;
            v21 = v20;
            v22 = (CSurfaceDrawListBrush **)((char *)a2 + 72);
            if ( (CSurfaceDrawListBrush **)((char *)a2 + 72) != &v54 )
            {
              v23 = *v22;
              v21 = 0LL;
              if ( v20 != *v22 )
              {
                if ( v23 )
                {
                  v28 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v23;
                  if ( v28 == CSurfaceDrawListBrush::`vector deleting destructor' )
                    CSurfaceDrawListBrush::`vector deleting destructor'(v23, 1u);
                  else
                    v28(v23, 1u);
                }
                *v22 = v20;
              }
            }
            v24 = 1;
            if ( *((_DWORD *)a2 + 26) > 1u )
              v24 = *((_DWORD *)a2 + 26);
            *((_DWORD *)a2 + 26) = v24;
            if ( v21 )
            {
              v29 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v21;
              if ( v29 == CSurfaceDrawListBrush::`vector deleting destructor' )
                CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1u);
              else
                v29(v21, 1u);
            }
            *((_DWORD *)a2 + 10) = (_DWORD)v55;
          }
          if ( v56 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v56, 1u);
        }
        Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v47);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 102LL) )
      {
        v30 = (CPrimitiveGroup *)*((_QWORD *)this + 12);
        v31 = CPrimitiveGroup::EnsureDrawListGenerator(v30);
        v3 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x20Au);
        }
        else
        {
          v55 = 0LL;
          v32 = (struct CPrimitiveGroupDrawListGenerator *)*((_QWORD *)v30 + 20);
          v40 = &v55;
          LOBYTE(v42) = 1;
          v41 = 0LL;
          v3 = CPrimitiveGroupDrawListBrush::Create(v32, &v53, &v41);
          if ( (_BYTE)v42 )
          {
            v33 = v41;
            v34 = *v40;
            if ( v41 != *v40 )
            {
              if ( v34 )
                CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v34, 1u);
              *v40 = v33;
            }
          }
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x210u);
          }
          else
          {
            v35 = *((unsigned int *)this + 23);
            LODWORD(v41) = 0;
            v43 = 0;
            HIDWORD(v41) = v49;
            v40 = v48;
            v44 = v51;
            v42 = v50;
            v46 = FLOAT_1_0;
            v45 = v52;
            LOBYTE(v54) = InterpolationMode::FromD2D1InterpolationMode(v35);
            BYTE1(v54) = 1;
            v36 = (char *)v55 + 28;
            *((_DWORD *)v55 + 6) = 0;
            CopyIfNeeded_Matrix3x3_(v36);
            v38 = v37 + 64;
            if ( (CSurfaceDrawListBrush **)v38 != &v54 )
            {
              *(_WORD *)v38 = (_WORD)v54;
              *(_BYTE *)(v38 + 2) = 1;
            }
            v54 = v55;
            v55 = 0LL;
            CBrushDrawListGenerator::AttachInput(a2, 0LL, &v54);
            if ( v54 )
            {
              v39 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v54;
              if ( v39 == CSurfaceDrawListBrush::`vector deleting destructor' )
                CSurfaceDrawListBrush::`vector deleting destructor'(v54, 1u);
              else
                v39(v54, 1u);
            }
          }
          if ( v55 )
            CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v55, 1u);
        }
      }
    }
    if ( v3 < 0 )
      CBrushDrawListGenerator::Reset(a2);
  }
  return (unsigned int)v3;
}
