/*
 * XREFs of ?DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCBitmapResource@@AEBUMilRectF@@@Z @ 0x18001D8BC
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE@gsl@@PEA_N@Z @ 0x18001E008 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048B00 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BDC50 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawBitmapResource_FillMode(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        struct CBitmapResource *a5,
        const struct MilRectF *a6)
{
  int v9; // eax
  int v10; // ebx
  char v11; // al
  int v12; // eax
  struct D2D_MATRIX_3X2_F *v13; // r9
  __int128 v14; // xmm0
  _QWORD *v15; // rdi
  struct CSurfaceDrawListBrush *v16; // rsi
  CSurfaceDrawListBrush *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  int DrawList; // eax
  void *(__fastcall *v23)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  struct D2D_RECT_F v24; // [rsp+30h] [rbp-D0h] BYREF
  D2D_SIZE_F v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  D2D_SIZE_F *v26; // [rsp+50h] [rbp-B0h] BYREF
  struct CSurfaceDrawListBrush *v27; // [rsp+58h] [rbp-A8h] BYREF
  FLOAT bottom; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+64h] [rbp-9Ch]
  int v30; // [rsp+68h] [rbp-98h]
  int v31; // [rsp+6Ch] [rbp-94h]
  int v32; // [rsp+70h] [rbp-90h]
  struct D2D_RECT_F v33; // [rsp+78h] [rbp-88h] BYREF
  int v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+8Ch] [rbp-74h]
  __int128 v36; // [rsp+90h] [rbp-70h] BYREF
  char v37; // [rsp+A0h] [rbp-60h]
  struct D2D_RECT_F v38; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v39[110]; // [rsp+C0h] [rbp-40h] BYREF
  char v40; // [rsp+12Eh] [rbp+2Eh]

  v37 = 0;
  v36 = 0LL;
  v9 = CDrawListBitmap::FromImageSource(
         (CDrawListBitmap *)&v36,
         (struct IImageSource *)(((unsigned __int64)a5 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)a5 >> 64)),
         a2,
         0,
         0);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2EFu);
  }
  else if ( (_QWORD)v36 )
  {
    v25[0].width = 1.0;
    v25[0].height = 1.0;
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v39, a2, v25, 0LL);
    v11 = v40;
    v39[108] = 0;
    if ( a4 )
      v11 = 0;
    v40 = v11;
    v12 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, struct D2D_RECT_F *))(*((_QWORD *)a5 + 1) + 120LL))(
            (char *)a5 + 8,
            0LL,
            0LL,
            &v38);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2FFu);
    }
    else
    {
      v14 = *(_OWORD *)a6;
      v24 = v38;
      *(_OWORD *)&v25[0].width = v14;
      if ( D2DMatrixHelper::ComputeRectangleTransform(
             (D2DMatrixHelper *)&v24,
             (const struct D2D_RECT_F *)v25,
             &v33,
             v13) )
      {
        v25[0] = 0LL;
        v26 = v25;
        v27 = 0LL;
        LOBYTE(bottom) = 1;
        v24 = v38;
        v10 = CSurfaceDrawListBrush::Create((const struct CDrawListBitmap *)&v36, &v24, &v27);
        if ( LOBYTE(bottom) )
        {
          v15 = v26;
          v16 = v27;
          v17 = (CSurfaceDrawListBrush *)*v26;
          if ( v27 != (struct CSurfaceDrawListBrush *)*v26 )
          {
            if ( v17 )
              CSurfaceDrawListBrush::`vector deleting destructor'(v17, 1u);
            *v15 = v16;
          }
        }
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x307u);
        }
        else
        {
          LODWORD(v27) = 0;
          v29 = 0;
          v26 = *(D2D_SIZE_F **)&v33.left;
          v18 = *(_QWORD *)v25 + 28LL;
          HIDWORD(v27) = LODWORD(v33.right);
          bottom = v33.bottom;
          v30 = v34;
          v31 = v35;
          v32 = 1065353216;
          *(_DWORD *)(*(_QWORD *)v25 + 24LL) = 0;
          CopyIfNeeded_Matrix3x3_(v18, &v26);
          v20 = v19 + 64;
          if ( (__int16 *)v20 != &SamplerMode::k_ClampClampLinear )
          {
            *(_WORD *)v20 = SamplerMode::k_ClampClampLinear;
            *(_BYTE *)(v20 + 2) = byte_18026E172;
          }
          *(_BYTE *)(*(_QWORD *)v25 + 168LL) = 1;
          *(D2D_SIZE_F *)&v24.left = v25[0];
          v25[0] = 0LL;
          CBrushDrawListGenerator::AttachInput(v39, 0LL, &v24);
          if ( *(_QWORD *)&v24.left )
          {
            v23 = ***(void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))&v24.left;
            if ( v23 == CSurfaceDrawListBrush::`vector deleting destructor' )
            {
              CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v24.left, 1u);
            }
            else if ( v23 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
            {
              CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)&v24.left, 1u);
            }
            else
            {
              v23(*(CSurfaceDrawListBrush **)&v24.left, 1u);
            }
          }
          DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)v39, a3);
          v10 = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x30Du);
        }
        if ( v25[0] )
          CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)v25, 1u);
      }
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v39);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v36 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v36);
  return (unsigned int)v10;
}
