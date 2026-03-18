/*
 * XREFs of sub_14087CF84 @ 0x14087CF84
 * Callers:
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1402D2010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402E495C @ 0x1402E495C (sub_1402E495C.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     sub_14019FEBC @ 0x14019FEBC (sub_14019FEBC.c)
 *     sub_14019FF1C @ 0x14019FF1C (sub_14019FF1C.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     sub_1402E732C @ 0x1402E732C (sub_1402E732C.c)
 *     KeGuardDispatchICall @ 0x1402E97D0 (KeGuardDispatchICall.c)
 *     MmImageSectionPagable @ 0x1405BB1AC (MmImageSectionPagable.c)
 */

__int64 __fastcall sub_14087CF84(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // rsi
  int v6; // r13d
  int v7; // edi
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v10; // r12d
  unsigned int *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // xmm1_8
  int v14; // ecx
  __int128 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  unsigned int v20; // r15d
  unsigned int v21; // eax
  int v22; // r13d
  _BYTE *v23; // rdi
  int v24; // ecx
  unsigned int v25; // eax
  __int64 v26; // r8
  int v27; // edx
  unsigned __int64 v28; // rcx
  int v29; // ebx
  int v30; // ecx
  int v32; // ecx
  _BYTE *v33; // rsi
  _QWORD *v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 i; // rax
  _QWORD *v38; // rdx
  __int64 v39; // r8
  char *v40; // rcx
  char v41; // al
  unsigned __int64 v42; // rbx
  _QWORD *v43; // rax
  unsigned __int64 v44; // rcx
  int v45; // r11d
  _DWORD *v46; // rsi
  int v47; // ecx
  __int16 v48; // ax
  char *v49; // r8
  __int64 *v50; // r10
  signed __int64 v51; // r9
  char *v52; // r15
  int v53; // ebx
  char *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned int v57; // r8d
  __int64 *v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  int v63; // r9d
  signed __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rax
  int v67; // r9d
  signed __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rax
  unsigned int v71; // ecx
  BOOL v72; // r12d
  unsigned int v73; // r15d
  int v74; // eax
  ULONG_PTR v75; // rdx
  _BYTE *v76; // rcx
  __int64 v77; // r9
  BOOL v78; // r11d
  ULONG_PTR v79; // rax
  unsigned int v80; // r13d
  _DWORD *v81; // rsi
  int v82; // eax
  int v83; // r11d
  char *v84; // rbx
  int v85; // ecx
  __int16 v86; // ax
  char *v87; // r8
  int v88; // r10d
  signed __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 *v92; // r9
  unsigned int v93; // r8d
  __int64 *v94; // r10
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  char *v99; // r8
  int v100; // r10d
  __int64 v101; // rdx
  __int64 v102; // rax
  char *v103; // r8
  int v104; // r9d
  signed __int64 v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rax
  unsigned int v108; // ecx
  int v109; // eax
  bool v110; // zf
  unsigned __int64 *v111; // rax
  int v112; // r9d
  unsigned int *v113; // rcx
  ULONG_PTR v114; // r8
  _BYTE *v115; // rax
  unsigned __int64 v116; // r8
  __int64 v117; // rsi
  unsigned __int64 v118; // rax
  char **v119; // r15
  unsigned int v120; // eax
  __int64 v121; // rbx
  unsigned int v122; // r11d
  ULONG_PTR v123; // rsi
  _DWORD *v124; // r13
  char *v125; // r9
  char *v126; // r10
  const char *v127; // rax
  int j; // r12d
  unsigned __int64 v129; // r8
  unsigned __int64 v130; // rdi
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // r8
  unsigned __int64 v134; // rcx
  unsigned __int64 v135; // rax
  unsigned __int64 v136; // rsi
  __int64 v137; // r15
  _DWORD *v138; // r12
  __int64 v139; // r13
  _DWORD *v140; // r9
  _QWORD *v141; // r11
  char *v142; // r15
  int v143; // r8d
  char *v144; // rcx
  _QWORD *v145; // rdx
  __int64 v146; // r10
  char v147; // al
  int v148; // ecx
  __int64 k; // rcx
  unsigned __int64 v150; // rax
  __int64 v151; // r15
  bool v152; // cf
  __int64 v153; // r13
  int v154; // r8d
  int v155; // r12d
  unsigned int v156; // eax
  __int64 v157; // rsi
  int v158; // ecx
  unsigned int v159; // eax
  __int64 v160; // r8
  int v161; // edx
  unsigned __int64 v162; // rcx
  int v163; // edi
  int v164; // ecx
  __int64 v165; // rdi
  int v166; // ecx
  _QWORD *v167; // rax
  __int64 v168; // rdx
  _QWORD *v169; // r9
  int v170; // r10d
  const char *v171; // rax
  unsigned __int64 v172; // r8
  unsigned int m; // r11d
  __int64 v174; // rax
  __int64 v175; // r8
  unsigned __int128 v176; // rax
  unsigned int v177; // edx
  unsigned __int64 v178; // rax
  __int64 v179; // rax
  unsigned __int64 n; // rax
  unsigned int v181; // [rsp+38h] [rbp-D0h]
  int v182; // [rsp+38h] [rbp-D0h]
  int v183; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v184; // [rsp+40h] [rbp-C8h]
  int v185; // [rsp+40h] [rbp-C8h]
  _BYTE *v186; // [rsp+48h] [rbp-C0h]
  unsigned int v187; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v188; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v189; // [rsp+58h] [rbp-B0h]
  __int64 v190; // [rsp+60h] [rbp-A8h]
  __int64 v191; // [rsp+68h] [rbp-A0h]
  ULONG_PTR v192; // [rsp+70h] [rbp-98h]
  char **v193; // [rsp+78h] [rbp-90h]
  int v194; // [rsp+80h] [rbp-88h]
  int v195; // [rsp+84h] [rbp-84h]
  __int64 v196; // [rsp+88h] [rbp-80h]
  _BYTE *v197; // [rsp+90h] [rbp-78h]
  __int64 v198; // [rsp+98h] [rbp-70h]
  __int128 v199; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v200; // [rsp+B0h] [rbp-58h]
  char *v201; // [rsp+B8h] [rbp-50h]
  __int64 *v202; // [rsp+C0h] [rbp-48h]
  char *v203; // [rsp+C8h] [rbp-40h]
  char *v204; // [rsp+D0h] [rbp-38h]
  _BYTE *v205; // [rsp+D8h] [rbp-30h]
  _BYTE *v206; // [rsp+E0h] [rbp-28h]
  __int64 v207; // [rsp+E8h] [rbp-20h]
  __int64 v208; // [rsp+F0h] [rbp-18h]
  _BYTE v209[96]; // [rsp+F8h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+170h] [rbp+68h]
  int v213; // [rsp+178h] [rbp+70h]
  unsigned int v214; // [rsp+180h] [rbp+78h] BYREF

  BugCheckParameter2 = a2;
  v3 = *(_BYTE **)a1;
  v193 = (char **)(*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 504LL))(a2);
  v5 = (__int64)v193;
  if ( !v193 )
    return 3221225595LL;
  v6 = (*((__int64 (__fastcall **)(ULONG_PTR))v3 + 85))(a2);
  LODWORD(v190) = v6;
  v183 = *((unsigned __int16 *)v193 + 3);
  if ( *((_WORD *)v193 + 3) && *((_DWORD *)v193 + 14) >= 0x1000u && (a2 & 0xFFF) == 0 )
  {
    v7 = -1073741275;
    v8 = *((_QWORD *)v3 + 167);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*((void (__fastcall **)(__int64))v3 + 42))(v8);
    v10 = 24;
    v11 = (unsigned int *)**((_QWORD **)v3 + 193);
    v12 = (unsigned __int64)(v11 + 4);
    while ( *(_QWORD *)(v12 + 8) != a2 )
    {
      v12 += 24LL;
      if ( v12 >= (unsigned __int64)&v11[6 * *v11 + 4] )
        goto LABEL_10;
    }
    v13 = *(_QWORD *)(v12 + 16);
    v7 = 0;
    v199 = *(_OWORD *)v12;
    v200 = v13;
