/*
 * XREFs of ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18001DB7C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE@gsl@@PEA_N@Z @ 0x18001E008 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048B00 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x18007267C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800726A8 (-Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800BC5FC (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawSolidColorRectangle(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        const struct MilRectF *a5,
        const struct _D3DCOLORVALUE *a6)
{
  __m128 v6; // xmm2
  __int64 v9; // rdx
  int v10; // eax
  __int128 v11; // xmm0
  char v12; // al
  __int128 v13; // xmm0
  struct CGeometryOnlyDrawListBrush *v14; // rcx
  int v15; // ebx
  _QWORD *v16; // rsi
  __int64 v17; // r14
  _QWORD *v18; // rdi
  char *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r8
  int DrawList; // eax
  struct CGeometryOnlyDrawListBrush *v23; // rcx
  _QWORD *v24; // rdi
  struct CObjectCache *ObjectCache; // rax
  void *(__fastcall *v27)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  struct CObjectCache *v28; // rax
  __int16 v29; // [rsp+30h] [rbp-A9h] BYREF
  void *lpMem; // [rsp+38h] [rbp-A1h] BYREF
  _D3DCOLORVALUE v31; // [rsp+40h] [rbp-99h] BYREF
  __int128 v32; // [rsp+50h] [rbp-89h]
  int v33; // [rsp+60h] [rbp-79h]
  struct D2D_SIZE_F v34[2]; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v35[56]; // [rsp+80h] [rbp-59h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-21h]
  char v37; // [rsp+ECh] [rbp+13h]
  char v38; // [rsp+EDh] [rbp+14h]
  char v39; // [rsp+EEh] [rbp+15h]

  v6 = (__m128)LODWORD(FLOAT_1_0);
  v34[0].width = 1.0;
  v34[0].height = 1.0;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v35, a2, v34, 0LL);
  v37 = 0;
  v10 = *(_DWORD *)(v9 + 3104);
  *(struct _D3DCOLORVALUE *)&v34[0].width = *(const struct _D3DCOLORVALUE *)&a6->r;
  if ( v10 )
    v6 = (__m128)*(unsigned int *)(*(_QWORD *)(v9 + 3120) + 4LL * (unsigned int)(v10 - 1));
  *(__m128 *)&v34[0].width = _mm_mul_ps(*(__m128 *)&v34[0].width, _mm_shuffle_ps(v6, v6, 0));
  v11 = *(_OWORD *)&Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v31, (const struct _D3DCOLORVALUE *)v34)->r;
  v12 = v39;
  if ( a4 )
    v12 = 0;
  v38 = 0;
  v39 = v12;
  v36 = v11;
  lpMem = 0LL;
  *(_QWORD *)&v31.b = 0LL;
  v13 = *(_OWORD *)a5;
  LOBYTE(v32) = 1;
  *(_QWORD *)&v31.r = &lpMem;
  *(_OWORD *)&v34[0].width = v13;
  v15 = CGeometryOnlyDrawListBrush::Create((const struct D2D_RECT_F *)v34, (struct CGeometryOnlyDrawListBrush **)&v31.b);
  if ( (_BYTE)v32 )
  {
    v16 = *(_QWORD **)&v31.r;
    v17 = *(_QWORD *)&v31.b;
    v18 = **(_QWORD ***)&v31.r;
    if ( *(_QWORD *)&v31.b != **(_QWORD **)&v31.r )
    {
      if ( v18 )
      {
        ObjectCache = CThreadContext::GetObjectCache(v14);
        if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
        {
          WPF::ProcessHeapImpl::Free(v18);
        }
        else
        {
          *v18 = *((_QWORD *)ObjectCache + 1);
          ++*((_DWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = v18;
        }
      }
      *v16 = v17;
    }
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x2DAu);
  }
  else
  {
    *(_D3DCOLORVALUE *)&v31.r = (_D3DCOLORVALUE)_xmm;
    v33 = 1065353216;
    v32 = _xmm;
    v19 = (char *)lpMem + 28;
    v29 = 257;
    *((_DWORD *)lpMem + 6) = 0;
    CopyIfNeeded_Matrix3x3_(v19, &v31);
    v21 = v20 + 64;
    if ( (__int16 *)v21 != &v29 )
    {
      *(_WORD *)v21 = v29;
      *(_BYTE *)(v21 + 2) = 1;
    }
    v34[0] = (struct D2D_SIZE_F)lpMem;
    lpMem = 0LL;
    CBrushDrawListGenerator::AttachInput(v35, 0LL, v34);
    if ( v34[0] )
    {
      v27 = ***(void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))v34;
      if ( v27 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)v34, 1u);
      }
      else if ( v27 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
      {
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)v34, 1u);
      }
      else
      {
        v27(*(CSurfaceDrawListBrush **)v34, 1u);
      }
    }
    DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)v35, a3);
    v15 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x2DEu);
  }
  v24 = lpMem;
  if ( lpMem )
  {
    v28 = CThreadContext::GetObjectCache(v23);
    if ( *((_DWORD *)v28 + 1) >= *(_DWORD *)v28 )
    {
      WPF::ProcessHeapImpl::Free(v24);
    }
    else
    {
      *v24 = *((_QWORD *)v28 + 1);
      ++*((_DWORD *)v28 + 1);
      *((_QWORD *)v28 + 1) = v24;
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v35);
  return (unsigned int)v15;
}
