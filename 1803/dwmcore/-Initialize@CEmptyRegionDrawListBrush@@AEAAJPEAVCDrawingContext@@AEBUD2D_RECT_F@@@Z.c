/*
 * XREFs of ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18021815C
 * Callers:
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x180217F04 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180094DF4 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800B2E7C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18017B704 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017C73C (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180207E5C (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Initialize(
        CEmptyRegionDrawListBrush *this,
        struct CDrawingContext *a2,
        struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  const struct FastRegion::Internal::CRgnData **v4; // rsi
  unsigned int v8; // edi
  __int64 v9; // xmm1_8
  struct D2D_RECT_F *v10; // r9
  __m128i *v11; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // xmm0_8
  unsigned __int64 v14; // rax
  const struct FastRegion::Internal::CRgnData *v15; // rdx
  char v16; // al
  __int64 v17; // rdx
  const struct FastRegion::Internal::CRgnData **ContentRegion; // rax
  int v19; // eax
  __m128i *v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // xmm0_8
  unsigned __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int appended; // eax
  CSurfaceDrawListBrush *v27; // rcx
  __int64 v28; // rax
  CSurfaceDrawListBrush *v29; // rdx
  __int16 v31; // [rsp+30h] [rbp-79h] BYREF
  char v32; // [rsp+32h] [rbp-77h]
  __int128 v33; // [rsp+40h] [rbp-69h] BYREF
  char v34; // [rsp+50h] [rbp-59h]
  _BYTE v35[40]; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v36; // [rsp+80h] [rbp-29h] BYREF
  _DWORD v37[3]; // [rsp+88h] [rbp-21h] BYREF
  _DWORD v38[2]; // [rsp+94h] [rbp-15h] BYREF
  _DWORD v39[3]; // [rsp+9Ch] [rbp-Dh] BYREF
  _DWORD v40[10]; // [rsp+A8h] [rbp-1h] BYREF

  v3 = *((_QWORD *)this + 7);
  v4 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 72);
  v8 = 0;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v3 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v3 + 24);
  *(_OWORD *)&v35[16] = *(_OWORD *)(v3 + 8);
  *(_QWORD *)&v35[32] = v9;
  D2D1InvertMatrix((D2D1_MATRIX_3X2_F *)&v35[16]);
  D2DMatrixHelper::TransformRectConservative(
    (D2DMatrixHelper *)a3,
    (const struct D2D_RECT_F *)&v35[16],
    (const struct D2D_MATRIX_3X2_F *)v35,
    v10);
  v11 = (__m128i *)CMilRectLFromMilRectF((int *)&v33, (__int64)v35);
  v12 = v11->m128i_i64[0];
  v13 = _mm_srli_si128(*v11, 8).m128i_u64[0];
  v14 = HIDWORD(v11->m128i_i64[0]);
  if ( (int)v12 >= (int)v13 || (int)v14 >= SHIDWORD(v13) )
  {
    *(_DWORD *)*v4 = 0;
  }
  else
  {
    v15 = *v4;
    *(_DWORD *)v15 = 2;
    *((_DWORD *)v15 + 1) = v12;
    *((_DWORD *)v15 + 2) = v13;
    *((_DWORD *)v15 + 3) = v14;
    *((_DWORD *)v15 + 4) = 16;
    *((_DWORD *)v15 + 7) = v12;
    *((_DWORD *)v15 + 8) = v13;
    *((_DWORD *)v15 + 5) = HIDWORD(v13);
    *((_DWORD *)v15 + 6) = 16;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7), 4LL);
  v17 = *((_QWORD *)this + 7);
  if ( v16 )
  {
    ContentRegion = (const struct FastRegion::Internal::CRgnData **)CPrimitiveGroupDrawListGenerator::GetContentRegion(*(CPrimitiveGroupDrawListGenerator **)(v17 + 56));
    if ( ContentRegion )
    {
      v19 = FastRegion::CRegion::Subtract(v4, ContentRegion);
      v8 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x49u);
        return v8;
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(v17 + 52) )
    {
      v37[0] = 0;
      v36 = v37;
      v20 = (__m128i *)CMilRectLFromMilRectF((int *)&v33, v17 + 32);
      v21 = v20->m128i_i64[0];
      v22 = _mm_srli_si128(*v20, 8).m128i_u64[0];
      v23 = HIDWORD(v20->m128i_i64[0]);
      if ( (int)v21 >= (int)v22 || (int)v23 >= SHIDWORD(v22) )
      {
        v37[0] = 0;
      }
      else
      {
        v38[0] = v23;
        v37[0] = 2;
        v37[1] = v21;
        v37[2] = v22;
        v38[1] = (unsigned int)v40 + 1 - 5 - (unsigned int)v38;
        v39[2] = v21;
        v40[0] = v22;
        v39[1] = (unsigned int)v40 + 1 - 5 - (unsigned int)v39 + 8;
        v39[0] = HIDWORD(v22);
      }
      v24 = FastRegion::CRegion::Subtract(v4, (const struct FastRegion::Internal::CRgnData **)&v36);
      v8 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x53u);
        FastRegion::CRegion::FreeMemory((void **)&v36);
        return v8;
      }
      FastRegion::CRegion::FreeMemory((void **)&v36);
    }
    else
    {
      *(_DWORD *)*v4 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 8LL))(
           *((_QWORD *)this + 7),
           5LL) )
    {
      v25 = *((_QWORD *)this + 7);
      if ( (-(__int64)(*(_BYTE *)(v25 + 577) != 0) & (v25 + 560)) != 0 )
      {
        *(_OWORD *)v35 = *(_OWORD *)CMilRectLFromMilRectF(
                                      (int *)&v33,
                                      (v25 + 560) & -(__int64)(*(_BYTE *)(v25 + 577) != 0));
        appended = CRegion::AppendRects<tagRECT>((FastRegion::CRegion *)v4, (__int64)v35, 1u);
        v8 = appended;
        if ( appended < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x62u);
          return v8;
        }
      }
    }
  }
  if ( *(_DWORD *)*v4 )
  {
    v34 = 0;
    v33 = 0LL;
    CDrawListBitmap::SetTransparent((struct IImageSource **)&v33, a2);
    *(_QWORD *)v35 = 0LL;
    *(_QWORD *)&v35[24] = 0LL;
    v31 = SamplerMode::k_ClampClampLinear;
    v32 = 1;
    *(_QWORD *)&v35[16] = v35;
    v35[32] = 1;
    v8 = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64)&v33, &v31, Matrix3x3::Zero, &v35[24]);
    if ( v35[32] )
    {
      v27 = **(CSurfaceDrawListBrush ***)&v35[16];
      **(_QWORD **)&v35[16] = *(_QWORD *)&v35[24];
      if ( v27 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v27, 1);
    }
    if ( (v8 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x72u);
    }
    else
    {
      v28 = *(_QWORD *)v35;
      v29 = (CSurfaceDrawListBrush *)*((_QWORD *)this + 8);
      *(_QWORD *)v35 = 0LL;
      *((_QWORD *)this + 8) = v28;
      if ( !v29 )
      {
LABEL_33:
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33 + 1);
        Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v33);
        return v8;
      }
      std::default_delete<CDrawListBrush>::operator()((__int64)v27, v29);
    }
    if ( *(_QWORD *)v35 )
      CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)v35, 1);
    goto LABEL_33;
  }
  return v8;
}
