/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCShape@@@Z @ 0x18008BCE0
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180064290 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18008AA10 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18008C630 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18020A1C0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(__int64 *a1, CRectanglesShape **a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // xmm6_4
  int v8; // xmm7_4
  int v9; // xmm8_4
  int v10; // xmm9_4
  __int64 v11; // rdx
  float v12; // xmm1_4
  CRectanglesShape *v13; // r12
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // edi
  __int64 v18; // rcx
  CRectanglesShape *v19; // rdx
  __int64 v20; // rcx
  __int64 result; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  CRectanglesShape *v25; // rdx
  CRectanglesShape *v26; // rcx
  CRectanglesShape *v27; // rax
  CRectanglesShape *(__fastcall *v28)(CRectanglesShape *, char); // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  CRectanglesShape *v33; // [rsp+30h] [rbp-D0h] BYREF
  CRectanglesShape *v34; // [rsp+38h] [rbp-C8h] BYREF
  CRectanglesShape **v35; // [rsp+40h] [rbp-C0h]
  struct CShape *v36; // [rsp+48h] [rbp-B8h] BYREF
  char v37; // [rsp+50h] [rbp-B0h]
  float v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+74h] [rbp-8Ch]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int128 v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+94h] [rbp-6Ch]
  int v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+9Ch] [rbp-64h]
  void **v48; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-48h]
  void *lpMem; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D4h] [rbp-2Ch]
  _BYTE v54[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-10h]
  _DWORD v56[4]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *a1;
  v5 = 0LL;
  v33 = 0LL;
  while ( 1 )
  {
    if ( v5 == v2 )
    {
      result = 0LL;
      *a2 = v33;
      return result;
    }
    v6 = *(_QWORD *)(a1[1] + 8 * v5);
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 52) )
        break;
    }
LABEL_18:
    ++v5;
  }
  v7 = *(_DWORD *)(v6 + 32);
  v8 = *(_DWORD *)(v6 + 36);
  v9 = *(_DWORD *)(v6 + 40);
  v10 = *(_DWORD *)(v6 + 44);
  lpMem = v54;
  v48 = &CRectanglesShape::`vftable';
  v51 = v54;
  v49 = 0LL;
  v52 = 1;
  v53 = 1LL;
  v55 = 0LL;
  DynArrayImpl<0>::ShrinkToSize((__int64)&lpMem, 0x10u);
  if ( v55 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    v55 = 0LL;
  }
  v56[0] = v7;
  v56[1] = v8;
  v56[2] = v9;
  v56[3] = v10;
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(&lpMem, v56, 1LL);
  v12 = *(float *)(v6 + 12);
  v13 = v33;
  v38[0] = *(float *)(v6 + 8);
  v40 = *(_DWORD *)(v6 + 16);
  v38[1] = v12;
  v14 = *(_DWORD *)(v6 + 20);
  v43 = _xmm;
  v15 = *(_DWORD *)(v6 + 28);
  v41 = v14;
  v16 = *(_DWORD *)(v6 + 24);
  v45 = v15;
  v44 = v16;
  v47 = 1065353216LL;
  v39 = 0LL;
  v42 = 0LL;
  v46 = 0;
  v36 = 0LL;
  v37 = 1;
  if ( !v33 )
  {
    v35 = &v33;
    v17 = CShape::CopyShape((CShape *)&v48, (const struct CMILMatrix *)v38, &v36);
    if ( v37 )
    {
      v18 = (__int64)v35;
      v19 = *v35;
      *v35 = v36;
      if ( v19 )
        std::default_delete<CShape>::operator()(v18, v19);
    }
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x55u);
      goto LABEL_38;
    }
    goto LABEL_12;
  }
  v34 = 0LL;
  v35 = &v34;
  v22 = CShape::TryOptimizedCombinePaths(v33, v11, (CShape *)&v48, v38, 1, &v36);
  v17 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x199u);
  }
  else if ( !v36 )
  {
    v30 = CShape::D2DCombine(v13, v23, &v48, v38, 1, &v36);
    v17 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x1A8u);
  }
  if ( v37 )
  {
    v24 = (__int64)v35;
    v25 = *v35;
    *v35 = v36;
    if ( v25 )
      std::default_delete<CShape>::operator()(v24, v25);
  }
  if ( v17 >= 0 )
  {
    v26 = v33;
    v27 = v34;
    v34 = 0LL;
    v33 = v27;
    if ( v26 )
    {
      v28 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v26;
      if ( v28 == CRectanglesShape::`scalar deleting destructor' )
        CRectanglesShape::`scalar deleting destructor'(v26, 1);
      else
        v28(v26, 1);
      if ( v34 )
        std::default_delete<CShape>::operator()(v29, v34);
    }
LABEL_12:
    HIDWORD(v53) = 0;
    v48 = &CRectanglesShape::`vftable';
    DynArrayImpl<0>::ShrinkToSize((__int64)&lpMem, 0x10u);
    if ( v55 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      v55 = 0LL;
    }
    if ( lpMem != v51 )
    {
      operator delete(lpMem);
      lpMem = 0LL;
    }
    v20 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x60u);
  if ( v34 )
    std::default_delete<CShape>::operator()(v31, v34);
LABEL_38:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v48);
  if ( v33 )
    std::default_delete<CShape>::operator()(v32, v33);
  return (unsigned int)v17;
}
