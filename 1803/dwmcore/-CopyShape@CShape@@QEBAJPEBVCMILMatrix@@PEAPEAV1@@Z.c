/*
 * XREFs of ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8
 * Callers:
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1800190E8 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180028168 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006F99C (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCShape@@@Z @ 0x18008BCE0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@PEAPEAVCSha.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x1800943C0 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18017B440 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801B2720 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x18001C6E0 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180063E50 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180064190 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180064290 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B270 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18008BA48 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18008C630 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x18013F2A8 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18020A96C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18020C784 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CShape::CopyShape(
        struct ID2D1RegionGeometry **this,
        const struct CMILMatrix *a2,
        struct CShape **a3)
{
  signed int v3; // edi
  char *v4; // r13
  CMILMatrix *v6; // r12
  int v8; // eax
  int v9; // eax
  int Current; // eax
  CRegionShape *v11; // rcx
  _QWORD *v12; // rbx
  int v13; // edx
  unsigned int v14; // r12d
  struct ID2D1RegionGeometry *v15; // rdi
  __int64 v16; // rcx
  CRegionShape *v17; // r14
  char (__fastcall *v19)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  SIZE_T v21; // rax
  char *v22; // rax
  __int64 v23; // rdx
  char (__fastcall *v24)(__int64, __int64, int); // rax
  struct CRectanglesShape *v25; // rcx
  char *v26; // rbx
  struct CObjectCache *ObjectCache; // rax
  int v28; // edx
  unsigned int v29; // r14d
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  struct CShape *v35; // rax
  CPathSegmentsShape *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  int v39; // eax
  CComplexShape *v40; // rax
  unsigned int v41; // [rsp+20h] [rbp-50h]
  unsigned int v42; // [rsp+30h] [rbp-40h] BYREF
  CRegionShape *v43; // [rsp+38h] [rbp-38h]
  CRegionShape *v44; // [rsp+40h] [rbp-30h] BYREF
  struct ID2D1Geometry *v45; // [rsp+48h] [rbp-28h] BYREF
  __int128 v46; // [rsp+50h] [rbp-20h]
  void *retaddr; // [rsp+A8h] [rbp+38h]

  *(_QWORD *)&v46 = a2;
  v45 = 0LL;
  v3 = 0;
  *a3 = 0LL;
  v4 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v6 = a2;
  if ( a2 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(a2) )
  {
    v19 = (char (__fastcall *)(CRectanglesShape *, unsigned int *))*((_QWORD *)*this + 5);
    if ( v19 == CRectanglesShape::IsRectangles )
      IsRectangles = CRectanglesShape::IsRectangles((CRectanglesShape *)this, &v42);
    else
      IsRectangles = v19((CRectanglesShape *)this, &v42);
    if ( !IsRectangles || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v6) )
      goto LABEL_73;
    if ( v42 )
    {
      v21 = 16LL * v42;
      if ( !is_mul_ok(v42, 0x10uLL) )
        v21 = -1LL;
      if ( !v21 )
        v21 = 1LL;
      v22 = (char *)HeapAlloc(WPF::g_processHeap, 0, v21);
      v4 = v22;
      if ( !v22 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v23 = (__int64)v22;
      v24 = (char (__fastcall *)(__int64, __int64, int))*((_QWORD *)*this + 6);
      if ( v24 == CRectanglesShape::GetRectangles )
        CRectanglesShape::GetRectangles((__int64)this, v23, v42);
      else
        v24((__int64)this, v23, v42);
      if ( v42 )
      {
        do
        {
          v26 = &v4[16 * v3];
          CMILMatrix::Transform2DBoundsHelper<0>(v6);
          ++v3;
          *(_OWORD *)v26 = v46;
        }
        while ( v3 < v42 );
      }
      ObjectCache = CThreadContext::GetObjectCache(v25);
      v12 = 0LL;
      v28 = *((_DWORD *)ObjectCache + 1);
      if ( v28 )
      {
        v12 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = *v12;
        *((_DWORD *)ObjectCache + 1) = v28 - 1;
      }
      if ( !v12 )
      {
        v12 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
        if ( !v12 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      v12[1] = 0LL;
      *v12 = &CRectanglesShape::`vftable';
      *((_DWORD *)v12 + 10) = 0;
      v12[2] = v12 + 6;
      v12[3] = v12 + 6;
      *((_DWORD *)v12 + 8) = 1;
      *((_DWORD *)v12 + 9) = 1;
      v12[8] = 0LL;
      v29 = v42;
      *((_DWORD *)v12 + 10) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)(v12 + 2), 0x10u);
      v30 = v12[8];
      if ( v30 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        v12[8] = 0LL;
      }
      v31 = DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
              v12 + 2,
              v4,
              v29);
      v17 = v43;
      v3 = v31;
      if ( v31 < 0 )
      {
        v34 = 341;
        goto LABEL_81;
      }
      *a3 = (struct CShape *)v12;
      goto LABEL_15;
    }
    v35 = (struct CShape *)operator new(0x18uLL);
    if ( v35 )
    {
      *((_QWORD *)v35 + 1) = 0LL;
      *((_QWORD *)v35 + 2) = 0LL;
      *(_QWORD *)v35 = &CRegionShape::`vftable';
    }
    *a3 = v35;
    if ( v35 )
      goto LABEL_73;
    v41 = 349;
    goto LABEL_58;
  }
  v8 = (*((__int64 (__fastcall **)(struct ID2D1RegionGeometry **))*this + 1))(this);
  if ( !v8 )
  {
    v37 = operator new(0x50uLL);
    v38 = v37;
    if ( v37 )
    {
      v37[1] = 0LL;
      *v37 = &CRoundedRectangleShape::`vftable';
      *((_OWORD *)v37 + 1) = *((_OWORD *)this + 1);
      *((_OWORD *)v37 + 2) = *((_OWORD *)this + 2);
      *((_OWORD *)v37 + 3) = *((_OWORD *)this + 3);
      v39 = *((_DWORD *)this + 16);
      v38[9] = 0LL;
      *((_DWORD *)v38 + 16) = v39;
    }
    else
    {
      v38 = 0LL;
    }
    *a3 = (struct CShape *)v38;
    if ( v38 )
      goto LABEL_73;
    v41 = 276;
LABEL_58:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v41);
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v32 = v9 - 1;
    if ( !v32 )
    {
      v33 = CRegionShape::Create(this[2], &v44);
      v3 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x12Du);
        v17 = v44;
        goto LABEL_83;
      }
      v17 = 0LL;
      *a3 = v44;
      goto LABEL_15;
    }
    if ( v32 == 2 )
    {
      v36 = (CPathSegmentsShape *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
      if ( v36 )
        v36 = CPathSegmentsShape::CPathSegmentsShape(v36, this[2]);
      if ( !v36 )
      {
        v41 = 314;
        goto LABEL_58;
      }
      *a3 = v36;
    }
LABEL_73:
    v17 = v43;
    goto LABEL_15;
  }
  Current = CThreadContext::GetCurrent(&v44);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v11 = v44;
  v12 = 0LL;
  v13 = *((_DWORD *)v44 + 3);
  if ( v13 )
  {
    v12 = (_QWORD *)*((_QWORD *)v44 + 2);
    *((_QWORD *)v44 + 2) = *v12;
    *((_DWORD *)v11 + 3) = v13 - 1;
  }
  if ( !v12 )
  {
    v12 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
    if ( !v12 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v12[1] = 0LL;
  *v12 = &CRectanglesShape::`vftable';
  v12[2] = v12 + 6;
  v12[3] = v12 + 6;
  *((_DWORD *)v12 + 8) = 1;
  *(_QWORD *)((char *)v12 + 36) = 1LL;
  v12[8] = 0LL;
  v14 = *((_DWORD *)this + 10);
  if ( v14 )
  {
    v15 = this[2];
    *((_DWORD *)v12 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)(v12 + 2), 0x10u);
    v16 = v12[8];
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v12[8] = 0LL;
    }
    v3 = DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
           v12 + 2,
           v15,
           v14);
  }
  else
  {
    CRectanglesShape::Reset((CRectanglesShape *)v12);
  }
  v17 = v43;
  if ( v3 < 0 )
  {
    v34 = 288;
    goto LABEL_81;
  }
  v6 = (CMILMatrix *)v46;
  *a3 = (struct CShape *)v12;
LABEL_15:
  if ( *a3 )
    goto LABEL_16;
  v3 = (*((__int64 (__fastcall **)(struct ID2D1RegionGeometry **, CMILMatrix *, struct ID2D1Geometry **))*this + 3))(
         this,
         v6,
         &v45);
  if ( v3 >= 0 )
  {
    v40 = (CComplexShape *)operator new(0x18uLL);
    if ( v40 )
      v40 = CComplexShape::CComplexShape(v40, v45);
    if ( v40 )
    {
      *a3 = v40;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x166u);
    }
    goto LABEL_16;
  }
  v12 = 0LL;
  v34 = 355;
LABEL_81:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v34);
  if ( v12 )
  {
    CRectanglesShape::`scalar deleting destructor'((CRectanglesShape *)v12, 1);
LABEL_83:
    if ( v17 )
      CRegionShape::`vector deleting destructor'(v17, 1);
  }
LABEL_16:
  if ( v4 )
    HeapFree(WPF::g_processHeap, 0, v4);
LABEL_18:
  if ( v45 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v45 + 16LL))(v45);
  return (unsigned int)v3;
}
