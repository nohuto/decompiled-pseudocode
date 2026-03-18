/*
 * XREFs of ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584
 * Callers:
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180185FF0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18006E250 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A3B38 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800AF094 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800AF2E8 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1800D5FCC (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x18013E2A8 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x18013F804 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x180183534 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180183778 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x18018591C (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180185A70 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ??0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView@@@Z @ 0x1802171B0 (--0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::BuildDrawList(
        CCompositionSkyBoxBrush *this,
        struct CBrushDrawListGenerator *a2,
        __int64 **a3)
{
  _DWORD *v3; // r14
  struct CRenderingEffect *v5; // rbx
  CCompositionCubeMap *v8; // rcx
  int v9; // eax
  int v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  LPVOID v13; // rax
  volatile signed __int32 *v14; // rax
  struct CMILMatrix *v15; // rdx
  int CpuClip; // eax
  bool v17; // zf
  CCompositionSkyBoxBrush *v18; // rcx
  int DummyRect; // eax
  int v20; // eax
  __int64 v21; // rcx
  struct CDrawListPrimitive *v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rcx
  __int128 v26; // [rsp+30h] [rbp-99h] BYREF
  char v27; // [rsp+40h] [rbp-89h]
  struct CDrawListPrimitive **v28; // [rsp+48h] [rbp-81h] BYREF
  struct CDrawListPrimitive *v29; // [rsp+50h] [rbp-79h] BYREF
  __int128 *v30; // [rsp+58h] [rbp-71h]
  char v31; // [rsp+64h] [rbp-65h]
  struct CRenderingEffect *v32; // [rsp+68h] [rbp-61h] BYREF
  __int128 v33; // [rsp+70h] [rbp-59h] BYREF
  CRectanglesShape *v34; // [rsp+80h] [rbp-49h] BYREF
  char v35; // [rsp+88h] [rbp-41h]
  char v36; // [rsp+90h] [rbp-39h]
  _BYTE v37[64]; // [rsp+A0h] [rbp-29h] BYREF
  int v38; // [rsp+E0h] [rbp+17h]
  __int64 (__fastcall ***v39)(_QWORD, __int64); // [rsp+130h] [rbp+67h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, __int64); // [rsp+138h] [rbp+6Fh] BYREF
  struct ID3D11ShaderResourceView *v41; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = *(_DWORD **)a2;
  v41 = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  CBrushDrawListGenerator::Reset(a2);
  *((_BYTE *)a2 + 76) = 0;
  *(_OWORD *)((char *)a2 + 20) = 0LL;
  v8 = (CCompositionCubeMap *)*((_QWORD *)this + 9);
  if ( !v8 )
  {
LABEL_22:
    v10 = 0;
    goto LABEL_23;
  }
  v27 = 0;
  v26 = 0LL;
  v9 = CCompositionCubeMap::GetOrCreateD3DCubeMap(
         v8,
         (struct ID2DContextOwner *)((unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL)),
         &v41);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xEDu);
    goto LABEL_36;
  }
  CCompositionCubeMap::FlushToD3DCubeMap(
    *((CCompositionCubeMap **)this + 9),
    (struct ID2DContextOwner *)((unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL)));
  v11 = *(_QWORD *)(32LL * *(unsigned int *)(*((_QWORD *)this + 9) + 112LL)
                  + *(_QWORD *)(*((_QWORD *)this + 9) + 80LL)
                  + 8);
  v12 = CDrawListBitmap::FromImageSource(
          (struct IImageSource **)&v26,
          (struct IImageSource *)((v11 + 64) & -(__int64)(v11 != 0)),
          (const struct CDrawingContext *)v3,
          0);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xF1u);
    goto LABEL_36;
  }
  if ( !(_QWORD)v26 )
  {
LABEL_36:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26 + 1);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v26);
LABEL_23:
    if ( v10 >= 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  LOWORD(v39) = 513;
  v13 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  if ( v13 )
  {
    BYTE2(v39) = 2;
    v14 = (volatile signed __int32 *)CCubeMapRenderingEffect::CCubeMapRenderingEffect(v13, &v26, &v39, v41);
  }
  else
  {
    v14 = 0LL;
  }
  Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v32, v14);
  v5 = v32;
  if ( v32 )
  {
    v34 = 0LL;
    v35 = 0;
    v36 = 0;
    v33 = 0LL;
    CpuClip = CDrawingContext::GetCpuClip((const struct CVisualTree **)v3, v15, (CRectanglesShape **)&v33);
    v10 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CpuClip, 0x104u);
    }
    else
    {
      v38 = 0;
      CMatrixStack::Top((CMatrixStack *)(v3 + 120), (struct CMILMatrix *)v37);
      memset_0(&v28, 0, 0x20uLL);
      v17 = v3[64] == 0;
      LODWORD(v28) = 2;
      v31 = 1;
      HIDWORD(v29) = !v17;
      v30 = &v33;
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v37, (float *)&v28 + 1, (float *)&v29);
      CDrawListEntryBuilder::Begin(
        (CDrawListEntryBuilder *)a3,
        (const struct DrawListEntryBuilderSetupParams *)&v28,
        v5);
      DummyRect = CCompositionSkyBoxBrush::CreateDummyRect(v18, (struct CDrawListEntryBuilder *)a3);
      v10 = DummyRect;
      if ( DummyRect < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DummyRect, 0x111u);
      }
      else
      {
        v20 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)a3);
        v10 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x112u);
        }
        else
        {
          v40 = 0LL;
          v28 = (struct CDrawListPrimitive **)&v40;
          v29 = 0LL;
          LOBYTE(v30) = 1;
          v10 = CCompositionSkyBoxBrush::CreateSkyBoxPrimitive(this, a2, &v29);
          if ( (_BYTE)v30 )
          {
            v21 = (__int64)v28;
            v22 = *v28;
            *v28 = v29;
            if ( v22 )
              std::default_delete<CDrawListPrimitive>::operator()(v21, (__int64 (__fastcall ***)(_QWORD, __int64))v22);
          }
          if ( v10 >= 0 )
          {
            CHWDrawListEntry::ReplacePrimitive(*a3[5], &v39, (__int64)&v40, (__int64)&CMILMatrix::Identity);
            if ( v39 )
              std::default_delete<CDrawListPrimitive>::operator()(v23, v39);
            if ( v40 )
              std::default_delete<CDrawListPrimitive>::operator()(v23, v40);
            CShapePtr::Release(&v34);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26 + 1);
            Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v26);
            goto LABEL_22;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x117u);
          if ( v40 )
            std::default_delete<CDrawListPrimitive>::operator()(v25, v40);
        }
      }
    }
    CShapePtr::Release(&v34);
    goto LABEL_36;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x101u);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26 + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v26);
LABEL_24:
  CBrushDrawListGenerator::Reset(a2);
LABEL_25:
  if ( v5 )
    CMILRefCountBase::Release(v5);
  return (unsigned int)v10;
}
