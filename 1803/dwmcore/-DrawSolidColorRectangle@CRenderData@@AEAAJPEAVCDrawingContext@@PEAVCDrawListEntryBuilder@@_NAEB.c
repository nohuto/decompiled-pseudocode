/*
 * XREFs of ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800564EC
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180056940 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800B611C (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderData::DrawSolidColorRectangle(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        const struct MilRectF *a5,
        const struct _D3DCOLORVALUE *a6)
{
  struct _D3DCOLORVALUE v8; // xmm0
  int v9; // eax
  __m128 v10; // xmm2
  struct _D3DCOLORVALUE *v11; // rax
  __int128 v12; // xmm0
  int v13; // ebx
  CGeometryOnlyDrawListBrush *v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  int DrawList; // eax
  struct _D3DCOLORVALUE v20; // [rsp+30h] [rbp-59h] BYREF
  struct _D3DCOLORVALUE v21; // [rsp+40h] [rbp-49h] BYREF
  char v22; // [rsp+50h] [rbp-39h]
  struct CDrawingContext *v23; // [rsp+60h] [rbp-29h] BYREF
  int v24; // [rsp+68h] [rbp-21h]
  int v25; // [rsp+6Ch] [rbp-1Dh]
  int v26; // [rsp+70h] [rbp-19h]
  __int128 v27; // [rsp+74h] [rbp-15h]
  __int64 v28; // [rsp+88h] [rbp-1h]
  __int64 v29; // [rsp+90h] [rbp+7h]
  __int64 v30; // [rsp+98h] [rbp+Fh]
  __int64 v31; // [rsp+A0h] [rbp+17h]
  int v32; // [rsp+A8h] [rbp+1Fh]
  __int16 v33; // [rsp+ACh] [rbp+23h]
  char v34; // [rsp+AEh] [rbp+25h]

  v24 = 0;
  v25 = 0;
  v27 = _xmm;
  v23 = a2;
  *(struct _D3DCOLORVALUE *)&v8.r = *(struct _D3DCOLORVALUE *)&a6->r;
  v9 = *((_DWORD *)a2 + 776);
  v26 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v33 = 256;
  v34 = 0;
  *(struct _D3DCOLORVALUE *)&v21.r = *(struct _D3DCOLORVALUE *)&v8.r;
  if ( v9 )
    v10 = (__m128)*(unsigned int *)(*((_QWORD *)a2 + 390) + 4LL * (unsigned int)(v9 - 1));
  else
    v10 = (__m128)LODWORD(FLOAT_1_0);
  *(struct _D3DCOLORVALUE *)&v21.r = (struct _D3DCOLORVALUE)_mm_mul_ps(*(__m128 *)&v21.r, _mm_shuffle_ps(v10, v10, 0));
  v11 = Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v20, &v21);
  *(_QWORD *)&v21.b = 0LL;
  v22 = 1;
  v12 = *(_OWORD *)&v11->r;
  LOBYTE(v33) = 0;
  HIBYTE(v33) = a4 == 0;
  *(_QWORD *)&v21.r = &v20;
  v27 = v12;
  *(_QWORD *)&v20.r = 0LL;
  v13 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v21.b);
  if ( v22 )
  {
    v14 = **(CGeometryOnlyDrawListBrush ***)&v21.r;
    **(_QWORD **)&v21.r = *(_QWORD *)&v21.b;
    if ( v14 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v14, 1u);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x377u);
  }
  else
  {
    v15 = *(_OWORD *)a5;
    v16 = *(_QWORD *)&v20.r;
    *(_QWORD *)&v21.b = *((_QWORD *)a5 + 1);
    *(_BYTE *)(*(_QWORD *)&v20.r + 52LL) = 1;
    *(_OWORD *)(v16 + 32) = v15;
    *(_DWORD *)(v16 + 48) = 50529027;
    *(_QWORD *)&v21.r = *(_QWORD *)&v20.r;
    *(_QWORD *)&v20.r = 0LL;
    CBrushDrawListGenerator::AttachInput(&v23, 0LL, &v21);
    if ( *(_QWORD *)&v21.r )
      std::default_delete<CDrawListBrush>::operator()(v17, *(_QWORD *)&v21.r);
    DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)&v23, a3, 0LL, 0LL);
    v13 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x37Bu);
  }
  if ( *(_QWORD *)&v20.r )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)&v20.r, 1u);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v23);
  return (unsigned int)v13;
}
