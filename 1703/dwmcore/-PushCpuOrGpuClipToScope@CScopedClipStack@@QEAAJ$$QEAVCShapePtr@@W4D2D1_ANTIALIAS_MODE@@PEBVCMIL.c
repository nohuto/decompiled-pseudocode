/*
 * XREFs of ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180093610
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x18006EE60 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006F050 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FBE0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x180072960 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800C0830 (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800C0970 (-AddMultipleAndSet@-$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackS.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x1800C14B0 (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18013464C (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 */

__int64 __fastcall CScopedClipStack::PushCpuOrGpuClipToScope(
        __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char *a5,
        char *a6)
{
  float **v6; // rbx
  char v8; // r12
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  bool (__fastcall *v17)(CRectanglesShape *__hidden); // rax
  int v18; // edx
  bool v19; // cl
  float *v20; // rax
  char (__fastcall *v21)(CRegionShape *, unsigned int *); // rax
  int v22; // eax
  __int64 v23; // xmm3_8
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  char v27; // cl
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  char v34; // dl
  float v35; // xmm1_4
  float v36; // xmm1_4
  __int64 v37; // rdx
  __int64 v38; // rcx
  char v39; // r8
  float v40; // xmm1_4
  __int64 (__fastcall *v41)(CRegionShape *, __m128 *, __int64); // rax
  int TightBounds; // eax
  int v43; // esi
  int v44; // ebx
  float v45; // xmm0_4
  int v46; // eax
  float v47; // xmm0_4
  int v48; // eax
  float v49; // xmm0_4
  int v50; // eax
  float v51; // xmm0_4
  int v52; // r8d
  float v53; // xmm0_4
  int v54; // eax
  __int128 v55; // xmm0
  __int64 v56; // rax
  unsigned int v57; // eax
  unsigned int v58; // ecx
  __int64 v59; // rcx
  int v61; // eax
  float **v62; // r15
  __int64 v63; // rbx
  char v64; // r14
  __int64 v65; // rcx
  bool IsEmpty; // al
  char IsRectangles; // al
  int v68; // eax
  void **v69; // r9
  unsigned int v70; // r14d
  int v71; // eax
  int v72; // eax
  void *v73; // rbx
  float v74; // xmm1_4
  float v75; // xmm1_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm1_4
  char v79; // r9
  float v80; // xmm1_4
  float v81; // xmm1_4
  float v82; // xmm1_4
  float v83; // xmm1_4
  float v84; // xmm1_4
  float v85; // xmm1_4
  float v86; // xmm1_4
  float v87; // xmm2_4
  float v88; // xmm1_4
  float v89; // xmm1_4
  float v90; // xmm1_4
  float v91; // xmm2_4
  float v92; // xmm1_4
  float v93; // xmm1_4
  float v94; // xmm1_4
  float v95; // xmm1_4
  int v96; // eax
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  char *v98; // [rsp+40h] [rbp-C8h]
  char *v99; // [rsp+48h] [rbp-C0h]
  void (__fastcall ***v100)(_QWORD, __int64); // [rsp+58h] [rbp-B0h] BYREF
  char v101; // [rsp+60h] [rbp-A8h]
  __int128 v102; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v103; // [rsp+78h] [rbp-90h]
  __int128 v104; // [rsp+88h] [rbp-80h]
  __int128 v105; // [rsp+98h] [rbp-70h]
  int v106; // [rsp+A8h] [rbp-60h]
  __int64 v107; // [rsp+B0h] [rbp-58h]
  __int128 v108; // [rsp+B8h] [rbp-50h] BYREF
  char v109; // [rsp+C8h] [rbp-40h]
  void *lpMem[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v111; // [rsp+E8h] [rbp-20h] BYREF

  v6 = *(float ***)a2;
  v8 = 0;
  v98 = a5;
  v99 = a6;
  v100 = 0LL;
  v101 = 0;
  v106 = 0;
  if ( a4 )
  {
    v11 = *(_OWORD *)a4;
    v12 = *(_OWORD *)(a4 + 16);
    v106 = *(_DWORD *)(a4 + 64);
    v102 = v11;
    v13 = *(_OWORD *)(a4 + 32);
    v103 = v12;
    v14 = *(_OWORD *)(a4 + 48);
  }
  else
  {
    v102 = _xmm;
    v13 = _xmm;
    v103 = _xmm;
    v14 = _xmm;
    LOWORD(v106) = 32085;
  }
  v15 = *((_DWORD *)a1 + 6);
  v105 = v14;
  v104 = v13;
  v107 = 0LL;
  if ( v15 && *(_DWORD *)(80LL * (unsigned int)(v15 - 1) + *a1 + 8) )
    v16 = *(_OWORD *)(120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1) + a1[104] + 96);
  else
    v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v108 = v16;
  v109 = 0;
  v17 = (bool (__fastcall *)(CRectanglesShape *__hidden))*((_QWORD *)*v6 + 2);
  if ( v17 == CRectanglesShape::IsEmpty )
  {
    v18 = *((_DWORD *)v6 + 8);
    v19 = 1;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v20 = v6[1];
        v19 = v20[2] <= *v20 || v20[3] <= v20[1];
      }
      else
      {
        v19 = 0;
      }
    }
  }
  else
  {
    if ( v17 == CShape::IsEmpty )
      IsEmpty = CShape::IsEmpty((CShape *)v6);
    else
      IsEmpty = v17((CRectanglesShape *)v6);
    v19 = IsEmpty;
  }
  if ( v19 )
  {
    v109 = 1;
    v108 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    goto LABEL_47;
  }
  v21 = (char (__fastcall *)(CRegionShape *, unsigned int *))*((_QWORD *)*v6 + 5);
  if ( (char *)v21 == (char *)CRectanglesShape::IsRectangles )
  {
    v22 = *((_DWORD *)v6 + 8);
  }
  else
  {
    if ( v21 == CRegionShape::IsRectangles )
      IsRectangles = CRegionShape::IsRectangles((CRegionShape *)v6, (unsigned int *)&Size);
    else
      IsRectangles = v21((CRegionShape *)v6, (unsigned int *)&Size);
    if ( !IsRectangles )
      goto LABEL_47;
    v22 = Size;
  }
  if ( v22 == 1 )
  {
    v23 = _xmm;
    v24 = FLOAT_0_00012207031;
    v25 = FLOAT_1_0;
    v26 = FLOAT_40960_0;
    if ( SBYTE1(v106) >> 6 )
    {
      if ( SBYTE1(v106) >> 6 == 1 )
        goto LABEL_23;
      v23 = _xmm;
      v24 = FLOAT_0_00012207031;
      v25 = FLOAT_1_0;
      v26 = FLOAT_40960_0;
      goto LABEL_105;
    }
    v27 = 0;
    v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v102 + 2) - 0.0)) & _xmm);
    if ( v28 < 0.00012207031 )
    {
      v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v103 + 2) - 0.0)) & _xmm);
      if ( v29 < 0.00012207031 )
      {
        v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v105 + 2) - 0.0)) & _xmm);
        if ( v30 < 0.00012207031 )
          goto LABEL_20;
      }
      if ( v28 < 0.00012207031 )
      {
        v80 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v103 + 2) - 0.0)) & _xmm);
        if ( v80 < 0.00012207031 )
        {
          v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v104 - 0.0)) & _xmm);
          if ( v81 < 0.00012207031 )
          {
            v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v104 + 1) - 0.0)) & _xmm);
            if ( v82 < 0.00012207031 )
            {
              v83 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v104 + 2) - 0.0)) & _xmm);
              if ( v83 < 0.00012207031
                || (v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v104 + 2) - 1.0)) & _xmm),
                    v84 < 0.00012207031) )
              {
                v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v104 + 3) - 0.0)) & _xmm);
                if ( v85 < 0.00012207031 )
                {
                  v86 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v105 + 2) - 0.0)) & _xmm);
                  if ( v86 < 0.00012207031 )
                  {
LABEL_20:
                    v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v102 + 3)) & _xmm);
                    v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v105 + 3)) & _xmm);
                    v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v103 + 3)) & _xmm)
                                                                                            * 40960.0)
                                                                                    + (float)(v31 * 40960.0))
                                                                            + v32)
                                                                    - 1.0)) & _xmm);
                    if ( v33 < 0.00012207031 )
                    {
                      v27 = 1;
                      v34 = 64;
                      goto LABEL_22;
                    }
                    v27 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    v34 = -64;
