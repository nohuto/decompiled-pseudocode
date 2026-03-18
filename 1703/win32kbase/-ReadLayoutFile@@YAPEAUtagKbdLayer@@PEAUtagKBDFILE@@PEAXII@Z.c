/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C007A7A0
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C007A6C0 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C007AE20 (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     strcmp_0 @ 0x1C00A155A (strcmp_0.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

struct tagKbdLayer *__fastcall ReadLayoutFile(struct tagKBDFILE *a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  int v7; // r15d
  struct tagKBDFILE *v9; // rbp
  BOOL v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // r8d
  void *v13; // rdx
  char *v14; // rcx
  char *v15; // rbp
  __int16 v16; // ax
  __int64 v17; // r15
  int v18; // esi
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rbx
  unsigned int v25; // r14d
  char *v26; // rax
  void *v27; // rax
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // r11
  unsigned __int64 v33; // rax
  _QWORD *v34; // rdx
  _BYTE *v35; // rcx
  _BYTE *v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 *v39; // rax
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  _DWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // r9
  unsigned __int64 v49; // r8
  __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v71; // rax
  _DWORD *v72; // rcx
  unsigned __int64 v73; // rax
  _WORD *v74; // rcx
  _WORD *v75; // rcx
  unsigned __int64 v76; // rax
  _QWORD *v77; // r8
  _WORD *v78; // rax
  _WORD *i; // rdx
  unsigned int v80; // eax
  unsigned __int64 v81; // r10
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r9
  bool v85; // cc
  unsigned __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rcx
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  unsigned __int64 v92; // rbx
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // r11
  unsigned __int64 v95; // r10
  _BYTE *j; // r8
  unsigned __int8 v97; // al
  int v98; // eax
  _BYTE *v99; // r9
  _BYTE *v100; // rax
  _BYTE *v101; // r8
  __int64 v102; // rax
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // rdx
  __int64 v105; // rax
  unsigned __int64 v106; // r8
  unsigned __int64 v107; // r9
  _DWORD *v108; // rdx
  unsigned __int64 v109; // rax
  _DWORD *v110; // rdx
  __int64 v111; // rax
  unsigned __int64 v112; // r8
  unsigned __int64 v113; // r11
  unsigned __int64 v114; // rdx
  unsigned __int64 v115; // r10
  unsigned __int64 v116; // r9
  _WORD *v117; // rdx
  unsigned __int64 k; // rax
  _WORD *v119; // rdx
  __int64 v120; // rax
  unsigned __int64 v121; // r8
  unsigned __int64 v122; // rdx
  __int64 v123; // rax
  unsigned __int64 v124; // r8
  unsigned __int64 v125; // r10
  unsigned __int64 v126; // rdx
  unsigned __int64 v127; // r11
  unsigned __int64 v128; // r9
  _WORD *v129; // rdx
  unsigned __int64 m; // rax
  _WORD *v131; // rdx
  __int64 v132; // rax
  unsigned __int64 v133; // r8
  unsigned __int64 v134; // rdx
  __int64 v135; // rax
  unsigned __int64 v136; // r8
  unsigned __int64 v137; // rbx
  unsigned __int64 *v138; // rdx
  unsigned __int64 v139; // r11
  unsigned __int64 v140; // r9
  _WORD *v141; // r8
  unsigned __int64 n; // rax
  _WORD *v143; // r8
  __int64 v144; // rax
  unsigned __int64 v145; // r10
  _QWORD *v146; // rdx
  __int64 v147; // rax
  unsigned __int64 v148; // r8
  unsigned __int8 v149; // al
  __int64 v150; // rdx
  unsigned __int64 v151; // r8
  unsigned __int64 v152; // r9
  unsigned __int64 v153; // r8
  unsigned __int64 v154; // rdx
  unsigned __int64 v155; // rax
  __int64 v156; // rax
  unsigned __int64 v157; // r9
  unsigned __int64 v158; // r8
  unsigned __int64 v159; // rdx
  unsigned __int64 v160; // rax
  __int64 v161; // rax
  unsigned __int64 v162; // r9
  _BYTE *v163; // rdx
  int v164; // r8d
  __int16 *v165; // rcx
  unsigned __int64 v166; // r9
  __int16 v167; // ax
  __int64 v168; // r9
  unsigned __int64 v169; // r10
  unsigned __int64 v170; // r8
  _BYTE *v171; // rdx
  __int64 v172; // rax
  unsigned __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // rdx
  unsigned int v176[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v177; // [rsp+40h] [rbp-48h]
  void *v178; // [rsp+48h] [rbp-40h] BYREF

  v176[0] = 0;
  v5 = 0LL;
  v178 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  v10 = PsGetCurrentProcessId() == (HANDLE)gpidLogon;
  *((_QWORD *)v9 + 6) = 0LL;
  v177 = v10;
  if ( (int)LoadFileContent(a2, v11, v12, &v178, v176) >= 0 )
  {
    v13 = v178;
    v14 = (char *)v178 + *((unsigned int *)v178 + 15);
    if ( v14 >= v178 && (v10 || v14 + 263 >= v14) )
    {
      v15 = (char *)v178 + v176[0];
      if ( v14 + 264 < v15 )
      {
        v16 = *((_WORD *)v14 + 2);
        if ( v16 == -31132 || v16 == 512 || v16 == -21916 )
          v17 = *((_QWORD *)v14 + 6);
        else
          v17 = *((unsigned int *)v14 + 13);
        v18 = *((unsigned __int16 *)v14 + 3);
        v19 = (unsigned __int64)&v14[*((unsigned __int16 *)v14 + 10) + 24];
        v20 = v177;
        *(_QWORD *)v176 = v177;
        if ( v18 )
        {
          v21 = v19 + 40;
          while ( v19 >= (unsigned __int64)v13 && (v20 || v21 - 1 >= v19) && v21 < (unsigned __int64)v15 )
          {
            v22 = strcmp_0((const char *)v19, ".data");
            v13 = v178;
            if ( v22 )
            {
              v20 = *(_QWORD *)v176;
              v19 += 40LL;
              v21 += 40LL;
              if ( --v18 )
                continue;
            }
            if ( !v18 )
              break;
            v23 = *(_DWORD *)(v19 + 12);
            if ( a3 < v23 )
              break;
            v24 = *(unsigned int *)(v19 + 8);
            v25 = a3 - v23;
            if ( v25 >= (unsigned int)v24 )
              break;
            if ( (unsigned int)v24 >= 0x40000 )
              break;
            v26 = (char *)v178 + *(unsigned int *)(v19 + 20);
            if ( v26 < v178 || &v26[v24] < v26 || &v26[v24] >= v15 )
              break;
            v27 = (void *)Win32AllocPool((unsigned int)v24, 0x746B7355u);
            v28 = (unsigned __int64)v27;
            if ( v27 )
            {
              *((_QWORD *)a1 + 3) = v27;
              memmove(v27, (char *)v178 + *(unsigned int *)(v19 + 20), (unsigned int)v24);
              *((_DWORD *)a1 + 10) = v24;
              v29 = v28 + (unsigned int)v24;
              v30 = *(unsigned int *)(v19 + 12);
              v5 = v28 + v25;
              if ( v28 >= v30 )
              {
                v31 = v177;
                v32 = v28 - v30 - v17;
                if ( v177 || v5 >= v28 && v5 <= v29 - 104 )
                {
                  if ( !*(_QWORD *)v5
                    || (v33 = v32 + *(_QWORD *)v5, *(_QWORD *)v5 = v33, v33 >= v28)
                    && v33 + 16 >= v33
                    && v33 + 16 <= v29 )
                  {
                    if ( v31 || *(_QWORD *)v5 )
                    {
                      v34 = *(_QWORD **)v5;
                      v35 = **(_BYTE ***)v5;
                      if ( !v35
                        || (*v34 = &v35[v32], v34 = *(_QWORD **)v5, v35 = **(_BYTE ***)v5, (unsigned __int64)v35 >= v28)
                        && v35 + 2 >= v35
                        && (unsigned __int64)(v35 + 2) <= v29 )
                      {
                        if ( (v31 || (unsigned __int64)v34 >= v28 && (unsigned __int64)v34 <= v29 - 16)
                          && (unsigned __int64)v35 >= v28 )
                        {
                          v36 = v35 + 2;
                          while ( v36 >= v35 && (unsigned __int64)v36 <= v29 )
                          {
                            if ( !*v35 )
                            {
                              v37 = *(_QWORD *)(v5 + 8);
                              if ( v37 )
                              {
                                v38 = v32 + v37;
                                *(_QWORD *)(v5 + 8) = v38;
                                if ( v38 < v28 || v38 + 16 < v38 || v38 + 16 > v29 )
                                  break;
                              }
                              v39 = *(unsigned __int64 **)(v5 + 8);
                              if ( v39 )
                              {
                                if ( (unsigned __int64)v39 >= v28 )
                                {
                                  v40 = v39 + 2;
                                  do
                                  {
                                    if ( v40 < v39 || (unsigned __int64)v40 > v29 )
                                      break;
                                    if ( !*v39 )
                                      goto LABEL_56;
                                    v41 = v32 + *v39;
                                    *v39 = v41;
                                    if ( v41 < v28 )
                                      break;
                                    if ( v41 + 4 < v41 )
                                      break;
                                    if ( v41 + 4 > v29 )
                                      break;
                                    v39 += 2;
                                    v40 += 2;
                                  }
                                  while ( (unsigned __int64)v39 >= v28 );
                                }
                                break;
                              }
LABEL_56:
                              v42 = *(_QWORD *)(v5 + 16);
                              if ( v42 )
                              {
                                v71 = v32 + v42;
                                *(_QWORD *)(v5 + 16) = v71;
                                if ( v71 < v28 || v71 + 8 < v71 || v71 + 8 > v29 )
                                  break;
                              }
                              v43 = *(_DWORD **)(v5 + 16);
                              if ( v43 )
                              {
                                v72 = v43 + 2;
                                while ( (unsigned __int64)v43 >= v28 && v72 >= v43 && (unsigned __int64)v72 <= v29 )
                                {
                                  if ( *v43 )
                                  {
                                    v72 += 2;
                                    v43 += 2;
                                    if ( v43 )
                                      continue;
                                  }
                                  goto LABEL_58;
                                }
                                break;
                              }
LABEL_58:
                              if ( *(_WORD *)(v5 + 82) )
                              {
                                v44 = *(_QWORD *)(v5 + 88);
                                if ( v44 )
                                {
                                  v73 = v32 + v44;
                                  *(_QWORD *)(v5 + 88) = v73;
                                  if ( v73 < v28 || v73 + 6 < v73 || v73 + 6 > v29 )
                                    break;
                                }
                              }
                              v45 = *(_QWORD *)(v5 + 24);
                              if ( v45 )
                              {
                                v46 = v32 + v45;
                                *(_QWORD *)(v5 + 24) = v46;
                                if ( v46 < v28 || v46 + 16 < v46 || v46 + 16 > v29 )
                                  break;
                              }
                              v47 = *(_QWORD *)(v5 + 24);
                              if ( v47 )
                              {
                                if ( v47 >= v28 )
                                {
                                  v48 = *(_QWORD *)v176;
                                  do
                                  {
                                    v49 = v47 + 16;
                                    if ( v47 + 16 < v47 || v49 > v29 )
                                      break;
                                    if ( !*(_BYTE *)v47 )
                                      goto LABEL_77;
                                    v50 = *(_QWORD *)(v47 + 8);
                                    if ( v50 )
                                    {
                                      v51 = v32 + v50;
                                      *(_QWORD *)(v47 + 8) = v51;
                                      if ( v51 < v28 || v51 + 2 < v51 || v51 + 2 > v29 )
                                        break;
                                    }
                                    if ( !v48 )
                                    {
                                      v74 = *(_WORD **)(v47 + 8);
                                      if ( v74 )
                                      {
                                        for ( ; (unsigned __int64)v74 >= v28; ++v74 )
                                        {
                                          if ( (unsigned __int64)v74 > v29 - 2 )
                                            break;
                                          if ( !*v74 )
                                            goto LABEL_75;
                                        }
                                        *(_QWORD *)(v47 + 8) = 0LL;
                                      }
                                    }
LABEL_75:
                                    v47 += 16LL;
                                  }
                                  while ( v49 >= v28 );
                                }
                                break;
                              }
                              v48 = *(_QWORD *)v176;
LABEL_77:
                              v52 = *(_QWORD *)(v5 + 32);
                              if ( v52 )
                              {
                                v53 = v32 + v52;
                                *(_QWORD *)(v5 + 32) = v53;
                                if ( v53 < v28 || v53 + 16 < v53 || v53 + 16 > v29 )
                                  break;
                              }
                              v54 = *(_QWORD *)(v5 + 32);
                              if ( v54 )
                              {
                                if ( v54 >= v28 )
                                {
                                  do
                                  {
                                    v55 = v54 + 16;
                                    if ( v54 + 16 < v54 || v55 > v29 )
                                      break;
                                    if ( !*(_BYTE *)v54 )
                                      goto LABEL_93;
                                    v56 = *(_QWORD *)(v54 + 8);
                                    if ( v56 )
                                    {
                                      v57 = v32 + v56;
                                      *(_QWORD *)(v54 + 8) = v57;
                                      if ( v57 < v28 || v57 + 2 < v57 || v57 + 2 > v29 )
                                        break;
                                    }
                                    if ( !v48 )
                                    {
                                      v75 = *(_WORD **)(v54 + 8);
                                      if ( v75 )
                                      {
                                        for ( ; (unsigned __int64)v75 >= v28; ++v75 )
                                        {
                                          if ( (unsigned __int64)v75 > v29 - 2 )
                                            break;
                                          if ( !*v75 )
                                            goto LABEL_91;
                                        }
                                        *(_QWORD *)(v54 + 8) = 0LL;
                                      }
                                    }
LABEL_91:
                                    v54 += 16LL;
                                  }
                                  while ( v55 >= v28 );
                                }
                                break;
                              }
LABEL_93:
                              v58 = *(_QWORD *)(v5 + 40);
                              if ( v58 )
                              {
                                v76 = v32 + v58;
                                *(_QWORD *)(v5 + 40) = v76;
                                if ( v76 < v28 || v76 + 8 < v76 || v76 + 8 > v29 )
                                  break;
                              }
                              v59 = *(_QWORD **)(v5 + 40);
                              if ( v59 )
                              {
                                if ( (unsigned __int64)v59 < v28 )
                                  break;
                                v77 = v59 + 1;
LABEL_185:
                                if ( v77 < v59 || (unsigned __int64)v77 > v29 )
                                  break;
                                if ( *v59 )
                                {
                                  v78 = (_WORD *)(v32 + *v59);
                                  *v59 = v78;
                                  if ( (unsigned __int64)v78 >= v28
                                    && v78 + 1 >= v78
                                    && (unsigned __int64)(v78 + 1) <= v29 )
                                  {
                                    for ( i = v78 + 1;
                                          (unsigned __int64)v78 >= v28 && i >= v78 && (unsigned __int64)i <= v29;
                                          ++i )
                                    {
                                      if ( !*v78 )
                                      {
                                        ++v59;
                                        ++v77;
                                        if ( (unsigned __int64)v59 >= v28 )
                                          goto LABEL_185;
                                        goto LABEL_423;
                                      }
                                      ++v78;
                                    }
                                  }
                                  break;
                                }
                              }
                              v60 = *(_QWORD *)(v5 + 48);
                              if ( !v60 )
                                break;
                              v61 = v60 + v32;
                              *(_QWORD *)(v5 + 48) = v60 + v32;
                              if ( v60 + v32 < v28 )
                                break;
                              if ( v61 + 2 < v61 )
                                break;
                              if ( v61 + 2 > v29 )
                                break;
                              v62 = v61 + 2LL * *(unsigned __int8 *)(v5 + 56);
                              if ( v62 < v28 )
                                break;
                              if ( v62 + 2 < v62 )
                                break;
                              if ( v62 + 2 > v29 )
                                break;
                              v63 = *(_QWORD *)(v5 + 64);
                              if ( v63 )
                              {
                                v64 = v32 + v63;
                                *(_QWORD *)(v5 + 64) = v64;
                                if ( v64 < v28 || v64 + 4 < v64 || v64 + 4 > v29 )
                                  break;
                              }
                              v65 = *(_QWORD *)(v5 + 64);
                              if ( v65 )
                              {
                                while ( !v48 || *(_WORD *)(v65 + 2) )
                                {
                                  if ( v65 < v28 || v65 + 4 < v65 || v65 + 4 > v29 )
                                    goto LABEL_423;
                                  if ( !v48 && !*(_WORD *)(v65 + 2) )
                                    break;
                                  v65 += 4LL;
                                }
                              }
                              v66 = *(_QWORD *)(v5 + 72);
                              if ( v66 )
                              {
                                v67 = v32 + v66;
                                *(_QWORD *)(v5 + 72) = v67;
                                if ( v67 < v28 || v67 + 4 < v67 || v67 + 4 > v29 )
                                  break;
                              }
                              v68 = *(_QWORD *)(v5 + 72);
                              if ( v68 )
                              {
                                if ( v68 >= v28 )
                                {
                                  v69 = v68 + 4;
                                  do
                                  {
                                    if ( v69 < v68 || v69 > v29 )
                                      break;
                                    if ( !*(_WORD *)(v69 - 2) )
                                      goto LABEL_126;
                                    v68 += 4LL;
                                    v69 += 4LL;
                                  }
                                  while ( v68 >= v28 );
                                }
                                break;
                              }
LABEL_126:
                              if ( a4 )
                              {
                                v80 = *(_DWORD *)(v19 + 12);
                                if ( a4 < v80 )
                                  break;
                                v6 = v28 + a4 - v80;
                                if ( v6 < v28 )
                                  break;
                                v81 = v6 + 32;
                                if ( v6 + 32 < v6 )
                                  break;
                                if ( v81 > v29 )
                                  break;
                                v82 = *(_QWORD *)(v6 + 8);
                                if ( v82 )
                                {
                                  v83 = v32 + v82;
                                  *(_QWORD *)(v6 + 8) = v83;
                                  if ( v83 < v28 || v83 + 132 < v83 || v83 + 132 > v29 )
                                    break;
                                }
                                v84 = *(_QWORD *)(v6 + 8);
                                if ( v84 )
                                {
                                  if ( v31 )
                                  {
                                    v86 = v84 + 132LL * (unsigned int)(*(_DWORD *)(v6 + 4) - 1);
                                    if ( v86 < v28 || v84 + 132 * ((unsigned int)(*(_DWORD *)(v6 + 4) - 1) + 1LL) < v86 )
                                      break;
                                    v85 = v86 + 132 <= v29;
                                  }
                                  else
                                  {
                                    v85 = *(unsigned int *)(v6 + 4) <= (v29 - v84) / 0x84;
                                  }
                                  if ( !v85 )
                                    break;
                                }
                                v87 = *(_QWORD *)(v6 + 24);
                                if ( v87 )
                                {
                                  v88 = v32 + v87;
                                  *(_QWORD *)(v6 + 24) = v88;
                                  if ( v88 < v28 || v88 + 2 < v88 || v88 + 2 > v29 )
                                    break;
                                }
                                v89 = *(_QWORD *)(v6 + 24);
                                if ( v89 )
                                {
                                  v90 = v89 + 2LL * (*(_DWORD *)(v6 + 16) - 1);
                                  if ( v90 < v28 || v90 + 2 < v90 || v90 + 2 > v29 )
                                    break;
                                }
                                if ( !v31 )
                                {
                                  v91 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v91 )
                                  {
                                    if ( v84 < v81 && v84 + 132 * v91 > v6 )
                                      break;
                                  }
                                  if ( v6 - 104 < v5 && v81 > v5 )
                                    break;
                                }
                                if ( (int)IsEditionValidateKbdNLSTableSupported() >= 0
                                  && !(unsigned int)EditionValidateKbdNLSTable(v6) )
                                {
                                  break;
                                }
                                *((_QWORD *)a1 + 6) = v6;
                              }
                              if ( v31 )
                                goto LABEL_128;
                              v92 = *(_QWORD *)(v5 + 8);
                              if ( v92 )
                              {
                                v93 = *(_QWORD *)(v5 + 8);
                                if ( v92 < v28 )
                                  break;
LABEL_235:
                                v94 = v93 + 16;
                                if ( v93 + 16 < v93 || v94 > v29 )
                                  break;
                                v95 = *(_QWORD *)v93;
                                if ( *(_QWORD *)v93 )
                                {
                                  for ( j = *(_BYTE **)v93;
                                        (unsigned __int64)j >= v28 && j + 4 >= j && (unsigned __int64)(j + 4) <= v29;
                                        j += *(unsigned __int8 *)(v93 + 9) )
                                  {
                                    if ( !*j )
                                    {
                                      v101 = j + 4;
                                      if ( !v6
                                        || (v102 = *(unsigned int *)(v6 + 4), !(_DWORD)v102)
                                        || (v103 = *(_QWORD *)(v6 + 8), v103 >= (unsigned __int64)v101)
                                        || v103 + 132 * v102 <= v95 )
                                      {
                                        if ( v95 - 104 >= v5 || (unsigned __int64)v101 <= v5 )
                                        {
                                          v93 = v94;
                                          if ( v94 >= v28 )
                                            goto LABEL_235;
                                        }
                                      }
                                      goto LABEL_423;
                                    }
                                    v97 = *(_BYTE *)(v93 + 8);
                                    if ( v97 > 1u )
                                    {
                                      v98 = v97 - 1;
                                      v99 = &j[2 * v98 + 2];
                                      if ( (unsigned __int64)v99 < v28 )
                                        goto LABEL_423;
                                      v100 = &j[2 * v98 + 4];
                                      if ( v100 < v99 || (unsigned __int64)v100 > v29 )
                                        goto LABEL_423;
                                    }
                                  }
                                  break;
                                }
                                v104 = v93 + 16;
                                if ( v6 )
                                {
                                  v105 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v105 )
                                  {
                                    v106 = *(_QWORD *)(v6 + 8);
                                    if ( v106 < v104 && v106 + 132 * v105 > v92 )
                                      break;
                                  }
                                }
                                if ( v92 - 104 < v5 && v104 > v5 )
                                  break;
                              }
                              v107 = *(_QWORD *)(v5 + 16);
                              v108 = (_DWORD *)v107;
                              if ( v107 )
                              {
                                v109 = v107 + 8;
                                while ( (unsigned __int64)v108 >= v28 && v109 >= (unsigned __int64)v108 && v109 <= v29 )
                                {
                                  if ( !*v108 )
                                  {
                                    v110 = v108 + 2;
                                    if ( v6 )
                                    {
                                      v111 = *(unsigned int *)(v6 + 4);
                                      if ( (_DWORD)v111 )
                                      {
                                        v112 = *(_QWORD *)(v6 + 8);
                                        if ( v112 < (unsigned __int64)v110 && v112 + 132 * v111 > v107 )
                                          goto LABEL_423;
                                      }
                                    }
                                    if ( v107 - 104 < v5 && (unsigned __int64)v110 > v5 )
                                      goto LABEL_423;
                                    goto LABEL_276;
                                  }
                                  v109 += 8LL;
                                  v108 += 2;
                                  if ( !v108 )
                                    goto LABEL_276;
                                }
                              }
                              else
                              {
LABEL_276:
                                v113 = *(_QWORD *)(v5 + 24);
                                if ( v113 )
                                {
                                  v114 = *(_QWORD *)(v5 + 24);
                                  if ( v113 >= v28 )
                                  {
                                    while ( 1 )
                                    {
                                      v115 = v114 + 16;
                                      if ( v114 + 16 < v114 || v115 > v29 )
                                        break;
                                      if ( !*(_BYTE *)v114 )
                                      {
                                        v122 = v114 + 16;
                                        if ( v6 )
                                        {
                                          v123 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v123 )
                                          {
                                            v124 = *(_QWORD *)(v6 + 8);
                                            if ( v124 < v122 && v124 + 132 * v123 > v113 )
                                              goto LABEL_423;
                                          }
                                        }
                                        if ( v113 - 104 < v5 && v122 > v5 )
                                          goto LABEL_423;
                                        goto LABEL_302;
                                      }
                                      v116 = *(_QWORD *)(v114 + 8);
                                      if ( v116 )
                                      {
                                        v117 = *(_WORD **)(v114 + 8);
                                        for ( k = v116 + 2;
                                              (unsigned __int64)v117 >= v28 && k >= (unsigned __int64)v117 && k <= v29;
                                              k += 2LL )
                                        {
                                          if ( !*v117 )
                                          {
                                            v119 = v117 + 1;
                                            if ( v6 )
                                            {
                                              v120 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v120 )
                                              {
                                                v121 = *(_QWORD *)(v6 + 8);
                                                if ( v121 < (unsigned __int64)v119 && v121 + 132 * v120 > v116 )
                                                  goto LABEL_423;
                                              }
                                            }
                                            if ( v116 - 104 < v5 && (unsigned __int64)v119 > v5 )
                                              goto LABEL_423;
                                            goto LABEL_294;
                                          }
                                          ++v117;
                                        }
                                        goto LABEL_423;
                                      }
LABEL_294:
                                      v114 = v115;
                                      if ( v115 < v28 )
                                        goto LABEL_423;
                                    }
                                  }
                                }
                                else
                                {
LABEL_302:
                                  v125 = *(_QWORD *)(v5 + 32);
                                  if ( v125 )
                                  {
                                    v126 = *(_QWORD *)(v5 + 32);
                                    if ( v125 >= v28 )
                                    {
                                      while ( 1 )
                                      {
                                        v127 = v126 + 16;
                                        if ( v126 + 16 < v126 || v127 > v29 )
                                          break;
                                        if ( !*(_BYTE *)v126 )
                                        {
                                          v134 = v126 + 16;
                                          if ( v6 )
                                          {
                                            v135 = *(unsigned int *)(v6 + 4);
                                            if ( (_DWORD)v135 )
                                            {
                                              v136 = *(_QWORD *)(v6 + 8);
                                              if ( v136 < v134 && v136 + 132 * v135 > v125 )
                                                goto LABEL_423;
                                            }
                                          }
                                          if ( v125 - 104 < v5 && v134 > v5 )
                                            goto LABEL_423;
                                          goto LABEL_328;
                                        }
                                        v128 = *(_QWORD *)(v126 + 8);
                                        if ( v128 )
                                        {
                                          v129 = *(_WORD **)(v126 + 8);
                                          for ( m = v128 + 2;
                                                (unsigned __int64)v129 >= v28 && m >= (unsigned __int64)v129 && m <= v29;
                                                m += 2LL )
                                          {
                                            if ( !*v129 )
                                            {
                                              v131 = v129 + 1;
                                              if ( v6 )
                                              {
                                                v132 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v132 )
                                                {
                                                  v133 = *(_QWORD *)(v6 + 8);
                                                  if ( v133 < (unsigned __int64)v131 && v133 + 132 * v132 > v128 )
                                                    goto LABEL_423;
                                                }
                                              }
                                              if ( v128 - 104 < v5 && (unsigned __int64)v131 > v5 )
                                                goto LABEL_423;
                                              goto LABEL_320;
                                            }
                                            ++v129;
                                          }
                                          goto LABEL_423;
                                        }
LABEL_320:
                                        v126 = v127;
                                        if ( v127 < v28 )
                                          goto LABEL_423;
                                      }
                                    }
                                  }
                                  else
                                  {
LABEL_328:
                                    v137 = *(_QWORD *)(v5 + 40);
                                    if ( v137 )
                                    {
                                      v138 = *(unsigned __int64 **)(v5 + 40);
                                      if ( v137 < v28 )
                                        break;
                                      v139 = v137 + 8;
LABEL_331:
                                      if ( v139 < (unsigned __int64)v138 || v139 > v29 )
                                        break;
                                      v140 = *v138;
                                      if ( *v138 )
                                      {
                                        v141 = (_WORD *)*v138;
                                        for ( n = v140 + 2;
                                              (unsigned __int64)v141 >= v28 && n >= (unsigned __int64)v141 && n <= v29;
                                              n += 2LL )
                                        {
                                          if ( !*v141 )
                                          {
                                            v143 = v141 + 1;
                                            if ( !v6
                                              || (v144 = *(unsigned int *)(v6 + 4), !(_DWORD)v144)
                                              || (v145 = *(_QWORD *)(v6 + 8), v145 >= (unsigned __int64)v143)
                                              || v145 + 132 * v144 <= v140 )
                                            {
                                              if ( v140 - 104 >= v5 || (unsigned __int64)v143 <= v5 )
                                              {
                                                ++v138;
                                                v139 += 8LL;
                                                if ( (unsigned __int64)v138 >= v28 )
                                                  goto LABEL_331;
                                              }
                                            }
                                            goto LABEL_423;
                                          }
                                          ++v141;
                                        }
                                        break;
                                      }
                                      v146 = v138 + 1;
                                      if ( v6 )
                                      {
                                        v147 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v147 )
                                        {
                                          v148 = *(_QWORD *)(v6 + 8);
                                          if ( v148 < (unsigned __int64)v146 && v148 + 132 * v147 > v137 )
                                            break;
                                        }
                                      }
                                      if ( v137 - 104 < v5 && (unsigned __int64)v146 > v5 )
                                        break;
                                    }
                                    v149 = *(_BYTE *)(v5 + 56);
                                    if ( v149 )
                                    {
                                      if ( v6 )
                                      {
                                        v150 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v150 )
                                        {
                                          v151 = *(_QWORD *)(v5 + 48);
                                          v152 = *(_QWORD *)(v6 + 8);
                                          if ( v152 < v151 + 2LL * v149 && v152 + 132 * v150 > v151 )
                                            break;
                                        }
                                      }
                                    }
                                    v153 = *(_QWORD *)(v5 + 64);
                                    if ( v153 )
                                    {
                                      v154 = *(_QWORD *)(v5 + 64);
                                      if ( v153 >= v28 )
                                      {
                                        v155 = v153 + 4;
                                        while ( v155 >= v154 && v155 <= v29 )
                                        {
                                          v154 += 4LL;
                                          if ( !*(_WORD *)(v155 - 2) )
                                          {
                                            if ( v6 )
                                            {
                                              v156 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v156 )
                                              {
                                                v157 = *(_QWORD *)(v6 + 8);
                                                if ( v157 < v154 && v157 + 132 * v156 > v153 )
                                                  goto LABEL_423;
                                              }
                                            }
                                            if ( v153 - 104 < v5 && v154 > v5 )
                                              goto LABEL_423;
                                            goto LABEL_373;
                                          }
                                          v155 += 4LL;
                                          if ( v154 < v28 )
                                            goto LABEL_423;
                                        }
                                      }
                                    }
                                    else
                                    {
LABEL_373:
                                      v158 = *(_QWORD *)(v5 + 72);
                                      if ( v158 )
                                      {
                                        v159 = *(_QWORD *)(v5 + 72);
                                        if ( v158 >= v28 )
                                        {
                                          v160 = v158 + 4;
                                          while ( v160 >= v159 && v160 <= v29 )
                                          {
                                            v159 += 4LL;
                                            if ( !*(_WORD *)(v160 - 2) )
                                            {
                                              if ( v6 )
                                              {
                                                v161 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v161 )
                                                {
                                                  v162 = *(_QWORD *)(v6 + 8);
                                                  if ( v162 < v159 && v162 + 132 * v161 > v158 )
                                                    goto LABEL_423;
                                                }
                                              }
                                              if ( v158 - 104 < v5 && v159 > v5 )
                                                goto LABEL_423;
                                              goto LABEL_387;
                                            }
                                            v160 += 4LL;
                                            if ( v159 < v28 )
                                              goto LABEL_423;
                                          }
                                        }
                                      }
                                      else
                                      {
LABEL_387:
                                        if ( *(_WORD *)(v5 + 82) )
                                        {
                                          v163 = *(_BYTE **)(v5 + 88);
                                          if ( v163 )
                                          {
                                            if ( (unsigned __int64)v163 >= v28 )
                                            {
                                              while ( (unsigned __int64)v163 <= v29 - 6 )
                                              {
                                                if ( !*v163 )
                                                  goto LABEL_411;
                                                v164 = 0;
                                                if ( *(_BYTE *)(v5 + 84) )
                                                {
                                                  v165 = (__int16 *)(v163 + 4);
                                                  while ( 1 )
                                                  {
                                                    if ( v164 > 0 )
                                                    {
                                                      v166 = (unsigned __int64)&v163[2 * v164 + 4];
                                                      if ( v166 < v28 || v166 > v29 - 2 )
                                                        break;
                                                    }
                                                    v167 = *v165++;
                                                    ++v164;
                                                    if ( v167 == -4096 || v164 >= *(unsigned __int8 *)(v5 + 84) )
                                                      goto LABEL_401;
                                                  }
                                                  *(_QWORD *)(v5 + 88) = 0LL;
                                                }
LABEL_401:
                                                if ( !*(_QWORD *)(v5 + 88) )
                                                  goto LABEL_411;
                                                if ( v164 <= 0
                                                  || (!v6
                                                   || (v168 = *(unsigned int *)(v6 + 4), !(_DWORD)v168)
                                                   || (v169 = *(_QWORD *)(v6 + 8),
                                                       v169 >= (unsigned __int64)&v163[2 * v164 + 4])
                                                   || v169 + 132 * v168 <= (unsigned __int64)(v163 + 4))
                                                  && ((unsigned __int64)(v163 - 100) >= v5
                                                   || (unsigned __int64)&v163[2 * v164 + 4] <= v5) )
                                                {
                                                  v163 += *(unsigned __int8 *)(v5 + 85);
                                                  if ( (unsigned __int64)v163 >= v28 )
                                                    continue;
                                                }
                                                break;
                                              }
                                            }
                                            *(_QWORD *)(v5 + 88) = 0LL;
LABEL_411:
                                            v170 = *(_QWORD *)(v5 + 88);
                                            if ( v170 )
                                            {
                                              if ( (v171 = v163 + 6, v6)
                                                && (v172 = *(unsigned int *)(v6 + 4), (_DWORD)v172)
                                                && (v173 = *(_QWORD *)(v6 + 8), v173 < (unsigned __int64)v171)
                                                && v173 + 132 * v172 > v170
                                                || v170 - 104 < v5 && (unsigned __int64)v171 > v5 )
                                              {
                                                *(_QWORD *)(v5 + 88) = 0LL;
                                              }
                                            }
                                          }
                                        }
                                        if ( !v6 )
                                          goto LABEL_128;
                                        v174 = *(unsigned int *)(v6 + 4);
                                        if ( !(_DWORD)v174 )
                                          goto LABEL_128;
                                        v175 = *(_QWORD *)(v6 + 8);
                                        if ( v175 - 104 >= v5 || v175 + 132 * v174 <= v5 )
                                          goto LABEL_128;
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            }
                            v35 += 2;
                            v36 += 2;
                            if ( (unsigned __int64)v35 < v28 )
                              break;
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_423:
              Win32FreePool(v28);
              v7 = 0;
            }
            else
            {
LABEL_128:
              v7 = 1;
            }
            goto LABEL_129;
          }
        }
        v7 = 0;
      }
LABEL_129:
      v9 = a1;
    }
  }
  if ( v178 )
    Win32FreePool((__int64)v178);
  if ( v7 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v9 + 6) = 0LL;
  return 0LL;
}
