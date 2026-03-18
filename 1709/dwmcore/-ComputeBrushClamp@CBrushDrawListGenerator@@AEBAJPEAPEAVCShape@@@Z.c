/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x18004A790
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 * Callees:
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18006A440 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097BAC (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(CBrushDrawListGenerator *this, struct CShape **a2)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  __int64 v8; // xmm1_8
  int v9; // ebx
  CRectanglesShape **v10; // rsi
  struct CShape *v11; // r14
  CRectanglesShape *v12; // rcx
  unsigned int i; // esi
  __int64 v14; // rbx
  bool v15; // zf
  CRectanglesShape ***v16; // rdx
  __int64 v17; // rdx
  CRectanglesShape *v18; // r14
  int v19; // xmm1_4
  unsigned int v20; // xmm2_4
  unsigned int v21; // xmm3_4
  int v22; // xmm4_4
  unsigned int v23; // xmm5_4
  int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // r14
  CRectanglesShape *v27; // rcx
  CRectanglesShape *v28; // rbx
  CRectanglesShape *v29; // rax
  CRectanglesShape *(__fastcall *v30)(CRectanglesShape *, char); // rax
  __int64 result; // rax
  unsigned int v32; // xmm6_4
  unsigned int v33; // xmm7_4
  unsigned int v34; // xmm8_4
  unsigned int v35; // xmm9_4
  __int128 v36; // kr10_16
  CRectanglesShape *v37; // rcx
  CRectanglesShape *(__fastcall *v38)(CRectanglesShape *, char); // rax
  CRectanglesShape *(__fastcall *v39)(CRectanglesShape *, char); // rax
  int v40; // eax
  CRectanglesShape *(__fastcall *v41)(CRectanglesShape *, char); // rax
  CRectanglesShape *(__fastcall *v42)(CRectanglesShape *, char); // rax
  CRectanglesShape *(__fastcall *v43)(CRectanglesShape *, char); // rax
  CRectanglesShape *v44[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v47; // [rsp+58h] [rbp-B0h]
  _QWORD v48[3]; // [rsp+60h] [rbp-A8h]
  _BYTE v49[12]; // [rsp+78h] [rbp-90h]
  __int64 v50; // [rsp+84h] [rbp-84h]
  __int128 v51; // [rsp+E4h] [rbp-24h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+118h] [rbp+10h] BYREF
  void **v53; // [rsp+138h] [rbp+30h] BYREF
  void *lpMem; // [rsp+140h] [rbp+38h] BYREF
  _BYTE *v55; // [rsp+148h] [rbp+40h]
  int v56; // [rsp+150h] [rbp+48h]
  __int64 v57; // [rsp+154h] [rbp+4Ch]
  _BYTE v58[16]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v59; // [rsp+170h] [rbp+68h]
  CRectanglesShape *v60; // [rsp+178h] [rbp+70h] BYREF
  float v61; // [rsp+180h] [rbp+78h]
  float v62; // [rsp+184h] [rbp+7Ch]
  CRectanglesShape **v63; // [rsp+188h] [rbp+80h] BYREF
  struct CShape *v64; // [rsp+190h] [rbp+88h] BYREF
  char v65; // [rsp+198h] [rbp+90h]
  __int128 v66; // [rsp+1A0h] [rbp+98h] BYREF

  v44[0] = 0LL;
  if ( *((_BYTE *)this + 108) )
  {
    v4 = *((float *)this + 2);
    v5 = *((float *)this + 3);
    lpMem = v58;
    v53 = &CRectanglesShape::`vftable';
    v55 = v58;
    v6 = v4 + 0.0;
    v7 = v5 + 0.0;
    v56 = 1;
    v57 = 1LL;
    v59 = 0LL;
    DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
    if ( v59 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      v59 = 0LL;
    }
    v61 = v6;
    v62 = v7;
    v60 = 0LL;
    DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      &lpMem,
      &v60,
      1LL);
    v8 = *((_QWORD *)this + 4);
    *(_OWORD *)&matrix.m11 = *((_OWORD *)this + 1);
    *(_QWORD *)&matrix.m[2][0] = v8;
    D2D1InvertMatrix(&matrix);
    v47 = *(_QWORD *)&matrix.m[1][0];
    v45 = *(_QWORD *)&matrix.m11;
    *(_OWORD *)&v48[1] = _xmm;
    *(_QWORD *)v49 = *(_QWORD *)&matrix.m[2][0];
    v50 = 1065353216LL;
    v46 = 0LL;
    v48[0] = 0LL;
    *(_DWORD *)&v49[8] = 0;
    v63 = v44;
    v64 = 0LL;
    v65 = 1;
    v9 = CShape::CopyShape((CShape *)&v53, (const struct CMILMatrix *)&v45, &v64);
    if ( v65 )
    {
      v10 = v63;
      v11 = v64;
      v12 = *v63;
      if ( v64 != *v63 )
      {
        if ( v12 )
        {
          v38 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v12;
          if ( v38 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v12, 1);
          else
            v38(v12, 1);
        }
        *v10 = v11;
      }
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x71u);
LABEL_73:
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v53);
LABEL_74:
      if ( v44[0] )
      {
        v43 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v44[0];
        if ( v43 != CRectanglesShape::`scalar deleting destructor' )
        {
          v43(v44[0], 1);
          return (unsigned int)v9;
        }
        CRectanglesShape::`scalar deleting destructor'(v44[0], 1);
      }
      return (unsigned int)v9;
    }
    v53 = &CRectanglesShape::`vftable';
    HIDWORD(v57) = 0;
    DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
    if ( v59 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      v59 = 0LL;
    }
    if ( lpMem != v55 )
      WPF::ProcessHeapImpl::Free(lpMem);
  }
  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v14 = *((_QWORD *)this + i + 9);
    if ( !v14
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*((_QWORD *)this + i + 9)) == 1
      && !*(_BYTE *)(v14 + 168) )
    {
      continue;
    }
    v15 = *(_DWORD *)(v14 + 24) == 2;
    lpMem = v58;
    v55 = v58;
    v53 = &CRectanglesShape::`vftable';
    v56 = 1;
    v57 = 1LL;
    v59 = 0LL;
    if ( v15 )
    {
      v51 = *(_OWORD *)(v14 + 104);
      if ( !*(_BYTE *)(v14 + 140) )
      {
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v53);
        continue;
      }
      HIDWORD(v57) = 0;
      DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
      if ( v59 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
        v59 = 0LL;
      }
      v16 = (CRectanglesShape ***)&v66;
      v66 = v51;
    }
    else
    {
      v32 = *(_DWORD *)(v14 + 8);
      v33 = *(_DWORD *)(v14 + 12);
      v34 = *(_DWORD *)(v14 + 16);
      v35 = *(_DWORD *)(v14 + 20);
      HIDWORD(v57) = 0;
      DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
      if ( v59 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
        v59 = 0LL;
      }
      v63 = (CRectanglesShape **)__PAIR64__(v33, v32);
      v16 = &v63;
      v64 = (struct CShape *)__PAIR64__(v35, v34);
    }
    DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      &lpMem,
      v16,
      1LL);
    v18 = v44[0];
    v19 = *(_DWORD *)(v14 + 32);
    v20 = *(_DWORD *)(v14 + 40);
    v21 = *(_DWORD *)(v14 + 44);
    v22 = *(_DWORD *)(v14 + 52);
    v23 = *(_DWORD *)(v14 + 56);
    LODWORD(v45) = *(_DWORD *)(v14 + 28);
    HIDWORD(v45) = v19;
    v47 = __PAIR64__(v21, v20);
    *(_DWORD *)v49 = v22;
    *(_QWORD *)&v49[4] = v23;
    v50 = 1065353216LL;
    v46 = 0LL;
    v48[0] = 0LL;
    *(_OWORD *)&v48[1] = _xmm;
    *(_QWORD *)&matrix.m[1][0] = 0LL;
    LOBYTE(matrix.m[2][0]) = 1;
    if ( v44[0] )
    {
      v60 = 0LL;
      *(_QWORD *)&matrix.m11 = &v60;
      v24 = CShape::TryOptimizedCombinePaths(v44[0], v17, &v53, &v45, 1, matrix.m[1]);
      v9 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x18Du);
      }
      else if ( !*(_QWORD *)&matrix.m[1][0] )
      {
        v40 = CShape::D2DCombine(v18, v25, &v53, &v45, 1, matrix.m[1]);
        v9 = v40;
        if ( v40 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x19Cu);
      }
      if ( LOBYTE(matrix.m[2][0]) )
      {
        v26 = *(_QWORD **)&matrix.m11;
        v27 = **(CRectanglesShape ***)&matrix.m11;
        if ( *(_QWORD *)&matrix.m[1][0] != **(_QWORD **)&matrix.m11 )
        {
          if ( v27 )
          {
            v41 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v27;
            if ( v41 == CRectanglesShape::`scalar deleting destructor' )
              CRectanglesShape::`scalar deleting destructor'(v27, 1);
            else
              v41(v27, 1);
          }
          *v26 = *(_QWORD *)&matrix.m[1][0];
        }
      }
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xA6u);
        if ( v60 )
        {
          v42 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v60;
          if ( v42 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v60, 1);
          else
            v42(v60, 1);
        }
        goto LABEL_73;
      }
      v28 = v60;
      v29 = 0LL;
      v60 = 0LL;
      if ( v28 != v44[0] )
      {
        if ( v44[0] )
        {
          v30 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v44[0];
          if ( v30 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v44[0], 1);
          else
            v30(v44[0], 1);
          v29 = v60;
        }
        v44[0] = v28;
        if ( v29 )
        {
          if ( **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v29 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v29, 1);
          else
            (**(void (__fastcall ***)(CRectanglesShape *, __int64))v29)(v29, 1LL);
        }
      }
    }
    else
    {
      *(_QWORD *)&matrix.m11 = v44;
      v9 = CShape::CopyShape((CShape *)&v53, (const struct CMILMatrix *)&v45, (struct CShape **)matrix.m[1]);
      if ( LOBYTE(matrix.m[2][0]) )
      {
        v36 = *(_OWORD *)&matrix.m11;
        v37 = **(CRectanglesShape ***)&matrix.m11;
        if ( *(_QWORD *)&matrix.m[1][0] != **(_QWORD **)&matrix.m11 )
        {
          if ( v37 )
          {
            v39 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v37;
            if ( v39 == CRectanglesShape::`scalar deleting destructor' )
              CRectanglesShape::`scalar deleting destructor'(v37, 1);
            else
              v39(v37, 1);
          }
          *(_QWORD *)v36 = *((_QWORD *)&v36 + 1);
        }
      }
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Bu);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v53);
        goto LABEL_74;
      }
    }
    v53 = &CRectanglesShape::`vftable';
    HIDWORD(v57) = 0;
    DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
    if ( v59 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      v59 = 0LL;
    }
    if ( lpMem != v55 )
      WPF::ProcessHeapImpl::Free(lpMem);
  }
  result = 0LL;
  *a2 = v44[0];
  return result;
}
