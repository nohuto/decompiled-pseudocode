/*
 * XREFs of ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180063420
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18006B500 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180063CE0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180063F60 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1800641D0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180064EC0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x18008C5A0 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800BEAB8 (-AddMultipleAndSet@-$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackS.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x1800BF5E4 (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18013FD20 (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 */

__int64 __fastcall CScopedClipStack::PushCpuOrGpuClipToScope(
        __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char *a5,
        char *a6)
{
  CRectanglesShape *v6; // rbx
  char v9; // r12
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  bool (__fastcall *v17)(CRectanglesShape *__hidden); // rax
  bool IsEmpty; // al
  bool (__fastcall *v19)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  char v27; // cl
  char v28; // dl
  float v29; // xmm1_4
  float v30; // xmm1_4
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // r8
  float v34; // xmm1_4
  __int64 (__fastcall *v35)(CRegionShape *); // rax
  int TightBounds; // eax
  int v37; // ebx
  int v38; // r8d
  float v39; // xmm0_4
  int v40; // eax
  __int128 v41; // xmm0
  void **v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rcx
  int v49; // ebx
  float v50; // xmm0_4
  int v51; // eax
  float v52; // xmm0_4
  int v53; // eax
  float v54; // xmm0_4
  int v55; // eax
  float v56; // xmm0_4
  int v57; // eax
  CRectanglesShape *v58; // r15
  __int64 v59; // rsi
  char v60; // r14
  __int64 v61; // rcx
  float v62; // xmm2_4
  float v63; // xmm1_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float v67; // xmm1_4
  char v68; // al
  char v69; // r9
  unsigned int v70; // esi
  unsigned __int64 v71; // rax
  void *v72; // rbx
  float v73; // xmm1_4
  float v74; // xmm1_4
  float v75; // xmm1_4
  float v76; // xmm1_4
  float v77; // xmm1_4
  float v78; // xmm1_4
  float v79; // xmm1_4
  float v80; // xmm1_4
  float v81; // xmm1_4
  float v82; // xmm1_4
  float v83; // xmm1_4
  float v84; // xmm1_4
  float v85; // xmm1_4
  float v86; // xmm1_4
  unsigned int v87; // eax
  int v88; // eax
  void (__fastcall ***v89)(_QWORD, __int64); // [rsp+48h] [rbp-C0h] BYREF
  char v90; // [rsp+50h] [rbp-B8h]
  __int128 v91; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v92; // [rsp+68h] [rbp-A0h]
  __int128 v93; // [rsp+78h] [rbp-90h]
  __int128 v94; // [rsp+88h] [rbp-80h]
  int v95; // [rsp+98h] [rbp-70h]
  __int64 v96; // [rsp+A0h] [rbp-68h]
  __int128 v97; // [rsp+A8h] [rbp-60h] BYREF
  char v98; // [rsp+B8h] [rbp-50h]
  void *lpMem[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v100; // [rsp+D8h] [rbp-30h] BYREF

  v6 = *(CRectanglesShape **)a2;
  v9 = 0;
  v89 = 0LL;
  v90 = 0;
  v95 = 0;
  if ( a4 )
  {
    v11 = *(_OWORD *)a4;
    v12 = *(_OWORD *)(a4 + 16);
    v95 = *(_DWORD *)(a4 + 64);
    v91 = v11;
    v13 = *(_OWORD *)(a4 + 32);
    v92 = v12;
    v14 = *(_OWORD *)(a4 + 48);
  }
  else
  {
    v91 = _xmm;
    v13 = _xmm;
    v92 = _xmm;
    v14 = _xmm;
    LOWORD(v95) = 32085;
  }
  v15 = *((_DWORD *)a1 + 6);
  v94 = v14;
  v93 = v13;
  v96 = 0LL;
  if ( v15 && *(_DWORD *)(*a1 + 80LL * (unsigned int)(v15 - 1) + 8) )
    v16 = *(_OWORD *)(120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1) + a1[104] + 96);
  else
    v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v97 = v16;
  v98 = 0;
  v17 = *(bool (__fastcall **)(CRectanglesShape *__hidden))(*(_QWORD *)v6 + 16LL);
  if ( v17 == CRectanglesShape::IsEmpty )
  {
    IsEmpty = CRectanglesShape::IsEmpty(v6);
  }
  else if ( v17 == CShape::IsEmpty )
  {
    IsEmpty = CShape::IsEmpty(v6);
  }
  else
  {
    IsEmpty = v17(v6);
  }
  if ( IsEmpty )
  {
    v98 = 1;
    v97 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    goto LABEL_31;
  }
  v19 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v6 + 40LL);
  if ( v19 == CRectanglesShape::IsRectangles )
  {
    IsRectangles = CRectanglesShape::IsRectangles(v6, (unsigned int *)lpMem);
  }
  else if ( v19 == CRegionShape::IsRectangles )
  {
    IsRectangles = CRegionShape::IsRectangles(v6, (unsigned int *)lpMem);
  }
  else
  {
    IsRectangles = v19(v6, (unsigned int *)lpMem);
  }
  if ( !IsRectangles || LODWORD(lpMem[0]) != 1 )
    goto LABEL_31;
  if ( SBYTE1(v95) >> 6 )
  {
    if ( SBYTE1(v95) >> 6 == 1 )
      goto LABEL_20;
  }
  else
  {
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v91 + 2) - 0.0)) & _xmm);
    if ( v21 >= 0.000081380211 )
      goto LABEL_105;
    v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v92 + 2) - 0.0)) & _xmm);
    if ( v22 >= 0.000081380211
      || (v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v94 + 2) - 0.0)) & _xmm), v23 >= 0.000081380211) )
    {
      if ( v21 >= 0.000081380211 )
        goto LABEL_105;
      v73 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v92 + 2) - 0.0)) & _xmm);
      if ( v73 >= 0.000081380211 )
        goto LABEL_105;
      v74 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v93 - 0.0)) & _xmm);
      if ( v74 >= 0.000081380211 )
        goto LABEL_105;
      v75 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v93 + 1) - 0.0)) & _xmm);
      if ( v75 >= 0.000081380211 )
        goto LABEL_105;
      v76 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v93 + 2) - 0.0)) & _xmm);
      if ( v76 >= 0.000081380211 )
      {
        v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v93 + 2) - 1.0)) & _xmm);
        if ( v77 >= 0.000081380211 )
          goto LABEL_105;
      }
      v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v93 + 3) - 0.0)) & _xmm);
      if ( v78 >= 0.000081380211 )
        goto LABEL_105;
      v79 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v94 + 2) - 0.0)) & _xmm);
      if ( v79 >= 0.000081380211 )
        goto LABEL_105;
    }
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v91 + 3)) & _xmm);
    v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v94 + 3)) & _xmm);
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v92 + 3)) & _xmm)
                                                                            * 61440.0)
                                                                    + (float)(v24 * 61440.0))
                                                            + v25)
                                                    - 1.0)) & _xmm);
    if ( v26 >= 0.000081380211 )
    {
LABEL_105:
      v28 = -64;
      v27 = 0;
    }
    else
    {
      v27 = 1;
      v28 = 64;
    }
    BYTE1(v95) = v28 | BYTE1(v95) & 0x3F;
    if ( v27 )
    {
LABEL_20:
      v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v91 + 1) - 0.0)) & _xmm);
      if ( v29 < 0.000081380211 )
      {
        v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v92 - 0.0)) & _xmm);
        if ( v30 < 0.000081380211 )
          goto LABEL_22;
      }
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v91 - 0.0)) & _xmm) >= 0.000081380211
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v92 + 1) - 0.0)) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_31;
  }
