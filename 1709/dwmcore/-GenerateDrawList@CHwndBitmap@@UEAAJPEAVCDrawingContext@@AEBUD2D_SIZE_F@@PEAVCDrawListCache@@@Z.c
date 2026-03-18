/*
 * XREFs of ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801679F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180023768 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180046C8C (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048B00 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800631BC (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndBitmap::GenerateDrawList(
        CHwndBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v8; // ecx
  int v9; // eax
  char v10; // r9
  signed int v11; // eax
  signed int v12; // ebx
  struct CSurfaceDrawListBrush *v13; // rdi
  struct CSurfaceDrawListBrush *v14; // rsi
  CSurfaceDrawListBrush *v15; // rcx
  char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  CSurfaceDrawListBrush *v19; // rax
  CGeometryOnlyDrawListBrush *(__fastcall *v20)(CGeometryOnlyDrawListBrush *, char); // rax
  signed int DrawList; // eax
  signed int v22; // eax
  __int16 v24; // [rsp+30h] [rbp-D0h] BYREF
  CSurfaceDrawListBrush *v25; // [rsp+38h] [rbp-C8h] BYREF
  CSurfaceDrawListBrush *v26; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+48h] [rbp-B8h] BYREF
  char v28; // [rsp+58h] [rbp-A8h]
  struct CSurfaceDrawListBrush *v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h]
  float v31; // [rsp+80h] [rbp-80h]
  struct D2D_RECT_F v32; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v33[112]; // [rsp+A0h] [rbp-60h] BYREF
  CMILRefCountBase *v34[310]; // [rsp+110h] [rbp+10h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v34);
  v25 = 0LL;
  v8 = 0;
  v9 = *((_DWORD *)a2 + 63);
  v32 = 0LL;
  if ( v9 == 1 )
  {
    v8 = 1;
  }
  else
  {
    if ( v9 <= 1 )
      goto LABEL_11;
    if ( v9 <= 3 )
    {
      v8 = 2;
    }
    else
    {
      if ( v9 == 4 )
      {
LABEL_7:
        v8 = 3;
        goto LABEL_11;
      }
      if ( v9 != 5 )
      {
        if ( v9 != 6 )
          goto LABEL_11;
        goto LABEL_7;
      }
      v8 = 4;
    }
  }
LABEL_11:
  LOBYTE(v24) = InterpolationMode::FromD2D1InterpolationMode(v8);
  HIBYTE(v24) = 1;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v33, a2, a3, 0LL);
  v33[108] = v10;
  v28 = v10;
  v27 = 0LL;
  v11 = CDrawListBitmap::FromImageSource(
          (CDrawListBitmap *)&v27,
          (struct IImageSource *)(((unsigned __int64)this - 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this
                                                                                               - 16) >> 64)),
          a2,
          v10,
          v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x144u);
  }
  else
  {
    CDrawListBitmap::GetSize((CDrawListBitmap *)&v27, &v26);
    v32.right = (float)(int)v26;
    CDrawListBitmap::GetSize((CDrawListBitmap *)&v27, &v26);
    v29[1] = 0LL;
    LOBYTE(v30) = 1;
    v29[0] = (struct CSurfaceDrawListBrush *)&v25;
    v32.bottom = (float)SHIDWORD(v26);
    v12 = CSurfaceDrawListBrush::Create((const struct CDrawListBitmap *)&v27, &v32, &v29[1]);
    if ( (_BYTE)v30 )
    {
      v13 = v29[0];
      v14 = v29[1];
      v15 = *(CSurfaceDrawListBrush **)v29[0];
      if ( v29[1] != *(struct CSurfaceDrawListBrush **)v29[0] )
      {
        if ( v15 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1);
        *(_QWORD *)v13 = v14;
      }
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x14Du);
    }
    else
    {
      *(_OWORD *)v29 = _xmm;
      v30 = _xmm;
      v16 = (char *)v25 + 28;
      *((_DWORD *)v25 + 6) = 0;
      v31 = FLOAT_1_0;
      CopyIfNeeded_Matrix3x3_((__int64)v16, (__int64)v29);
      v18 = v17 + 64;
      if ( (__int16 *)v18 != &v24 )
      {
        *(_WORD *)v18 = v24;
        *(_BYTE *)(v18 + 2) = 1;
      }
      *((_BYTE *)v25 + 168) = 1;
      v19 = v25;
      v25 = 0LL;
      v26 = v19;
      CBrushDrawListGenerator::AttachInput((__int64)v33, 0, &v26);
      if ( v26 )
      {
        v20 = **(CGeometryOnlyDrawListBrush *(__fastcall ***)(CGeometryOnlyDrawListBrush *, char))v26;
        if ( v20 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'(v26, 1);
        }
        else if ( v20 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
        {
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v26, 1);
        }
        else
        {
          v20(v26, 1);
        }
      }
      DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)v33, v34);
      v12 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DrawList, 0x157u);
      }
      else
      {
        v22 = CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v34);
        v12 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x159u);
        }
        else
        {
          v12 = 0;
          *((_QWORD *)this + 15) = *((_QWORD *)a4 + 3);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v33);
  if ( v25 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v25, 1);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v34);
  return (unsigned int)v12;
}
