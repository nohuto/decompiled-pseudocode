/*
 * XREFs of ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180185FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::GenerateDrawList(
        CCompositionSkyBoxBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // xmm0_8
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  _QWORD v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+40h] [rbp-C0h]
  __int128 v14; // [rsp+44h] [rbp-BCh]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  __int64 v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  __int16 v20; // [rsp+7Ch] [rbp-84h]
  char v21; // [rsp+7Eh] [rbp-82h]
  __int64 *v22[310]; // [rsp+80h] [rbp-80h] BYREF

  v4 = (__int64)*a3;
  v13 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v12[1] = v4;
  v14 = _xmm;
  v12[0] = a2;
  v20 = 256;
  v21 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v22);
  v8 = CCompositionSkyBoxBrush::BuildDrawList(this, (struct CBrushDrawListGenerator *)v12, v22);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB9u);
  }
  else
  {
    v10 = CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v22);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xBBu);
  }
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CMILRefCountBase **)v22);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v12);
  return v9;
}
