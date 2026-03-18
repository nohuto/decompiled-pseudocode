/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C
 * Callers:
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x18004A790 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036948 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036B80 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180047BD0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18006A440 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x18008695C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ??1CRegion@@QEAA@XZ @ 0x180089058 (--1CRegion@@QEAA@XZ.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800B9E18 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??$BuildFromRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800C5B18 (--$BuildFromRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CReg.c)
 *     ?GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z @ 0x1800C5B24 (-GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x180119DD8 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_N_N@Z.c)
 *     ??0CRegion@@QEAA@XZ @ 0x18011BD84 (--0CRegion@@QEAA@XZ.c)
 *     ?Intersect@CRegion@@QEAAJAEBV1@@Z @ 0x18011BD94 (-Intersect@CRegion@@QEAAJAEBV1@@Z.c)
 *     ?Union@CRegion@@QEAAJAEBV1@@Z @ 0x18011BD9C (-Union@CRegion@@QEAAJAEBV1@@Z.c)
 *     ?Subtract@CRegion@@QEAAJAEBV1@@Z @ 0x18011BDA4 (-Subtract@CRegion@@QEAAJAEBV1@@Z.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801CB528 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CShape::TryOptimizedCombinePaths(
        CShape *a1,
        __int64 a2,
        CShape *a3,
        const struct CMILMatrix *a4,
        int a5,
        struct CShape **a6)
{
  unsigned int v9; // ebx
  bool v10; // dl
  int v11; // eax
  unsigned __int64 v12; // rcx
  DWORD v13; // r9d
  signed int v14; // eax
  signed int v15; // eax
  signed int v16; // eax
  signed int v17; // eax
  CRegion *v18; // rcx
  _QWORD *v19; // rax
  struct CShape *v20; // rdi
  LPVOID Value; // rdi
  _QWORD *v22; // rax
  int v23; // ecx
  _QWORD *v24; // rsi
  __int64 v25; // rcx
  signed int v26; // eax
  signed int v27; // eax
  signed int v28; // eax
  signed int v29; // eax
  bool v30; // dl
  signed int CRegion; // eax
  signed int v32; // eax
  signed int v33; // eax
  signed int v34; // eax
  signed int v35; // eax
  signed int v36; // eax
  signed int v37; // eax
  signed int v38; // eax
  signed int v39; // eax
  signed int v40; // eax
  unsigned __int64 v41; // rcx
  _QWORD *v42; // rax
  struct CShape *v43; // rdi
  _QWORD *v44; // rax
  struct CShape *v45; // rdi
  bool v46; // dl
  _QWORD *v47; // rax
  struct CShape *v48; // rdi
  unsigned int v50; // [rsp+20h] [rbp-E0h]
  unsigned int v51; // [rsp+30h] [rbp-D0h] BYREF
  struct CRegionShape *v52[2]; // [rsp+38h] [rbp-C8h] BYREF
  float v53[4]; // [rsp+48h] [rbp-B8h] BYREF
  struct CRegionShape *v54[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v55[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v56[80]; // [rsp+C0h] [rbp-40h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v9 = 0;
  *a6 = 0LL;
  if ( !a1 )
    goto LABEL_101;
  if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1)
    || !a3
    || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
    {
LABEL_103:
      if ( !a5 )
      {
        if ( !a1 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
        {
          if ( !a4 || CShape::IsAxisAlignedRectangle(a3) && CMILMatrix::Is2DAxisAlignedPreserving(a4, v46) )
          {
            v11 = CShape::CopyShape(a3, a4, a6);
            v9 = v11;
            if ( v11 < 0 )
            {
              v50 = 616;
              goto LABEL_21;
            }
          }
        }
        else
        {
          v11 = CShape::CopyShape(a1, 0LL, a6);
          v9 = v11;
          if ( v11 < 0 )
          {
            v50 = 627;
            goto LABEL_21;
          }
        }
        return v9;
      }
      v41 = (unsigned int)(a5 - 1);
      if ( a5 == 1 )
      {
        v44 = CRectanglesShape::operator new(v41);
        v45 = (struct CShape *)v44;
        if ( v44 )
        {
          *v44 = &CRectanglesShape::`vftable';
          v44[1] = v44 + 5;
          v44[2] = v44 + 5;
          *((_DWORD *)v44 + 6) = 1;
          *(_QWORD *)((char *)v44 + 28) = 1LL;
          `vector constructor iterator'(
            (CInputSinkStruct::InputQueueInfo *)(v44 + 5),
            16LL,
            1LL,
            COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
          *((_QWORD *)v45 + 7) = 0LL;
        }
        else
        {
          v45 = 0LL;
        }
        *a6 = v45;
        if ( v45 )
          return v9;
        v50 = 639;
      }
      else
      {
        if ( a5 != 2 )
          return v9;
        if ( a1 && !(*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
        {
          v11 = CShape::CopyShape(a1, 0LL, a6);
          v9 = v11;
          if ( v11 < 0 )
          {
            v50 = 665;
            goto LABEL_21;
          }
          return v9;
        }
        v42 = CRectanglesShape::operator new(v41);
        v43 = (struct CShape *)v42;
        if ( v42 )
        {
          *v42 = &CRectanglesShape::`vftable';
          v42[1] = v42 + 5;
          v42[2] = v42 + 5;
          *((_DWORD *)v42 + 6) = 1;
          *(_QWORD *)((char *)v42 + 28) = 1LL;
          `vector constructor iterator'(
            (CInputSinkStruct::InputQueueInfo *)(v42 + 5),
            16LL,
            1LL,
            COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
          *((_QWORD *)v43 + 7) = 0LL;
        }
        else
        {
          v43 = 0LL;
        }
        *a6 = v43;
        if ( v43 )
          return v9;
        v50 = 653;
      }
      goto LABEL_134;
    }
LABEL_101:
    if ( !a3 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
    {
      v47 = CRectanglesShape::operator new((unsigned __int64)a1);
      v48 = (struct CShape *)v47;
      if ( v47 )
      {
        *v47 = &CRectanglesShape::`vftable';
        v47[1] = v47 + 5;
        v47[2] = v47 + 5;
        *((_DWORD *)v47 + 6) = 1;
        *(_QWORD *)((char *)v47 + 28) = 1LL;
        `vector constructor iterator'(
          (CInputSinkStruct::InputQueueInfo *)(v47 + 5),
          16LL,
          1LL,
          COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
        *((_QWORD *)v48 + 7) = 0LL;
      }
      else
      {
        v48 = 0LL;
      }
      *a6 = v48;
      if ( v48 )
        return v9;
      v50 = 591;
      goto LABEL_134;
    }
    goto LABEL_103;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, unsigned int *))(*(_QWORD *)a1 + 40LL))(a1, &v51)
    || v51 != 1
    || !(*(unsigned __int8 (__fastcall **)(CShape *, unsigned int *))(*(_QWORD *)a3 + 40LL))(a3, &v51)
    || v51 != 1
    || a4 && !CMILMatrix::Is2DAxisAlignedPreserving(a4, v10) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CShape *, unsigned int *))(*(_QWORD *)a1 + 40LL))(a1, &v51)
      || !(*(unsigned __int8 (__fastcall **)(CShape *, struct CRegionShape **))(*(_QWORD *)a3 + 40LL))(a3, v54)
      || a4 && !CMILMatrix::Is2DAxisAlignedPreserving(a4, v30) )
    {
      return v9;
    }
    CRegion::CRegion((CRegion *)v56);
    CRegion::CRegion((CRegion *)v55);
    if ( v51 <= 1 )
    {
      v32 = (*(__int64 (__fastcall **)(CShape *, float *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v53, 0LL);
      v9 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v32, 0x303u);
        goto LABEL_76;
      }
      v33 = CRegion::BuildFromRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(v56, v53);
      v9 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v33, 0x304u);
        goto LABEL_76;
      }
    }
    else
    {
      CRegion = CRegionShape::GetCRegion(a1, (struct CRegion *)v56, 0LL);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CRegion, 0x2FDu);
