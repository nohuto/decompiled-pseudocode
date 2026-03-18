/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180070600
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180048A30 (--4-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048B00 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z @ 0x180070EA4 (-SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x18007267C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800726A8 (-Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  const struct D2D_MATRIX_3X2_F *v2; // r9
  const struct D2D_SIZE_F *v3; // r8
  CDrawListBrush *v6; // rbx
  float v7; // xmm1_4
  struct CDrawingContext *v8; // rdx
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // eax
  int v12; // edi
  void *v13; // rax
  __int128 v14; // xmm0
  FLOAT v15; // xmm1_4
  FLOAT v16; // xmm0_4
  struct CGeometryOnlyDrawListBrush *v17; // rcx
  struct CGeometryOnlyDrawListBrush *v18; // r12
  struct CGeometryOnlyDrawListBrush *v19; // r13
  _QWORD *v20; // rsi
  void *(__fastcall *v22)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  struct CObjectCache *ObjectCache; // rax
  struct CGeometryOnlyDrawListBrush *v24; // rcx
  _QWORD *v25; // rsi
  struct CObjectCache *v26; // rax
  FLOAT v27; // xmm1_4
  FLOAT v28; // xmm0_4
  FLOAT v29; // xmm1_4
  void *(__fastcall *v30)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  char v31; // [rsp+28h] [rbp-D8h]
  char v32; // [rsp+28h] [rbp-D8h]
  __int16 v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34; // [rsp+32h] [rbp-CEh]
  void *lpMem; // [rsp+38h] [rbp-C8h] BYREF
  CDrawListBrush *v36; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_RECT_F v37; // [rsp+48h] [rbp-B8h] BYREF
  float v38[4]; // [rsp+58h] [rbp-A8h] BYREF
  struct CGeometryOnlyDrawListBrush *v39[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v40; // [rsp+78h] [rbp-88h]
  float v41; // [rsp+88h] [rbp-78h]
  _BYTE v42[40]; // [rsp+90h] [rbp-70h] BYREF
  int v43; // [rsp+B8h] [rbp-48h]
  __int128 v44; // [rsp+C8h] [rbp-38h]
  void *v45; // [rsp+D8h] [rbp-28h]
  char v46; // [rsp+FDh] [rbp-3h]

  v2 = (const struct D2D_MATRIX_3X2_F *)((char *)a2 + 16);
  v3 = (const struct D2D_SIZE_F *)((char *)a2 + 8);
  v6 = 0LL;
  v7 = *((float *)this + 25) * *((float *)this + 24);
  v8 = *(struct CDrawingContext **)a2;
  v38[0] = *((float *)this + 23) * *((float *)this + 22);
  v9 = *((float *)this + 27) * *((float *)this + 26);
  v36 = 0LL;
  v38[1] = v7;
  v10 = *((float *)this + 29) * *((float *)this + 28);
  v38[2] = v9;
  v38[3] = v10;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v42, v8, v3, v2);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 10) + 256LL))(*((_QWORD *)this + 10), v42);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1ADu);
    goto LABEL_29;
  }
  v13 = v45;
  v45 = 0LL;
  lpMem = v13;
  std::unique_ptr<CDrawListBrush>::operator=(&v36, (CSurfaceDrawListBrush **)&lpMem);
  if ( lpMem )
  {
    v22 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))lpMem;
    if ( v22 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1u);
    }
    else if ( v22 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
    {
      CGeometryOnlyDrawListBrush::`vector deleting destructor'((CGeometryOnlyDrawListBrush *)lpMem, 1u);
    }
    else
    {
      v22((CSurfaceDrawListBrush *)lpMem, 1u);
    }
  }
  v6 = v36;
  if ( v36 )
  {
    v27 = *((float *)this + 24);
    v32 = *((_BYTE *)this + 120);
    v37.left = *((FLOAT *)this + 22);
    v28 = *((float *)this + 26);
    v37.top = v27;
    v29 = *((float *)this + 28);
    v37.right = v28;
    v37.bottom = v29;
    CDrawListBrush::SetNineGridLayout(
      v36,
      (CDrawListBrush *)((char *)v36 + 28),
      (CDrawListBrush *)((char *)v36 + 64),
      (const struct Insets *)&v37,
      (const struct Insets *)v38,
      v32);
    goto LABEL_12;
  }
  v14 = v44;
  *((_BYTE *)a2 + 109) = v46;
  *(_OWORD *)((char *)a2 + 56) = v14;
  if ( !*((_BYTE *)this + 120) )
  {
LABEL_12:
    CBrushDrawListGenerator::AttachInput((__int64)a2, 0, &v36);
    v12 = 0;
    v6 = v36;
    *((_DWORD *)a2 + 10) = v43;
    goto LABEL_13;
  }
  v15 = *((float *)a2 + 2);
  v37.left = 0.0;
  v37.top = 0.0;
  v16 = *((float *)a2 + 3);
  lpMem = 0LL;
  v39[1] = 0LL;
  v37.right = v15;
  v37.bottom = v16;
  v39[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
  LOBYTE(v40) = 1;
  v12 = CGeometryOnlyDrawListBrush::Create(&v37, &v39[1]);
  if ( (_BYTE)v40 )
  {
    v18 = v39[0];
    v19 = v39[1];
    v20 = *(_QWORD **)v39[0];
    if ( v39[1] != *(struct CGeometryOnlyDrawListBrush **)v39[0] )
    {
      if ( v20 )
      {
        ObjectCache = CThreadContext::GetObjectCache(v17);
        if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
        {
          WPF::ProcessHeapImpl::Free(v20);
        }
        else
        {
          *v20 = *((_QWORD *)ObjectCache + 1);
          ++*((_DWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = v20;
        }
      }
      *(_QWORD *)v18 = v19;
    }
  }
  if ( v12 >= 0 )
  {
    v31 = *((_BYTE *)this + 120);
    *(_OWORD *)v39 = _xmm;
    v33 = 257;
    v40 = _xmm;
    v41 = FLOAT_1_0;
    v34 = 1;
    CDrawListBrush::SetNineGridLayout(
      (CDrawListBrush *)lpMem,
      (const struct Matrix3x3 *)v39,
      (const struct SamplerMode *)&v33,
      (const struct Insets *)v38,
      (const struct Insets *)v38,
      v31);
    if ( lpMem )
      v36 = (CDrawListBrush *)lpMem;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1C3u);
  v25 = lpMem;
  if ( lpMem )
  {
    v26 = CThreadContext::GetObjectCache(v24);
    if ( *((_DWORD *)v26 + 1) >= *(_DWORD *)v26 )
    {
      WPF::ProcessHeapImpl::Free(v25);
    }
    else
    {
      *v25 = *((_QWORD *)v26 + 1);
      ++*((_DWORD *)v26 + 1);
      *((_QWORD *)v26 + 1) = v25;
    }
  }
LABEL_29:
  CBrushDrawListGenerator::Reset(a2);
LABEL_13:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v42);
  if ( v6 )
  {
    v30 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v6;
    if ( v30 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v6, 1u);
    }
    else if ( v30 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
    {
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v6, 1u);
    }
    else
    {
      v30(v6, 1u);
    }
  }
  return (unsigned int)v12;
}
