/*
 * XREFs of ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180039590
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A5C0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180038860 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800585B8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005864C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800586FC (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18008B8C0 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::GetBrushParameters(CMaskBrush *this, struct CBrushDrawListGenerator *a2)
{
  CColorBrush *v4; // rcx
  int (*v5)(CColorBrush *__hidden, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  unsigned int v7; // ebx
  CSurfaceDrawListBrush **v8; // r14
  CSurfaceDrawListBrush *v9; // rsi
  __int128 v10; // xmm0
  CSurfaceDrawListBrush *v11; // rbx
  CSurfaceDrawListBrush *v12; // rcx
  int v13; // eax
  int v14; // r15d
  CSurfaceBrush *v15; // rcx
  __int64 (__fastcall *v16)(CSurfaceBrush *, struct CBrushDrawListGenerator *); // rax
  int v17; // eax
  CSurfaceDrawListBrush *v18; // rsi
  CSurfaceDrawListBrush **v19; // r14
  CSurfaceDrawListBrush *v20; // rbx
  CSurfaceDrawListBrush *v21; // rcx
  int v22; // eax
  void *(__fastcall *v24)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v25)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v26)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v27)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  _BYTE v28[16]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v29[40]; // [rsp+40h] [rbp-59h] BYREF
  int v30; // [rsp+68h] [rbp-31h]
  __int128 v31; // [rsp+78h] [rbp-21h]
  CSurfaceDrawListBrush *v32; // [rsp+88h] [rbp-11h]
  char v33; // [rsp+ACh] [rbp+13h]

  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v29,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1,
    (const struct D2D_MATRIX_3X2_F *)((char *)a2 + 16));
  v4 = (CColorBrush *)*((_QWORD *)this + 11);
  v5 = *(int (**)(CColorBrush *__hidden, struct CBrushDrawListGenerator *))(*(_QWORD *)v4 + 240LL);
  if ( v5 == CColorBrush::GetBrushParameters )
  {
    BrushParameters = CColorBrush::GetBrushParameters(v4, (struct CBrushDrawListGenerator *)v29);
  }
  else if ( (char *)v5 == (char *)CLinearGradientBrush::GetBrushParameters )
  {
    BrushParameters = CLinearGradientBrush::GetBrushParameters(v4, (struct CBrushDrawListGenerator *)v29);
  }
  else
  {
    BrushParameters = ((__int64 (__fastcall *)(CColorBrush *, _BYTE *))v5)(v4, v29);
  }
  v7 = BrushParameters;
  if ( BrushParameters < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushParameters, 0x15Eu);
    goto LABEL_44;
  }
  v8 = (CSurfaceDrawListBrush **)((char *)a2 + 72);
  v9 = v32;
  v10 = v31;
  v32 = 0LL;
  v11 = v9;
  *((_BYTE *)a2 + 108) = v33;
  *(_OWORD *)((char *)a2 + 56) = v10;
  if ( (char *)a2 + 72 != v28 )
  {
    v12 = *v8;
    v11 = 0LL;
    if ( v9 != *v8 )
    {
      if ( v12 )
      {
        v24 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v12;
        if ( v24 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v12, 1u);
        else
          ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64, void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int)))v24)(
            v12,
            1LL,
            CSurfaceDrawListBrush::`vector deleting destructor');
      }
      *v8 = v9;
    }
  }
  v13 = 1;
  v14 = v30;
  if ( *((_DWORD *)a2 + 26) > 1u )
    v13 = *((_DWORD *)a2 + 26);
  *((_DWORD *)a2 + 26) = v13;
  if ( v11 )
  {
    v25 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v11;
    if ( v25 == CSurfaceDrawListBrush::`vector deleting destructor' )
      CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1u);
    else
      ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64, void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int)))v25)(
        v11,
        1LL,
        CSurfaceDrawListBrush::`vector deleting destructor');
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v29);
  if ( !*((_QWORD *)this + 10) )
    goto LABEL_21;
  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v29,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1,
    (const struct D2D_MATRIX_3X2_F *)((char *)a2 + 16));
  v15 = (CSurfaceBrush *)*((_QWORD *)this + 10);
  v16 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct CBrushDrawListGenerator *))(*(_QWORD *)v15 + 240LL);
  if ( v16 == CSurfaceBrush::GetBrushParameters )
    v17 = CSurfaceBrush::GetBrushParameters(v15, (struct CBrushDrawListGenerator *)v29);
  else
    v17 = v16(v15, (struct CBrushDrawListGenerator *)v29);
  v7 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x176u);
LABEL_44:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v29);
    CBrushDrawListGenerator::Reset(a2);
    return v7;
  }
  v18 = v32;
  v19 = (CSurfaceDrawListBrush **)((char *)a2 + 80);
  v32 = 0LL;
  v20 = v18;
  if ( (char *)a2 + 80 != v28 )
  {
    v21 = *v19;
    v20 = 0LL;
    if ( v18 != *v19 )
    {
      if ( v21 )
      {
        v26 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v21;
        if ( v26 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1u);
        else
          v26(v21, 1u);
      }
      *v19 = v18;
    }
  }
  v22 = 2;
  if ( *((_DWORD *)a2 + 26) > 2u )
    v22 = *((_DWORD *)a2 + 26);
  v14 |= v30;
  *((_DWORD *)a2 + 26) = v22;
  if ( v20 )
  {
    v27 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v20;
    if ( v27 == CSurfaceDrawListBrush::`vector deleting destructor' )
      CSurfaceDrawListBrush::`vector deleting destructor'(v20, 1u);
    else
      v27(v20, 1u);
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v29);
LABEL_21:
  *((_DWORD *)a2 + 10) = v14;
  return 0;
}