LABEL_22:
    BYTE1(v106) = v34 | BYTE1(v106) & 0x3F;
    if ( v27 )
    {
LABEL_23:
      v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v102 + 1) - 0.0)) & _xmm);
      if ( v35 < 0.00012207031 )
      {
        v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v103 - 0.0)) & _xmm);
        if ( v36 < 0.00012207031 )
          goto LABEL_25;
      }
    }
LABEL_105:
    if ( v24 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v102 - 0.0)) & v23)
      || v24 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v103 + 1) - 0.0)) & v23) )
    {
      goto LABEL_47;
    }
LABEL_25:
    v37 = *a1;
    v38 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
    v39 = *(_BYTE *)(*a1 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 77);
    if ( v39 >> 6 )
    {
      if ( v39 >> 6 != 1 )
        goto LABEL_99;
    }
    else
    {
      v79 = 0;
      v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 20)) & v23);
      if ( v24 > v87 )
      {
        v74 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 36)) & v23);
        if ( v24 > v74 )
        {
          v75 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 68)) & v23);
          if ( v24 > v75 )
            goto LABEL_97;
        }
        if ( v24 > v87 )
        {
          v88 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 36)) & v23);
          if ( v24 > v88 )
          {
            v89 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37
                                                               + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                               + 44)) & v23);
            if ( v24 > v89 )
            {
              v90 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 48)) & v23);
              if ( v24 > v90 )
              {
                v91 = *(float *)(v37 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 52);
                v92 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v91) & v23);
                if ( v24 > v92 || (v93 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v91 - v25)) & v23), v24 > v93) )
                {
                  v94 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37
                                                                     + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                     + 56)) & v23);
                  if ( v24 > v94 )
                  {
                    v95 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37
                                                                       + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                       + 68)) & v23);
                    if ( v24 > v95 )
                    {
LABEL_97:
                      v76 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37
                                                                         + 80LL
                                                                         * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                         + 24)) & v23);
                      v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37
                                                                         + 80LL
                                                                         * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                         + 72)) & v23);
                      v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 40)) & v23)
                                                                                              * v26)
                                                                                      + (float)(v76 * v26))
                                                                              + v77)
                                                                      - v25)) & v23);
                      v79 = v24 > v78;
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(_BYTE *)(v37 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 77) = v39 & 0x3F | ((v79 << 7) - 64);
      if ( !v79 )
        goto LABEL_99;
    }
    v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37 + 8 * v38 + 16)) & v23);
    if ( v24 > v40 && v24 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37 + 8 * v38 + 28)) & v23) )
    {
LABEL_29:
      v109 = 1;
      v41 = (__int64 (__fastcall *)(CRegionShape *, __m128 *, __int64))*((_QWORD *)*v6 + 4);
      if ( (char *)v41 == (char *)CRectanglesShape::GetTightBounds )
      {
        TightBounds = CRectanglesShape::GetTightBounds(v6, lpMem, 0LL);
      }
      else if ( v41 == CRegionShape::GetTightBounds )
      {
        TightBounds = CRegionShape::GetTightBounds((CRegionShape *)v6, (__m128 *)lpMem, 0LL);
      }
      else
      {
        TightBounds = v41((CRegionShape *)v6, (__m128 *)lpMem, 0LL);
      }
      v43 = TightBounds;
      if ( TightBounds < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x13Fu);
        goto LABEL_67;
      }
      CMILMatrix::Transform2DBoundsHelper<0>(&v102, lpMem, lpMem);
      CMILMatrix::Transform2DBoundsHelper<0>(*a1 + 12 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1), lpMem, lpMem);
      if ( *(_BYTE *)(*a1 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)) || a3 == 1 )
      {
        v44 = 0x7FFFFFFF;
        v45 = *(float *)lpMem - 0.5;
        if ( (float)(*(float *)lpMem - 0.5) < -2147483600.0 )
        {
          v46 = 0x80000000;
        }
        else if ( v45 >= 2147483600.0 )
        {
          v46 = 0x7FFFFFFF;
        }
        else
        {
          v46 = (int)ceilf_0(v45);
        }
        *(float *)lpMem = (float)v46;
        v47 = *((float *)lpMem + 1) - 0.5;
        if ( (float)(*((float *)lpMem + 1) - 0.5) < -2147483600.0 )
        {
          v48 = 0x80000000;
        }
        else if ( v47 >= 2147483600.0 )
        {
          v48 = 0x7FFFFFFF;
        }
        else
        {
          v48 = (int)ceilf_0(v47);
        }
        *((float *)lpMem + 1) = (float)v48;
        v49 = *(float *)&lpMem[1] - 0.5;
        if ( (float)(*(float *)&lpMem[1] - 0.5) < -2147483600.0 )
        {
          v50 = 0x80000000;
        }
        else if ( v49 >= 2147483600.0 )
        {
          v50 = 0x7FFFFFFF;
        }
        else
        {
          v50 = (int)ceilf_0(v49);
        }
        *(float *)&lpMem[1] = (float)v50;
        v51 = *((float *)&lpMem[1] + 1) - 0.5;
        if ( (float)(*((float *)&lpMem[1] + 1) - 0.5) < -2147483600.0 )
        {
          v44 = 0x80000000;
        }
        else if ( v51 < 2147483600.0 )
        {
          v44 = (int)ceilf_0(v51);
        }
        *((float *)&lpMem[1] + 1) = (float)v44;
      }
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v108, (__int64)lpMem);
      goto LABEL_47;
    }
