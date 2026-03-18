/*
 * XREFs of ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180023AB0 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800287B4 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028CA0 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180029994 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180046C8C (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x180048924 (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180048A20 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800631BC (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18015DAC0 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CDrawingContext *v5; // r14
  struct CDrawListCache *v7; // r15
  char Transform; // r12
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int16 v12; // dx
  CSurfaceDrawListBrush *v13; // r8
  float width; // xmm0_4
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rdi
  int v18; // edi
  struct CSurfaceDrawListBrush *v19; // r14
  struct CSurfaceDrawListBrush *v20; // r15
  CSurfaceDrawListBrush *v21; // rcx
  char *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  CSurfaceDrawListBrush *v25; // rbx
  int v26; // eax
  int DrawList; // eax
  int v28; // eax
  unsigned int *v29; // rbx
  CSurfaceDrawListBrush *v30; // rcx
  void *(__fastcall *v32)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  bool v33; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v34; // [rsp+34h] [rbp-CCh] BYREF
  CSurfaceDrawListBrush *v35; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+40h] [rbp-C0h] BYREF
  char v37; // [rsp+50h] [rbp-B0h]
  struct CSurfaceDrawListBrush *v38[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+68h] [rbp-98h]
  float v40; // [rsp+78h] [rbp-88h]
  struct CDrawListCache *v41; // [rsp+80h] [rbp-80h]
  struct CDrawingContext *v42; // [rsp+88h] [rbp-78h]
  _QWORD v43[2]; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+A0h] [rbp-60h]
  unsigned int v45; // [rsp+A4h] [rbp-5Ch]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+D0h] [rbp-30h]
  struct D2D_RECT_F v48; // [rsp+E0h] [rbp-20h] BYREF
  struct D2D_RECT_F v49; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v50[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v51; // [rsp+110h] [rbp+10h]
  unsigned __int64 v52; // [rsp+120h] [rbp+20h]
  int v53; // [rsp+128h] [rbp+28h]
  CSurfaceDrawListBrush *v54; // [rsp+130h] [rbp+30h]
  __int128 v55; // [rsp+138h] [rbp+38h]
  CSurfaceDrawListBrush *v56; // [rsp+148h] [rbp+48h]
  CSurfaceDrawListBrush *v57; // [rsp+150h] [rbp+50h]
  CSurfaceDrawListBrush *v58; // [rsp+158h] [rbp+58h]
  CSurfaceDrawListBrush *v59; // [rsp+160h] [rbp+60h]
  unsigned int v60; // [rsp+168h] [rbp+68h] BYREF
  __int16 v61; // [rsp+16Ch] [rbp+6Ch]
  char v62; // [rsp+16Eh] [rbp+6Eh]
  _BYTE v63[40]; // [rsp+170h] [rbp+70h] BYREF
  struct CDrawListEntry **v64; // [rsp+198h] [rbp+98h]
  unsigned int v65; // [rsp+1B0h] [rbp+B0h]
  int v66; // [rsp+1D8h] [rbp+D8h]

  v47 = 0;
  v5 = a2;
  v42 = a2;
  v41 = a4;
  v7 = a4;
  Transform = CCompositionSurfaceBitmap::GetTransform((__int64)this + 56, (__int64)v43, &v48);
  if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)this, (float *)a3, &v49) )
    Transform |= CCompositionSurfaceBitmap::AppendSizePreferenceTransform((char *)this + 56, &v49, v43);
  v9 = *((_DWORD *)v5 + 63);
  v10 = 4LL;
  v11 = 0LL;
  if ( v9 == 1 )
  {
    v11 = 1LL;
  }
  else if ( v9 > 1 )
  {
    if ( v9 <= 3 )
    {
      v11 = 2LL;
      goto LABEL_5;
    }
    switch ( v9 )
    {
      case 4:
        goto LABEL_52;
      case 5:
        v11 = 4LL;
        break;
      case 6:
LABEL_52:
        v11 = 3LL;
        break;
    }
  }
LABEL_5:
  LOBYTE(v34) = InterpolationMode::FromD2D1InterpolationMode(v11);
  HIBYTE(v34) = v12;
  if ( v48.right > v48.left && v48.bottom > v48.top )
  {
    v50[1] = *a3;
    v52 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v55 = _xmm;
    v50[0] = v5;
    width = a3->width;
    v53 = (int)v13;
    v54 = v13;
    v56 = v13;
    v57 = v13;
    v58 = v13;
    v59 = v13;
    v60 = (unsigned int)v13;
    v51 = _xmm;
    v61 = v12;
    v62 = v12;
    if ( width == 0.0 || a3->height == 0.0 || !CCompositionSurfaceBitmap::IsSwapChain(this) )
      LOBYTE(v61) = (_BYTE)v13;
    v37 = (char)v13;
    v36 = 0LL;
    v15 = CDrawListBitmap::FromImageSource(
            (CDrawListBitmap *)&v36,
            (struct IImageSource *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
            v5,
            0,
            (bool)v13);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x3BEu);
    }
    else
    {
      v17 = v36;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v36 + 32LL))(v36)
        && *(_BYTE *)(*((_QWORD *)this + 2) + 1296LL) )
      {
        v55 = _xmm;
        HIBYTE(v61) = 0;
        v53 = 4;
      }
      else
      {
        v18 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17) != 0 ? 2 : 0;
        if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)&v36, &v33) )
        {
          v18 |= 0x10u;
          if ( v33 )
            v18 |= 0x80u;
        }
        v35 = 0LL;
        v38[0] = (struct CSurfaceDrawListBrush *)&v35;
        v38[1] = 0LL;
        LOBYTE(v39) = 1;
        v49 = v48;
        v16 = CSurfaceDrawListBrush::Create((const struct CDrawListBitmap *)&v36, &v49, &v38[1]);
        if ( (_BYTE)v39 )
        {
          v19 = v38[0];
          v20 = v38[1];
          v21 = *(CSurfaceDrawListBrush **)v38[0];
          if ( v38[1] != *(struct CSurfaceDrawListBrush **)v38[0] )
          {
            if ( v21 )
              CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1u);
            *(_QWORD *)v19 = v20;
          }
          v7 = v41;
          v5 = v42;
        }
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3DFu);
          if ( v35 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v35, 1u);
          goto LABEL_71;
        }
        v22 = (char *)v35 + 28;
        if ( Transform )
        {
          LODWORD(v38[1]) = 0;
          v38[0] = (struct CSurfaceDrawListBrush *)v43[0];
          HIDWORD(v38[1]) = v44;
          *(_QWORD *)&v39 = v45;
          *((_QWORD *)&v39 + 1) = v46;
        }
        else
        {
          *(_OWORD *)v38 = _xmm;
          v39 = _xmm;
        }
        *((_DWORD *)v35 + 6) = 0;
        v40 = FLOAT_1_0;
        CopyIfNeeded_Matrix3x3_(v22, v38);
        v24 = v23 + 64;
        if ( (__int16 *)v24 != &v34 )
        {
          *(_WORD *)v24 = v34;
          *(_BYTE *)(v24 + 2) = 1;
        }
        *((_BYTE *)v35 + 168) = 1;
        v25 = v35;
        v35 = 0LL;
        if ( v25 != v56 )
        {
          if ( v56 )
          {
            v32 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v56;
            if ( v32 == CSurfaceDrawListBrush::`vector deleting destructor' )
            {
              CSurfaceDrawListBrush::`vector deleting destructor'(v56, 1u);
            }
            else if ( v32 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
            {
              CGeometryOnlyDrawListBrush::`vector deleting destructor'(v56, 1u);
            }
            else
            {
              v32(v56, 1u);
            }
          }
          v56 = v25;
        }
        v26 = v60;
        if ( v60 <= 1 )
          v26 = 1;
        v53 = v18;
        v60 = v26;
        if ( v35 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v35, 1u);
        v17 = v36;
      }
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v63);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)v50,
                   (struct CDrawListEntryBuilder *)v63);
      v16 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x3F9u);
      }
      else
      {
        v28 = CDrawListCache::Update(
                v7,
                *(_QWORD *)(*((_QWORD *)v5 + 4) + 360LL),
                v64,
                v65,
                (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)v5 + 64) != 0),
                v66 != 0);
        v16 = v28;
        if ( v28 >= 0 )
        {
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v63);
          if ( *((_QWORD *)&v36 + 1) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v36 + 1) + 16LL))(*((_QWORD *)&v36 + 1));
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v50);
          v29 = &v60;
          do
          {
            v29 -= 2;
            std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v29);
            LODWORD(v13) = 0;
            --v10;
          }
          while ( v10 );
          v30 = v54;
          v7 = v41;
          if ( v54 )
          {
            v54 = 0LL;
            (*(void (__fastcall **)(CSurfaceDrawListBrush *))(*(_QWORD *)v30 + 8LL))(v30);
            LODWORD(v13) = 0;
          }
          goto LABEL_43;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x3FBu);
      }
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v63);
    }
LABEL_71:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v36 + 1);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v36);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v50);
    return (unsigned int)v16;
  }
LABEL_43:
  v16 = (int)v13;
  *((_QWORD *)this + 19) = *((_QWORD *)v7 + 3);
  return (unsigned int)v16;
}