LABEL_22:
  v31 = *a1;
  v32 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  v33 = *(_BYTE *)(*a1 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 77);
  if ( v33 >> 6 )
  {
    if ( v33 >> 6 != 1 )
      goto LABEL_118;
  }
  else
  {
    v62 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                               + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                               + 20)
                                                    - 0.0)) & _xmm);
    if ( v62 >= 0.000081380211 )
      goto LABEL_92;
    v63 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                               + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                               + 36)
                                                    - 0.0)) & _xmm);
    if ( v63 >= 0.000081380211
      || (v64 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                     + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                     + 68)
                                                          - 0.0)) & _xmm),
          v64 >= 0.000081380211) )
    {
      if ( v62 >= 0.000081380211 )
        goto LABEL_92;
      v80 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 36)
                                                      - 0.0)) & _xmm);
      if ( v80 >= 0.000081380211 )
        goto LABEL_92;
      v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 44)
                                                      - 0.0)) & _xmm);
      if ( v81 >= 0.000081380211 )
        goto LABEL_92;
      v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 48)
                                                      - 0.0)) & _xmm);
      if ( v82 >= 0.000081380211 )
        goto LABEL_92;
      v83 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 52)
                                                      - 0.0)) & _xmm);
      if ( v83 >= 0.000081380211 )
      {
        v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                   + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                   + 52)
                                                        - 1.0)) & _xmm);
        if ( v84 >= 0.000081380211 )
          goto LABEL_92;
      }
      v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 56)
                                                      - 0.0)) & _xmm);
      if ( v85 >= 0.000081380211 )
        goto LABEL_92;
      v86 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 68)
                                                      - 0.0)) & _xmm);
      if ( v86 >= 0.000081380211 )
        goto LABEL_92;
    }
    v65 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v31 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 24)) & _xmm);
    v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v31 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 72)) & _xmm);
    v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v31 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 40)) & _xmm)
                                                                            * 61440.0)
                                                                    + (float)(v65 * 61440.0))
                                                            + v66)
                                                    - 1.0)) & _xmm);
    if ( v67 >= 0.000081380211 )
    {
LABEL_92:
      v69 = -64;
      v68 = 0;
    }
    else
    {
      v68 = 1;
      v69 = 64;
    }
    *(_BYTE *)(v31 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 77) = v69 | v33 & 0x3F;
    if ( !v68 )
    {
LABEL_118:
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31 + 8 * v32 + 12) - 0.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31 + 8 * v32 + 32) - 0.0)) & _xmm) >= 0.000081380211 )
      {
        goto LABEL_31;
      }
      goto LABEL_26;
    }
  }
  v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31 + 8 * v32 + 16) - 0.0)) & _xmm);
  if ( v34 >= 0.000081380211
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31 + 8 * v32 + 28) - 0.0)) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_118;
  }
