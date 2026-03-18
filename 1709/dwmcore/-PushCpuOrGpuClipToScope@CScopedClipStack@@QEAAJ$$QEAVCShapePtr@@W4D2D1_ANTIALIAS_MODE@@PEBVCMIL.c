/*
 * XREFs of ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180032030
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180034D40 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800350E0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036B80 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x1800481B0 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800B5B50 (-AddMultipleAndSet@-$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackS.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800B5EE0 (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x1800B6ADC (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18011D2D8 (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
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
  char v9; // r13
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
  bool IsEmpty; // al
  int v22; // r8d
  float v23; // xmm0_4
  bool (__fastcall *v24)(CRectanglesShape *__hidden, unsigned int *); // rax
  int v25; // eax
  bool IsRectangles; // al
  char v27; // dl
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // r9
  char v46; // r8
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  float v51; // xmm1_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm1_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm1_4
  float v61; // xmm1_4
  __int64 (__fastcall *v62)(CRegionShape *); // rax
  int TightBounds; // eax
  int v64; // edi
  int v65; // ebx
  float v66; // xmm0_4
  int v67; // eax
  float v68; // xmm0_4
  int v69; // eax
  float v70; // xmm0_4
  int v71; // eax
  float v72; // xmm0_4
  int v73; // eax
  __int128 v74; // xmm0
  unsigned int v75; // eax
  int v76; // eax
  void **v77; // r9
  unsigned int v78; // r14d
  int v79; // eax
  int v80; // eax
  void *v81; // rbx
  unsigned int v82; // eax
  unsigned int v83; // ecx
  int v84; // eax
  __int64 v85; // rcx
  int v86; // eax
  float **v87; // r15
  __int64 v88; // rbx
  char v89; // r14
  __int64 v90; // rcx
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  char *v93; // [rsp+40h] [rbp-C8h]
  char *v94; // [rsp+48h] [rbp-C0h]
  void (__fastcall ***v95)(_QWORD, __int64); // [rsp+58h] [rbp-B0h] BYREF
  char v96; // [rsp+60h] [rbp-A8h]
  __int128 v97; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v98; // [rsp+78h] [rbp-90h]
  __int128 v99; // [rsp+88h] [rbp-80h]
  __int128 v100; // [rsp+98h] [rbp-70h]
  int v101; // [rsp+A8h] [rbp-60h]
  __int64 v102; // [rsp+B0h] [rbp-58h]
  __int128 v103; // [rsp+B8h] [rbp-50h] BYREF
  char v104; // [rsp+C8h] [rbp-40h]
  void *lpMem[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v106; // [rsp+E8h] [rbp-20h] BYREF

  v6 = *(float ***)a2;
  v9 = 0;
  v93 = a5;
  v94 = a6;
  v95 = 0LL;
  v96 = 0;
  v101 = 0;
  if ( a4 )
  {
    v11 = *(_OWORD *)a4;
    v12 = *(_OWORD *)(a4 + 16);
    v101 = *(_DWORD *)(a4 + 64);
    v97 = v11;
    v13 = *(_OWORD *)(a4 + 32);
    v98 = v12;
    v14 = *(_OWORD *)(a4 + 48);
  }
  else
  {
    v97 = _xmm;
    v13 = _xmm;
    v98 = _xmm;
    v14 = _xmm;
    LOWORD(v101) = 32085;
  }
  v15 = *((_DWORD *)a1 + 6);
  v100 = v14;
  v99 = v13;
  v102 = 0LL;
  if ( v15 && *(_DWORD *)(80LL * (unsigned int)(v15 - 1) + *a1 + 8) )
    v16 = *(_OWORD *)(120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1) + a1[104] + 96);
  else
    v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v103 = v16;
  v104 = 0;
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
    v104 = 1;
    v103 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  else
  {
    v24 = (bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *))*((_QWORD *)*v6 + 5);
    if ( v24 == CRectanglesShape::IsRectangles )
    {
      v25 = *((_DWORD *)v6 + 8);
    }
    else
    {
      if ( v24 == CRegionShape::IsRectangles )
        IsRectangles = CRegionShape::IsRectangles((CRegionShape *)v6, (unsigned int *)&Size);
      else
        IsRectangles = v24((CRectanglesShape *)v6, (unsigned int *)&Size);
      if ( !IsRectangles )
        goto LABEL_22;
      v25 = Size;
    }
    if ( v25 == 1 )
    {
      if ( SBYTE1(v101) >> 6 )
      {
        v27 = SBYTE1(v101) >> 6 == 1;
      }
      else
      {
        v27 = 0;
        v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v97 + 2) - 0.0)) & _xmm);
        if ( v28 < 0.000081380211 )
        {
          v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v98 + 2) - 0.0)) & _xmm);
          if ( v29 < 0.000081380211 )
          {
            v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v100 + 2) - 0.0)) & _xmm);
            if ( v30 < 0.000081380211 )
              goto LABEL_50;
          }
          if ( v28 < 0.000081380211 )
          {
            v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v98 + 2) - 0.0)) & _xmm);
            if ( v31 < 0.000081380211 )
            {
              v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v99 - 0.0)) & _xmm);
              if ( v32 < 0.000081380211 )
              {
                v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v99 + 1) - 0.0)) & _xmm);
                if ( v33 < 0.000081380211 )
                {
                  v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v99 + 2) - 0.0)) & _xmm);
                  if ( v34 < 0.000081380211
                    || (v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v99 + 2) - 1.0)) & _xmm),
                        v35 < 0.000081380211) )
                  {
                    v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v99 + 3) - 0.0)) & _xmm);
                    if ( v36 < 0.000081380211 )
                    {
                      v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v100 + 2) - 0.0)) & _xmm);
                      if ( v37 < 0.000081380211 )
                      {
LABEL_50:
                        v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v97 + 3)) & _xmm);
                        v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v100 + 3)) & _xmm);
                        v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v98 + 3)) & _xmm)
                                                                                                * 61440.0)
                                                                                        + (float)(v38 * 61440.0))
                                                                                + v39)
                                                                        - 1.0)) & _xmm);
                        v27 = v40 < 0.000081380211;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        BYTE1(v101) = BYTE1(v101) & 0x3F | ((v27 << 7) - 64);
      }
      if ( v27
        && (v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v97 + 1) - 0.0)) & _xmm), v41 < 0.000081380211)
        && (v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v98 - 0.0)) & _xmm), v42 < 0.000081380211)
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v97 - 0.0)) & _xmm) < 0.000081380211
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v98 + 1) - 0.0)) & _xmm) < 0.000081380211 )
      {
        v43 = *a1;
        v44 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
        v45 = *(_BYTE *)(*a1 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 77);
        if ( v45 >> 6 )
        {
          v46 = v45 >> 6 == 1;
        }
        else
        {
          v46 = 0;
          v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 20)) & _xmm);
          if ( v47 < 0.000081380211 )
          {
            v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43
                                                               + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                               + 36)) & _xmm);
            if ( v48 < 0.000081380211 )
            {
              v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 68)) & _xmm);
              if ( v49 < 0.000081380211 )
                goto LABEL_70;
            }
            if ( v47 < 0.000081380211 )
            {
              v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 36)) & _xmm);
              if ( v50 < 0.000081380211 )
              {
                v51 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43
                                                                   + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                   + 44)) & _xmm);
                if ( v51 < 0.000081380211 )
                {
                  v52 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43
                                                                     + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                     + 48)) & _xmm);
                  if ( v52 < 0.000081380211 )
                  {
                    v53 = *(float *)(v43 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 52);
                    v54 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v53) & _xmm);
                    if ( v54 < 0.000081380211
                      || (v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v53 - 1.0)) & _xmm), v55 < 0.000081380211) )
                    {
                      v56 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43
                                                                         + 80LL
                                                                         * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                         + 56)) & _xmm);
                      if ( v56 < 0.000081380211 )
                      {
                        v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43
                                                                           + 80LL
                                                                           * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                           + 68)) & _xmm);
                        if ( v57 < 0.000081380211 )
                        {
LABEL_70:
                          v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43
                                                                             + 80LL
                                                                             * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                             + 24)) & _xmm);
                          v59 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43
                                                                             + 80LL
                                                                             * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                             + 72)) & _xmm);
                          v60 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 40)) & _xmm)
                                                                                                  * 61440.0)
                                                                                          + (float)(v58 * 61440.0))
                                                                                  + v59)
                                                                          - 1.0)) & _xmm);
                          v46 = v60 < 0.000081380211;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          *(_BYTE *)(v43 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 77) = v45 & 0x3F | ((v46 << 7) - 64);
        }
        if ( v46
          && (v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43 + 8 * v44 + 16)) & _xmm), v61 < 0.000081380211)
          && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43 + 8 * v44 + 28)) & _xmm) < 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43 + 8 * v44 + 12)) & _xmm) < 0.000081380211
          && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v43 + 8 * v44 + 32)) & _xmm) < 0.000081380211 )
        {
          v104 = 1;
          v62 = (__int64 (__fastcall *)(CRegionShape *))*((_QWORD *)*v6 + 4);
          if ( (char *)v62 == (char *)CRectanglesShape::GetTightBounds )
          {
            TightBounds = CRectanglesShape::GetTightBounds(v6, lpMem, 0LL);
          }
          else if ( v62 == CRegionShape::GetTightBounds )
          {
            TightBounds = CRegionShape::GetTightBounds((CRegionShape *)v6);
          }
          else
          {
            TightBounds = ((__int64 (__fastcall *)(float **, void **, _QWORD))v62)(v6, lpMem, 0LL);
          }
          v64 = TightBounds;
          if ( TightBounds < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x13Fu);
            goto LABEL_143;
          }
          CMILMatrix::Transform2DBoundsHelper<0>(&v97, lpMem, lpMem);
          CMILMatrix::Transform2DBoundsHelper<0>(
            *a1 + 12 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1),
            lpMem,
            lpMem);
          if ( a3 == 1 )
          {
            v65 = 0x7FFFFFFF;
            v66 = *(float *)lpMem - 0.5;
            if ( (float)(*(float *)lpMem - 0.5) < -2147483600.0 )
            {
              v67 = 0x80000000;
            }
            else if ( v66 >= 2147483600.0 )
            {
              v67 = 0x7FFFFFFF;
            }
            else
            {
              v67 = (int)ceilf_0(v66);
            }
            *(float *)lpMem = (float)v67;
            v68 = *((float *)lpMem + 1) - 0.5;
            if ( (float)(*((float *)lpMem + 1) - 0.5) < -2147483600.0 )
            {
              v69 = 0x80000000;
            }
            else if ( v68 >= 2147483600.0 )
            {
              v69 = 0x7FFFFFFF;
            }
            else
            {
              v69 = (int)ceilf_0(v68);
            }
            *((float *)lpMem + 1) = (float)v69;
            v70 = *(float *)&lpMem[1] - 0.5;
            if ( (float)(*(float *)&lpMem[1] - 0.5) < -2147483600.0 )
            {
              v71 = 0x80000000;
            }
            else if ( v70 >= 2147483600.0 )
            {
              v71 = 0x7FFFFFFF;
            }
            else
            {
              v71 = (int)ceilf_0(v70);
            }
            *(float *)&lpMem[1] = (float)v71;
            v72 = *((float *)&lpMem[1] + 1) - 0.5;
            if ( (float)(*((float *)&lpMem[1] + 1) - 0.5) < -2147483600.0 )
            {
              v65 = 0x80000000;
            }
            else if ( v72 < 2147483600.0 )
            {
              v65 = (int)ceilf_0(v72);
            }
            *((float *)&lpMem[1] + 1) = (float)v65;
          }
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v103, lpMem);
        }
      }
    }
  }
LABEL_22:
  v22 = *((_DWORD *)a1 + 6);
  if ( v22
    && *(_DWORD *)(*a1 + 80LL * (unsigned int)(v22 - 1) + 8)
    && !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a1[104] + 96 + 120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1))
    || !v104
    || (*((float *)&v103 + 2) <= *(float *)&v103 || *((float *)&v103 + 3) <= *((float *)&v103 + 1)
      ? (v23 = 0.0)
      : (v23 = (float)(*((float *)&v103 + 2) - *(float *)&v103) * (float)(*((float *)&v103 + 3) - *((float *)&v103 + 1))),
        v23 < CCommonRegistryData::m_flCpuClipAreaThreshold) )
  {
    v86 = DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(a1 + 104, &v95);
    v64 = v86;
    if ( v86 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0x166u);
      goto LABEL_143;
    }
    v87 = *(float ***)a2;
    v88 = a1[104] + 120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1);
    v89 = *(_BYTE *)(a2 + 8);
    if ( *(_BYTE *)(v88 + 8) && *(_QWORD *)v88 )
      (***(void (__fastcall ****)(_QWORD, __int64))v88)(*(_QWORD *)v88, 1LL);
    *(_QWORD *)v88 = v87;
    *(_BYTE *)(v88 + 8) = v89;
    *(_QWORD *)a2 = 0LL;
    *(_BYTE *)(a2 + 8) = 0;
    v90 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
    ++*(_DWORD *)(*a1 + 8 * v90 + 8);
    goto LABEL_141;
  }
  if ( !v22 || !*(_DWORD *)(*a1 + 80LL * (unsigned int)(v22 - 1) + 4) )
  {
    v106 = v103;
    v84 = CBaseClipStack::PushExact((CBaseClipStack *)(a1 + 258), (const struct MilRectF *)&v106);
    v64 = v84;
    if ( v84 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, 0xE7u);
      goto LABEL_133;
    }
    goto LABEL_131;
  }
  v73 = *((_DWORD *)a1 + 516);
  if ( v73 )
    v74 = *(_OWORD *)(a1[260] + 16LL * (unsigned int)(v73 - 1));
  else
    v74 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v106 = v74;
  *(_OWORD *)lpMem = v103;
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v106, lpMem);
  v75 = *((_DWORD *)a1 + 517);
  v64 = 0;
  lpMem[0] = 0LL;
  if ( *((_DWORD *)a1 + 516) != v75 )
    goto LABEL_120;
  Size = 0LL;
  v76 = ULongLongToUInt(2LL * v75, (unsigned int *)&Size);
  v64 = v76;
  if ( v76 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x4Cu);
    goto LABEL_123;
  }
  v78 = Size;
  if ( (unsigned int)Size <= 8 )
    v78 = 8;
  v79 = WPF::HrMalloc((WPF *)0x10, v78, (unsigned __int64)lpMem, v77);
  v64 = v79;
  if ( v79 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x54u);
  }
  else
  {
    v80 = ULongLongToUInt(16LL * *((unsigned int *)a1 + 516), (unsigned int *)&Size + 1);
    v64 = v80;
    if ( v80 >= 0 )
    {
      v81 = lpMem[0];
      memcpy_0(lpMem[0], (const void *)a1[260], HIDWORD(Size));
      WPF::ProcessHeapImpl::Free((void *)a1[260]);
      a1[260] = (__int64)v81;
      *((_DWORD *)a1 + 517) = v78;
LABEL_120:
      *(_OWORD *)(a1[260] + 16LL * *((unsigned int *)a1 + 516)) = v106;
      v82 = *((_DWORD *)a1 + 522);
      v83 = ++*((_DWORD *)a1 + 516);
      if ( v82 > v83 )
        v83 = v82;
      *((_DWORD *)a1 + 522) = v83;
      goto LABEL_123;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x56u);
  }
  if ( lpMem[0] )
    HeapFree(WPF::g_processHeap, 0, lpMem[0]);
LABEL_123:
  if ( v64 >= 0 )
  {
LABEL_131:
    v85 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
    ++*(_DWORD *)(*a1 + 8 * v85 + 4);
    goto LABEL_133;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x31u);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0xEBu);
LABEL_133:
  if ( v64 >= 0 )
  {
    v9 = 1;
LABEL_141:
    *v93 = v104;
    *v94 = v9;
    goto LABEL_143;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x15Fu);
LABEL_143:
  if ( v96 && v95 )
    (**v95)(v95, 1LL);
  return (unsigned int)v64;
}
