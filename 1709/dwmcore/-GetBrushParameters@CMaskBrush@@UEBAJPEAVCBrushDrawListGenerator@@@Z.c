/*
 * XREFs of ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180024990
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048B00 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180070B30 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180071090 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::GetBrushParameters(CMaskBrush *this, struct CBrushDrawListGenerator *a2)
{
  CColorBrush *v4; // rcx
  int (*v5)(CColorBrush *__hidden, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  unsigned int v7; // ebx
  __int128 v8; // xmm0
  CSurfaceDrawListBrush *v9; // rax
  int v10; // esi
  CSurfaceBrush *v11; // rcx
  int (*v12)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *); // rax
  int v13; // eax
  CSurfaceDrawListBrush *v14; // rax
  void *(__fastcall *v16)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v17)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  CSurfaceDrawListBrush *v18[2]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v19[40]; // [rsp+40h] [rbp-49h] BYREF
  int v20; // [rsp+68h] [rbp-21h]
  __int128 v21; // [rsp+78h] [rbp-11h]
  CSurfaceDrawListBrush *v22; // [rsp+88h] [rbp-1h]
  char v23; // [rsp+ADh] [rbp+24h]

  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v19,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1,
    (const struct D2D_MATRIX_3X2_F *)((char *)a2 + 16));
  v4 = (CColorBrush *)*((_QWORD *)this + 11);
  v5 = *(int (**)(CColorBrush *__hidden, struct CBrushDrawListGenerator *))(*(_QWORD *)v4 + 256LL);
  if ( v5 == CColorBrush::GetBrushParameters )
  {
    BrushParameters = CColorBrush::GetBrushParameters(v4, (struct CBrushDrawListGenerator *)v19);
  }
  else if ( v5 == CLinearGradientBrush::GetBrushParameters )
  {
    BrushParameters = CLinearGradientBrush::GetBrushParameters(v4, (struct CBrushDrawListGenerator *)v19);
  }
  else
  {
    BrushParameters = ((__int64 (__fastcall *)(CColorBrush *, _BYTE *))v5)(v4, v19);
  }
  v7 = BrushParameters;
  if ( BrushParameters < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BrushParameters, 0x160u);
    goto LABEL_29;
  }
  v8 = v21;
  *((_BYTE *)a2 + 109) = v23;
  v9 = v22;
  v22 = 0LL;
  v18[0] = v9;
  *(_OWORD *)((char *)a2 + 56) = v8;
  CBrushDrawListGenerator::AttachInput(a2, 0LL, v18);
  v10 = v20;
  if ( v18[0] )
  {
    v16 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v18[0];
    if ( v16 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v18[0], 1u);
    }
    else if ( v16 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
    {
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v18[0], 1u);
    }
    else
    {
      ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64, void *(__fastcall *)(CGeometryOnlyDrawListBrush *__hidden, unsigned int), void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int)))v16)(
        v18[0],
        1LL,
        CGeometryOnlyDrawListBrush::`vector deleting destructor',
        CSurfaceDrawListBrush::`vector deleting destructor');
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v19);
  if ( !*((_QWORD *)this + 10) )
    goto LABEL_11;
  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v19,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1,
    (const struct D2D_MATRIX_3X2_F *)((char *)a2 + 16));
  v11 = (CSurfaceBrush *)*((_QWORD *)this + 10);
  v12 = *(int (**)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *))(*(_QWORD *)v11 + 256LL);
  if ( v12 == CSurfaceBrush::GetBrushParameters )
    v13 = CSurfaceBrush::GetBrushParameters(v11, (struct CBrushDrawListGenerator *)v19);
  else
    v13 = ((__int64 (__fastcall *)(CSurfaceBrush *, _BYTE *))v12)(v11, v19);
  v7 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x178u);
LABEL_29:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v19);
    CBrushDrawListGenerator::Reset(a2);
    return v7;
  }
  v14 = v22;
  v22 = 0LL;
  v18[0] = v14;
  CBrushDrawListGenerator::AttachInput(a2, 1LL, v18);
  v10 |= v20;
  if ( v18[0] )
  {
    v17 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v18[0];
    if ( v17 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v18[0], 1u);
    }
    else if ( v17 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
    {
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v18[0], 1u);
    }
    else
    {
      v17(v18[0], 1u);
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v19);
LABEL_11:
  *((_DWORD *)a2 + 10) = v10;
  return 0;
}
