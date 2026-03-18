/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x1800598B4
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BDD80 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0BrushPrimitiveDrawListBrushLayout@@QEAA@AEBU0@@Z @ 0x18015C80C (--0BrushPrimitiveDrawListBrushLayout@@QEAA@AEBU0@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(CBrushDrawListGenerator *this, struct CShape **a2)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  __int64 v8; // xmm1_8
  int v9; // ebx
  struct CShape *v10; // rdi
  struct CShape *v11; // rsi
  CRectanglesShape *v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rbx
  bool v15; // zf
  unsigned int v16; // xmm6_4
  unsigned int v17; // xmm7_4
  unsigned int v18; // xmm8_4
  unsigned int v19; // xmm9_4
  __int64 v20; // rdx
  unsigned int v21; // xmm0_4
  unsigned int v22; // xmm1_4
  unsigned int v23; // xmm2_4
  unsigned int v24; // xmm3_4
  int v25; // xmm4_4
  unsigned int v26; // xmm5_4
  CRectanglesShape **v27; // rsi
  CRectanglesShape *v28; // r14
  CRectanglesShape *v29; // rcx
  CRectanglesShape *v30; // rbx
  CRectanglesShape *v31; // rcx
  void *(__fastcall *v33)(CRectanglesShape *__hidden, unsigned int); // rax
  void *(__fastcall *v34)(CRectanglesShape *__hidden, unsigned int); // rax
  void *(__fastcall *v35)(CRectanglesShape *__hidden, unsigned int); // rax
  void *(__fastcall *v36)(CRectanglesShape *__hidden, unsigned int); // rax
  void *(__fastcall *v37)(CRectanglesShape *__hidden, unsigned int); // rax
  CRectanglesShape *v38; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  int v40; // [rsp+50h] [rbp-B8h]
  int v41; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  __int64 v44; // [rsp+68h] [rbp-A0h]
  int v45; // [rsp+70h] [rbp-98h]
  int v46; // [rsp+74h] [rbp-94h]
  _BYTE v47[12]; // [rsp+78h] [rbp-90h]
  __int64 v48; // [rsp+84h] [rbp-84h]
  CRectanglesShape **v49; // [rsp+98h] [rbp-70h]
  CRectanglesShape *v50; // [rsp+A0h] [rbp-68h] BYREF
  char v51; // [rsp+A8h] [rbp-60h]
  char v52[76]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v53; // [rsp+104h] [rbp-4h]
  char v54; // [rsp+128h] [rbp+20h]
  CRectanglesShape *v55; // [rsp+138h] [rbp+30h] BYREF
  float v56; // [rsp+140h] [rbp+38h]
  float v57; // [rsp+144h] [rbp+3Ch]
  void **v58; // [rsp+148h] [rbp+40h] BYREF
  void *lpMem; // [rsp+150h] [rbp+48h] BYREF
  _BYTE *v60; // [rsp+158h] [rbp+50h]
  int v61; // [rsp+160h] [rbp+58h]
  __int64 v62; // [rsp+164h] [rbp+5Ch]
  _BYTE v63[16]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v64; // [rsp+180h] [rbp+78h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+188h] [rbp+80h] BYREF
  struct CShape *v66[2]; // [rsp+1A0h] [rbp+98h] BYREF
  char v67; // [rsp+1B0h] [rbp+A8h]

  v2 = *((float *)this + 2);
  v3 = *((float *)this + 3);
  lpMem = v63;
  v38 = 0LL;
  v58 = &CRectanglesShape::`vftable';
  v64 = 0LL;
  v61 = 1;
  v62 = 1LL;
  v60 = v63;
  v6 = v2 + 0.0;
  v7 = v3 + 0.0;
  DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
  if ( v64 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    v64 = 0LL;
  }
  v55 = 0LL;
  v56 = v6;
  v57 = v7;
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(&lpMem, &v55, 1LL);
  v8 = *((_QWORD *)this + 4);
  *(_OWORD *)&matrix.m11 = *((_OWORD *)this + 1);
  *(_QWORD *)&matrix.m[2][0] = v8;
  D2D1InvertMatrix(&matrix);
  v40 = 0;
  v41 = 0;
  v46 = 0;
  *(_DWORD *)&v47[8] = 0;
  v42 = *(_QWORD *)&matrix.m[1][0];
  v39 = *(_QWORD *)&matrix.m11;
  *(_QWORD *)v47 = *(_QWORD *)&matrix.m[2][0];
  v48 = 1065353216LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 1065353216;
  v66[0] = (struct CShape *)&v38;
  v66[1] = 0LL;
  v67 = 1;
  v9 = CShape::CopyShape((CShape *)&v58, (const struct CMILMatrix *)&v39, &v66[1]);
  if ( v67 )
  {
    v10 = v66[0];
    v11 = v66[1];
    v12 = *(CRectanglesShape **)v66[0];
    if ( v66[1] != *(struct CShape **)v66[0] )
    {
      if ( v12 )
      {
        v33 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v12;
        if ( v33 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v12, 1u);
        else
          v33(v12, 1u);
      }
      *(_QWORD *)v10 = v11;
    }
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x75u);
    goto LABEL_56;
  }
  v58 = &CRectanglesShape::`vftable';
  HIDWORD(v62) = 0;
  DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
  if ( v64 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    v64 = 0LL;
  }
  if ( lpMem != v60 )
    WPF::ProcessHeapImpl::Free(lpMem);
  v13 = 0;
  if ( !*((_DWORD *)this + 26) )
  {
LABEL_36:
    v9 = 0;
    *a2 = v38;
    return (unsigned int)v9;
  }
  while ( 1 )
  {
    v14 = *((_QWORD *)this + v13 + 9);
    if ( !v14
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*((_QWORD *)this + v13 + 9)) == 1
      && !*(_BYTE *)(v14 + 152) )
    {
      goto LABEL_35;
    }
    v15 = *(_DWORD *)(v14 + 24) == 2;
    lpMem = v63;
    v60 = v63;
    v58 = &CRectanglesShape::`vftable';
    v61 = 1;
    v62 = 1LL;
    v64 = 0LL;
    if ( !v15 )
      break;
    BrushPrimitiveDrawListBrushLayout::BrushPrimitiveDrawListBrushLayout(
      (BrushPrimitiveDrawListBrushLayout *)v52,
      (const struct BrushPrimitiveDrawListBrushLayout *)(v14 + 28));
    if ( v54 )
    {
      *(_OWORD *)v66 = v53;
      CRectanglesShape::SetSingleRect((CRectanglesShape *)&v58, (const struct MilRectF *)v66);
      goto LABEL_20;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v58);
LABEL_35:
    if ( ++v13 >= *((_DWORD *)this + 26) )
      goto LABEL_36;
  }
  v16 = *(_DWORD *)(v14 + 8);
  v17 = *(_DWORD *)(v14 + 12);
  v18 = *(_DWORD *)(v14 + 16);
  v19 = *(_DWORD *)(v14 + 20);
  HIDWORD(v62) = 0;
  DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
  if ( v64 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    v64 = 0LL;
  }
  *(_QWORD *)&matrix.m11 = __PAIR64__(v17, v16);
  *(_QWORD *)&matrix.m[1][0] = __PAIR64__(v19, v18);
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    &lpMem,
    &matrix,
    1LL);
LABEL_20:
  v21 = *(_DWORD *)(v14 + 28);
  v22 = *(_DWORD *)(v14 + 32);
  v23 = *(_DWORD *)(v14 + 40);
  v24 = *(_DWORD *)(v14 + 44);
  v25 = *(_DWORD *)(v14 + 52);
  v26 = *(_DWORD *)(v14 + 56);
  v40 = 0;
  v41 = 0;
  v46 = 0;
  v49 = &v55;
  v39 = __PAIR64__(v22, v21);
  v42 = __PAIR64__(v24, v23);
  *(_DWORD *)v47 = v25;
  *(_QWORD *)&v47[4] = v26;
  v48 = 1065353216LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 1065353216;
  v55 = 0LL;
  v50 = 0LL;
  v51 = 1;
  v9 = CShape::Combine(v38, v20, &v58, &v39, 1, &v50);
  if ( v51 )
  {
    v27 = v49;
    v28 = v50;
    v29 = *v49;
    if ( v50 != *v49 )
    {
      if ( v29 )
      {
        v34 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v29;
        if ( v34 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v29, 1u);
        else
          v34(v29, 1u);
      }
      *v27 = v28;
    }
  }
  if ( v9 >= 0 )
  {
    v30 = v55;
    v31 = 0LL;
    v55 = 0LL;
    if ( v30 != v38 )
    {
      if ( v38 )
      {
        if ( **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v38 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v38, 1u);
        else
          (**(void (__fastcall ***)(CRectanglesShape *, __int64))v38)(v38, 1LL);
        v31 = v55;
      }
      v38 = v30;
      if ( v31 )
      {
        v35 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v31;
        if ( v35 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v31, 1u);
        else
          v35(v31, 1u);
      }
    }
    v58 = &CRectanglesShape::`vftable';
    HIDWORD(v62) = 0;
    DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
    if ( v64 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
      v64 = 0LL;
    }
    if ( lpMem != v60 )
      WPF::ProcessHeapImpl::Free(lpMem);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA4u);
  if ( v55 )
  {
    v36 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v55;
    if ( v36 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v55, 1u);
    else
      v36(v55, 1u);
  }
LABEL_56:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v58);
  if ( v38 )
  {
    v37 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v38;
    if ( v37 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v38, 1u);
    else
      v37(v38, 1u);
  }
  return (unsigned int)v9;
}
