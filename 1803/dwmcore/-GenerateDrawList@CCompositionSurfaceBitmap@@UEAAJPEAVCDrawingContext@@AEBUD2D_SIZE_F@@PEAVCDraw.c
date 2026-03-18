/*
 * XREFs of ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180007680
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x18000611C (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800070B4 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180007B74 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800C1D78 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v8; // al
  __int64 v9; // r8
  int v10; // ecx
  char v11; // r15
  __int64 v12; // rdx
  float width; // xmm0_4
  int v14; // eax
  int v15; // ebx
  struct CGeometryOnlyDrawListBrush *v16; // rbx
  int v17; // edi
  int v18; // edi
  CSurfaceDrawListBrush *v19; // rcx
  CSurfaceDrawListBrush *v20; // rax
  unsigned __int64 v21; // xmm1_8
  __int64 v22; // rcx
  int DrawList; // eax
  int v24; // eax
  CGeometryOnlyDrawListBrush *v26; // rcx
  FLOAT v27; // xmm0_4
  FLOAT height; // xmm1_4
  CGeometryOnlyDrawListBrush *v29; // rax
  struct D2D_RECT_F v30; // xmm0
  CGeometryOnlyDrawListBrush *v31; // rcx
  bool v32; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-C0h] BYREF
  CGeometryOnlyDrawListBrush *v34; // [rsp+50h] [rbp-B0h] BYREF
  struct CGeometryOnlyDrawListBrush *v35[2]; // [rsp+58h] [rbp-A8h] BYREF
  char v36; // [rsp+68h] [rbp-98h]
  struct D2D_RECT_F v37; // [rsp+70h] [rbp-90h] BYREF
  CSurfaceDrawListBrush *v38; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v39[6]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v40; // [rsp+C0h] [rbp-40h]
  unsigned int v41; // [rsp+C4h] [rbp-3Ch]
  int v42; // [rsp+D0h] [rbp-30h]
  __int128 v43; // [rsp+E0h] [rbp-20h] BYREF
  char v44; // [rsp+F0h] [rbp-10h]
  struct D2D_RECT_F v45; // [rsp+F8h] [rbp-8h] BYREF
  struct CDrawingContext *v46; // [rsp+110h] [rbp+10h] BYREF
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  int v49; // [rsp+120h] [rbp+20h]
  __int128 v50; // [rsp+124h] [rbp+24h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  __int64 v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  __int64 v54; // [rsp+150h] [rbp+50h]
  int v55; // [rsp+158h] [rbp+58h]
  __int16 v56; // [rsp+15Ch] [rbp+5Ch]
  char v57; // [rsp+15Eh] [rbp+5Eh]
  _BYTE v58[2480]; // [rsp+160h] [rbp+60h] BYREF

  v42 = 0;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform((__int64)this, (__int64)a3, (__int64)v39, (__int64)&v45);
  v10 = *((_DWORD *)a2 + 63);
  v11 = v8;
  v12 = 0LL;
  if ( v10 == 1 )
  {
    v12 = 1LL;
    goto LABEL_3;
  }
  if ( v10 <= 1 )
    goto LABEL_3;
  if ( v10 <= 3 )
  {
    v12 = 2LL;
  }
  else
  {
    if ( v10 == 4 )
    {
LABEL_32:
      v12 = 3LL;
      goto LABEL_3;
    }
    if ( v10 != 5 )
    {
      if ( v10 != 6 )
        goto LABEL_3;
      goto LABEL_32;
    }
    v12 = 4LL;
  }
LABEL_3:
  v33[0] = InterpolationMode::FromD2D1InterpolationMode((unsigned int)v12, v12, v9);
  v33[1] = 1;
  if ( !IsEmpty(&v45) )
  {
    v47 = 0;
    v48 = 0;
    v50 = _xmm;
    v46 = a2;
    width = a3->width;
    v49 = 0;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0;
    v56 = 256;
    v57 = 0;
    v34 = 0LL;
    if ( width != 0.0 && a3->height != 0.0 && CCompositionSurfaceBitmap::IsSwapChain(this) )
    {
      v35[1] = 0LL;
      v35[0] = (struct CGeometryOnlyDrawListBrush *)&v34;
      v36 = 1;
      v15 = CGeometryOnlyDrawListBrush::Create(&v35[1]);
      if ( v36 )
      {
        v26 = *(CGeometryOnlyDrawListBrush **)v35[0];
        *(_QWORD *)v35[0] = v35[1];
        if ( v26 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v26, 1u);
      }
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x3B5u);
        goto LABEL_44;
      }
      v27 = a3->width;
      height = a3->height;
      v29 = v34;
      *(_QWORD *)&v37.left = 0LL;
      *(_QWORD *)&v37.right = __PAIR64__(LODWORD(height), LODWORD(v27));
      v30 = v37;
      *((_BYTE *)v34 + 52) = 1;
      *((_DWORD *)v29 + 12) = 50529027;
      *((struct D2D_RECT_F *)v29 + 2) = v30;
    }
    v36 = 0;
    *(_OWORD *)v35 = 0LL;
    v14 = CDrawListBitmap::FromImageSource(
            (CDrawListBitmap *)v35,
            (struct IImageSource *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
            a2,
            0);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = v35[0];
      if ( (*(unsigned __int8 (__fastcall **)(struct CGeometryOnlyDrawListBrush *))(*(_QWORD *)v35[0] + 32LL))(v35[0])
        && *(_BYTE *)(*((_QWORD *)this + 2) + 1344LL) )
      {
        v50 = _xmm;
        LOBYTE(v56) = 0;
        v49 = 4;
      }
      else
      {
        v17 = (*(unsigned __int8 (__fastcall **)(struct CGeometryOnlyDrawListBrush *))(*(_QWORD *)v16 + 32LL))(v16) != 0
            ? 2
            : 0;
        if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)v35, &v32) )
        {
          v17 |= 0x10u;
          if ( v32 )
            v17 |= 0x100u;
        }
        v38 = 0LL;
        *(_QWORD *)&v43 = &v38;
        v33[2] = 1;
        *((_QWORD *)&v43 + 1) = 0LL;
        v37 = v45;
        v18 = v17 | 0x200;
        v44 = 1;
        v15 = CSurfaceDrawListBrush::CreateWithContentRect(v35, v33, &v37, (char *)&v43 + 8);
        if ( v44 )
        {
          v19 = *(CSurfaceDrawListBrush **)v43;
          *(_QWORD *)v43 = *((_QWORD *)&v43 + 1);
          if ( v19 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1u);
        }
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x3DDu);
          if ( v38 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v38, 1u);
          goto LABEL_54;
        }
        if ( v11 )
        {
          v20 = v38;
          *(_QWORD *)&v43 = v39[0];
          *((_QWORD *)&v43 + 1) = v39[2];
          v21 = _mm_unpacklo_ps((__m128)v40, (__m128)v41).m128_u64[0];
          *(_OWORD *)((char *)v38 + 8) = v43;
          *((_QWORD *)v20 + 3) = v21;
        }
        *(_QWORD *)&v37.left = v38;
        v38 = 0LL;
        CBrushDrawListGenerator::AttachInput(&v46, 0LL, &v37);
        if ( *(_QWORD *)&v37.left )
          std::default_delete<CDrawListBrush>::operator()(v22, *(_QWORD *)&v37.left);
        v49 = v18;
        if ( v38 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v38, 1u);
      }
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v58);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)&v46,
                   (struct CDrawListEntryBuilder *)v58,
                   v34,
                   0LL);
      v15 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x3F1u);
      }
      else
      {
        v24 = CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v58);
        v15 = v24;
        if ( v24 >= 0 )
        {
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v58);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v35[1]);
          Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v35);
          if ( v34 )
            CGeometryOnlyDrawListBrush::`vector deleting destructor'(v34, 1u);
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v46);
          return 0;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x3F2u);
      }
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v58);
LABEL_54:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v35[1]);
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v35);
      v31 = v34;
      if ( !v34 )
        goto LABEL_46;
      goto LABEL_45;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x3BAu);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v35[1]);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v35);
LABEL_44:
    v31 = v34;
    if ( !v34 )
    {
LABEL_46:
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v46);
      return (unsigned int)v15;
    }
LABEL_45:
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v31, 1u);
    goto LABEL_46;
  }
  return 0;
}
