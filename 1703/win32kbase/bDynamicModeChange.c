/*
 * XREFs of bDynamicModeChange @ 0x1C00F2CAC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C002ED50 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0038A40 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038EA8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UserIsGDIScalingApplicable @ 0x1C0071560 (UserIsGDIScalingApplicable.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C0077950 (bDynamicProcessAllDriverRealizations.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C008CA98 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C008EBFC (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0090C2C (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C0090D70 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C0091028 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     UserGetHwndDpi @ 0x1C0097D60 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C0098070 (GreGetScaledLogPixels.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00E8B34 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F2AF0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, int a3)
{
  unsigned int v6; // r12d
  __int64 v7; // r13
  int v8; // eax
  int v9; // eax
  int v10; // r15d
  struct tagSIZE *v11; // rax
  struct tagSIZE v12; // rdi
  struct tagSIZE *v13; // rax
  struct SURFACE *v14; // r9
  struct SURFACE *v15; // rcx
  struct tagSIZE v16; // rbx
  int cy; // edx
  char v18; // al
  __int64 v19; // r8
  __int64 Objt; // r15
  struct SURFACE *v21; // r13
  bool v22; // zf
  __int64 v23; // r8
  struct SURFACE *v24; // rax
  struct SURFACE *v25; // rdx
  __int64 v26; // rdx
  void *v27; // rcx
  __m128 v28; // xmm0
  int v29; // eax
  __int64 v30; // rdx
  void *v31; // rcx
  __m128 v32; // xmm0
  int v33; // eax
  int v34; // edx
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  struct SURFACE *v40; // rbx
  struct SURFACE *v41; // rdi
  int v42; // r13d
  HDEV v43; // rax
  __int64 v44; // r15
  int v45; // eax
  HDEV v46; // r8
  HDEV v47; // rdx
  int v48; // eax
  unsigned int v49; // ecx
  HDEV v50; // rcx
  __int64 v51; // rbx
  HDEV *v52; // rcx
  __int64 *v53; // rax
  struct SURFACE *v54; // rdi
  struct SURFACE *v55; // r15
  __int64 v56; // rax
  int *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // ecx
  HDEV v62; // rax
  HDEV v63; // rdx
  __int64 v64; // r8
  _OWORD *v65; // rcx
  __int64 v66; // r9
  HDEV v67; // rax
  __int128 v68; // xmm1
  __int64 v69; // r9
  HDEV v70; // rcx
  HDEV v71; // rax
  __int128 v72; // xmm1
  _OWORD *v73; // rax
  __int64 v74; // rdx
  __int128 v75; // xmm1
  __int64 v76; // r9
  HDEV v77; // rax
  HDEV v78; // rdx
  _OWORD *v79; // rcx
  __int128 v80; // xmm1
  __int64 v81; // r9
  __int128 v82; // xmm1
  HDEV v83; // rdx
  HDEV v84; // rcx
  __int128 v85; // xmm1
  _OWORD *v86; // rax
  __int128 v87; // xmm1
  HDEV v88; // r11
  HDEV v89; // r10
  int v90; // ecx
  int v91; // ebx
  int v92; // r8d
  volatile unsigned int *v93; // r11
  int v94; // ecx
  int v95; // ebx
  int v96; // r8d
  volatile unsigned int *v97; // r11
  int v98; // ecx
  int v99; // ebx
  int v100; // r8d
  volatile unsigned int *v101; // r11
  int v102; // ecx
  int v103; // ebx
  int v104; // r8d
  volatile unsigned int *v105; // r11
  int v106; // ecx
  int v107; // ebx
  int v108; // r8d
  volatile unsigned int *v109; // r11
  int v110; // ecx
  int v111; // ebx
  int v112; // r8d
  volatile unsigned int *v113; // r11
  int v114; // ecx
  int v115; // ebx
  int v116; // r8d
  volatile unsigned int *v117; // r11
  volatile unsigned int v118; // ett
  signed __int32 v119; // ett
  __int64 v120; // r8
  _OWORD *v121; // rcx
  __int64 v122; // r9
  HDEV v123; // rax
  HDEV v124; // rdx
  __int128 v125; // xmm1
  __int64 v126; // r9
  __int128 v127; // xmm1
  HDEV v128; // rdx
  HDEV v129; // rcx
  __int128 v130; // xmm1
  _OWORD *v131; // rax
  __int128 v132; // xmm1
  unsigned __int16 v134; // [rsp+48h] [rbp-89h] BYREF
  int v135; // [rsp+4Ch] [rbp-85h]
  struct SURFACE *v136; // [rsp+50h] [rbp-81h]
  __int64 v137; // [rsp+58h] [rbp-79h]
  HDEV v138; // [rsp+60h] [rbp-71h] BYREF
  HDEV v139; // [rsp+68h] [rbp-69h] BYREF
  struct tagSIZE v140; // [rsp+70h] [rbp-61h]
  int v141; // [rsp+78h] [rbp-59h]
  int v142; // [rsp+7Ch] [rbp-55h]
  int v143; // [rsp+80h] [rbp-51h]
  struct SURFACE *v144; // [rsp+88h] [rbp-49h]
  __int64 v145; // [rsp+90h] [rbp-41h]
  void *v146; // [rsp+98h] [rbp-39h]
  __int64 v147; // [rsp+A0h] [rbp-31h]
  __int64 v148; // [rsp+A8h] [rbp-29h]
  __int64 v149; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v150; // [rsp+B8h] [rbp-19h] BYREF
  unsigned __int64 v151; // [rsp+C0h] [rbp-11h]
  unsigned __int64 v152; // [rsp+C8h] [rbp-9h]
  unsigned __int64 v153; // [rsp+D0h] [rbp-1h]
  unsigned __int64 v154; // [rsp+D8h] [rbp+7h]
  struct tagSIZE v155; // [rsp+150h] [rbp+7Fh] BYREF

  v6 = 0;
  if ( (unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
  {
    v146 = PALLOCMEM2(0xA00uLL, 1886221383LL, 0);
    v7 = (__int64)v146;
    if ( v146 )
    {
      v8 = (_DWORD)a2[8] & 0x400;
      v138 = a1;
      v142 = v8;
      v9 = (_DWORD)a1[8] & 0x400;
      v139 = a2;
      v143 = v9;
      if ( (int)IsvDisableSynchronizeSupported() >= 0 )
      {
        vDisableSynchronize(a2);
        vDisableSynchronize(a1);
      }
      v141 = *((_DWORD *)a2 + 544) * *((_DWORD *)a2 + 545);
      v135 = *((_DWORD *)a1 + 544) * *((_DWORD *)a1 + 545);
      if ( (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a2, 0LL, 1)
        && (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a1, (__int64)a2, a3) )
      {
        v10 = 1;
        v11 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v138, &v149);
        v144 = (struct SURFACE *)*((_QWORD *)a1 + 321);
        v12 = *v11;
        v147 = *((_QWORD *)a1 + 228);
        v145 = *((_QWORD *)a1 + 227);
        v155 = v12;
        v13 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v139, &v150);
        v15 = (struct SURFACE *)*((_QWORD *)a2 + 321);
        v136 = v15;
        v16 = *v13;
        v148 = *((_QWORD *)a2 + 228);
        v137 = *((_QWORD *)a2 + 227);
        v140 = v16;
        if ( v16.cx < v12.cx || (cy = v155.cy, v16.cy < v155.cy) )
        {
          v18 = bDynamicIntersectVisRect(v14, v16);
          v15 = v136;
          cy = v155.cy;
          v10 = v18 & 1;
        }
        if ( v12.cx < v16.cx || cy < v140.cy )
          v10 &= bDynamicIntersectVisRect(v15, v12);
        v19 = *((_QWORD *)a2 + 345);
        if ( v19 && v19 == *((_QWORD *)a1 + 345) && *((_QWORD *)a2 + 226) == *((_QWORD *)a1 + 226) )
        {
          if ( !v10 )
            goto LABEL_138;
          v10 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 345))(v145, v137);
        }
        if ( v10 )
        {
          Objt = HmgSafeNextObjt(0, 1);
          if ( !Objt )
            goto LABEL_60;
          v21 = v136;
          while ( 1 )
          {
            v22 = (*(_DWORD *)(Objt + 36) & 0x2000) == 0;
            v23 = *(_QWORD *)Objt;
            v140 = *(struct tagSIZE *)Objt;
            if ( !v22 )
              goto LABEL_58;
            v24 = *(struct SURFACE **)(Objt + 512);
            v25 = v144;
            if ( v24 != v144 )
            {
              if ( v24 != v21 )
                goto LABEL_49;
              *(_QWORD *)(Objt + 512) = v144;
              if ( v25 && (unsigned int)DC::bDpiScaledSurface((DC *)Objt) )
              {
                v30 = *(_QWORD *)((char *)v25 + 596);
                goto LABEL_39;
              }
              v31 = *(void **)(Objt + 480);
              if ( v31
                && (unsigned int)UserIsGDIScalingApplicable(v31, (__int64)v25, v23)
                && (unsigned int)UserGetHwndDpi(*(void **)(Objt + 480), &v134)
                && v134 != 96 )
              {
                v32 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v134));
                v32.m128_f32[0] = v32.m128_f32[0] / 96.0;
                v153 = _mm_unpacklo_ps(v32, v32).m128_u64[0];
                v30 = v153;
LABEL_39:
                DC::vSetDpiScaling(Objt, v30);
              }
              else
              {
                v33 = *(_DWORD *)(Objt + 536);
                if ( (v33 & 1) != 0 )
                {
                  *(_QWORD *)(Objt + 548) = 0LL;
                  *(_DWORD *)(Objt + 36) |= 0x10u;
                  v154 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
                  *(_QWORD *)(Objt + 540) = v154;
                  *(_DWORD *)(Objt + 536) = v33 & 0xFFFFFFF8 | 4;
                }
              }
              *(struct tagSIZE *)(Objt + 528) = v12;
              goto LABEL_48;
            }
            *(_QWORD *)(Objt + 512) = v21;
            if ( v21 && (unsigned int)DC::bDpiScaledSurface((DC *)Objt) )
            {
              v26 = *(_QWORD *)((char *)v21 + 596);
            }
            else
            {
              v27 = *(void **)(Objt + 480);
              if ( !v27
                || !(unsigned int)UserIsGDIScalingApplicable(v27, (__int64)v25, v23)
                || !(unsigned int)UserGetHwndDpi(*(void **)(Objt + 480), &v155)
                || LOWORD(v155.cx) == 96 )
              {
                v29 = *(_DWORD *)(Objt + 536);
                if ( (v29 & 1) != 0 )
                {
                  *(_QWORD *)(Objt + 548) = 0LL;
                  *(_DWORD *)(Objt + 36) |= 0x10u;
                  v152 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
                  *(_QWORD *)(Objt + 540) = v152;
                  *(_DWORD *)(Objt + 536) = v29 & 0xFFFFFFF8 | 4;
                }
                goto LABEL_34;
              }
              v28 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v155.cx));
              v28.m128_f32[0] = v28.m128_f32[0] / 96.0;
              v151 = _mm_unpacklo_ps(v28, v28).m128_u64[0];
              v26 = v151;
            }
            DC::vSetDpiScaling(Objt, v26);
LABEL_34:
            *(struct tagSIZE *)(Objt + 528) = v16;
LABEL_48:
            LODWORD(v23) = v140.cx;
            *(_DWORD *)(Objt + 332) |= 0xFu;
LABEL_49:
            v34 = *(_DWORD *)(Objt + 36);
            if ( (v34 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(Objt + 512) + 112LL) & 0x200) != 0 )
              v35 = v34 | 0x8000;
            else
              v35 = v34 & 0xFFFF7FFF;
            v36 = *(_QWORD *)(Objt + 24);
            v37 = v145;
            *(_DWORD *)(Objt + 36) = v35;
            if ( v36 == v37 )
            {
              *(_QWORD *)(Objt + 24) = v137;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a2[460];
              v38 = *((_DWORD *)a2 + 536);
LABEL_57:
              *(_DWORD *)(Objt + 76) = v38;
              goto LABEL_58;
            }
            if ( v36 == v137 )
            {
              *(_QWORD *)(Objt + 24) = v37;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a1[460];
              v38 = *((_DWORD *)a1 + 536);
              goto LABEL_57;
            }
LABEL_58:
            Objt = HmgSafeNextObjt(v23, 1);
            if ( !Objt )
            {
              v7 = (__int64)v146;
LABEL_60:
              v39 = HmgSafeNextObjt(0, 5);
              if ( !v39 )
                goto LABEL_79;
              v40 = v136;
              v41 = v144;
              v42 = v141;
LABEL_62:
              v43 = *(HDEV *)(v39 + 48);
              v44 = *(_QWORD *)v39;
              if ( v43 == a1 )
              {
                v45 = *(_DWORD *)(v39 + 112);
                if ( (v45 & 0x4000000) != 0 )
                {
                  if ( v135 != v42 && *(_DWORD *)(v39 + 96) == *((_DWORD *)v41 + 24) )
                  {
                    v46 = a2;
                    v47 = a1;
                    goto LABEL_74;
                  }
                }
                else if ( (v45 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v39 + 48) = a2;
                }
              }
              else if ( v43 == a2 )
              {
                v48 = *(_DWORD *)(v39 + 112);
                if ( (v48 & 0x4000000) != 0 )
                {
                  if ( v135 != v42 && *(_DWORD *)(v39 + 96) == *((_DWORD *)v40 + 24) )
                  {
                    v46 = a1;
                    v47 = a2;
LABEL_74:
                    vDynamicSwitchPalettes((struct SURFACE *)v39, (struct PDEV *)v47, (struct PDEV *)v46);
                  }
                }
                else if ( (v48 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v39 + 48) = a1;
                }
              }
              v39 = HmgSafeNextObjt(v44, 5);
              if ( !v39 )
              {
                v7 = (__int64)v146;
LABEL_79:
                v49 = 0;
LABEL_86:
                v53 = (__int64 *)HmgSafeNextObjt(v49, 28);
                if ( !v53 )
                {
                  v54 = v136;
                  v55 = v144;
                  vChangeWndObjs(v144, (PDEV *)a1, v136, (PDEV *)a2);
                  v56 = HmgShareLock((unsigned int)ghbrGrayPattern, 16);
                  *(_QWORD *)(v7 + 80) = v7 + 560;
                  v57 = (int *)v56;
                  v58 = v148;
                  *(_DWORD *)(v7 + 600) = 0;
                  *(_DWORD *)(*(_QWORD *)(v7 + 80) + 32LL) = 0xFFFFFF;
                  v59 = *(_QWORD *)(v7 + 80);
                  *(_DWORD *)(v7 + 112) = 0;
                  *(_QWORD *)(v59 + 112) = 0LL;
                  EBRUSHOBJ::vInitBrush(
                    (unsigned int *)a1 + 388,
                    v7,
                    (__int64)v57,
                    (__int64)WPP_MAIN_CB.Reserved,
                    v58,
                    (__int64)v54,
                    1u);
                  EBRUSHOBJ::vInitBrush(
                    (unsigned int *)a2 + 388,
                    v7,
                    (__int64)v57,
                    (__int64)WPP_MAIN_CB.Reserved,
                    v147,
                    (__int64)v55,
                    1u);
                  DEC_SHARE_REF_CNT(v57);
                  *((_QWORD *)a2 + 228) = v147;
                  *((_QWORD *)a2 + 227) = v145;
                  v60 = v148;
                  *((_QWORD *)a2 + 321) = v55;
                  *((_QWORD *)a1 + 228) = v60;
                  *((_QWORD *)a1 + 227) = v137;
                  *((_QWORD *)a1 + 321) = v54;
                  v61 = *((_DWORD *)v55 + 28);
                  if ( (v61 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v54 + 28) |= 0x10000000u;
                    if ( a1 != (HDEV)-72LL && (((_DWORD)a1[43] & 0x10000000) != 0 || ((_DWORD)a1[45] & 0x10000000) != 0) )
                    {
                      v62 = a2 + 18;
LABEL_97:
                      if ( v62 )
                      {
                        *((_DWORD *)v62 + 25) |= 0x10000000u;
                        *((_DWORD *)v62 + 27) |= 0x10000000u;
                      }
                    }
                  }
                  else if ( (*((_DWORD *)v54 + 28) & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v55 + 28) = v61 | 0x10000000;
                    if ( a2 != (HDEV)-72LL && (((_DWORD)a2[43] & 0x10000000) != 0 || ((_DWORD)a2[45] & 0x10000000) != 0) )
                    {
                      v62 = a1 + 18;
                      goto LABEL_97;
                    }
                  }
                  v63 = a2 + 460;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 226);
                  v64 = 2LL;
                  v65 = (_OWORD *)v7;
                  *((_QWORD *)a2 + 226) = *((_QWORD *)a1 + 226);
                  v66 = 2LL;
                  *((_QWORD *)a1 + 226) = *(_QWORD *)v7;
                  v67 = a2 + 460;
                  do
                  {
                    *v65 = *(_OWORD *)v67;
                    v65[1] = *((_OWORD *)v67 + 1);
                    v65[2] = *((_OWORD *)v67 + 2);
                    v65[3] = *((_OWORD *)v67 + 3);
                    v65[4] = *((_OWORD *)v67 + 4);
                    v65[5] = *((_OWORD *)v67 + 5);
                    v65[6] = *((_OWORD *)v67 + 6);
                    v65 += 8;
                    v68 = *((_OWORD *)v67 + 7);
                    v67 += 32;
                    *(v65 - 1) = v68;
                    --v66;
                  }
                  while ( v66 );
                  v69 = 2LL;
                  *v65 = *(_OWORD *)v67;
                  v65[1] = *((_OWORD *)v67 + 1);
                  v65[2] = *((_OWORD *)v67 + 2);
                  *((_QWORD *)v65 + 6) = *((_QWORD *)v67 + 6);
                  v70 = a1 + 460;
                  v71 = a1 + 460;
                  do
                  {
                    *(_OWORD *)v63 = *(_OWORD *)v71;
                    *((_OWORD *)v63 + 1) = *((_OWORD *)v71 + 1);
                    *((_OWORD *)v63 + 2) = *((_OWORD *)v71 + 2);
                    *((_OWORD *)v63 + 3) = *((_OWORD *)v71 + 3);
                    *((_OWORD *)v63 + 4) = *((_OWORD *)v71 + 4);
                    *((_OWORD *)v63 + 5) = *((_OWORD *)v71 + 5);
                    *((_OWORD *)v63 + 6) = *((_OWORD *)v71 + 6);
                    v63 += 32;
                    v72 = *((_OWORD *)v71 + 7);
                    v71 += 32;
                    *((_OWORD *)v63 - 1) = v72;
                    --v69;
                  }
                  while ( v69 );
                  *(_OWORD *)v63 = *(_OWORD *)v71;
                  *((_OWORD *)v63 + 1) = *((_OWORD *)v71 + 1);
                  *((_OWORD *)v63 + 2) = *((_OWORD *)v71 + 2);
                  *((_QWORD *)v63 + 6) = *((_QWORD *)v71 + 6);
                  v73 = (_OWORD *)v7;
                  v74 = 2LL;
                  do
                  {
                    *(_OWORD *)v70 = *v73;
                    *((_OWORD *)v70 + 1) = v73[1];
                    *((_OWORD *)v70 + 2) = v73[2];
                    *((_OWORD *)v70 + 3) = v73[3];
                    *((_OWORD *)v70 + 4) = v73[4];
                    *((_OWORD *)v70 + 5) = v73[5];
                    *((_OWORD *)v70 + 6) = v73[6];
                    v70 += 32;
                    v75 = v73[7];
                    v73 += 8;
                    *((_OWORD *)v70 - 1) = v75;
                    --v74;
                  }
                  while ( v74 );
                  v76 = 2LL;
                  *(_OWORD *)v70 = *v73;
                  *((_OWORD *)v70 + 1) = v73[1];
                  *((_OWORD *)v70 + 2) = v73[2];
                  *((_QWORD *)v70 + 6) = *((_QWORD *)v73 + 6);
                  v77 = a2 + 538;
                  v78 = a2 + 538;
                  v79 = (_OWORD *)v7;
                  do
                  {
                    *v79 = *(_OWORD *)v78;
                    v79[1] = *((_OWORD *)v78 + 1);
                    v79[2] = *((_OWORD *)v78 + 2);
                    v79[3] = *((_OWORD *)v78 + 3);
                    v79[4] = *((_OWORD *)v78 + 4);
                    v79[5] = *((_OWORD *)v78 + 5);
                    v79[6] = *((_OWORD *)v78 + 6);
                    v79 += 8;
                    v80 = *((_OWORD *)v78 + 7);
                    v78 += 32;
                    *(v79 - 1) = v80;
                    --v76;
                  }
                  while ( v76 );
                  v81 = 2LL;
                  *v79 = *(_OWORD *)v78;
                  v79[1] = *((_OWORD *)v78 + 1);
                  v79[2] = *((_OWORD *)v78 + 2);
                  v82 = *((_OWORD *)v78 + 3);
                  v83 = a1 + 538;
                  v79[3] = v82;
                  v84 = a1 + 538;
                  do
                  {
                    *(_OWORD *)v77 = *(_OWORD *)v84;
                    *((_OWORD *)v77 + 1) = *((_OWORD *)v84 + 1);
                    *((_OWORD *)v77 + 2) = *((_OWORD *)v84 + 2);
                    *((_OWORD *)v77 + 3) = *((_OWORD *)v84 + 3);
                    *((_OWORD *)v77 + 4) = *((_OWORD *)v84 + 4);
                    *((_OWORD *)v77 + 5) = *((_OWORD *)v84 + 5);
                    *((_OWORD *)v77 + 6) = *((_OWORD *)v84 + 6);
                    v77 += 32;
                    v85 = *((_OWORD *)v84 + 7);
                    v84 += 32;
                    *((_OWORD *)v77 - 1) = v85;
                    --v81;
                  }
                  while ( v81 );
                  *(_OWORD *)v77 = *(_OWORD *)v84;
                  *((_OWORD *)v77 + 1) = *((_OWORD *)v84 + 1);
                  *((_OWORD *)v77 + 2) = *((_OWORD *)v84 + 2);
                  *((_OWORD *)v77 + 3) = *((_OWORD *)v84 + 3);
                  v86 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v83 = *v86;
                    *((_OWORD *)v83 + 1) = v86[1];
                    *((_OWORD *)v83 + 2) = v86[2];
                    *((_OWORD *)v83 + 3) = v86[3];
                    *((_OWORD *)v83 + 4) = v86[4];
                    *((_OWORD *)v83 + 5) = v86[5];
                    *((_OWORD *)v83 + 6) = v86[6];
                    v83 += 32;
                    v87 = v86[7];
                    v86 += 8;
                    *((_OWORD *)v83 - 1) = v87;
                    --v64;
                  }
                  while ( v64 );
                  *(_OWORD *)v83 = *v86;
                  *((_OWORD *)v83 + 1) = v86[1];
                  *((_OWORD *)v83 + 2) = v86[2];
                  *((_OWORD *)v83 + 3) = v86[3];
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
                  v88 = a2 + 8;
                  v89 = a1 + 8;
                  *((_QWORD *)a2 + 327) = *((_QWORD *)a1 + 327);
                  *((_QWORD *)a1 + 327) = *(_QWORD *)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[656];
                  a2[656] = a1[656];
                  *(_DWORD *)(a1 + 656) = *(_DWORD *)(HDEV)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[657];
                  a2[657] = a1[657];
                  *(_DWORD *)(a1 + 657) = *(_DWORD *)(HDEV)v7;
                  v90 = (_DWORD)a2[8] & 0x20000;
                  v91 = (_DWORD)a1[8] & 0x20000;
                  if ( v91 != v90 )
                  {
                    SETFLAG(v90, (volatile unsigned int *)a1 + 8, 0x20000);
                    SETFLAG(v91, v93, v92);
                  }
                  v94 = *(_DWORD *)v88 & 0x1000000;
                  v95 = *(_DWORD *)v89 & 0x1000000;
                  if ( v95 != v94 )
                  {
                    SETFLAG(v94, (volatile unsigned int *)v89, 0x1000000);
                    SETFLAG(v95, v97, v96);
                  }
                  v98 = *(_DWORD *)v88 & 0x20000000;
                  v99 = *(_DWORD *)v89 & 0x20000000;
                  if ( v99 != v98 )
                  {
                    SETFLAG(v98, (volatile unsigned int *)v89, 0x20000000);
                    SETFLAG(v99, v101, v100);
                  }
                  v102 = *(_DWORD *)v88 & 0x2000000;
                  v103 = *(_DWORD *)v89 & 0x2000000;
                  if ( v103 != v102 )
                  {
                    SETFLAG(v102, (volatile unsigned int *)v89, 0x2000000);
                    SETFLAG(v103, v105, v104);
                  }
                  v106 = *(_DWORD *)v88 & 0x8000000;
                  v107 = *(_DWORD *)v89 & 0x8000000;
                  if ( v107 != v106 )
                  {
                    SETFLAG(v106, (volatile unsigned int *)v89, 0x8000000);
                    SETFLAG(v107, v109, v108);
                  }
                  v110 = *(_DWORD *)v88 & 0x4000000;
                  v111 = *(_DWORD *)v89 & 0x4000000;
                  if ( v111 != v110 )
                  {
                    SETFLAG(v110, (volatile unsigned int *)v89, 0x4000000);
                    SETFLAG(v111, v113, v112);
                  }
                  v114 = *(_DWORD *)v88 & 0x40000000;
                  v115 = *(_DWORD *)v89 & 0x40000000;
                  if ( v115 != v114 )
                  {
                    SETFLAG(v114, (volatile unsigned int *)v89, 0x40000000);
                    SETFLAG(v115, v117, v116);
                  }
                  _m_prefetchw(v89);
                  do
                    v118 = *(_DWORD *)v89;
                  while ( v118 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v89,
                                    *(_DWORD *)v89 & 0xEFFFFFFF,
                                    *(_DWORD *)v89) );
                  _m_prefetchw(v88);
                  do
                    v119 = *(_DWORD *)v88;
                  while ( v119 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v88,
                                    *(_DWORD *)v88 & 0xEFFFFFFF,
                                    *(_DWORD *)v88) );
                  *((_QWORD *)a1 + 3) = 0LL;
                  v120 = 6LL;
                  *((_QWORD *)a2 + 3) = 0LL;
                  v121 = (_OWORD *)v7;
                  v122 = 6LL;
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
                  v123 = a2 + 676;
                  v124 = a2 + 676;
                  do
                  {
                    *v121 = *(_OWORD *)v124;
                    v121[1] = *((_OWORD *)v124 + 1);
                    v121[2] = *((_OWORD *)v124 + 2);
                    v121[3] = *((_OWORD *)v124 + 3);
                    v121[4] = *((_OWORD *)v124 + 4);
                    v121[5] = *((_OWORD *)v124 + 5);
                    v121[6] = *((_OWORD *)v124 + 6);
                    v121 += 8;
                    v125 = *((_OWORD *)v124 + 7);
                    v124 += 32;
                    *(v121 - 1) = v125;
                    --v122;
                  }
                  while ( v122 );
                  v126 = 6LL;
                  *v121 = *(_OWORD *)v124;
                  v121[1] = *((_OWORD *)v124 + 1);
                  v121[2] = *((_OWORD *)v124 + 2);
                  v127 = *((_OWORD *)v124 + 3);
                  v128 = a1 + 676;
                  v121[3] = v127;
                  v129 = a1 + 676;
                  do
                  {
                    *(_OWORD *)v123 = *(_OWORD *)v129;
                    *((_OWORD *)v123 + 1) = *((_OWORD *)v129 + 1);
                    *((_OWORD *)v123 + 2) = *((_OWORD *)v129 + 2);
                    *((_OWORD *)v123 + 3) = *((_OWORD *)v129 + 3);
                    *((_OWORD *)v123 + 4) = *((_OWORD *)v129 + 4);
                    *((_OWORD *)v123 + 5) = *((_OWORD *)v129 + 5);
                    *((_OWORD *)v123 + 6) = *((_OWORD *)v129 + 6);
                    v123 += 32;
                    v130 = *((_OWORD *)v129 + 7);
                    v129 += 32;
                    *((_OWORD *)v123 - 1) = v130;
                    --v126;
                  }
                  while ( v126 );
                  *(_OWORD *)v123 = *(_OWORD *)v129;
                  *((_OWORD *)v123 + 1) = *((_OWORD *)v129 + 1);
                  *((_OWORD *)v123 + 2) = *((_OWORD *)v129 + 2);
                  *((_OWORD *)v123 + 3) = *((_OWORD *)v129 + 3);
                  v131 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v128 = *v131;
                    *((_OWORD *)v128 + 1) = v131[1];
                    *((_OWORD *)v128 + 2) = v131[2];
                    *((_OWORD *)v128 + 3) = v131[3];
                    *((_OWORD *)v128 + 4) = v131[4];
                    *((_OWORD *)v128 + 5) = v131[5];
                    *((_OWORD *)v128 + 6) = v131[6];
                    v128 += 32;
                    v132 = v131[7];
                    v131 += 8;
                    *((_OWORD *)v128 - 1) = v132;
                    --v120;
                  }
                  while ( v120 );
                  *(_OWORD *)v128 = *v131;
                  *((_OWORD *)v128 + 1) = v131[1];
                  *((_OWORD *)v128 + 2) = v131[2];
                  *((_OWORD *)v128 + 3) = v131[3];
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
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v138, v142);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v139, v143);
                  vResetSurfacePalette(a1);
                  vResetSurfacePalette(a2);
                  if ( (int)IsvSpDynamicModeChangeSupported() >= 0 )
                    vSpDynamicModeChange(a1, a2);
                  ++gcModeChanges;
                  v6 = 1;
                  break;
                }
                v50 = (HDEV)v53[5];
                v51 = *v53;
                if ( v50 == a1 )
                {
                  v53[5] = (__int64)a2;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v139);
                  v52 = &v138;
                  goto LABEL_84;
                }
                if ( v50 == a2 )
                {
                  v53[5] = (__int64)a1;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v138);
                  v52 = &v139;
LABEL_84:
                  PDEVOBJ::vUnreferencePdev((PDEV **)v52, 0);
                }
                v49 = v51;
                goto LABEL_86;
              }
              goto LABEL_62;
            }
          }
        }
      }
LABEL_138:
      Win32FreePool(v7);
      vEnableSynchronize(a2);
      vEnableSynchronize(a1);
    }
  }
  return v6;
}
