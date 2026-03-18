/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0
 * Callers:
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCShape@@@Z @ 0x18008BCE0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@PEAPEAVCSha.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180002F4C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z @ 0x18000B8A8 (-GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x18001D1D8 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180063CE0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1800641D0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080038 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x18008C5A0 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18008C630 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18020A5BC (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CShape::TryOptimizedCombinePaths(
        struct CRectanglesShape *a1,
        __int64 a2,
        CShape *a3,
        float *a4,
        int a5,
        struct CShape **a6)
{
  unsigned int v9; // esi
  __int64 (*v10)(void); // rax
  char IsEmpty; // al
  char (__fastcall *v12)(CRectanglesShape *); // rax
  char v13; // al
  char (__fastcall *v14)(CRegionShape *, unsigned int *); // rax
  char IsRectangles; // al
  char (__fastcall *v16)(CRectanglesShape *, unsigned int *); // rax
  char v17; // al
  __int64 v18; // rdx
  float v19; // xmm0_4
  __int64 (__fastcall *v20)(__int64, __int64, CMILMatrix *); // rax
  int v21; // eax
  __int64 (__fastcall *v22)(__int64, __int64, CMILMatrix *); // rax
  int v23; // eax
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm3_4
  _DWORD *Value; // rdi
  int v29; // ecx
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  char (__fastcall *v33)(CRegionShape *, unsigned int *); // rax
  char v34; // al
  char (__fastcall *v35)(CRectanglesShape *, unsigned int *); // rax
  char v36; // al
  int CRegion; // eax
  __int64 (__fastcall *v38)(__int64, __int64, CMILMatrix *); // rax
  int TightBounds; // eax
  struct CRectanglesShape *v40; // rcx
  int v41; // eax
  int v42; // r9d
  _QWORD *v43; // rax
  int v44; // eax
  int v45; // eax
  _QWORD *v46; // rax
  DWORD v47; // ecx
  struct CRectanglesShape *v48; // rcx
  int v49; // eax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  int v52; // eax
  int v53; // eax
  _QWORD *v54; // rax
  unsigned int v55; // [rsp+20h] [rbp-E0h]
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  unsigned int v57; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v58; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_RECT_F v59; // [rsp+48h] [rbp-B8h] BYREF
  struct CRegionShape *v60[2]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v61; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v62[18]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v63; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v64[18]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+168h] [rbp+68h]

  v9 = 0;
  *a6 = 0LL;
  if ( !a1 )
  {
LABEL_148:
    if ( !a3 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
    {
      v54 = CRectanglesShape::operator new(a1);
      if ( v54 )
      {
        v54[1] = 0LL;
        *v54 = &CRectanglesShape::`vftable';
        v54[2] = v54 + 6;
        v54[3] = v54 + 6;
        *((_DWORD *)v54 + 8) = 1;
        *(_QWORD *)((char *)v54 + 36) = 1LL;
        v54[8] = 0LL;
      }
      else
      {
        v54 = 0LL;
      }
      *a6 = (struct CShape *)v54;
      if ( v54 )
        return v9;
      v55 = 603;
      goto LABEL_181;
    }
LABEL_150:
    if ( !a5 )
    {
      if ( !a1 || (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      {
        if ( !a4 || CShape::IsAxisAlignedRectangle(a3) && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a4) )
        {
          v53 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
          v9 = v53;
          if ( v53 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x274u);
        }
      }
      else
      {
        v52 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v52;
        if ( v52 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x27Fu);
      }
      return v9;
    }
    v48 = (struct CRectanglesShape *)(unsigned int)(a5 - 1);
    if ( a5 == 1 )
    {
      v51 = CRectanglesShape::operator new(v48);
      if ( v51 )
      {
        v51[1] = 0LL;
        *v51 = &CRectanglesShape::`vftable';
        v51[2] = v51 + 6;
        v51[3] = v51 + 6;
        *((_DWORD *)v51 + 8) = 1;
        *(_QWORD *)((char *)v51 + 36) = 1LL;
        v51[8] = 0LL;
      }
      else
      {
        v51 = 0LL;
      }
      *a6 = (struct CShape *)v51;
      if ( v51 )
        return v9;
      v55 = 651;
    }
    else
    {
      if ( a5 != 2 )
        return v9;
      if ( a1 && !(*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      {
        v49 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v49;
        if ( v49 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x2A5u);
        return v9;
      }
      v50 = CRectanglesShape::operator new(v48);
      if ( v50 )
      {
        v50[1] = 0LL;
        *v50 = &CRectanglesShape::`vftable';
        v50[2] = v50 + 6;
        v50[3] = v50 + 6;
        *((_DWORD *)v50 + 8) = 1;
        *(_QWORD *)((char *)v50 + 36) = 1LL;
        v50[8] = 0LL;
      }
      else
      {
        v50 = 0LL;
      }
      *a6 = (struct CShape *)v50;
      if ( v50 )
        return v9;
      v55 = 665;
    }
LABEL_181:
    v9 = -2147024882;
    goto LABEL_182;
  }
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v10 == (char *)CRectanglesShape::IsEmpty )
  {
    IsEmpty = CRectanglesShape::IsEmpty(a1);
  }
  else if ( (char *)v10 == (char *)CShape::IsEmpty )
  {
    IsEmpty = CShape::IsEmpty(a1);
  }
  else
  {
    IsEmpty = v10();
  }
  if ( IsEmpty
    || !a3
    || ((v12 = *(char (__fastcall **)(CRectanglesShape *))(*(_QWORD *)a3 + 16LL), v12 != CRectanglesShape::IsEmpty)
      ? (v13 = v12(a3))
      : (v13 = CRectanglesShape::IsEmpty(a3)),
        v13) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      goto LABEL_150;
    goto LABEL_148;
  }
  v14 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)a1 + 40LL);
  if ( v14 == CRectanglesShape::IsRectangles )
  {
    IsRectangles = CRectanglesShape::IsRectangles(a1, &v57);
  }
  else if ( v14 == CRegionShape::IsRectangles )
  {
    IsRectangles = CRegionShape::IsRectangles(a1, &v57);
  }
  else
  {
    IsRectangles = v14(a1, &v57);
  }
  if ( !IsRectangles
    || v57 != 1
    || ((v16 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)a3 + 40LL),
         v16 != CRectanglesShape::IsRectangles)
      ? (v17 = v16(a3, &v57))
      : (v17 = CRectanglesShape::IsRectangles(a3, &v57)),
        !v17
     || v57 != 1
     || a4
     && ((LOBYTE(v18) = 1, !(unsigned __int8)CMILMatrix::Is2DAffine<1>(a4, v18))
      || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4[1] - 0.0)) & _xmm), v19 >= 0.000081380211)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4[4] - 0.0)) & _xmm) >= 0.000081380211)
     && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*a4 - 0.0)) & _xmm) >= 0.000081380211
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4[5] - 0.0)) & _xmm) >= 0.000081380211)) )
  {
    v33 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)a1 + 40LL);
    if ( v33 == CRegionShape::IsRectangles )
      v34 = CRegionShape::IsRectangles(a1, &v57);
    else
      v34 = v33(a1, &v57);
    if ( !v34 )
      return v9;
    v35 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)a3 + 40LL);
    v36 = v35 == CRectanglesShape::IsRectangles
        ? CRectanglesShape::IsRectangles(a3, (unsigned int *)v60)
        : v35(a3, (unsigned int *)v60);
    if ( !v36 || a4 && !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a4) )
      return v9;
    v62[0] = 0;
    v61 = v62;
    v63 = v64;
    v64[0] = 0;
    if ( v57 <= 1 )
    {
      CRegion = (*(__int64 (__fastcall **)(struct CRectanglesShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)a1 + 32LL))(
                  a1,
                  &v59,
                  0LL);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 783;
        goto LABEL_101;
      }
      *v61 = 0;
      CRegion = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                  (const struct FastRegion::Internal::CRgnData **)&v61,
                  (__int64)&v59);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 784;
        goto LABEL_101;
      }
    }
    else
    {
      CRegion = CRegionShape::GetCRegion(a1, (struct CRegion *)&v61, 0LL);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 777;
        goto LABEL_101;
      }
    }
    if ( LODWORD(v60[0]) > 1 )
    {
      CRegion = CRegionShape::GetCRegion(a3, (struct CRegion *)&v63, (const struct CMILMatrix *)a4);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 790;
LABEL_101:
        v42 = CRegion;
LABEL_103:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, v56);
        goto LABEL_69;
      }
    }
    else
    {
      v38 = *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)a3 + 32LL);
      if ( v38 == CRectanglesShape::GetTightBounds )
        TightBounds = CRectanglesShape::GetTightBounds((__int64)a3, (__int64)&v59, (CMILMatrix *)a4);
      else
        TightBounds = v38((__int64)a3, (__int64)&v59, (CMILMatrix *)a4);
      v9 = TightBounds;
      if ( TightBounds < 0 )
      {
        v56 = 796;
        v42 = TightBounds;
        goto LABEL_103;
      }
      *v63 = 0;
      CRegion = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                  (const struct FastRegion::Internal::CRgnData **)&v63,
                  (__int64)&v59);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 797;
        goto LABEL_101;
      }
    }
    if ( a5 == 1 )
    {
      CRegion = FastRegion::CRegion::Intersect(
                  (const struct FastRegion::Internal::CRgnData **)&v61,
                  (const struct FastRegion::Internal::CRgnData **)&v63);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 804;
        goto LABEL_101;
      }
    }
    else if ( a5 )
    {
      if ( a5 == 2 )
      {
        CRegion = FastRegion::CRegion::Subtract(
                    (const struct FastRegion::Internal::CRgnData **)&v61,
                    (const struct FastRegion::Internal::CRgnData **)&v63);
        v9 = CRegion;
        if ( CRegion < 0 )
        {
          v56 = 808;
          goto LABEL_101;
        }
      }
    }
    else
    {
      CRegion = FastRegion::CRegion::Union(&v61, &v63);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 812;
        goto LABEL_101;
      }
    }
    CRegion = CRegionShape::Create((const struct CRegion *)&v61, (struct CRegionShape **)&v58);
    v9 = CRegion;
    if ( CRegion < 0 )
    {
      v56 = 817;
      goto LABEL_101;
    }
    *a6 = *(struct CShape **)&v58.left;
LABEL_69:
    FastRegion::CRegion::FreeMemory((void **)&v63);
    FastRegion::CRegion::FreeMemory((void **)&v61);
    return v9;
  }
  v20 = *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)a1 + 32LL);
  if ( v20 == CRectanglesShape::GetTightBounds )
    v21 = CRectanglesShape::GetTightBounds((__int64)a1, (__int64)&v58, 0LL);
  else
    v21 = v20((__int64)a1, (__int64)&v58, 0LL);
  v9 = v21;
  if ( v21 < 0 )
  {
    v55 = 697;
    goto LABEL_182;
  }
  v22 = *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)a3 + 32LL);
  if ( v22 == CRectanglesShape::GetTightBounds )
    v23 = CRectanglesShape::GetTightBounds((__int64)a3, (__int64)&v59, (CMILMatrix *)a4);
  else
    v23 = v22((__int64)a3, (__int64)&v59, (CMILMatrix *)a4);
  v9 = v23;
  if ( v23 < 0 )
  {
    v55 = 698;
LABEL_182:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v55);
    return v9;
  }
  if ( a5 == 1 )
  {
    left = v58.left;
    if ( v59.left > v58.left )
    {
      v58.left = v59.left;
      left = v59.left;
    }
    top = v58.top;
    if ( v59.top > v58.top )
    {
      v58.top = v59.top;
      top = v59.top;
    }
    right = v58.right;
    if ( v58.right > v59.right )
    {
      v58.right = v59.right;
      right = v59.right;
    }
    bottom = v58.bottom;
    if ( v58.bottom > v59.bottom )
    {
      v58.bottom = v59.bottom;
      bottom = v59.bottom;
    }
    if ( right <= left || bottom <= top )
    {
      *(_QWORD *)&v58.right = 0LL;
      *(_QWORD *)&v58.left = 0LL;
    }
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v46 = operator new(0xF8uLL);
      Value = v46;
      if ( !v46 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      v47 = CThreadContext::s_dwTlsIndex;
      *v46 = 0LL;
      v46[1] = 0LL;
      v46[2] = 0LL;
      v46[3] = 0LL;
      v46[4] = 0LL;
      v46[5] = 0LL;
      v46[6] = 0LL;
      v46[7] = 0LL;
      v46[8] = 0LL;
      v46[9] = 0LL;
      v46[10] = 0LL;
      v46[11] = 0LL;
      v46[12] = 0LL;
      v46[13] = 0LL;
      v46[14] = 0LL;
      v46[15] = 0LL;
      v46[16] = 0LL;
      v46[17] = 0LL;
      v46[18] = 0LL;
      v46[19] = 0LL;
      v46[20] = 0LL;
      v46[21] = 0LL;
      v46[22] = 0LL;
      v46[23] = 0LL;
      v46[24] = 0LL;
      v46[25] = 0LL;
      v46[26] = 0LL;
      v46[27] = 0LL;
      v46[28] = 0LL;
      v46[29] = 0LL;
      v46[30] = 0LL;
      TlsSetValue(v47, v46);
    }
    v29 = Value[3];
    v30 = 0LL;
    if ( v29 )
    {
      v30 = (_QWORD *)*((_QWORD *)Value + 2);
      *((_QWORD *)Value + 2) = *v30;
      Value[3] = v29 - 1;
    }
    if ( !v30 )
    {
      v30 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
      if ( !v30 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    v30[1] = 0LL;
    *v30 = &CRectanglesShape::`vftable';
    v30[2] = v30 + 6;
    v30[3] = v30 + 6;
    *((_DWORD *)v30 + 8) = 1;
    *(_QWORD *)((char *)v30 + 36) = 1LL;
    v30[8] = 0LL;
    *((_DWORD *)v30 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)(v30 + 2), 0x10u);
    v31 = v30[8];
    if ( v31 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      v30[8] = 0LL;
    }
    *(struct D2D_RECT_F *)v60 = v58;
    DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      v30 + 2,
      v60,
      1LL);
    *a6 = (struct CShape *)v30;
    return v9;
  }
  if ( a5 )
  {
    if ( a5 != 2 )
      return v9;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)&v59, &v58) && !::IsEmpty(&v58) )
    {
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(&v58, &v59) )
      {
        v41 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v41;
        if ( v41 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x2CFu);
        return v9;
      }
      v64[0] = 0;
      v61 = v62;
      v62[0] = 0;
      v63 = v64;
      CRegion = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                  (const struct FastRegion::Internal::CRgnData **)&v61,
                  (__int64)&v58);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 725;
        goto LABEL_101;
      }
      *v63 = 0;
      CRegion = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                  (const struct FastRegion::Internal::CRgnData **)&v63,
                  (__int64)&v59);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 726;
        goto LABEL_101;
      }
      CRegion = FastRegion::CRegion::Subtract(
                  (const struct FastRegion::Internal::CRgnData **)&v61,
                  (const struct FastRegion::Internal::CRgnData **)&v63);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 728;
        goto LABEL_101;
      }
      CRegion = CRegionShape::Create((const struct CRegion *)&v61, v60);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 731;
        goto LABEL_101;
      }
      goto LABEL_96;
    }
    v43 = CRectanglesShape::operator new(v40);
    if ( v43 )
    {
      v43[1] = 0LL;
      *v43 = &CRectanglesShape::`vftable';
      v43[2] = v43 + 6;
      v43[3] = v43 + 6;
      *((_DWORD *)v43 + 8) = 1;
      *(_QWORD *)((char *)v43 + 36) = 1LL;
      v43[8] = 0LL;
    }
    else
    {
      v43 = 0LL;
    }
    *a6 = (struct CShape *)v43;
    if ( v43 )
      return v9;
    v55 = 714;
    goto LABEL_181;
  }
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)&v58, &v59) || ::IsEmpty(&v59) )
  {
    v45 = CShape::CopyShape(a1, 0LL, a6);
    v9 = v45;
    if ( v45 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x2E5u);
  }
  else
  {
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)&v59, &v58) && !::IsEmpty(&v58) )
    {
      v64[0] = 0;
      v61 = v62;
      v62[0] = 0;
      v63 = v64;
      CRegion = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                  (const struct FastRegion::Internal::CRgnData **)&v61,
                  (__int64)&v58);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 751;
        goto LABEL_101;
      }
      *v63 = 0;
      CRegion = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                  (const struct FastRegion::Internal::CRgnData **)&v63,
                  (__int64)&v59);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 752;
        goto LABEL_101;
      }
      CRegion = FastRegion::CRegion::Union(&v61, &v63);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 754;
        goto LABEL_101;
      }
      CRegion = CRegionShape::Create((const struct CRegion *)&v61, v60);
      v9 = CRegion;
      if ( CRegion < 0 )
      {
        v56 = 757;
        goto LABEL_101;
      }
LABEL_96:
      *a6 = v60[0];
      goto LABEL_69;
    }
    v44 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
    v9 = v44;
    if ( v44 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x2E9u);
  }
  return v9;
}
