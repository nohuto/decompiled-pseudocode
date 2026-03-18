/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800BFAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800585B8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005864C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800586FC (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180059D68 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180059DB0 (--4-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z @ 0x1800BFED4 (-SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800C0104 (-Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x1800C01DC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  CSurfaceDrawListBrush *(__fastcall *v22)(CSurfaceDrawListBrush *, char); // rax
  struct CObjectCache *ObjectCache; // rax
  struct CGeometryOnlyDrawListBrush *v24; // rcx
  _QWORD *v25; // rsi
  struct CObjectCache *v26; // rax
  int v27; // xmm1_4
  int v28; // xmm0_4
  int v29; // xmm1_4
  CSurfaceDrawListBrush *(__fastcall *v30)(CSurfaceDrawListBrush *, char); // rax
  char v31; // [rsp+28h] [rbp-D8h]
  char v32; // [rsp+28h] [rbp-D8h]
  __int16 v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34; // [rsp+32h] [rbp-CEh]
  void *lpMem; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+44h] [rbp-BCh]
  CDrawListBrush *v38; // [rsp+48h] [rbp-B8h] BYREF
  float v39[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_RECT_F v40; // [rsp+60h] [rbp-A0h] BYREF
  struct CGeometryOnlyDrawListBrush *v41[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v42; // [rsp+88h] [rbp-78h]
  float v43; // [rsp+98h] [rbp-68h]
  _BYTE v44[40]; // [rsp+A0h] [rbp-60h] BYREF
  int v45; // [rsp+C8h] [rbp-38h]
  __int128 v46; // [rsp+D8h] [rbp-28h]
  void *v47; // [rsp+E8h] [rbp-18h]
  char v48; // [rsp+10Ch] [rbp+Ch]

  v2 = (const struct D2D_MATRIX_3X2_F *)((char *)a2 + 16);
  v3 = (const struct D2D_SIZE_F *)((char *)a2 + 8);
  v6 = 0LL;
  v7 = *((float *)this + 25) * *((float *)this + 24);
  v8 = *(struct CDrawingContext **)a2;
  v39[0] = *((float *)this + 23) * *((float *)this + 22);
  v9 = *((float *)this + 27) * *((float *)this + 26);
  v38 = 0LL;
  v39[1] = v7;
  v10 = *((float *)this + 29) * *((float *)this + 28);
  v39[2] = v9;
  v39[3] = v10;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v44, v8, v3, v2);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 10) + 240LL))(*((_QWORD *)this + 10), v44);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x181u);
    goto LABEL_27;
  }
  v13 = v47;
  v47 = 0LL;
  lpMem = v13;
  std::unique_ptr<CDrawListBrush>::operator=(&v38, (CSurfaceDrawListBrush **)&lpMem);
  if ( lpMem )
  {
    v22 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))lpMem;
    if ( v22 == CSurfaceDrawListBrush::`vector deleting destructor' )
      CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1);
    else
      v22((CSurfaceDrawListBrush *)lpMem, 1);
  }
  v6 = v38;
  if ( v38 )
  {
    v27 = *((_DWORD *)this + 24);
    v32 = *((_BYTE *)this + 120);
    LODWORD(lpMem) = *((_DWORD *)this + 22);
    v28 = *((_DWORD *)this + 26);
    HIDWORD(lpMem) = v27;
    v29 = *((_DWORD *)this + 28);
    v36 = v28;
    v37 = v29;
    CDrawListBrush::SetNineGridLayout(
      v38,
      (CDrawListBrush *)((char *)v38 + 28),
      (CDrawListBrush *)((char *)v38 + 64),
      (const struct Insets *)&lpMem,
      (const struct Insets *)v39,
      v32);
    goto LABEL_12;
  }
  v14 = v46;
  *((_BYTE *)a2 + 108) = v48;
  *(_OWORD *)((char *)a2 + 56) = v14;
  if ( !*((_BYTE *)this + 120) )
  {
LABEL_12:
    CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64)&v38);
    v12 = 0;
    v6 = v38;
    *((_DWORD *)a2 + 10) = v45;
    goto LABEL_13;
  }
  v15 = *((float *)a2 + 2);
  v40.left = 0.0;
  v40.top = 0.0;
  v16 = *((float *)a2 + 3);
  lpMem = 0LL;
  v41[1] = 0LL;
  v40.right = v15;
  v40.bottom = v16;
  v41[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
  LOBYTE(v42) = 1;
  v12 = CGeometryOnlyDrawListBrush::Create(&v40, &v41[1]);
  if ( (_BYTE)v42 )
  {
    v18 = v41[0];
    v19 = v41[1];
    v20 = *(_QWORD **)v41[0];
    if ( v41[1] != *(struct CGeometryOnlyDrawListBrush **)v41[0] )
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
    *(_OWORD *)v41 = _xmm;
    v33 = 257;
    v42 = _xmm;
    v43 = FLOAT_1_0;
    v34 = 1;
    CDrawListBrush::SetNineGridLayout(
      (CDrawListBrush *)lpMem,
      (const struct Matrix3x3 *)v41,
      (const struct SamplerMode *)&v33,
      (const struct Insets *)v39,
      (const struct Insets *)v39,
      v31);
    if ( lpMem )
      v38 = (CDrawListBrush *)lpMem;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x197u);
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
LABEL_27:
  CBrushDrawListGenerator::Reset(a2);
LABEL_13:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v44);
  if ( v6 )
  {
    v30 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))v6;
    if ( v30 == CSurfaceDrawListBrush::`vector deleting destructor' )
      CSurfaceDrawListBrush::`vector deleting destructor'(v6, 1);
    else
      v30(v6, 1);
  }
  return (unsigned int)v12;
}
