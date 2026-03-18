/*
 * XREFs of ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE9D4
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x18006EE60 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006F050 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x180072960 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180093F00 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1800940E0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BDD80 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800C456C (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::TryOptimizedPaths(CShape *a1, __int64 a2, CShape *a3, float *a4, int a5, struct CShape **a6)
{
  unsigned int v9; // edi
  __int64 (*v10)(void); // rax
  char IsEmpty; // al
  char (__fastcall *v12)(CRectanglesShape *); // rax
  char v13; // al
  char (__fastcall *v14)(CRegionShape *, unsigned int *); // rax
  char IsRectangles; // al
  char (__fastcall *v16)(CRegionShape *, unsigned int *); // rax
  char v17; // al
  float v18; // xmm1_4
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // rax
  int TightBounds; // eax
  __int64 (__fastcall *v21)(CShape *, __m128 *, float *); // rax
  int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  LPVOID Value; // rbx
  int v28; // ecx
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  float v32; // xmm1_4
  _QWORD *v33; // rax
  int v34; // r9d
  unsigned __int64 v35; // rcx
  int v36; // eax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  unsigned int v40; // [rsp+20h] [rbp-50h]
  unsigned int v41; // [rsp+30h] [rbp-40h] BYREF
  __int128 v42; // [rsp+38h] [rbp-38h] BYREF
  __m128 v43; // [rsp+48h] [rbp-28h] BYREF
  __int128 v44; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]

  v9 = 0;
  *a6 = 0LL;
  if ( !a1 )
  {
LABEL_78:
    if ( !a3 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
    {
      v39 = CRectanglesShape::operator new((unsigned __int64)a1);
      if ( v39 )
      {
        *v39 = &CRectanglesShape::`vftable';
        v39[1] = v39 + 5;
        v39[2] = v39 + 5;
        *((_DWORD *)v39 + 6) = 1;
        *(_QWORD *)((char *)v39 + 28) = 1LL;
        v39[7] = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      *a6 = (struct CShape *)v39;
      if ( v39 )
        return v9;
      v40 = 591;
      goto LABEL_112;
    }
LABEL_80:
    if ( !a5 )
    {
      if ( !a1 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      {
        if ( a4 && (!CShape::IsAxisAlignedRectangle(a3) || !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)a4)) )
          return v9;
        v36 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
        v9 = v36;
        if ( v36 >= 0 )
          return v9;
        v40 = 616;
      }
      else
      {
        v36 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v36;
        if ( v36 >= 0 )
          return v9;
        v40 = 627;
      }
      goto LABEL_87;
    }
    v35 = (unsigned int)(a5 - 1);
    if ( a5 == 1 )
    {
      v38 = CRectanglesShape::operator new(v35);
      if ( v38 )
      {
        *v38 = &CRectanglesShape::`vftable';
        v38[1] = v38 + 5;
        v38[2] = v38 + 5;
        *((_DWORD *)v38 + 6) = 1;
        *(_QWORD *)((char *)v38 + 28) = 1LL;
        v38[7] = 0LL;
      }
      else
      {
        v38 = 0LL;
      }
      *a6 = (struct CShape *)v38;
      if ( v38 )
        return v9;
      v40 = 639;
    }
    else
    {
      if ( a5 != 2 )
        return v9;
      if ( a1 && !(*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      {
        v36 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v36;
        if ( v36 >= 0 )
          return v9;
        v40 = 665;
LABEL_87:
        v34 = v36;
        goto LABEL_113;
      }
      v37 = CRectanglesShape::operator new(v35);
      if ( v37 )
      {
        *v37 = &CRectanglesShape::`vftable';
        v37[1] = v37 + 5;
        v37[2] = v37 + 5;
        *((_DWORD *)v37 + 6) = 1;
        *(_QWORD *)((char *)v37 + 28) = 1LL;
        v37[7] = 0LL;
      }
      else
      {
        v37 = 0LL;
      }
      *a6 = (struct CShape *)v37;
      if ( v37 )
        return v9;
      v40 = 653;
    }
LABEL_112:
    v9 = -2147024882;
    v34 = -2147024882;
    goto LABEL_113;
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
      ? ((char *)v12 != (char *)CShape::IsEmpty
       ? (v13 = v12(a3))
       : (v13 = CShape::IsEmpty(a3)))
      : (v13 = CRectanglesShape::IsEmpty(a3)),
        v13) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      goto LABEL_80;
    goto LABEL_78;
  }
  if ( a5 != 1 )
    return v9;
  v14 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)a1 + 40LL);
  if ( v14 == CRectanglesShape::IsRectangles )
    IsRectangles = CRectanglesShape::IsRectangles(a1, &v41);
  else
    IsRectangles = v14 == CRegionShape::IsRectangles ? CRegionShape::IsRectangles(a1, &v41) : v14(a1, &v41);
  if ( !IsRectangles || v41 != 1 )
    return v9;
  v16 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)a3 + 40LL);
  if ( v16 == CRectanglesShape::IsRectangles )
    v17 = CRectanglesShape::IsRectangles(a3, &v41);
  else
    v17 = v16 == CRegionShape::IsRectangles ? CRegionShape::IsRectangles(a3, &v41) : v16(a3, &v41);
  if ( !v17 || v41 != 1 )
    return v9;
  if ( a4 )
  {
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>((__int64)a4, 1)
      || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4[1]) & _xmm), v18 >= 0.00012207031)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4[4]) & _xmm) >= 0.00012207031 )
    {
      v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*a4) & _xmm);
      if ( v32 >= 0.00012207031 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4[5]) & _xmm) >= 0.00012207031 )
        return v9;
    }
  }
  v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v19 == CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds((__int64)a1, (__int64)&v42, 0LL);
  else
    TightBounds = v19((__int64)a1, (__int64)&v42, 0LL);
  v9 = TightBounds;
  if ( TightBounds < 0 )
  {
    v40 = 689;
    goto LABEL_76;
  }
  v21 = *(__int64 (__fastcall **)(CShape *, __m128 *, float *))(*(_QWORD *)a3 + 32LL);
  if ( (char *)v21 == (char *)CRectanglesShape::GetTightBounds )
  {
    v22 = CRectanglesShape::GetTightBounds((__int64)a3, (__int64)&v43, (__int64)a4);
  }
  else if ( (char *)v21 == (char *)CRegionShape::GetTightBounds )
  {
    v22 = CRegionShape::GetTightBounds(a3, &v43, (__int64)a4);
  }
  else
  {
    v22 = v21(a3, &v43, a4);
  }
  v9 = v22;
  if ( v22 < 0 )
  {
    v40 = 690;
LABEL_76:
    v34 = v9;
LABEL_113:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, v40);
    return v9;
  }
  v23 = *(float *)&v42;
  if ( v43.m128_f32[0] > *(float *)&v42 )
  {
    LODWORD(v42) = v43.m128_i32[0];
    v23 = v43.m128_f32[0];
  }
  v24 = *((float *)&v42 + 1);
  if ( v43.m128_f32[1] > *((float *)&v42 + 1) )
  {
    DWORD1(v42) = v43.m128_i32[1];
    v24 = v43.m128_f32[1];
  }
  v25 = *((float *)&v42 + 2);
  if ( *((float *)&v42 + 2) > v43.m128_f32[2] )
  {
    v25 = v43.m128_f32[2];
    DWORD2(v42) = v43.m128_i32[2];
  }
  v26 = *((float *)&v42 + 3);
  if ( *((float *)&v42 + 3) > v43.m128_f32[3] )
  {
    v26 = v43.m128_f32[3];
    HIDWORD(v42) = v43.m128_i32[3];
  }
  if ( v25 <= v23 || v26 <= v24 )
    v42 = 0uLL;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v33 = operator new(0x98uLL);
    Value = v33;
    if ( v33 )
    {
      *v33 = 0LL;
      v33[1] = 0LL;
      v33[2] = 0LL;
      v33[3] = 0LL;
      v33[4] = 0LL;
      v33[5] = 0LL;
      v33[6] = 0LL;
      v33[7] = 0LL;
      v33[8] = 0LL;
      v33[9] = 0LL;
      v33[10] = 0LL;
      v33[11] = 0LL;
      v33[12] = 0LL;
      v33[13] = 0LL;
      v33[14] = 0LL;
      v33[15] = 0LL;
      v33[16] = 0LL;
      v33[17] = 0LL;
      v33[18] = 0LL;
    }
    else
    {
      Value = 0LL;
    }
    if ( !Value )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  v28 = *((_DWORD *)Value + 3);
  v29 = 0LL;
  if ( v28 )
  {
    v29 = (_QWORD *)*((_QWORD *)Value + 2);
    *((_QWORD *)Value + 2) = *v29;
    *((_DWORD *)Value + 3) = v28 - 1;
  }
  if ( !v29 )
  {
    v29 = HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
    if ( !v29 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
  }
  *v29 = &CRectanglesShape::`vftable';
  v29[1] = v29 + 5;
  v29[2] = v29 + 5;
  *((_DWORD *)v29 + 6) = 1;
  *(_QWORD *)((char *)v29 + 28) = 1LL;
  v29[7] = 0LL;
  *((_DWORD *)v29 + 8) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(v29 + 1), 0x10u);
  v30 = v29[7];
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v29[7] = 0LL;
  }
  v44 = v42;
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    (__int64)(v29 + 1),
    &v44,
    1u);
  *a6 = (struct CShape *)v29;
  return v9;
}
