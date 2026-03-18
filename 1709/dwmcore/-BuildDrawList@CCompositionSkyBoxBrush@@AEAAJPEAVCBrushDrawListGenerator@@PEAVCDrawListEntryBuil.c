/*
 * XREFs of ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18015C540
 * Callers:
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18015CFF0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x180040540 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005915C (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180062EB0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800630C8 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1800C01B8 (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x18011B794 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18015A2A0 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015A4CC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x18015C918 (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18015CA6C (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ??0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView@@@Z @ 0x1801D4A74 (--0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::BuildDrawList(
        CCompositionSkyBoxBrush *this,
        struct CBrushDrawListGenerator *a2,
        __int64 **a3)
{
  _DWORD *v3; // r14
  struct CRenderingEffect *v5; // rbx
  CCompositionCubeMap *v8; // rcx
  signed int v9; // eax
  signed int v10; // edi
  __int64 v11; // rdx
  signed int v12; // eax
  LPVOID v13; // rax
  volatile signed __int32 *v14; // rax
  struct CMILMatrix *v15; // rdx
  signed int CpuClip; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  CCompositionSkyBoxBrush *v20; // rcx
  signed int DummyRect; // eax
  signed int v22; // eax
  struct CDrawListPrimitive **v23; // r14
  struct CDrawListPrimitive *v24; // r15
  struct CDrawListPrimitive *v25; // rcx
  __int128 v27; // [rsp+30h] [rbp-99h] BYREF
  char v28; // [rsp+40h] [rbp-89h]
  struct CDrawListPrimitive **v29; // [rsp+48h] [rbp-81h] BYREF
  struct CDrawListPrimitive *v30; // [rsp+50h] [rbp-79h] BYREF
  __int128 *v31; // [rsp+58h] [rbp-71h]
  char v32; // [rsp+64h] [rbp-65h]
  struct CRenderingEffect *v33; // [rsp+68h] [rbp-61h] BYREF
  __int128 v34; // [rsp+70h] [rbp-59h] BYREF
  CRegionShape *v35; // [rsp+80h] [rbp-49h] BYREF
  char v36; // [rsp+88h] [rbp-41h]
  char v37; // [rsp+90h] [rbp-39h]
  _BYTE v38[64]; // [rsp+A0h] [rbp-29h] BYREF
  int v39; // [rsp+E0h] [rbp+17h]
  void (__fastcall ***v40)(_QWORD, __int64); // [rsp+130h] [rbp+67h] BYREF
  void (__fastcall ***v41)(_QWORD, __int64); // [rsp+138h] [rbp+6Fh] BYREF
  struct ID3D11ShaderResourceView *v42; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = *(_DWORD **)a2;
  v42 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  CBrushDrawListGenerator::Reset(a2);
  *((_BYTE *)a2 + 109) = 0;
  *(_OWORD *)((char *)a2 + 56) = 0LL;
  v8 = (CCompositionCubeMap *)*((_QWORD *)this + 10);
  if ( !v8 )
  {
LABEL_24:
    v10 = 0;
    goto LABEL_25;
  }
  v28 = 0;
  v27 = 0LL;
  v9 = CCompositionCubeMap::GetOrCreateD3DCubeMap(
         v8,
         (struct ID2DContextOwner *)((unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL)),
         &v42);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x12Fu);
    goto LABEL_38;
  }
  CCompositionCubeMap::FlushToD3DCubeMap(
    *((CCompositionCubeMap **)this + 10),
    (struct ID2DContextOwner *)((unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL)));
  v11 = *(_QWORD *)(32LL * *(unsigned int *)(*((_QWORD *)this + 10) + 112LL)
                  + *(_QWORD *)(*((_QWORD *)this + 10) + 80LL)
                  + 8);
  v12 = CDrawListBitmap::FromImageSource(
          (CDrawListBitmap *)&v27,
          (struct IImageSource *)((v11 + 64) & -(__int64)(v11 != 0)),
          (const struct CDrawingContext *)v3,
          0,
          0);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x133u);
    goto LABEL_38;
  }
  if ( !(_QWORD)v27 )
  {
LABEL_38:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27 + 1);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
LABEL_25:
    if ( v10 >= 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  LOWORD(v40) = 513;
  v13 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  if ( v13 )
  {
    BYTE2(v40) = 2;
    v14 = (volatile signed __int32 *)CCubeMapRenderingEffect::CCubeMapRenderingEffect(v13, &v27, &v40, v42);
  }
  else
  {
    v14 = 0LL;
  }
  Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v33, v14);
  v5 = v33;
  if ( v33 )
  {
    v35 = 0LL;
    v36 = 0;
    v37 = 0;
    v34 = 0LL;
    CpuClip = CDrawingContext::GetCpuClip((const struct CVisualTree **)v3, v15, (struct CCpuClip *)&v34);
    v10 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CpuClip, 0x146u);
    }
    else
    {
      v39 = 0;
      CMatrixStack::Top((CMatrixStack *)(v3 + 120), (struct CMILMatrix *)v38, v17, v18);
      memset_0(&v29, 0, 0x20uLL);
      v19 = v3[64] == 0;
      LODWORD(v29) = 2;
      v32 = 1;
      HIDWORD(v30) = !v19;
      v31 = &v34;
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v38, (float *)&v29 + 1, (float *)&v30);
      CDrawListEntryBuilder::Begin(
        (CDrawListEntryBuilder *)a3,
        (const struct DrawListEntryBuilderSetupParams *)&v29,
        v5);
      DummyRect = CCompositionSkyBoxBrush::CreateDummyRect(v20, (struct CDrawListEntryBuilder *)a3);
      v10 = DummyRect;
      if ( DummyRect < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DummyRect, 0x153u);
      }
      else
      {
        v22 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)a3);
        v10 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x154u);
        }
        else
        {
          v41 = 0LL;
          v29 = (struct CDrawListPrimitive **)&v41;
          v30 = 0LL;
          LOBYTE(v31) = 1;
          v10 = CCompositionSkyBoxBrush::CreateSkyBoxPrimitive(this, a2, &v30);
          if ( (_BYTE)v31 )
          {
            v23 = v29;
            v24 = v30;
            v25 = *v29;
            if ( v30 != *v29 )
            {
              if ( v25 )
                (**(void (__fastcall ***)(struct CDrawListPrimitive *, __int64))v25)(v25, 1LL);
              *v23 = v24;
            }
          }
          if ( v10 >= 0 )
          {
            CHWDrawListEntry::ReplacePrimitive(*a3[5], &v40, (__int64)&v41, (__int64)&CMILMatrix::Identity);
            if ( v40 )
              (**v40)(v40, 1LL);
            if ( v41 )
              (**v41)(v41, 1LL);
            CShapePtr::Release(&v35);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27 + 1);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
            goto LABEL_24;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x159u);
          if ( v41 )
            (**v41)(v41, 1LL);
        }
      }
    }
    CShapePtr::Release(&v35);
    goto LABEL_38;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x143u);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
LABEL_26:
  CBrushDrawListGenerator::Reset(a2);
LABEL_27:
  if ( v5 )
    CMILRefCountBase::Release(v5);
  return (unsigned int)v10;
}
