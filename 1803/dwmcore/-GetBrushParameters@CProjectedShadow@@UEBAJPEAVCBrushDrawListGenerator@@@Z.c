/*
 * XREFs of ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180002D68 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000405C (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x180004E70 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180089E50 (-InternalAddRef@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800B2E7C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C469C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801A052C (-GetColor@CProjectedShadowCaster@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?CalculateCasterUVs@CProjectedShadow@@AEBA?AVMatrix3x3@@PEAVCDrawingContext@@@Z @ 0x1801B3F3C (-CalculateCasterUVs@CProjectedShadow@@AEBA-AVMatrix3x3@@PEAVCDrawingContext@@@Z.c)
 *     ?CalculateInsets@CProjectedShadow@@AEBAXPEAVCDrawingContext@@W4ShadowPath@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV4@AEAVInsets@@4@Z @ 0x1801B4160 (-CalculateInsets@CProjectedShadow@@AEBAXPEAVCDrawingContext@@W4ShadowPath@@AEBV-$TMilRect_@MUMil.c)
 *     ?GetOpacity@CProjectedShadow@@AEBAMPEAVCDrawingContext@@@Z @ 0x1801B57DC (-GetOpacity@CProjectedShadow@@AEBAMPEAVCDrawingContext@@@Z.c)
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801B5C1C (-GetShadowPath@CProjectedShadow@@AEBA-AW4ShadowPath@@PEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetBrushParameters(
        CProjectedShadowCaster **this,
        struct CBrushDrawListGenerator *a2)
{
  const struct CDrawingContext *v2; // r14
  unsigned int ShadowPath; // eax
  unsigned int v6; // r15d
  CSurfaceDrawListBrush *v7; // rbx
  int v8; // ebx
  struct IImageSource *v9; // rbx
  int v10; // eax
  int v11; // r9d
  CSurfaceDrawListBrush *v12; // rbx
  struct IImageSource *v13; // rbx
  CSurfaceDrawListBrush *v14; // rcx
  CSurfaceDrawListBrush *v15; // rax
  struct D2D_RECT_F v16; // xmm0
  CSurfaceDrawListBrush *v17; // rcx
  struct D2D_MATRIX_3X2_F *v18; // r9
  CSurfaceDrawListBrush *v19; // r11
  __int64 v20; // xmm1_8
  __int64 v21; // rcx
  CNineGridDrawListBrush *v22; // rcx
  __int64 v23; // rcx
  float Opacity; // xmm0_4
  D3DVALUE v25; // xmm1_4
  CSurfaceDrawListBrush *v26; // rbx
  struct IImageSource *v27; // rbx
  CSurfaceDrawListBrush *v28; // rcx
  __int64 v29; // rcx
  unsigned int v31; // [rsp+20h] [rbp-E0h]
  CSurfaceDrawListBrush *v32[2]; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v33[2]; // [rsp+50h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush *v34; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+68h] [rbp-98h] BYREF
  char v36; // [rsp+78h] [rbp-88h]
  __int128 v37; // [rsp+80h] [rbp-80h] BYREF
  char v38; // [rsp+90h] [rbp-70h]
  struct D2D_RECT_F v39; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h]
  struct D2D_RECT_F v41; // [rsp+C0h] [rbp-40h] BYREF
  char v42; // [rsp+D0h] [rbp-30h]
  struct _D3DCOLORVALUE v43; // [rsp+D8h] [rbp-28h] BYREF
  char v44; // [rsp+E8h] [rbp-18h]
  float v45[4]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *(const struct CDrawingContext **)a2;
  CBrushDrawListGenerator::Reset(a2);
  ShadowPath = CProjectedShadow::GetShadowPath(this, v2);
  v38 = 0;
  v6 = ShadowPath;
  v34 = 0LL;
  v37 = 0LL;
  if ( !ShadowPath )
  {
    v33[0] = *((CSurfaceDrawListBrush **)CProjectedShadow::s_pFastShadowCaster + 17);
    v7 = v33[0];
    Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(v33);
    v8 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _QWORD, _QWORD, float *))(*(_QWORD *)v7 + 120LL))(
           v7,
           0LL,
           0LL,
           v45);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v33);
    if ( v8 < 0 )
    {
      v31 = 292;
      goto LABEL_59;
    }
    v33[0] = *((CSurfaceDrawListBrush **)CProjectedShadow::s_pFastShadowCaster + 17);
    v9 = v33[0];
    Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(v33);
    v8 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v37, v9, v2, 0);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v33);
    if ( v8 < 0 )
    {
      v31 = 293;
LABEL_59:
      v11 = v8;
      goto LABEL_60;
    }
    goto LABEL_21;
  }
  if ( ShadowPath - 1 <= 1 )
  {
    v33[0] = *((CSurfaceDrawListBrush **)this[9] + 17);
    v12 = v33[0];
    Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(v33);
    v8 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _QWORD, _QWORD, float *))(*(_QWORD *)v12 + 120LL))(
           v12,
           0LL,
           0LL,
           v45);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v33);
    if ( v8 < 0 )
    {
      v31 = 299;
      goto LABEL_59;
    }
    v33[0] = *((CSurfaceDrawListBrush **)this[9] + 17);
    v13 = v33[0];
    Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(v33);
    v8 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v37, v13, v2, 0);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v33);
    if ( v8 < 0 )
    {
      v31 = 300;
      goto LABEL_59;
    }
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(CProjectedShadowCaster *, _QWORD, _QWORD, float *))(*(_QWORD *)this[12] + 120LL))(
            this[12],
            0LL,
            0LL,
            v45);
    v8 = v10;
    if ( v10 < 0 )
    {
      v31 = 305;
      goto LABEL_10;
    }
    v10 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v37, this[12], v2, 0);
    v8 = v10;
    if ( v10 < 0 )
    {
      v31 = 306;
LABEL_10:
      v11 = v10;
LABEL_60:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v31);
      goto LABEL_61;
    }
  }
  if ( v6 == 2 )
  {
    CProjectedShadow::CalculateCasterUVs((__int64)this, &v39, (__int64)v2);
    LOWORD(v32[0]) = SamplerMode::k_ClampClampLinear;
    BYTE2(v32[0]) = 1;
    *(_QWORD *)&v43.b = 0LL;
    *(_QWORD *)&v43.r = &v34;
    v44 = 1;
    v8 = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64)&v37, (__int16 *)v32, &v39, &v43.b);
    if ( v44 )
    {
      v14 = **(CSurfaceDrawListBrush ***)&v43.r;
      **(_QWORD **)&v43.r = *(_QWORD *)&v43.b;
      if ( v14 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1);
    }
    if ( v8 < 0 )
    {
      v31 = 322;
      goto LABEL_59;
    }
    *((_BYTE *)a2 + 78) = 1;
    CVisual::GetEffectiveSize(*((CVisual **)this[10] + 7), (float *)v32, (float *)v33);
    v15 = v34;
    v41.left = 0.0;
    v41.top = 0.0;
    v41.right = *(FLOAT *)v32;
    v41.bottom = *(FLOAT *)v33;
    v16 = v41;
    *((_BYTE *)v34 + 52) = 1;
    *((_DWORD *)v15 + 12) = 50529027;
    *((struct D2D_RECT_F *)v15 + 2) = v16;
    goto LABEL_28;
  }
LABEL_21:
  v41.left = 0.0;
  v41.top = 0.0;
  LOWORD(v32[0]) = SamplerMode::k_ClampClampLinear;
  v41.right = v45[2] - v45[0];
  v41.bottom = v45[3] - v45[1];
  BYTE2(v32[0]) = 1;
  *(_QWORD *)&v35 = &v34;
  *(struct _D3DCOLORVALUE *)&v43.r = (struct _D3DCOLORVALUE)v41;
  *((_QWORD *)&v35 + 1) = 0LL;
  v36 = 1;
  v8 = CSurfaceDrawListBrush::CreateWithContentRect(
         (__int64 *)&v37,
         (__int16 *)v32,
         (__int128 *)&v43,
         (_QWORD *)&v35 + 1);
  if ( v36 )
  {
    v17 = *(CSurfaceDrawListBrush **)v35;
    *(_QWORD *)v35 = *((_QWORD *)&v35 + 1);
    if ( v17 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v17, 1);
  }
  if ( v8 < 0 )
  {
    v31 = 339;
    goto LABEL_59;
  }
  if ( v6 > 1 )
    goto LABEL_28;
  *(_QWORD *)&v43.r = 0LL;
  *(_QWORD *)&v43.b = 0LL;
  v35 = 0uLL;
  CProjectedShadow::CalculateInsets(this, (__int64)v2, v6, v45, &v41.left, &v43.r, (float *)&v35);
  *(struct D2D_RECT_F *)v33 = v41;
  D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)v34 + 5, &v41, &v39, v18);
  v19 = v34;
  v20 = v40;
  *(struct D2D_RECT_F *)((char *)v34 + 8) = v39;
  *((_QWORD *)v19 + 3) = v20;
  if ( Insets::IsEmpty((const struct Insets *)&v43) && Insets::IsEmpty((const struct Insets *)&v35) )
  {
LABEL_28:
    v33[0] = v34;
    v34 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)a2, 0, v33);
    if ( v33[0] )
      std::default_delete<CDrawListBrush>::operator()(v21, v33[0]);
LABEL_40:
    CProjectedShadowCaster::GetColor(this[9], &v43);
    Opacity = CProjectedShadow::GetOpacity((CProjectedShadow *)this, v2);
    v25 = v43.a * Opacity;
    *((_BYTE *)a2 + 76) = 0;
    v42 = 0;
    v43.a = v25;
    v41 = 0LL;
    *(struct _D3DCOLORVALUE *)((char *)a2 + 20) = *(struct _D3DCOLORVALUE *)&v43.r;
    v32[0] = *((CSurfaceDrawListBrush **)this[10] + 13);
    v26 = v32[0];
    Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(v32);
    v8 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _QWORD, _QWORD, struct _D3DCOLORVALUE *))(*(_QWORD *)v26 + 120LL))(
           v26,
           0LL,
           0LL,
           &v43);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v32);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x197u);
    }
    else
    {
      v32[0] = *((CSurfaceDrawListBrush **)this[10] + 13);
      v27 = v32[0];
      Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(v32);
      v8 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v41, v27, v2, 0);
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v32);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x198u);
      }
      else
      {
        *(_QWORD *)&v35 = 0LL;
        LOWORD(v32[0]) = SamplerMode::k_ClampClampLinear;
        *((float *)&v35 + 2) = v43.b - v43.r;
        BYTE2(v32[0]) = 1;
        *((float *)&v35 + 3) = v43.a - v43.g;
        v33[0] = 0LL;
        *(_QWORD *)&v39.left = v33;
        *(_QWORD *)&v39.right = 0LL;
        LOBYTE(v40) = 1;
        v8 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)&v41, (__int16 *)v32, &v35, &v39.right);
        if ( (_BYTE)v40 )
        {
          v28 = **(CSurfaceDrawListBrush ***)&v39.left;
          **(_QWORD **)&v39.left = *(_QWORD *)&v39.right;
          if ( v28 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1);
        }
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x19Fu);
        }
        else
        {
          v32[0] = v33[0];
          v33[0] = 0LL;
          CBrushDrawListGenerator::AttachInput((__int64)a2, 1u, v32);
          if ( v32[0] )
            std::default_delete<CDrawListBrush>::operator()(v29, v32[0]);
        }
        if ( v33[0] )
          CSurfaceDrawListBrush::`vector deleting destructor'(v33[0], 1);
      }
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v41.right);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v41);
    goto LABEL_61;
  }
  v32[0] = v34;
  v33[0] = 0LL;
  *(_QWORD *)&v41.left = v33;
  v34 = 0LL;
  *(_QWORD *)&v41.right = 0LL;
  v42 = 1;
  v8 = CNineGridDrawListBrush::Create(
         (struct CNineGridDrawListBrush *)v32,
         (int)&v43,
         (int)&v35,
         0,
         (CNineGridDrawListBrush **)&v41.right);
  if ( v42 )
  {
    v22 = **(CNineGridDrawListBrush ***)&v41.left;
    **(_QWORD **)&v41.left = *(_QWORD *)&v41.right;
    if ( v22 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v22, 1);
  }
  if ( v32[0] )
    std::default_delete<CDrawListBrush>::operator()((__int64)v22, v32[0]);
  if ( v8 >= 0 )
  {
    v32[0] = v33[0];
    v33[0] = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)a2, 0, v32);
    if ( v32[0] )
      std::default_delete<CDrawListBrush>::operator()(v23, v32[0]);
    if ( v33[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v33[0], 1);
    goto LABEL_40;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x17Du);
  if ( v33[0] )
    CNineGridDrawListBrush::`scalar deleting destructor'(v33[0], 1);
LABEL_61:
  if ( v8 < 0 )
    CBrushDrawListGenerator::Reset(a2);
  if ( v34 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v37 + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v37);
  return (unsigned int)v8;
}
