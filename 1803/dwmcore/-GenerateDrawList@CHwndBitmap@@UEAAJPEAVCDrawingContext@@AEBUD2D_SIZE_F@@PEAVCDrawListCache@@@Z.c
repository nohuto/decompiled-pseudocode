/*
 * XREFs of ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180190480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180076F8C (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800C1D78 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CHwndBitmap::GenerateDrawList(
        CHwndBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ecx
  int v8; // eax
  int DrawList; // eax
  int v10; // ebx
  CSurfaceDrawListBrush *v11; // rcx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-E0h]
  __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+32h] [rbp-CEh]
  CSurfaceDrawListBrush *v17; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v18; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+60h] [rbp-A0h]
  __int128 v21; // [rsp+68h] [rbp-98h] BYREF
  CSurfaceDrawListBrush **v22; // [rsp+78h] [rbp-88h]
  CSurfaceDrawListBrush *v23; // [rsp+80h] [rbp-80h] BYREF
  char v24; // [rsp+88h] [rbp-78h]
  struct CDrawingContext *v25; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  int v28; // [rsp+A0h] [rbp-60h]
  __int128 v29; // [rsp+A4h] [rbp-5Ch]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  __int16 v35; // [rsp+DCh] [rbp-24h]
  char v36; // [rsp+DEh] [rbp-22h]
  CMILRefCountBase *v37[310]; // [rsp+E0h] [rbp-20h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v37);
  v21 = 0uLL;
  v7 = 0;
  v8 = *((_DWORD *)a2 + 63);
  v18 = 0LL;
  if ( v8 == 1 )
  {
    v7 = 1;
  }
  else
  {
    if ( v8 <= 1 )
      goto LABEL_11;
    if ( v8 <= 3 )
    {
      v7 = 2;
    }
    else
    {
      if ( v8 == 4 )
      {
LABEL_7:
        v7 = 3;
        goto LABEL_11;
      }
      if ( v8 != 5 )
      {
        if ( v8 != 6 )
          goto LABEL_11;
        goto LABEL_7;
      }
      v7 = 4;
    }
  }
LABEL_11:
  v26 = 0;
  v27 = 0;
  LOBYTE(v15) = InterpolationMode::FromD2D1InterpolationMode(v7);
  HIBYTE(v15) = 1;
  v29 = _xmm;
  v25 = a2;
  v28 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v35 = 256;
  v36 = 0;
  v19 = 0LL;
  v20 = 0;
  DrawList = CDrawListBitmap::FromImageSource(
               (struct IImageSource **)&v19,
               (struct IImageSource *)(((unsigned __int64)this - 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 16) >> 64)),
               a2,
               0);
  v10 = DrawList;
  if ( DrawList < 0 )
  {
    v14 = 319;
  }
  else
  {
    CDrawListBitmap::GetSize((CDrawListBitmap *)&v19, &v17);
    *((float *)&v21 + 2) = (float)(int)v17;
    CDrawListBitmap::GetSize((CDrawListBitmap *)&v19, &v17);
    v16 = 1;
    v23 = 0LL;
    v24 = 1;
    v22 = &v18;
    *((float *)&v21 + 3) = (float)SHIDWORD(v17);
    v10 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)&v19, &v15, &v21, &v23);
    if ( v24 )
    {
      v11 = *v22;
      *v22 = v23;
      if ( v11 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1);
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x148u);
      goto LABEL_26;
    }
    v17 = v18;
    v18 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&v25, 0, &v17);
    if ( v17 )
      std::default_delete<CDrawListBrush>::operator()(v12, v17);
    v28 = 512;
    DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)&v25, v37, 0LL, 0LL);
    v10 = DrawList;
    if ( DrawList < 0 )
    {
      v14 = 332;
    }
    else
    {
      DrawList = CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v37);
      v10 = DrawList;
      if ( DrawList >= 0 )
      {
        v10 = 0;
        goto LABEL_26;
      }
      v14 = 333;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, v14);
LABEL_26:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v19 + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v19);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v25);
  if ( v18 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v18, 1);
  CDrawListEntryBuilder::~CDrawListEntryBuilder(v37);
  return (unsigned int)v10;
}
