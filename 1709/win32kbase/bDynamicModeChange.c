/*
 * XREFs of bDynamicModeChange @ 0x1C006BCF4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003CEA8 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003D0D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003DFBC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C003F6E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C006CC80 (bDynamicProcessAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C006DD08 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     HmgShareLock @ 0x1C006E5E0 (HmgShareLock.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C006E5F8 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C006E65C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     UserIsGDIScalingApplicable @ 0x1C00735D0 (UserIsGDIScalingApplicable.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0093DD0 (-SETFLAG@@YAXHAECKK@Z.c)
 *     UserGetHwndDpi @ 0x1C00A0480 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C00A2100 (GreGetScaledLogPixels.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00A59E0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00EDCC8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F4F60 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, unsigned int a3)
{
  unsigned int v6; // r12d
  __int64 v7; // r13
  int v8; // eax
  int v9; // eax
  struct tagSIZE *v10; // rax
  struct tagSIZE v11; // rdi
  struct tagSIZE *v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // r9d
  struct SURFACE *v15; // r10
  struct SURFACE *v16; // r15
  struct tagSIZE v17; // rbx
  int cy; // ecx
  __int64 v19; // r8
  __int64 v20; // rax
  struct SURFACE *v21; // r13
  __int64 Objt; // rax
  __int64 v23; // r15
  bool v24; // zf
  struct SURFACE *v25; // rax
  struct SURFACE *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  void *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  struct SURFACE *v33; // rdi
  struct SURFACE *v34; // r15
  _QWORD *v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rbx
  HDEV v39; // rax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rbx
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  struct OBJECT *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // ecx
  HDEV v51; // rax
  HDEV v52; // rdx
  __int64 v53; // r8
  _OWORD *v54; // rcx
  __int64 v55; // r9
  HDEV v56; // rax
  __int128 v57; // xmm1
  __int64 v58; // r9
  HDEV v59; // rcx
  HDEV v60; // rax
  __int128 v61; // xmm1
  _OWORD *v62; // rax
  __int64 v63; // rdx
  __int128 v64; // xmm1
  __int64 v65; // r9
  HDEV v66; // rax
  HDEV v67; // rdx
  _OWORD *v68; // rcx
  __int128 v69; // xmm1
  __int64 v70; // r9
  __int128 v71; // xmm1
  HDEV v72; // rdx
  HDEV v73; // rcx
  __int128 v74; // xmm1
  _OWORD *v75; // rax
  __int128 v76; // xmm1
  HDEV v77; // r11
  HDEV v78; // r10
  int v79; // ecx
  int v80; // ebx
  int v81; // ecx
  int v82; // ebx
  int v83; // ecx
  int v84; // ebx
  int v85; // ecx
  int v86; // ebx
  int v87; // ecx
  int v88; // ebx
  int v89; // ecx
  int v90; // ebx
  int v91; // ecx
  int v92; // ebx
  volatile unsigned int v93; // ett
  signed __int32 v94; // ett
  __int64 v95; // r8
  _OWORD *v96; // rcx
  __int64 v97; // r9
  HDEV v98; // rax
  HDEV v99; // rdx
  __int128 v100; // xmm1
  __int64 v101; // r9
  __int128 v102; // xmm1
  HDEV v103; // rdx
  HDEV v104; // rcx
  __int128 v105; // xmm1
  _OWORD *v106; // rax
  __int128 v107; // xmm1
  char v109; // al
  unsigned __int64 v110; // xmm2_8
  __m128 v111; // xmm0
  int HwndDpi; // eax
  unsigned __int64 v113; // xmm2_8
  __m128 v114; // xmm0
  void *v115; // rcx
  int v116; // eax
  __int64 v117; // rax
  HDEV v118; // r8
  HDEV v119; // rdx
  HDEV v120; // rcx
  int v121; // r8d
  HDEV *v122; // rcx
  unsigned int v123; // r8d
  volatile unsigned int *v124; // r11
  unsigned int v125; // r8d
  volatile unsigned int *v126; // r11
  unsigned int v127; // r8d
  volatile unsigned int *v128; // r11
  unsigned int v129; // r8d
  volatile unsigned int *v130; // r11
  unsigned int v131; // r8d
  volatile unsigned int *v132; // r11
  unsigned int v133; // r8d
  volatile unsigned int *v134; // r11
  unsigned int v135; // r8d
  volatile unsigned int *v136; // r11
  __int64 v137; // [rsp+48h] [rbp-69h]
  __int64 v138; // [rsp+48h] [rbp-69h]
  __int16 v139; // [rsp+50h] [rbp-61h]
  int v140; // [rsp+54h] [rbp-5Dh]
  int v141; // [rsp+58h] [rbp-59h]
  __int64 v142; // [rsp+60h] [rbp-51h]
  HDEV v143; // [rsp+68h] [rbp-49h] BYREF
  HDEV v144; // [rsp+70h] [rbp-41h] BYREF
  int v145; // [rsp+78h] [rbp-39h]
  int v146; // [rsp+7Ch] [rbp-35h]
  __int64 v147; // [rsp+80h] [rbp-31h]
  struct SURFACE *v148; // [rsp+88h] [rbp-29h]
  struct SURFACE *v149; // [rsp+90h] [rbp-21h]
  __int64 v150; // [rsp+98h] [rbp-19h]
  __int64 v151; // [rsp+A0h] [rbp-11h]
  unsigned __int64 v152; // [rsp+A8h] [rbp-9h]
  void *v153; // [rsp+B0h] [rbp-1h]
  __int64 v154; // [rsp+B8h] [rbp+7h] BYREF
  _QWORD v155[5]; // [rsp+C0h] [rbp+Fh] BYREF
  int v156; // [rsp+130h] [rbp+7Fh]

  v6 = 0;
  if ( !(unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
    return v6;
  v153 = PALLOCMEM2(0xA00uLL, 1886221383LL, 0);
  v7 = (__int64)v153;
  if ( !v153 )
    return v6;
  v8 = (_DWORD)a2[8] & 0x400;
  v143 = a1;
  v145 = v8;
  v9 = (_DWORD)a1[8] & 0x400;
  v144 = a2;
  v146 = v9;
  if ( (int)IsvDisableSynchronizeSupported() >= 0 )
  {
    vDisableSynchronize(a2);
    vDisableSynchronize(a1);
  }
  v141 = *((_DWORD *)a2 + 544) * *((_DWORD *)a2 + 545);
  v140 = *((_DWORD *)a1 + 544) * *((_DWORD *)a1 + 545);
  if ( !(unsigned int)bDynamicProcessAllDriverRealizations(a2, 0LL, 1LL)
    || !(unsigned int)bDynamicProcessAllDriverRealizations(a1, a2, a3) )
  {
    goto LABEL_97;
  }
  v156 = 1;
  v10 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v143, &v154);
  v149 = (struct SURFACE *)*((_QWORD *)a1 + 321);
  v11 = *v10;
  v150 = *((_QWORD *)a1 + 228);
  v147 = *((_QWORD *)a1 + 227);
  v12 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v144, v155);
  v16 = (struct SURFACE *)*((_QWORD *)a2 + 321);
  v148 = v16;
  v17 = *v12;
  v151 = *((_QWORD *)a2 + 228);
  v142 = *((_QWORD *)a2 + 227);
  v152 = (unsigned __int64)v17;
  if ( v17.cx < v11.cx || (cy = v11.cy, v17.cy < v11.cy) )
  {
    v109 = bDynamicIntersectVisRect(v15, v17);
    cy = v11.cy;
    v14 = v109 & 1;
    v156 = v14;
  }
  if ( v11.cx < v17.cx || cy < SHIDWORD(v152) )
    v14 = bDynamicIntersectVisRect(v16, v11) & v156;
  v19 = *((_QWORD *)a2 + 345);
  if ( v19 && v19 == *((_QWORD *)a1 + 345) && *((_QWORD *)a2 + 226) == *((_QWORD *)a1 + 226) )
  {
    if ( !v14 )
      goto LABEL_97;
    v14 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 345))(v147, v142);
  }
  if ( !v14 )
    goto LABEL_97;
  v20 = 0LL;
  v21 = v16;
  while ( 1 )
  {
    LOBYTE(v13) = 1;
    Objt = HmgSafeNextObjt(v20, v13);
    v23 = Objt;
    if ( !Objt )
      break;
    v24 = (*(_DWORD *)(Objt + 36) & 0x2000) == 0;
    v20 = *(_QWORD *)Objt;
    v137 = v20;
    if ( v24 )
    {
      v25 = *(struct SURFACE **)(v23 + 512);
      v26 = v149;
      if ( v25 == v149 )
      {
        *(_QWORD *)(v23 + 512) = v21;
        if ( !v21 || (*((_DWORD *)v21 + 29) & 0x800) == 0 )
        {
          v30 = *(void **)(v23 + 480);
          if ( v30
            && (unsigned int)UserIsGDIScalingApplicable(v30)
            && (HwndDpi = UserGetHwndDpi(*(void **)(v23 + 480)), HwndDpi && (_WORD)v156 != 96) )
          {
            v111 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
            v111.m128_f32[0] = v111.m128_f32[0] / 96.0;
            v110 = _mm_unpacklo_ps(v111, v111).m128_u64[0];
            v152 = v110;
LABEL_108:
            DC::vSetDpiScaling(v23, v110);
          }
          else
          {
            v31 = *(_DWORD *)(v23 + 536);
            if ( (v31 & 1) != 0 )
            {
              *(_QWORD *)(v23 + 540) = 0LL;
              *(_QWORD *)(v23 + 548) = 0LL;
              *(_DWORD *)(v23 + 36) |= 0x10u;
              *(_DWORD *)(v23 + 536) = v31 & 0xFFFFFFF8 | 4;
            }
          }
          *(struct tagSIZE *)(v23 + 528) = v17;
          goto LABEL_31;
        }
        v110 = _mm_unpacklo_ps((__m128)*((unsigned int *)v21 + 149), (__m128)*((unsigned int *)v21 + 150)).m128_u64[0];
        goto LABEL_108;
      }
      if ( v25 == v21 )
      {
        *(_QWORD *)(v23 + 512) = v149;
        if ( v26 && (*((_DWORD *)v26 + 29) & 0x800) != 0 )
        {
          v113 = _mm_unpacklo_ps((__m128)*((unsigned int *)v26 + 149), (__m128)*((unsigned int *)v26 + 150)).m128_u64[0];
          goto LABEL_116;
        }
        v115 = *(void **)(v23 + 480);
        if ( v115
          && (unsigned int)UserIsGDIScalingApplicable(v115)
          && (unsigned int)UserGetHwndDpi(*(void **)(v23 + 480))
          && v139 != 96 )
        {
          v114 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
          v114.m128_f32[0] = v114.m128_f32[0] / 96.0;
          v113 = _mm_unpacklo_ps(v114, v114).m128_u64[0];
          v155[1] = v113;
LABEL_116:
          DC::vSetDpiScaling(v23, v113);
        }
        else
        {
          v116 = *(_DWORD *)(v23 + 536);
          if ( (v116 & 1) != 0 )
          {
            *(_QWORD *)(v23 + 540) = 0LL;
            *(_QWORD *)(v23 + 548) = 0LL;
            *(_DWORD *)(v23 + 36) |= 0x10u;
            *(_DWORD *)(v23 + 536) = v116 & 0xFFFFFFF8 | 4;
          }
        }
        *(struct tagSIZE *)(v23 + 528) = v11;
LABEL_31:
        *(_DWORD *)(v23 + 332) |= 0xFu;
      }
      v13 = *(unsigned int *)(v23 + 36);
      if ( (v13 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v23 + 512) + 112LL) & 0x200) != 0 )
        LODWORD(v13) = v13 | 0x8000;
      else
        LODWORD(v13) = v13 & 0xFFFF7FFF;
      v27 = *(_QWORD *)(v23 + 24);
      v28 = v147;
      *(_DWORD *)(v23 + 36) = v13;
      if ( v27 == v28 )
      {
        *(_QWORD *)(v23 + 24) = v142;
        *(_DWORD *)(struct HDEV__ *)(v23 + 72) = a2[460];
        v29 = *((_DWORD *)a2 + 536);
        goto LABEL_22;
      }
      v24 = v27 == v142;
      v20 = v137;
      if ( v24 )
      {
        *(_QWORD *)(v23 + 24) = v28;
        *(_DWORD *)(struct HDEV__ *)(v23 + 72) = a1[460];
        v29 = *((_DWORD *)a1 + 536);
LABEL_22:
        *(_DWORD *)(v23 + 76) = v29;
        v20 = v137;
      }
    }
  }
  v7 = (__int64)v153;
  v32 = 0LL;
  v33 = v148;
  v34 = v149;
  while ( 1 )
  {
    LOBYTE(v13) = 5;
    v35 = (_QWORD *)HmgSafeNextObjt(v32, v13);
    v38 = v35;
    if ( !v35 )
      break;
    v32 = *v35;
    v39 = (HDEV)v35[6];
    v138 = v32;
    if ( v39 == a1 )
    {
      v41 = *((_DWORD *)v38 + 28);
      if ( (v41 & 0x4000000) != 0 )
      {
        v13 = 8193LL;
        if ( (*((_DWORD *)v38 + 29) & 0x2001) == 0x2001 )
        {
          v117 = WdLogNewEntry5_WdAssertion(v32, 8193LL, v36, v37);
          WdLogEvent5_WdAssertion(v117);
          v32 = v138;
          v38[6] = a2;
        }
        if ( v140 != v141 && *((_DWORD *)v38 + 24) == *((_DWORD *)v34 + 24) )
        {
          v118 = a2;
          v119 = a1;
          goto LABEL_130;
        }
      }
      else if ( (v41 & 0x300000) == 0x200000 )
      {
        v38[6] = a2;
      }
    }
    else if ( v39 == a2 )
    {
      v40 = *((_DWORD *)v38 + 28);
      if ( (v40 & 0x4000000) != 0 )
      {
        v13 = 8193LL;
        if ( (*((_DWORD *)v38 + 29) & 0x2001) == 0x2001 )
          v38[6] = a1;
        if ( v140 != v141 && *((_DWORD *)v38 + 24) == *((_DWORD *)v33 + 24) )
        {
          v118 = a1;
          v119 = a2;
LABEL_130:
          vDynamicSwitchPalettes((struct SURFACE *)v38, (struct PDEV *)v119, (struct PDEV *)v118);
          v32 = v138;
        }
      }
      else if ( (v40 & 0x300000) == 0x200000 )
      {
        v38[6] = a1;
      }
    }
  }
  v42 = 0LL;
  while ( 1 )
  {
    LOBYTE(v13) = 28;
    v43 = (__int64 *)HmgSafeNextObjt(v42, v13);
    if ( !v43 )
      break;
    v120 = (HDEV)v43[5];
    v42 = *v43;
    if ( v120 == a1 )
    {
      v43[5] = (__int64)a2;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v144);
      v122 = &v143;
      goto LABEL_135;
    }
    if ( v120 == a2 )
    {
      v43[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v143);
      v122 = &v144;
LABEL_135:
      PDEVOBJ::vUnreferencePdev((PDEV ***)v122, 0, v121);
    }
  }
  vChangeWndObjs(v34, a1, v33, a2);
  LOBYTE(v44) = 16;
  v45 = HmgShareLock(ghbrGrayPattern, v44);
  *(_QWORD *)(v7 + 80) = v7 + 560;
  v46 = (struct OBJECT *)v45;
  v47 = v151;
  *(_DWORD *)(v7 + 600) = 0;
  *(_DWORD *)(*(_QWORD *)(v7 + 80) + 32LL) = 0xFFFFFF;
  v48 = *(_QWORD *)(v7 + 80);
  *(_DWORD *)(v7 + 112) = 0;
  *(_QWORD *)(v48 + 112) = 0LL;
  EBRUSHOBJ::vInitBrush((unsigned int *)a1 + 388, v7, (__int64)v46, (__int64)ppalDefault, v47, (__int64)v33, 1u);
  EBRUSHOBJ::vInitBrush((unsigned int *)a2 + 388, v7, (__int64)v46, (__int64)ppalDefault, v150, (__int64)v34, 1u);
  HmgDecrementShareReferenceCountEx(v46, 0LL);
  *((_QWORD *)a2 + 228) = v150;
  *((_QWORD *)a2 + 227) = v147;
  v49 = v151;
  *((_QWORD *)a2 + 321) = v34;
  *((_QWORD *)a1 + 228) = v49;
  *((_QWORD *)a1 + 227) = v142;
  *((_QWORD *)a1 + 321) = v33;
  v50 = *((_DWORD *)v34 + 28);
  if ( (v50 & 0x10000000) != 0 )
  {
    *((_DWORD *)v33 + 28) |= 0x10000000u;
    if ( a1 != (HDEV)-72LL && (((_DWORD)a1[43] & 0x10000000) != 0 || ((_DWORD)a1[45] & 0x10000000) != 0) )
    {
      v51 = a2 + 18;
LABEL_56:
      if ( v51 )
      {
        *((_DWORD *)v51 + 25) |= 0x10000000u;
        *((_DWORD *)v51 + 27) |= 0x10000000u;
      }
    }
  }
  else if ( (*((_DWORD *)v33 + 28) & 0x10000000) != 0 )
  {
    *((_DWORD *)v34 + 28) = v50 | 0x10000000;
    if ( a2 != (HDEV)-72LL && (((_DWORD)a2[43] & 0x10000000) != 0 || ((_DWORD)a2[45] & 0x10000000) != 0) )
    {
      v51 = a1 + 18;
      goto LABEL_56;
    }
  }
  v52 = a2 + 460;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 226);
  v53 = 2LL;
  v54 = (_OWORD *)v7;
  *((_QWORD *)a2 + 226) = *((_QWORD *)a1 + 226);
  v55 = 2LL;
  *((_QWORD *)a1 + 226) = *(_QWORD *)v7;
  v56 = a2 + 460;
  do
  {
    *v54 = *(_OWORD *)v56;
    v54[1] = *((_OWORD *)v56 + 1);
    v54[2] = *((_OWORD *)v56 + 2);
    v54[3] = *((_OWORD *)v56 + 3);
    v54[4] = *((_OWORD *)v56 + 4);
    v54[5] = *((_OWORD *)v56 + 5);
    v54[6] = *((_OWORD *)v56 + 6);
    v54 += 8;
    v57 = *((_OWORD *)v56 + 7);
    v56 += 32;
    *(v54 - 1) = v57;
    --v55;
  }
  while ( v55 );
  v58 = 2LL;
  *v54 = *(_OWORD *)v56;
  v54[1] = *((_OWORD *)v56 + 1);
  v54[2] = *((_OWORD *)v56 + 2);
  *((_QWORD *)v54 + 6) = *((_QWORD *)v56 + 6);
  v59 = a1 + 460;
  v60 = a1 + 460;
  do
  {
    *(_OWORD *)v52 = *(_OWORD *)v60;
    *((_OWORD *)v52 + 1) = *((_OWORD *)v60 + 1);
    *((_OWORD *)v52 + 2) = *((_OWORD *)v60 + 2);
    *((_OWORD *)v52 + 3) = *((_OWORD *)v60 + 3);
    *((_OWORD *)v52 + 4) = *((_OWORD *)v60 + 4);
    *((_OWORD *)v52 + 5) = *((_OWORD *)v60 + 5);
    *((_OWORD *)v52 + 6) = *((_OWORD *)v60 + 6);
    v52 += 32;
    v61 = *((_OWORD *)v60 + 7);
    v60 += 32;
    *((_OWORD *)v52 - 1) = v61;
    --v58;
  }
  while ( v58 );
  *(_OWORD *)v52 = *(_OWORD *)v60;
  *((_OWORD *)v52 + 1) = *((_OWORD *)v60 + 1);
  *((_OWORD *)v52 + 2) = *((_OWORD *)v60 + 2);
  *((_QWORD *)v52 + 6) = *((_QWORD *)v60 + 6);
  v62 = (_OWORD *)v7;
  v63 = 2LL;
  do
  {
    *(_OWORD *)v59 = *v62;
    *((_OWORD *)v59 + 1) = v62[1];
    *((_OWORD *)v59 + 2) = v62[2];
    *((_OWORD *)v59 + 3) = v62[3];
    *((_OWORD *)v59 + 4) = v62[4];
    *((_OWORD *)v59 + 5) = v62[5];
    *((_OWORD *)v59 + 6) = v62[6];
    v59 += 32;
    v64 = v62[7];
    v62 += 8;
    *((_OWORD *)v59 - 1) = v64;
    --v63;
  }
  while ( v63 );
  v65 = 2LL;
  *(_OWORD *)v59 = *v62;
  *((_OWORD *)v59 + 1) = v62[1];
  *((_OWORD *)v59 + 2) = v62[2];
  *((_QWORD *)v59 + 6) = *((_QWORD *)v62 + 6);
  v66 = a2 + 538;
  v67 = a2 + 538;
  v68 = (_OWORD *)v7;
  do
  {
    *v68 = *(_OWORD *)v67;
    v68[1] = *((_OWORD *)v67 + 1);
    v68[2] = *((_OWORD *)v67 + 2);
    v68[3] = *((_OWORD *)v67 + 3);
    v68[4] = *((_OWORD *)v67 + 4);
    v68[5] = *((_OWORD *)v67 + 5);
    v68[6] = *((_OWORD *)v67 + 6);
    v68 += 8;
    v69 = *((_OWORD *)v67 + 7);
    v67 += 32;
    *(v68 - 1) = v69;
    --v65;
  }
  while ( v65 );
  v70 = 2LL;
  *v68 = *(_OWORD *)v67;
  v68[1] = *((_OWORD *)v67 + 1);
  v68[2] = *((_OWORD *)v67 + 2);
  v71 = *((_OWORD *)v67 + 3);
  v72 = a1 + 538;
  v68[3] = v71;
  v73 = a1 + 538;
  do
  {
    *(_OWORD *)v66 = *(_OWORD *)v73;
    *((_OWORD *)v66 + 1) = *((_OWORD *)v73 + 1);
    *((_OWORD *)v66 + 2) = *((_OWORD *)v73 + 2);
    *((_OWORD *)v66 + 3) = *((_OWORD *)v73 + 3);
    *((_OWORD *)v66 + 4) = *((_OWORD *)v73 + 4);
    *((_OWORD *)v66 + 5) = *((_OWORD *)v73 + 5);
    *((_OWORD *)v66 + 6) = *((_OWORD *)v73 + 6);
    v66 += 32;
    v74 = *((_OWORD *)v73 + 7);
    v73 += 32;
    *((_OWORD *)v66 - 1) = v74;
    --v70;
  }
  while ( v70 );
  *(_OWORD *)v66 = *(_OWORD *)v73;
  *((_OWORD *)v66 + 1) = *((_OWORD *)v73 + 1);
  *((_OWORD *)v66 + 2) = *((_OWORD *)v73 + 2);
  *((_OWORD *)v66 + 3) = *((_OWORD *)v73 + 3);
  v75 = (_OWORD *)v7;
  do
  {
    *(_OWORD *)v72 = *v75;
    *((_OWORD *)v72 + 1) = v75[1];
    *((_OWORD *)v72 + 2) = v75[2];
    *((_OWORD *)v72 + 3) = v75[3];
    *((_OWORD *)v72 + 4) = v75[4];
    *((_OWORD *)v72 + 5) = v75[5];
    *((_OWORD *)v72 + 6) = v75[6];
    v72 += 32;
    v76 = v75[7];
    v75 += 8;
    *((_OWORD *)v72 - 1) = v76;
    --v53;
  }
  while ( v53 );
  *(_OWORD *)v72 = *v75;
  *((_OWORD *)v72 + 1) = v75[1];
  *((_OWORD *)v72 + 2) = v75[2];
  *((_OWORD *)v72 + 3) = v75[3];
  *(_OWORD *)v7 = *(_OWORD *)(a2 + 618);
  *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 622);
  *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 626);
  *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 630);
  *(_OWORD *)(v7 + 64) = *(_OWORD *)(a2 + 634);
  *(_OWORD *)(v7 + 80) = *(_OWORD *)(a2 + 638);
  *(_OWORD *)(a2 + 618) = *(_OWORD *)(a1 + 618);
  *(_OWORD *)(a2 + 622) = *(_OWORD *)(a1 + 622);
  *(_OWORD *)(a2 + 626) = *(_OWORD *)(a1 + 626);
  *(_OWORD *)(a2 + 630) = *(_OWORD *)(a1 + 630);
  *(_OWORD *)(a2 + 634) = *(_OWORD *)(a1 + 634);
  *(_OWORD *)(a2 + 638) = *(_OWORD *)(a1 + 638);
  *(_OWORD *)(a1 + 618) = *(_OWORD *)v7;
  *(_OWORD *)(a1 + 622) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)(a1 + 626) = *(_OWORD *)(v7 + 32);
  *(_OWORD *)(a1 + 630) = *(_OWORD *)(v7 + 48);
  *(_OWORD *)(a1 + 634) = *(_OWORD *)(v7 + 64);
  *(_OWORD *)(a1 + 638) = *(_OWORD *)(v7 + 80);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 322);
  *((_QWORD *)a2 + 322) = *((_QWORD *)a1 + 322);
  *((_QWORD *)a1 + 322) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 323);
  *((_QWORD *)a2 + 323) = *((_QWORD *)a1 + 323);
  *((_QWORD *)a1 + 323) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 324);
  *((_QWORD *)a2 + 324) = *((_QWORD *)a1 + 324);
  *((_QWORD *)a1 + 324) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 325);
  *((_QWORD *)a2 + 325) = *((_QWORD *)a1 + 325);
  *((_QWORD *)a1 + 325) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 326);
  *((_QWORD *)a2 + 326) = *((_QWORD *)a1 + 326);
  *((_QWORD *)a1 + 326) = *(_QWORD *)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[886];
  a2[886] = a1[886];
  *(_DWORD *)(a1 + 886) = *(_DWORD *)(HDEV)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 327);
  v77 = a2 + 8;
  v78 = a1 + 8;
  *((_QWORD *)a2 + 327) = *((_QWORD *)a1 + 327);
  *((_QWORD *)a1 + 327) = *(_QWORD *)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[656];
  a2[656] = a1[656];
  *(_DWORD *)(a1 + 656) = *(_DWORD *)(HDEV)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[657];
  a2[657] = a1[657];
  *(_DWORD *)(a1 + 657) = *(_DWORD *)(HDEV)v7;
  v79 = (_DWORD)a2[8] & 0x20000;
  v80 = (_DWORD)a1[8] & 0x20000;
  if ( v80 != v79 )
  {
    SETFLAG(v79, (volatile unsigned int *)a1 + 8, 0x20000u);
    SETFLAG(v80, v124, v123);
  }
  v81 = *(_DWORD *)v77 & 0x1000000;
  v82 = *(_DWORD *)v78 & 0x1000000;
  if ( v82 != v81 )
  {
    SETFLAG(v81, (volatile unsigned int *)v78, 0x1000000u);
    SETFLAG(v82, v126, v125);
  }
  v83 = *(_DWORD *)v77 & 0x20000000;
  v84 = *(_DWORD *)v78 & 0x20000000;
  if ( v84 != v83 )
  {
    SETFLAG(v83, (volatile unsigned int *)v78, 0x20000000u);
    SETFLAG(v84, v128, v127);
  }
  v85 = *(_DWORD *)v77 & 0x2000000;
  v86 = *(_DWORD *)v78 & 0x2000000;
  if ( v86 != v85 )
  {
    SETFLAG(v85, (volatile unsigned int *)v78, 0x2000000u);
    SETFLAG(v86, v130, v129);
  }
  v87 = *(_DWORD *)v77 & 0x8000000;
  v88 = *(_DWORD *)v78 & 0x8000000;
  if ( v88 != v87 )
  {
    SETFLAG(v87, (volatile unsigned int *)v78, 0x8000000u);
    SETFLAG(v88, v132, v131);
  }
  v89 = *(_DWORD *)v77 & 0x4000000;
  v90 = *(_DWORD *)v78 & 0x4000000;
  if ( v90 != v89 )
  {
    SETFLAG(v89, (volatile unsigned int *)v78, 0x4000000u);
    SETFLAG(v90, v134, v133);
  }
  v91 = *(_DWORD *)v77 & 0x40000000;
  v92 = *(_DWORD *)v78 & 0x40000000;
  if ( v92 != v91 )
  {
    SETFLAG(v91, (volatile unsigned int *)v78, 0x40000000u);
    SETFLAG(v92, v136, v135);
  }
  _m_prefetchw(v78);
  do
    v93 = *(_DWORD *)v78;
  while ( v93 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v78,
                   *(_DWORD *)v78 & 0xEFFFFFFF,
                   *(_DWORD *)v78) );
  _m_prefetchw(v77);
  do
    v94 = *(_DWORD *)v77;
  while ( v94 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v77,
                   *(_DWORD *)v77 & 0xEFFFFFFF,
                   *(_DWORD *)v77) );
  *((_QWORD *)a1 + 3) = 0LL;
  v95 = 6LL;
  *((_QWORD *)a2 + 3) = 0LL;
  v96 = (_OWORD *)v7;
  v97 = 6LL;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 217);
  *((_QWORD *)a2 + 217) = *((_QWORD *)a1 + 217);
  *((_QWORD *)a1 + 217) = *(_QWORD *)v7;
  *(_OWORD *)v7 = *(_OWORD *)(a2 + 366);
  *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 370);
  *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 374);
  *(_OWORD *)(a2 + 366) = *(_OWORD *)(a1 + 366);
  *(_OWORD *)(a2 + 370) = *(_OWORD *)(a1 + 370);
  *(_OWORD *)(a2 + 374) = *(_OWORD *)(a1 + 374);
  *(_OWORD *)(a1 + 366) = *(_OWORD *)v7;
  *(_OWORD *)(a1 + 370) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)(a1 + 374) = *(_OWORD *)(v7 + 32);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 180);
  *((_QWORD *)a2 + 180) = *((_QWORD *)a1 + 180);
  *((_QWORD *)a1 + 180) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 181);
  *((_QWORD *)a2 + 181) = *((_QWORD *)a1 + 181);
  *((_QWORD *)a1 + 181) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 182);
  *((_QWORD *)a2 + 182) = *((_QWORD *)a1 + 182);
  *((_QWORD *)a1 + 182) = *(_QWORD *)v7;
  v98 = a2 + 676;
  v99 = a2 + 676;
  do
  {
    *v96 = *(_OWORD *)v99;
    v96[1] = *((_OWORD *)v99 + 1);
    v96[2] = *((_OWORD *)v99 + 2);
    v96[3] = *((_OWORD *)v99 + 3);
    v96[4] = *((_OWORD *)v99 + 4);
    v96[5] = *((_OWORD *)v99 + 5);
    v96[6] = *((_OWORD *)v99 + 6);
    v96 += 8;
    v100 = *((_OWORD *)v99 + 7);
    v99 += 32;
    *(v96 - 1) = v100;
    --v97;
  }
  while ( v97 );
  v101 = 6LL;
  *v96 = *(_OWORD *)v99;
  v96[1] = *((_OWORD *)v99 + 1);
  v96[2] = *((_OWORD *)v99 + 2);
  v102 = *((_OWORD *)v99 + 3);
  v103 = a1 + 676;
  v96[3] = v102;
  v104 = a1 + 676;
  do
  {
    *(_OWORD *)v98 = *(_OWORD *)v104;
    *((_OWORD *)v98 + 1) = *((_OWORD *)v104 + 1);
    *((_OWORD *)v98 + 2) = *((_OWORD *)v104 + 2);
    *((_OWORD *)v98 + 3) = *((_OWORD *)v104 + 3);
    *((_OWORD *)v98 + 4) = *((_OWORD *)v104 + 4);
    *((_OWORD *)v98 + 5) = *((_OWORD *)v104 + 5);
    *((_OWORD *)v98 + 6) = *((_OWORD *)v104 + 6);
    v98 += 32;
    v105 = *((_OWORD *)v104 + 7);
    v104 += 32;
    *((_OWORD *)v98 - 1) = v105;
    --v101;
  }
  while ( v101 );
  *(_OWORD *)v98 = *(_OWORD *)v104;
  *((_OWORD *)v98 + 1) = *((_OWORD *)v104 + 1);
  *((_OWORD *)v98 + 2) = *((_OWORD *)v104 + 2);
  *((_OWORD *)v98 + 3) = *((_OWORD *)v104 + 3);
  v106 = (_OWORD *)v7;
  do
  {
    *(_OWORD *)v103 = *v106;
    *((_OWORD *)v103 + 1) = v106[1];
    *((_OWORD *)v103 + 2) = v106[2];
    *((_OWORD *)v103 + 3) = v106[3];
    *((_OWORD *)v103 + 4) = v106[4];
    *((_OWORD *)v103 + 5) = v106[5];
    *((_OWORD *)v103 + 6) = v106[6];
    v103 += 32;
    v107 = v106[7];
    v106 += 8;
    *((_OWORD *)v103 - 1) = v107;
    --v95;
  }
  while ( v95 );
  *(_OWORD *)v103 = *v106;
  *((_OWORD *)v103 + 1) = v106[1];
  *((_OWORD *)v103 + 2) = v106[2];
  *((_OWORD *)v103 + 3) = v106[3];
  *(_QWORD *)v7 = *((_QWORD *)a2 + 218);
  *((_QWORD *)a2 + 218) = *((_QWORD *)a1 + 218);
  *((_QWORD *)a1 + 218) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 219);
  *((_QWORD *)a2 + 219) = *((_QWORD *)a1 + 219);
  *((_QWORD *)a1 + 219) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 221);
  *((_QWORD *)a2 + 221) = *((_QWORD *)a1 + 221);
  *((_QWORD *)a1 + 221) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 222);
  *((_QWORD *)a2 + 222) = *((_QWORD *)a1 + 222);
  *((_QWORD *)a1 + 222) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 223);
  *((_QWORD *)a2 + 223) = *((_QWORD *)a1 + 223);
  *((_QWORD *)a1 + 223) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 224);
  *((_QWORD *)a2 + 224) = *((_QWORD *)a1 + 224);
  *((_QWORD *)a1 + 224) = *(_QWORD *)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[665];
  a2[665] = a1[665];
  *(_DWORD *)(a1 + 665) = *(_DWORD *)(HDEV)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 333);
  *((_QWORD *)a2 + 333) = *((_QWORD *)a1 + 333);
  *((_QWORD *)a1 + 333) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 334);
  *((_QWORD *)a2 + 334) = *((_QWORD *)a1 + 334);
  *((_QWORD *)a1 + 334) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 336);
  *((_QWORD *)a2 + 336) = *((_QWORD *)a1 + 336);
  *((_QWORD *)a1 + 336) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 337);
  *((_QWORD *)a2 + 337) = *((_QWORD *)a1 + 337);
  *((_QWORD *)a1 + 337) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 335);
  *((_QWORD *)a2 + 335) = *((_QWORD *)a1 + 335);
  *((_QWORD *)a1 + 335) = *(_QWORD *)v7;
  (*((void (__fastcall **)(_QWORD, HDEV))a2 + 339))(*((_QWORD *)a2 + 227), a2);
  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 339))(*((_QWORD *)a1 + 227), a1);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v143, v145);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v144, v146);
  vResetSurfacePalette(a1);
  vResetSurfacePalette(a2);
  if ( (int)IsvSpDynamicModeChangeSupported() >= 0 )
    vSpDynamicModeChange(a1, a2);
  ++gcModeChanges;
  v6 = 1;
LABEL_97:
  Win32FreePool(v7);
  vEnableSynchronize(a2);
  vEnableSynchronize(a1);
  return v6;
}