LABEL_76:
        CRegion::~CRegion((CRegion *)v55);
        v18 = (CRegion *)v56;
        goto LABEL_31;
      }
    }
    if ( LODWORD(v54[0]) <= 1 )
    {
      v35 = (*(__int64 (__fastcall **)(CShape *, float *, const struct CMILMatrix *))(*(_QWORD *)a3 + 32LL))(
              a3,
              v53,
              a4);
      v9 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v35, 0x310u);
        goto LABEL_76;
      }
      v36 = CRegion::BuildFromRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(v55, v53);
      v9 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x311u);
        goto LABEL_76;
      }
    }
    else
    {
      v34 = CRegionShape::GetCRegion(a3, (struct CRegion *)v55, a4);
      v9 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x30Au);
        goto LABEL_76;
      }
    }
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v38 = CRegion::Intersect((CRegion *)v56, (const struct CRegion *)v55);
        v9 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v38, 0x318u);
          goto LABEL_76;
        }
      }
      else if ( a5 == 2 )
      {
        v37 = CRegion::Subtract((CRegion *)v56, (const struct CRegion *)v55);
        v9 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v37, 0x31Cu);
          goto LABEL_76;
        }
      }
    }
    else
    {
      v39 = CRegion::Union((CRegion *)v56, (const struct CRegion *)v55);
      v9 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v39, 0x320u);
        goto LABEL_76;
      }
    }
    v40 = CRegionShape::Create((const struct CRegion *)v56, v52);
    v9 = v40;
    if ( v40 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v40, 0x325u);
    else
      *a6 = v52[0];
    goto LABEL_76;
  }
  v11 = (*(__int64 (__fastcall **)(CShape *, struct CRegionShape **, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v52, 0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    v50 = 685;
    goto LABEL_21;
  }
  v11 = (*(__int64 (__fastcall **)(CShape *, float *, const struct CMILMatrix *))(*(_QWORD *)a3 + 32LL))(a3, v53, a4);
  v9 = v11;
  if ( v11 < 0 )
  {
    v50 = 686;
    goto LABEL_21;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)v52, (__int64)v53);
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v22 = operator new(0xA8uLL);
        Value = v22;
        if ( v22 )
        {
          *v22 = 0LL;
          v22[1] = 0LL;
          v22[2] = 0LL;
          v22[3] = 0LL;
          v22[4] = 0LL;
          v22[5] = 0LL;
          v22[6] = 0LL;
          v22[7] = 0LL;
          v22[8] = 0LL;
          v22[9] = 0LL;
          v22[10] = 0LL;
          v22[11] = 0LL;
          v22[12] = 0LL;
          v22[13] = 0LL;
          v22[14] = 0LL;
          v22[15] = 0LL;
          v22[16] = 0LL;
          v22[17] = 0LL;
          v22[18] = 0LL;
          v22[19] = 0LL;
          v22[20] = 0LL;
        }
        else
        {
          Value = 0LL;
        }
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      v23 = *((_DWORD *)Value + 3);
      v24 = 0LL;
      if ( v23 )
      {
        v24 = (_QWORD *)*((_QWORD *)Value + 2);
        *((_QWORD *)Value + 2) = *v24;
        *((_DWORD *)Value + 3) = v23 - 1;
      }
      if ( !v24 )
      {
        v24 = HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
        if ( !v24 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      *v24 = &CRectanglesShape::`vftable';
      v24[1] = v24 + 5;
      v24[2] = v24 + 5;
      *((_DWORD *)v24 + 6) = 1;
      *(_QWORD *)((char *)v24 + 28) = 1LL;
      v24[7] = 0LL;
      *((_DWORD *)v24 + 8) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)(v24 + 1), 0x10u);
      v25 = v24[7];
      if ( v25 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        v24[7] = 0LL;
      }
      *(_OWORD *)v54 = *(_OWORD *)v52;
      DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        (__int64)(v24 + 1),
        v54,
        1u);
      *a6 = (struct CShape *)v24;
      return v9;
    }
    if ( a5 != 2 )
      return v9;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v53, (float *)v52)
      && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v52) )
    {
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(v52, v53) )
      {
        v11 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v11;
        if ( v11 < 0 )
        {
          v50 = 707;
LABEL_21:
          v13 = v11;
LABEL_135:
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v50);
          return v9;
        }
        return v9;
      }
      CRegion::CRegion((CRegion *)v55);
      CRegion::CRegion((CRegion *)v56);
      v14 = CRegion::BuildFromRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(v55, v52);
      v9 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x2C9u);
        goto LABEL_30;
      }
      v15 = CRegion::BuildFromRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(v56, v53);
      v9 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x2CAu);
        goto LABEL_30;
      }
      v16 = CRegion::Subtract((CRegion *)v55, (const struct CRegion *)v56);
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x2CCu);
        goto LABEL_30;
      }
      v17 = CRegionShape::Create((const struct CRegion *)v55, v54);
      v9 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x2CFu);
LABEL_30:
        CRegion::~CRegion((CRegion *)v56);
        v18 = (CRegion *)v55;
LABEL_31:
        CRegion::~CRegion(v18);
        return v9;
      }
LABEL_58:
      *a6 = v54[0];
      goto LABEL_30;
    }
    v19 = CRectanglesShape::operator new(v12);
    v20 = (struct CShape *)v19;
    if ( v19 )
    {
      *v19 = &CRectanglesShape::`vftable';
      v19[1] = v19 + 5;
      v19[2] = v19 + 5;
      *((_DWORD *)v19 + 6) = 1;
      *(_QWORD *)((char *)v19 + 28) = 1LL;
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)(v19 + 5),
        16LL,
        1LL,
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      *((_QWORD *)v20 + 7) = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    *a6 = v20;
    if ( v20 )
      return v9;
    v50 = 702;
LABEL_134:
    v13 = -2147024882;
    v9 = -2147024882;
    goto LABEL_135;
  }
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)v52, v53)
    || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v53) )
  {
    v11 = CShape::CopyShape(a1, 0LL, a6);
    v9 = v11;
    if ( v11 < 0 )
    {
      v50 = 729;
      goto LABEL_21;
    }
    return v9;
  }
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v53, (float *)v52)
    && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v52) )
  {
    CRegion::CRegion((CRegion *)v55);
    CRegion::CRegion((CRegion *)v56);
    v26 = CRegion::BuildFromRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(v55, v52);
    v9 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x2E3u);
      goto LABEL_30;
    }
    v27 = CRegion::BuildFromRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(v56, v53);
    v9 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x2E4u);
      goto LABEL_30;
    }
    v28 = CRegion::Union((CRegion *)v55, (const struct CRegion *)v56);
    v9 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x2E6u);
      goto LABEL_30;
    }
    v29 = CRegionShape::Create((const struct CRegion *)v55, v54);
    v9 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x2E9u);
      goto LABEL_30;
    }
    goto LABEL_58;
  }
  v11 = CShape::CopyShape(a3, a4, a6);
  v9 = v11;
  if ( v11 < 0 )
  {
    v50 = 733;
    goto LABEL_21;
  }
  return v9;
}