LABEL_99:
    if ( v24 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37 + 8 * v38 + 12)) & v23)
      || v24 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v37 + 8 * v38 + 32)) & v23) )
    {
      goto LABEL_47;
    }
    goto LABEL_29;
  }
LABEL_47:
  v52 = *((_DWORD *)a1 + 6);
  if ( (!v52
     || !*(_DWORD *)(*a1 + 80LL * (unsigned int)(v52 - 1) + 8)
     || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(a1[104]
                                                                               + 96
                                                                               + 120LL
                                                                               * (unsigned int)(*((_DWORD *)a1 + 214) - 1))))
    && v109 )
  {
    v53 = *((float *)&v108 + 2) <= *(float *)&v108 || *((float *)&v108 + 3) <= *((float *)&v108 + 1)
        ? 0.0
        : (float)(*((float *)&v108 + 2) - *(float *)&v108) * (float)(*((float *)&v108 + 3) - *((float *)&v108 + 1));
    if ( v53 >= CCommonRegistryData::m_flCpuClipAreaThreshold )
    {
      if ( !v52 || !*(_DWORD *)(*a1 + 80LL * (unsigned int)(v52 - 1) + 4) )
      {
        *(_OWORD *)lpMem = v108;
        v111 = v108;
        v96 = CBaseClipStack::PushExact((CBaseClipStack *)(a1 + 258), (const struct MilRectF *)&v111);
        v43 = v96;
        if ( v96 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v96, 0xE7u);
          goto LABEL_64;
        }
LABEL_63:
        v59 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
        ++*(_DWORD *)(*a1 + 8 * v59 + 4);
LABEL_64:
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x166u);
          goto LABEL_67;
        }
        v8 = 1;
        goto LABEL_66;
      }
      v54 = *((_DWORD *)a1 + 516);
      if ( v54 )
      {
        v55 = *(_OWORD *)(a1[260] + 16LL * (unsigned int)(v54 - 1));
      }
      else
      {
        v55 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_OWORD *)lpMem = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      v111 = v55;
      *(_OWORD *)lpMem = v108;
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v111, (__int64)lpMem);
      v56 = *((unsigned int *)a1 + 517);
      v43 = 0;
      lpMem[0] = 0LL;
      if ( *((_DWORD *)a1 + 516) != (_DWORD)v56 )
        goto LABEL_59;
      Size = 0LL;
      v68 = ULongLongToUInt(2 * v56, (unsigned int *)&Size);
      v43 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v68, 0x4Cu);
        goto LABEL_62;
      }
      v70 = Size;
      if ( (unsigned int)Size <= 8 )
        v70 = 8;
      v71 = WPF::HrMalloc((WPF *)0x10, v70, (unsigned __int64)lpMem, v69);
      v43 = v71;
      if ( v71 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v71, 0x54u);
      }
      else
      {
        v72 = ULongLongToUInt(16LL * *((unsigned int *)a1 + 516), (unsigned int *)&Size + 1);
        v43 = v72;
        if ( v72 >= 0 )
        {
          v73 = lpMem[0];
          memcpy_0(lpMem[0], (const void *)a1[260], HIDWORD(Size));
          WPF::ProcessHeapImpl::Free((void *)a1[260]);
          a1[260] = (__int64)v73;
          *((_DWORD *)a1 + 517) = v70;
LABEL_59:
          *(_OWORD *)(a1[260] + 16LL * *((unsigned int *)a1 + 516)) = v111;
          v57 = *((_DWORD *)a1 + 522);
          v58 = ++*((_DWORD *)a1 + 516);
          if ( v57 > v58 )
            v58 = v57;
          *((_DWORD *)a1 + 522) = v58;
          goto LABEL_62;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x56u);
      }
      if ( lpMem[0] )
        HeapFree(WPF::g_processHeap, 0, lpMem[0]);
LABEL_62:
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x31u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xEBu);
        goto LABEL_64;
      }
      goto LABEL_63;
    }
  }
  v61 = DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(a1 + 104, &v100);
  v43 = v61;
  if ( v61 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x16Du);
    goto LABEL_67;
  }
  v62 = *(float ***)a2;
  v63 = a1[104] + 120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1);
  v64 = *(_BYTE *)(a2 + 8);
  if ( *(_BYTE *)(v63 + 8) && *(_QWORD *)v63 )
    (***(void (__fastcall ****)(_QWORD, __int64))v63)(*(_QWORD *)v63, 1LL);
  *(_QWORD *)v63 = v62;
  *(_BYTE *)(v63 + 8) = v64;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  v65 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  ++*(_DWORD *)(*a1 + 8 * v65 + 8);
LABEL_66:
  *v98 = v109;
  *v99 = v8;
LABEL_67:
  if ( v101 && v100 )
    (**v100)(v100, 1LL);
  return (unsigned int)v43;
}