LABEL_26:
  v98 = 1;
  v35 = *(__int64 (__fastcall **)(CRegionShape *))(*(_QWORD *)v6 + 32LL);
  if ( (char *)v35 == (char *)CRectanglesShape::GetTightBounds )
  {
    TightBounds = CRectanglesShape::GetTightBounds(v6, lpMem, 0LL);
  }
  else if ( v35 == CRegionShape::GetTightBounds )
  {
    TightBounds = CRegionShape::GetTightBounds(v6);
  }
  else
  {
    TightBounds = ((__int64 (__fastcall *)(CRectanglesShape *, void **, _QWORD))v35)(v6, lpMem, 0LL);
  }
  v37 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x13Fu);
    goto LABEL_51;
  }
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v91);
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(*a1 + 12 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)));
  if ( a3 == 1 )
  {
    v49 = 0x7FFFFFFF;
    v50 = *(float *)lpMem - 0.5;
    if ( (float)(*(float *)lpMem - 0.5) < -2147483600.0 )
    {
      v51 = 0x80000000;
    }
    else if ( v50 >= 2147483600.0 )
    {
      v51 = 0x7FFFFFFF;
    }
    else
    {
      v51 = (int)ceilf_0(v50);
    }
    *(float *)lpMem = (float)v51;
    v52 = *((float *)lpMem + 1) - 0.5;
    if ( (float)(*((float *)lpMem + 1) - 0.5) < -2147483600.0 )
    {
      v53 = 0x80000000;
    }
    else if ( v52 >= 2147483600.0 )
    {
      v53 = 0x7FFFFFFF;
    }
    else
    {
      v53 = (int)ceilf_0(v52);
    }
    *((float *)lpMem + 1) = (float)v53;
    v54 = *(float *)&lpMem[1] - 0.5;
    if ( (float)(*(float *)&lpMem[1] - 0.5) < -2147483600.0 )
    {
      v55 = 0x80000000;
    }
    else if ( v54 >= 2147483600.0 )
    {
      v55 = 0x7FFFFFFF;
    }
    else
    {
      v55 = (int)ceilf_0(v54);
    }
    *(float *)&lpMem[1] = (float)v55;
    v56 = *((float *)&lpMem[1] + 1) - 0.5;
    if ( (float)(*((float *)&lpMem[1] + 1) - 0.5) < -2147483600.0 )
    {
      v49 = 0x80000000;
    }
    else if ( v56 < 2147483600.0 )
    {
      v49 = (int)ceilf_0(v56);
    }
    *((float *)&lpMem[1] + 1) = (float)v49;
  }
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v97, lpMem);
LABEL_31:
  v38 = *((_DWORD *)a1 + 6);
  if ( (!v38
     || !*(_DWORD *)(*a1 + 80LL * (unsigned int)(v38 - 1) + 8)
     || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a1[104] + 96 + 120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1)))
    && v98 )
  {
    v39 = *((float *)&v97 + 2) <= *(float *)&v97 || *((float *)&v97 + 3) <= *((float *)&v97 + 1)
        ? 0.0
        : (float)(*((float *)&v97 + 2) - *(float *)&v97) * (float)(*((float *)&v97 + 3) - *((float *)&v97 + 1));
    if ( v39 >= CCommonRegistryData::m_flCpuClipAreaThreshold )
    {
      if ( !v38 || !*(_DWORD *)(*a1 + 80LL * (unsigned int)(v38 - 1) + 4) )
      {
        *(_OWORD *)lpMem = v97;
        v100 = v97;
        v88 = CBaseClipStack::PushExact((CBaseClipStack *)(a1 + 258), (const struct MilRectF *)&v100);
        v37 = v88;
        if ( v88 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0xE7u);
          goto LABEL_48;
        }
        goto LABEL_47;
      }
      v40 = *((_DWORD *)a1 + 516);
      if ( v40 )
      {
        v41 = *(_OWORD *)(a1[260] + 16LL * (unsigned int)(v40 - 1));
      }
      else
      {
        v41 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_OWORD *)lpMem = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      v100 = v41;
      *(_OWORD *)lpMem = v97;
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v100, lpMem);
      v43 = *((unsigned int *)a1 + 517);
      v44 = *((_DWORD *)a1 + 516);
      lpMem[0] = 0LL;
      if ( v44 != (_DWORD)v43 )
        goto LABEL_43;
      v70 = 2 * v43;
      if ( (unsigned __int64)(2 * v43) > 0xFFFFFFFF )
      {
        v37 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
        goto LABEL_137;
      }
      if ( v70 <= 8 )
        v70 = 8;
      v37 = WPF::HrMalloc((WPF *)0x10, v70, (unsigned __int64)lpMem, v42);
      if ( v37 < 0 )
      {
        v87 = 84;
      }
      else
      {
        v71 = 16LL * *((unsigned int *)a1 + 516);
        if ( v71 <= 0xFFFFFFFF )
        {
          v72 = lpMem[0];
          memcpy_0(lpMem[0], (const void *)a1[260], (unsigned int)v71);
          operator delete((void *)a1[260]);
          v44 = *((_DWORD *)a1 + 516);
          a1[260] = (__int64)v72;
          *((_DWORD *)a1 + 517) = v70;
LABEL_43:
          v37 = 0;
          *(_OWORD *)(a1[260] + 16LL * v44) = v100;
          v45 = *((_DWORD *)a1 + 522);
          v46 = *((_DWORD *)a1 + 516) + 1;
          *((_DWORD *)a1 + 516) = v46;
          if ( v45 <= v46 )
            v45 = v46;
          *((_DWORD *)a1 + 522) = v45;
          goto LABEL_46;
        }
        v37 = -2147024362;
        v87 = 86;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, v87);
      if ( lpMem[0] )
        HeapFree(WPF::g_processHeap, 0, lpMem[0]);
LABEL_46:
      if ( v37 >= 0 )
      {
LABEL_47:
        v47 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
        ++*(_DWORD *)(*a1 + 8 * v47 + 4);
LABEL_48:
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x15Fu);
          goto LABEL_51;
        }
        v9 = 1;
        goto LABEL_50;
      }
LABEL_137:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x31u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xEBu);
      goto LABEL_48;
    }
  }
  v57 = DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(a1 + 104, &v89);
  v37 = v57;
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x166u);
    goto LABEL_51;
  }
  v58 = *(CRectanglesShape **)a2;
  v59 = a1[104] + 120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1);
  v60 = *(_BYTE *)(a2 + 8);
  if ( *(_BYTE *)(v59 + 8) && *(_QWORD *)v59 )
    (***(void (__fastcall ****)(_QWORD, __int64))v59)(*(_QWORD *)v59, 1LL);
  *(_QWORD *)v59 = v58;
  *(_BYTE *)(v59 + 8) = v60;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  v61 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  ++*(_DWORD *)(*a1 + 8 * v61 + 8);
LABEL_50:
  *a5 = v98;
  *a6 = v9;
LABEL_51:
  if ( v90 && v89 )
    (**v89)(v89, 1LL);
  return (unsigned int)v37;
}