LABEL_10:
    (*((void (__fastcall **)(_QWORD))v3 + 50))(*((_QWORD *)v3 + 167));
    __writecr8(CurrentIrql);
    if ( v7 >= 0 )
    {
      v17 = (unsigned int)v200;
    }
    else
    {
      v14 = 24;
      v15 = &v199;
      v16 = 3LL;
      do
      {
        *(_QWORD *)v15 = 0LL;
        v14 -= 8;
        v15 = (__int128 *)((char *)v15 + 8);
        --v16;
      }
      while ( v16 );
      for ( ; v14; --v14 )
      {
        *(_BYTE *)v15 = 0;
        v15 = (__int128 *)((char *)v15 + 1);
      }
      v17 = *(unsigned int *)(v5 + 80);
      LODWORD(v200) = *(_DWORD *)(v5 + 80);
      *((_QWORD *)&v199 + 1) = a2;
      *(_QWORD *)&v199 = 1LL;
    }
    v18 = *((unsigned int *)v3 + 417);
    v19 = *((_DWORD *)v3 + 495);
    v189 = ((a2 & 0xFFF) + 4095 + v17) >> 12;
    v20 = 20 * v189;
    v21 = 20 * v189 + v18 + 48;
    v22 = (v6 != 0) + 33;
    if ( v21 <= *((_DWORD *)v3 + 557) )
    {
      v23 = v3;
      v196 = (__int64)v3;
      *((_DWORD *)v3 + 417) = v21;
    }
    else
    {
      v196 = sub_1402E732C(v3, v21, v19);
      v23 = (_BYTE *)v196;
      if ( !v196 )
        return 3221225626LL;
      v24 = *((_DWORD *)v3 + 522);
      if ( (v24 & 4) == 0 )
      {
        v25 = *((_DWORD *)v3 + 417);
        v26 = *((_QWORD *)v3 + 205);
        v27 = (v24 & 0x20000000) != 0 ? *((_DWORD *)v3 + 495) : 0;
        if ( v25 >= 8 )
        {
          v28 = (unsigned __int64)v25 >> 3;
          do
          {
            *(_QWORD *)v3 = 0LL;
            v25 -= 8;
            v3 += 8;
            --v28;
          }
          while ( v28 );
        }
        for ( ; v25; --v25 )
          *v3++ = 0;
        v29 = *((_DWORD *)v23 + 495);
        *((_DWORD *)v23 + 495) = v27;
        if ( v27 == 3 )
        {
          (*((void (__fastcall **)(__int64))v23 + 109))(v26);
        }
        else
        {
          v30 = 0;
          if ( (*((_DWORD *)v23 + 522) & 0x10000000) == 0 )
            v30 = v27;
          if ( v30 )
            (*((void (__fastcall **)(__int64, _QWORD))v23 + 69))(v26 - 8, *(_QWORD *)(v26 - 8));
          else
            (*((void (__fastcall **)(__int64))v23 + 32))(v26);
        }
        *((_DWORD *)v23 + 495) = v29;
      }
      *((_DWORD *)v23 + 522) &= ~4u;
    }
    ++*((_DWORD *)v23 + 427);
    v32 = 48;
    v33 = &v23[v18];
    v205 = v33;
    v34 = v33;
    v35 = 6LL;
    do
    {
      *v34 = 0LL;
      v32 -= 8;
      ++v34;
      --v35;
    }
    while ( v35 );
    for ( ; v32; --v32 )
    {
      *(_BYTE *)v34 = 0;
      v34 = (_QWORD *)((char *)v34 + 1);
    }
    *(_DWORD *)v33 = v22;
    *((_QWORD *)v33 + 1) = 0LL;
    *((_DWORD *)v33 + 4) = 0;
    v36 = *((_QWORD *)v23 + 215);
    for ( i = v36; ; LODWORD(v36) = i ^ v36 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v38 = v33 + 24;
    v206 = v33;
    *((_DWORD *)v33 + 5) = v36 & 0x7FFFFFFF;
    v39 = 3LL;
    v40 = (char *)&v199;
    *(_QWORD *)a1 = v23;
    do
    {
      v10 -= 8;
      *v38 = *(_QWORD *)v40;
      v40 += 8;
      ++v38;
      --v39;
    }
    while ( v39 );
    for ( ; v10; --v10 )
    {
      v41 = *v40++;
      *(_BYTE *)v38 = v41;
      v38 = (_QWORD *)((char *)v38 + 1);
    }
    LOBYTE(v38) = 1;
    v42 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, unsigned int *))v23 + 62))(
            BugCheckParameter2,
            v38,
            12LL,
            &v214);
    v188 = v42;
    v214 &= -(v42 != 0);
    v213 = a3 & 1;
    if ( !v213 )
    {
      v42 = 0LL;
      v214 = 0;
      v188 = 0LL;
    }
    v197 = v33 + 48;
    v186 = v33 + 48;
    v191 = (__int64)&v33[20 * (unsigned int)v189 + 48];
    v43 = v33 + 48;
    if ( v20 >= 8 )
    {
      v44 = (unsigned __int64)v20 >> 3;
      do
      {
        *v43 = -1LL;
        v20 -= 8;
        ++v43;
        --v44;
      }
      while ( v44 );
    }
    for ( ; v20; --v20 )
    {
      *(_BYTE *)v43 = -1;
      v43 = (_QWORD *)((char *)v43 + 1);
    }
    v45 = 0;
    v46 = (_DWORD *)((char *)v193 + *((unsigned __int16 *)v193 + 10) + 24);
    v189 = (unsigned __int64)&v46[10 * v183];
    if ( (v46[9] & 0x2000000) != 0
      || (v47 = *v46, *v46 == 1414090313) && v46[1] == 1195525195
      || v47 == 1162297680 && ((v48 = *((_WORD *)v46 + 2), v48 == 30839) || v48 == 29303 || v48 == 30583)
      || v47 == 1095914053 && *((_WORD *)v46 + 2) == 16724 )
    {
LABEL_82:
      v45 = 1;
    }
    else
    {
      v49 = (char *)*((_QWORD *)v23 + 249);
      v50 = (__int64 *)*((_QWORD *)v23 + 250);
      v51 = (char *)v46 - v49;
      v52 = (char *)*((_QWORD *)v23 + 251);
      v53 = 7;
      v54 = (char *)*((_QWORD *)v23 + 252);
      while ( 1 )
      {
        v55 = (unsigned __int8)v49[v51];
        v56 = (unsigned __int8)*v49++;
        if ( v55 != v56 )
          break;
        if ( !--v53 )
        {
LABEL_81:
          v42 = v188;
          goto LABEL_82;
        }
      }
      v57 = 8;
      v58 = (__int64 *)v46;
      while ( 1 )
      {
        v59 = *v58++;
        v60 = *v50++;
        if ( v59 != v60 )
          break;
        v57 -= 8;
        if ( v57 < 8 )
        {
          if ( !v57 )
            goto LABEL_81;
          while ( 1 )
          {
            v61 = *(unsigned __int8 *)v58;
            v58 = (__int64 *)((char *)v58 + 1);
            v62 = *(unsigned __int8 *)v50;
            v50 = (__int64 *)((char *)v50 + 1);
            if ( v61 != v62 )
              goto LABEL_74;
            if ( !--v57 )
              goto LABEL_81;
          }
        }
      }
LABEL_74:
      v63 = 4;
      v64 = (char *)v46 - v52;
      while ( 1 )
      {
        v65 = (unsigned __int8)v52[v64];
        v66 = (unsigned __int8)*v52++;
        if ( v65 != v66 )
          break;
        if ( !--v63 )
          goto LABEL_81;
      }
      v67 = 6;
      v68 = (char *)v46 - v54;
      while ( 1 )
      {
        v69 = (unsigned __int8)v54[v68];
        v70 = (unsigned __int8)*v54++;
        if ( v69 != v70 )
          break;
        if ( !--v67 )
          goto LABEL_81;
      }
      v42 = v188;
    }
    if ( (int)v46[9] < 0 )
      v45 = 1;
    if ( v45 && *v46 == 1414090313 && v46[1] == 1195525195 && (*((_DWORD *)v23 + 523) & 0x2000) != 0 )
      v45 = 0;
    v71 = v46[4];
    v72 = v45 == 0;
    v181 = v46[3];
    if ( v71 <= v46[2] )
      v71 = v46[2];
    v73 = (v71 + v46[3] + 4095) & 0xFFFFF000;
    v74 = MmImageSectionPagable((__int64)v46);
    v75 = BugCheckParameter2;
    v76 = v186;
    v77 = v191;
    v78 = v74 != 0;
    v184 = BugCheckParameter2;
    v79 = BugCheckParameter2;
    v80 = 0;
    if ( v186 != (_BYTE *)v191 )
    {
      v81 = v46 + 1;
      while ( 1 )
      {
        if ( v80 < v181 )
        {
LABEL_138:
          v111 = &v188;
          v112 = 0;
          v113 = &v214;
          while ( 1 )
          {
            v114 = *v111;
            if ( *v113 )
            {
              if ( v184 >= v114 && v184 <= v114 + *v113 - 1LL )
                break;
            }
            ++v112;
            ++v113;
            ++v111;
            if ( v112 )
            {
              if ( v80 >= v181 && v78 )
              {
                v115 = v186;
              }
              else
              {
                v115 = v186;
                *((_DWORD *)v186 + 4) &= ~0x80000000;
              }
              v115[15] &= ~0x80u;
              break;
            }
          }
          v76 = v186;
          v79 = v184;
          v77 = v191;
          goto LABEL_151;
        }
        if ( v80 >= v73 )
        {
          if ( v81 - 1 == (_DWORD *)v189 )
          {
            if ( (*((_DWORD *)v23 + 522) & 0x200000) == 0 )
            {
              v194 = 1329605744;
              KeBugCheckEx(__ROR4__(1329594368, 86), 0xAuLL, BugCheckParameter2, 5uLL, 0LL);
            }
            if ( !*((_DWORD *)v23 + 484) )
            {
              *((_QWORD *)v23 + 244) = 0LL;
              *((_QWORD *)v23 + 243) = v23 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v23 + 245) = 271LL;
              *((_QWORD *)v23 + 246) = BugCheckParameter2;
              *((_DWORD *)v23 + 484) = 1;
            }
            return 3221225595LL;
          }
          if ( v81[12] < v80 )
          {
            v79 = v184;
            goto LABEL_151;
          }
          v82 = v81[18];
          v81 += 10;
          v83 = 0;
          if ( (v82 & 0x2000000) != 0
            || (v84 = (char *)(v81 - 1), v85 = *(v81 - 1), v85 == 1414090313) && *v81 == 1195525195
            || v85 == 1162297680 && ((v86 = *(_WORD *)v81, *(_WORD *)v81 == 30839) || v86 == 29303 || v86 == 30583)
            || v85 == 1095914053 && *(_WORD *)v81 == 16724 )
          {
            v83 = 1;
          }
          else
          {
            v87 = (char *)*((_QWORD *)v23 + 249);
            v88 = 7;
            v202 = (__int64 *)*((_QWORD *)v23 + 250);
            v89 = v84 - v87;
            v203 = (char *)*((_QWORD *)v23 + 251);
            v204 = (char *)*((_QWORD *)v23 + 252);
            v201 = v87;
            while ( 1 )
            {
              v90 = (unsigned __int8)v87[v89];
              v91 = (unsigned __int8)*v87++;
              if ( v90 != v91 )
                break;
              if ( !--v88 )
              {
LABEL_126:
                v83 = 1;
                goto LABEL_127;
              }
            }
            v92 = v202;
            v93 = 8;
            v94 = (__int64 *)(v81 - 1);
            while ( 1 )
            {
              v95 = *v94++;
              v96 = *v92++;
              if ( v95 != v96 )
                break;
              v93 -= 8;
              if ( v93 < 8 )
              {
                if ( !v93 )
                  goto LABEL_126;
                while ( 1 )
                {
                  v97 = *(unsigned __int8 *)v94;
                  v94 = (__int64 *)((char *)v94 + 1);
                  v98 = *(unsigned __int8 *)v92;
                  v92 = (__int64 *)((char *)v92 + 1);
                  if ( v97 != v98 )
                    goto LABEL_119;
                  if ( !--v93 )
                    goto LABEL_126;
                }
              }
            }
LABEL_119:
            v99 = v203;
            v100 = 4;
            while ( 1 )
            {
              v101 = (unsigned __int8)v99[v84 - v203];
              v102 = (unsigned __int8)*v99++;
              if ( v101 != v102 )
                break;
              if ( !--v100 )
                goto LABEL_126;
            }
            v103 = v204;
            v104 = 6;
            v105 = v84 - v204;
            while ( 1 )
            {
              v106 = (unsigned __int8)v103[v105];
              v107 = (unsigned __int8)*v103++;
              if ( v106 != v107 )
                break;
              if ( !--v104 )
                goto LABEL_126;
            }
          }
LABEL_127:
          if ( (int)v81[8] < 0 )
            v83 = 1;
          if ( v83 && *(v81 - 1) == 1414090313 && *v81 == 1195525195 && (*((_DWORD *)v23 + 523) & 0x2000) != 0 )
            v83 = 0;
          v108 = v81[3];
          v72 = v83 == 0;
          if ( v108 <= v81[1] )
            v108 = v81[1];
          v73 = (v108 + 4095 + v81[2]) & 0xFFFFF000;
          v109 = MmImageSectionPagable((__int64)(v81 - 1));
          v76 = v186;
          v77 = v191;
          v110 = v109 == 0;
          v79 = v184;
          v78 = !v110;
        }
        if ( v72 )
          goto LABEL_138;
LABEL_151:
        v79 += 4096LL;
        v76 += 20;
        v80 += 4096;
        v184 = v79;
        v186 = v76;
        if ( v76 == (_BYTE *)v77 )
        {
          v42 = v188;
          v75 = BugCheckParameter2;
          break;
        }
      }
    }
    v116 = (unsigned __int64)v197;
    if ( v197 != (_BYTE *)v77 )
    {
      do
      {
        LODWORD(v117) = 0;
        if ( v116 != v77 )
        {
          v118 = v116;
          do
          {
            if ( *(char *)(v118 + 15) < 0 )
              break;
            v117 = (unsigned int)(v117 + 1);
            v118 = v116 + 20 * v117;
          }
          while ( v118 != v77 );
          v185 = v117;
          if ( (_DWORD)v117 )
          {
            v119 = (char **)*((_QWORD *)v23 + 290);
            v120 = v117;
            v187 = v117;
            v193 = v119;
            v189 = v116;
            v192 = v75;
            do
            {
              v121 = 8LL;
              v122 = 0;
              if ( v120 < 8 )
                v121 = v120;
              v123 = v192;
              v124 = v209;
              do
              {
                v119[1] = (char *)4096;
                v125 = (char *)(v123 + (v122 << 12));
                *v119 = v125;
                v126 = v125;
                *((_DWORD *)v23 + 434) += 4096;
                v127 = v125;
                for ( j = *((_DWORD *)v23 + 429); v127 < v125 + 4096; v127 += 64 )
                  _mm_prefetch(v127, 0);
                v129 = *((_QWORD *)v23 + 215);
                v182 = 32;
                v130 = v129;
                do
                {
                  v131 = 8LL;
                  do
                  {
                    v132 = v129 ^ *(_QWORD *)v126;
                    v133 = *((_QWORD *)v126 + 1);
                    v126 += 16;
                    v129 = __ROL8__(__ROL8__(v132, j) ^ v133, j);
                    --v131;
                  }
                  while ( v131 );
                  v134 = __ROL8__(v130 ^ (v126 - v125), 17) ^ v130 ^ (v126 - v125);
                  v198 = (v134 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  j = ((unsigned __int8)(v198 ^ v134) ^ (unsigned __int8)j) & 0x3F;
                  if ( !j )
                    LOBYTE(j) = 1;
                  --v182;
                }
                while ( v182 );
                v23 = (_BYTE *)v196;
                v135 = v129;
                v123 = v192;
                while ( 1 )
                {
                  v135 >>= 31;
                  if ( !v135 )
                    break;
                  LODWORD(v129) = v135 ^ v129;
                }
                ++v122;
                *v124 = v129 & 0x7FFFFFFF;
                v119 += 6;
                ++v124;
              }
              while ( v122 < (unsigned int)v121 );
              v136 = v189;
              v137 = (__int64)v193;
              sub_14019FF1C((__int64)v23, (__int64)v193, v121);
              v138 = v209;
              v139 = (unsigned int)v121;
              v140 = (_DWORD *)(v136 + 16);
              v141 = (_QWORD *)v136;
              v142 = (char *)(v137 + 16);
              do
              {
                v143 = 16;
                v144 = v142;
                v145 = v141;
                v146 = 2LL;
                do
                {
                  v143 -= 8;
                  *v145 = *(_QWORD *)v144;
                  v144 += 8;
                  ++v145;
                  --v146;
                }
                while ( v146 );
                for ( ; v143; --v143 )
                {
                  v147 = *v144++;
                  *(_BYTE *)v145 = v147;
                  v145 = (_QWORD *)((char *)v145 + 1);
                }
                v142 += 48;
                v141 = (_QWORD *)((char *)v141 + 20);
                v148 = (*v138++ ^ *v140) & 0x7FFFFFFF;
                *v140 ^= v148;
                v140 += 5;
                --v139;
              }
              while ( v139 );
              v23 = (_BYTE *)v196;
              v119 = v193;
              v192 += (unsigned int)((_DWORD)v121 << 12);
              v120 = v187 - v121;
              v189 = v136 + 20 * v121;
              *(_DWORD *)(v196 + 1736) += (_DWORD)v121 << 15;
              v187 = v120;
            }
            while ( v120 );
            LODWORD(v117) = v185;
            v116 = (unsigned __int64)v197;
            v77 = v191;
          }
        }
        for ( k = 5LL * (unsigned int)v117; ; k = 5 * v117 )
        {
          v150 = v116 + 4 * k;
          if ( v150 == v77 || *(char *)(v150 + 15) >= 0 )
            break;
          v117 = (unsigned int)(v117 + 1);
        }
        v75 = (unsigned int)((_DWORD)v117 << 12) + BugCheckParameter2;
        BugCheckParameter2 = v75;
        v116 += 20LL * (unsigned int)v117;
        v197 = (_BYTE *)v116;
      }
      while ( v116 != v77 );
      v42 = v188;
    }
    if ( !v213 )
      return 0LL;
    v151 = v214;
    if ( !v214 )
      return 0LL;
    v152 = (_DWORD)v190 != 0;
    LODWORD(v190) = -(int)v190;
    v153 = *((unsigned int *)v23 + 417);
    v154 = *((_DWORD *)v23 + 495);
    v207 = 0LL;
    v155 = v152 + 13;
    v156 = v153 + 48;
    if ( (unsigned int)(v153 + 48) <= *((_DWORD *)v23 + 557) )
    {
      v157 = (__int64)v23;
      *((_DWORD *)v23 + 417) = v156;
LABEL_212:
      ++*(_DWORD *)(v157 + 1708);
      v165 = v157 + v153;
      v166 = 48;
      v208 = v157 + v153;
      v167 = (_QWORD *)(v157 + v153);
      v168 = 6LL;
      do
      {
        *v167 = 0LL;
        v166 -= 8;
        ++v167;
        --v168;
      }
      while ( v168 );
      for ( ; v166; --v166 )
      {
        *(_BYTE *)v167 = 0;
        v167 = (_QWORD *)((char *)v167 + 1);
      }
      *(_DWORD *)v165 = v155;
      *(_QWORD *)(v165 + 8) = v42;
      v169 = (_QWORD *)v42;
      *(_DWORD *)(v165 + 16) = v151;
      *(_DWORD *)(v157 + 1736) += v151;
      v170 = *(_DWORD *)(v157 + 1716);
      if ( v42 < v42 + v151 )
      {
        v171 = (const char *)v42;
        do
        {
          _mm_prefetch(v171, 0);
          v171 += 64;
        }
        while ( (unsigned __int64)v171 < v42 + v151 );
      }
      v172 = *(_QWORD *)(v157 + 1720);
      for ( m = (unsigned int)v151 >> 7; m; --m )
      {
        v174 = 8LL;
        do
        {
          v175 = v169[1] ^ __ROL8__(*v169 ^ v172, v170);
          v169 += 2;
          v172 = __ROL8__(v175, v170);
          --v174;
        }
        while ( v174 );
        v176 = (__ROL8__(*(_QWORD *)(v157 + 1720) ^ ((unsigned __int64)v169 - v42), 17) ^ *(_QWORD *)(v157 + 1720) ^ ((unsigned __int64)v169 - v42))
             * (unsigned __int128)0x7010008004002001uLL;
        v170 = ((unsigned __int8)v176 ^ (unsigned __int8)(BYTE8(v176) ^ v170)) & 0x3F;
        if ( !v170 )
          LOBYTE(v170) = 1;
      }
      v177 = v151 & 0x7F;
      if ( v177 >= 8 )
      {
        v178 = (unsigned __int64)(v151 & 0x7F) >> 3;
        do
        {
          v172 = __ROL8__(*v169++ ^ v172, v170);
          v177 -= 8;
          --v178;
        }
        while ( v178 );
      }
      for ( ; v177; --v177 )
      {
        v179 = *(unsigned __int8 *)v169;
        v169 = (_QWORD *)((char *)v169 + 1);
        v172 = __ROL8__(v179 ^ v172, v170);
      }
      for ( n = v172; ; LODWORD(v172) = n ^ v172 )
      {
        n >>= 31;
        if ( !n )
          break;
      }
      *(_DWORD *)(v165 + 20) = v172 & 0x7FFFFFFF;
      *(_DWORD *)(v157 + 1736) += v151;
      if ( (*(_DWORD *)(v157 + 2088) & 0x40000000) != 0 )
      {
        if ( (_DWORD)v151 )
          sub_14019FEBC(v157, v42, v151, v165 + 28);
      }
      *(_DWORD *)(v165 + 24) = 1;
      *(_QWORD *)a1 = v157;
      return 0LL;
    }
    v157 = sub_1402E732C(v23, v156, v154);
    if ( v157 )
    {
      v158 = *((_DWORD *)v23 + 522);
      if ( (v158 & 4) == 0 )
      {
        v159 = *((_DWORD *)v23 + 417);
        v160 = *((_QWORD *)v23 + 205);
        v161 = (v158 & 0x20000000) != 0 ? *((_DWORD *)v23 + 495) : 0;
        if ( v159 >= 8 )
        {
          v162 = (unsigned __int64)v159 >> 3;
          do
          {
            *(_QWORD *)v23 = 0LL;
            v159 -= 8;
            v23 += 8;
            --v162;
          }
          while ( v162 );
        }
        for ( ; v159; --v159 )
          *v23++ = 0;
        v163 = *(_DWORD *)(v157 + 1980);
        *(_DWORD *)(v157 + 1980) = v161;
        if ( v161 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v157 + 872))(v160);
        }
        else
        {
          v164 = 0;
          if ( (*(_DWORD *)(v157 + 2088) & 0x10000000) == 0 )
            v164 = v161;
          if ( v164 )
            (*(void (__fastcall **)(__int64, _QWORD))(v157 + 552))(v160 - 8, *(_QWORD *)(v160 - 8));
          else
            (*(void (__fastcall **)(__int64))(v157 + 256))(v160);
        }
        *(_DWORD *)(v157 + 1980) = v163;
      }
      *(_DWORD *)(v157 + 2088) &= ~4u;
      goto LABEL_212;
    }
    return 3221225626LL;
  }
  if ( (*((_DWORD *)v3 + 522) & 0x200000) == 0 )
  {
    v195 = 1329605744;
    KeBugCheckEx(__ROR4__(1329594368, 86), 0xAuLL, a2, 4uLL, 0LL);
  }
  if ( !*((_DWORD *)v3 + 484) )
  {
    *((_QWORD *)v3 + 244) = 0LL;
    *((_QWORD *)v3 + 245) = 271LL;
    *((_QWORD *)v3 + 243) = v3 - 0x5C5FC0A76E374B18LL;
    *((_QWORD *)v3 + 246) = a2;
    *((_DWORD *)v3 + 484) = 1;
  }
  return 3221225595LL;
}
