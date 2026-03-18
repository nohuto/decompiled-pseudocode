/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C01286D4
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0128538 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     strcmp_0 @ 0x1C0078D29 (strcmp_0.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C012840C (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 */

struct tagKbdLayer *__fastcall ReadLayoutFile(struct tagKBDFILE *a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  int v7; // r15d
  struct tagKBDFILE *v9; // r14
  bool v10; // zf
  BOOL v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // rdx
  char *v15; // rcx
  char *v16; // r15
  __int16 v17; // ax
  __int64 v18; // r12
  int v19; // esi
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rbx
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rsi
  unsigned int v26; // ebp
  char *v27; // rax
  void *v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rax
  BOOL v33; // esi
  __int64 v34; // r11
  unsigned __int64 *v35; // rcx
  unsigned __int64 v36; // rax
  _BYTE *v37; // rax
  _BYTE *v38; // rcx
  __int64 v39; // rax
  unsigned __int64 *v40; // rax
  _QWORD *v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  _DWORD *v44; // rax
  _DWORD *v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  _QWORD *v50; // rcx
  _WORD *v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  _QWORD *v54; // rcx
  _WORD *v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rdx
  _WORD *v59; // rcx
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  _WORD *i; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  unsigned int v69; // eax
  unsigned __int64 v70; // r10
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // r9
  bool v74; // cc
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  __int64 v77; // rax
  unsigned __int64 v78; // rsi
  unsigned __int64 *v79; // r8
  unsigned __int64 v80; // r10
  unsigned __int64 v81; // r11
  _BYTE *j; // rdx
  unsigned __int8 v83; // al
  _BYTE *v84; // r9
  _BYTE *v85; // rax
  _BYTE *v86; // rdx
  __int64 v87; // rax
  unsigned __int64 v88; // r9
  _QWORD *v89; // r8
  __int64 v90; // rax
  unsigned __int64 v91; // rdx
  unsigned __int64 v92; // r9
  _DWORD *v93; // rax
  unsigned __int64 v94; // rcx
  _DWORD *v95; // rdx
  __int64 v96; // rax
  unsigned __int64 v97; // r8
  unsigned __int64 v98; // rsi
  _BYTE *v99; // rdx
  unsigned __int64 v100; // r9
  unsigned __int64 v101; // r11
  _WORD *k; // rax
  _WORD *v103; // r8
  __int64 v104; // rax
  unsigned __int64 v105; // r10
  _BYTE *v106; // rdx
  __int64 v107; // rax
  unsigned __int64 v108; // r8
  unsigned __int64 v109; // rsi
  _BYTE *v110; // rdx
  unsigned __int64 v111; // r9
  unsigned __int64 v112; // r10
  _WORD *m; // rax
  _WORD *v114; // r8
  __int64 v115; // rax
  unsigned __int64 v116; // r11
  _BYTE *v117; // rdx
  __int64 v118; // rax
  unsigned __int64 v119; // r8
  unsigned __int64 v120; // rsi
  unsigned __int64 *v121; // rdx
  unsigned __int64 v122; // r10
  unsigned __int64 v123; // r9
  _WORD *n; // rax
  _WORD *v125; // r8
  __int64 v126; // rax
  unsigned __int64 v127; // r11
  _QWORD *v128; // rdx
  __int64 v129; // rax
  unsigned __int64 v130; // r8
  unsigned __int8 v131; // al
  __int64 v132; // rdx
  unsigned __int64 v133; // r8
  unsigned __int64 v134; // r9
  unsigned __int64 v135; // r8
  unsigned __int64 v136; // rax
  unsigned __int64 v137; // rdx
  __int64 v138; // rax
  unsigned __int64 v139; // r9
  unsigned __int64 v140; // r8
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rdx
  __int64 v143; // rax
  unsigned __int64 v144; // r9
  _BYTE *v145; // rdx
  unsigned __int64 v146; // r9
  int v147; // r8d
  __int16 *v148; // rcx
  unsigned __int64 v149; // r9
  __int16 v150; // ax
  __int64 v151; // r10
  unsigned __int64 v152; // r11
  _BYTE *v153; // rdx
  __int64 v154; // rax
  unsigned __int64 v155; // r8
  __int64 v156; // rcx
  __int64 v157; // rdx
  unsigned int v159[2]; // [rsp+38h] [rbp-60h] BYREF
  BOOL v160; // [rsp+40h] [rbp-58h]
  void *v161; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v162; // [rsp+50h] [rbp-48h]

  v159[0] = 0;
  v5 = 0LL;
  v161 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  v10 = PsGetCurrentProcessId() == (HANDLE)gpidLogon;
  *((_QWORD *)v9 + 6) = 0LL;
  v11 = v10;
  v160 = v10;
  if ( (int)LoadFileContent(a2, v12, v13, &v161, v159) >= 0 )
  {
    v14 = v161;
    v15 = (char *)v161 + *((unsigned int *)v161 + 15);
    if ( v15 >= v161 && (v11 || v15 + 263 >= v15) )
    {
      v16 = (char *)v161 + v159[0];
      if ( v15 + 264 < v16 )
      {
        v17 = *((_WORD *)v15 + 2);
        if ( v17 == 512 || v17 == -31132 || v17 == -21916 )
          v18 = *((_QWORD *)v15 + 6);
        else
          v18 = *((unsigned int *)v15 + 13);
        v19 = *((unsigned __int16 *)v15 + 3);
        v20 = v160;
        v21 = (unsigned __int64)&v15[*((unsigned __int16 *)v15 + 10) + 24];
        v162 = v21;
        *(_QWORD *)v159 = v160;
        if ( v19 )
        {
          v22 = v21 + 40;
          while ( v21 >= (unsigned __int64)v14 && (v20 || v22 - 1 >= v21) && v22 < (unsigned __int64)v16 )
          {
            v23 = strcmp_0((const char *)v21, ".data");
            v14 = v161;
            if ( v23 )
            {
              v20 = *(_QWORD *)v159;
              v21 += 40LL;
              v22 += 40LL;
              v162 = v21;
              if ( --v19 )
                continue;
            }
            if ( !v19 )
              break;
            v24 = *(_DWORD *)(v21 + 12);
            if ( a3 < v24 )
              break;
            v25 = *(unsigned int *)(v21 + 8);
            v26 = a3 - v24;
            if ( v26 >= (unsigned int)v25 )
              break;
            if ( (unsigned int)v25 >= 0x40000 )
              break;
            v27 = (char *)v161 + *(unsigned int *)(v21 + 20);
            if ( v27 < v161 || &v27[v25] < v27 || &v27[v25] >= v16 )
              break;
            v28 = (void *)Win32AllocPool((unsigned int)v25, 0x746B7355u);
            v29 = (unsigned __int64)v28;
            if ( v28 )
            {
              v30 = v162;
              *((_QWORD *)a1 + 3) = v28;
              memmove(v28, (char *)v161 + *(unsigned int *)(v30 + 20), (unsigned int)v25);
              *((_DWORD *)a1 + 10) = v25;
              v31 = v29 + (unsigned int)v25;
              v32 = *(unsigned int *)(v30 + 12);
              v5 = v29 + v26;
              if ( v29 >= v32 )
              {
                v33 = v160;
                v34 = v29 - v32 - v18;
                if ( v160 || v5 >= v29 && v5 <= v31 - 104 )
                {
                  v35 = *(unsigned __int64 **)v5;
                  if ( !*(_QWORD *)v5
                    || (v35 = (unsigned __int64 *)((char *)v35 + v34), *(_QWORD *)v5 = v35, (unsigned __int64)v35 >= v29)
                    && v35 + 2 >= v35
                    && (unsigned __int64)(v35 + 2) <= v31 )
                  {
                    if ( v33 || v35 )
                    {
                      if ( !*v35
                        || (*v35 += v34, v35 = *(unsigned __int64 **)v5, v36 = **(_QWORD **)v5, v36 >= v29)
                        && v36 + 2 >= v36
                        && v36 + 2 <= v31 )
                      {
                        if ( v33 || (unsigned __int64)v35 >= v29 && (unsigned __int64)v35 <= v31 - 16 )
                        {
                          v37 = (_BYTE *)*v35;
                          if ( *v35 >= v29 )
                          {
                            v38 = v37 + 2;
                            while ( v38 >= v37 && (unsigned __int64)v38 <= v31 )
                            {
                              if ( !*v37 )
                              {
                                v39 = *(_QWORD *)(v5 + 8);
                                if ( v39 )
                                {
                                  v40 = (unsigned __int64 *)(v34 + v39);
                                  *(_QWORD *)(v5 + 8) = v40;
                                  if ( (unsigned __int64)v40 < v29 || v40 + 2 < v40 || (unsigned __int64)(v40 + 2) > v31 )
                                    break;
                                  if ( v40 )
                                  {
                                    if ( (unsigned __int64)v40 >= v29 )
                                    {
                                      do
                                      {
                                        v41 = v40 + 2;
                                        if ( v40 + 2 < v40 || (unsigned __int64)v41 > v31 )
                                          break;
                                        if ( !*v40 )
                                          goto LABEL_65;
                                        v42 = v34 + *v40;
                                        *v40 = v42;
                                        if ( v42 < v29 )
                                          break;
                                        if ( v42 + 4 < v42 )
                                          break;
                                        if ( v42 + 4 > v31 )
                                          break;
                                        v40 += 2;
                                      }
                                      while ( (unsigned __int64)v41 >= v29 );
                                    }
                                    break;
                                  }
                                }
LABEL_65:
                                v43 = *(_QWORD *)(v5 + 16);
                                if ( v43 )
                                {
                                  v44 = (_DWORD *)(v34 + v43);
                                  *(_QWORD *)(v5 + 16) = v44;
                                  if ( (unsigned __int64)v44 < v29 || v44 + 2 < v44 || (unsigned __int64)(v44 + 2) > v31 )
                                    break;
                                  if ( v44 )
                                  {
                                    while ( (unsigned __int64)v44 >= v29 )
                                    {
                                      v45 = v44 + 2;
                                      if ( v44 + 2 < v44 || (unsigned __int64)v45 > v31 )
                                        break;
                                      if ( *v44 )
                                      {
                                        v44 += 2;
                                        if ( v45 )
                                          continue;
                                      }
                                      goto LABEL_75;
                                    }
                                    break;
                                  }
                                }
LABEL_75:
                                if ( *(_WORD *)(v5 + 82) )
                                {
                                  v46 = *(_QWORD *)(v5 + 88);
                                  if ( v46 )
                                  {
                                    v47 = v34 + v46;
                                    *(_QWORD *)(v5 + 88) = v47;
                                    if ( v47 < v29 || v47 + 6 < v47 || v47 + 6 > v31 )
                                      break;
                                  }
                                }
                                v48 = *(_QWORD *)(v5 + 24);
                                if ( v48 )
                                {
                                  v48 += v34;
                                  *(_QWORD *)(v5 + 24) = v48;
                                  if ( v48 < v29 || v48 + 16 < v48 || v48 + 16 > v31 )
                                    break;
                                }
                                if ( v48 )
                                {
                                  if ( v48 >= v29 )
                                  {
                                    v49 = *(_QWORD *)v159;
                                    v50 = (_QWORD *)(v48 + 8);
                                    do
                                    {
                                      if ( v50 + 1 < v50 - 1 || (unsigned __int64)(v50 + 1) > v31 )
                                        break;
                                      if ( !*((_BYTE *)v50 - 8) )
                                        goto LABEL_106;
                                      if ( *v50 )
                                      {
                                        v51 = (_WORD *)(v34 + *v50);
                                        *v50 = v51;
                                        if ( (unsigned __int64)v51 < v29
                                          || v51 + 1 < v51
                                          || (unsigned __int64)(v51 + 1) > v31 )
                                        {
                                          goto LABEL_409;
                                        }
                                      }
                                      else
                                      {
                                        v51 = 0LL;
                                      }
                                      if ( !v49 && v51 )
                                      {
                                        for ( ; (unsigned __int64)v51 >= v29; ++v51 )
                                        {
                                          if ( (unsigned __int64)v51 > v31 - 2 )
                                            break;
                                          if ( !*v51 )
                                            goto LABEL_103;
                                        }
                                        *v50 = 0LL;
                                      }
LABEL_103:
                                      v50 += 2;
                                    }
                                    while ( (unsigned __int64)(v50 - 1) >= v29 );
                                  }
                                  break;
                                }
                                v49 = *(_QWORD *)v159;
LABEL_106:
                                v52 = *(_QWORD *)(v5 + 32);
                                if ( v52 )
                                {
                                  v53 = v34 + v52;
                                  *(_QWORD *)(v5 + 32) = v53;
                                  if ( v53 < v29 || v53 + 16 < v53 || v53 + 16 > v31 )
                                    break;
                                  if ( v53 )
                                  {
                                    if ( v53 >= v29 )
                                    {
                                      v54 = (_QWORD *)(v53 + 8);
                                      do
                                      {
                                        if ( v54 + 1 < v54 - 1 || (unsigned __int64)(v54 + 1) > v31 )
                                          break;
                                        if ( !*((_BYTE *)v54 - 8) )
                                          goto LABEL_131;
                                        if ( *v54 )
                                        {
                                          v55 = (_WORD *)(v34 + *v54);
                                          *v54 = v55;
                                          if ( (unsigned __int64)v55 < v29
                                            || v55 + 1 < v55
                                            || (unsigned __int64)(v55 + 1) > v31 )
                                          {
                                            goto LABEL_409;
                                          }
                                        }
                                        else
                                        {
                                          v55 = 0LL;
                                        }
                                        if ( !v49 && v55 )
                                        {
                                          for ( ; (unsigned __int64)v55 >= v29; ++v55 )
                                          {
                                            if ( (unsigned __int64)v55 > v31 - 2 )
                                              break;
                                            if ( !*v55 )
                                              goto LABEL_129;
                                          }
                                          *v54 = 0LL;
                                        }
LABEL_129:
                                        v54 += 2;
                                      }
                                      while ( (unsigned __int64)(v54 - 1) >= v29 );
                                    }
                                    break;
                                  }
                                }
LABEL_131:
                                v56 = *(_QWORD *)(v5 + 40);
                                if ( v56 )
                                {
                                  v57 = (_QWORD *)(v34 + v56);
                                  *(_QWORD *)(v5 + 40) = v57;
                                  if ( (unsigned __int64)v57 < v29 || v57 + 1 < v57 || (unsigned __int64)(v57 + 1) > v31 )
                                    break;
                                  if ( v57 )
                                  {
                                    if ( (unsigned __int64)v57 < v29 )
                                      break;
LABEL_137:
                                    v58 = v57 + 1;
                                    if ( v57 + 1 < v57 || (unsigned __int64)v58 > v31 )
                                      break;
                                    if ( *v57 )
                                    {
                                      v59 = (_WORD *)(v34 + *v57);
                                      *v57 = v59;
                                      if ( (unsigned __int64)v59 >= v29
                                        && v59 + 1 >= v59
                                        && (unsigned __int64)(v59 + 1) <= v31 )
                                      {
                                        while ( (unsigned __int64)v59 >= v29
                                             && v59 + 1 >= v59
                                             && (unsigned __int64)(v59 + 1) <= v31 )
                                        {
                                          if ( !*v59 )
                                          {
                                            ++v57;
                                            if ( (unsigned __int64)v58 >= v29 )
                                              goto LABEL_137;
                                            goto LABEL_409;
                                          }
                                          ++v59;
                                        }
                                      }
                                      break;
                                    }
                                  }
                                }
                                v60 = *(_QWORD *)(v5 + 48);
                                if ( !v60 )
                                  break;
                                v61 = v60 + v34;
                                *(_QWORD *)(v5 + 48) = v60 + v34;
                                if ( v60 + v34 < v29 )
                                  break;
                                if ( v61 + 2 < v61 )
                                  break;
                                if ( v61 + 2 > v31 )
                                  break;
                                v62 = v61 + 2LL * *(unsigned __int8 *)(v5 + 56);
                                if ( v62 < v29 || v62 + 2 < v62 || v62 + 2 > v31 )
                                  break;
                                v63 = *(_QWORD *)(v5 + 64);
                                if ( v63 )
                                {
                                  v64 = v34 + v63;
                                  *(_QWORD *)(v5 + 64) = v64;
                                  if ( v64 < v29 || v64 + 4 < v64 || v64 + 4 > v31 )
                                    break;
                                  if ( v64 )
                                  {
                                    for ( i = (_WORD *)(v64 + 2); !v49 || *i; i += 2 )
                                    {
                                      if ( (unsigned __int64)(i - 1) < v29
                                        || i + 1 < i - 1
                                        || (unsigned __int64)(i + 1) > v31 )
                                      {
                                        goto LABEL_409;
                                      }
                                      if ( !v49 && !*i )
                                        break;
                                    }
                                  }
                                }
                                v66 = *(_QWORD *)(v5 + 72);
                                if ( v66 )
                                {
                                  v67 = v34 + v66;
                                  *(_QWORD *)(v5 + 72) = v67;
                                  if ( v67 < v29 || v67 + 4 < v67 || v67 + 4 > v31 )
                                    break;
                                  if ( v67 )
                                  {
                                    if ( v67 >= v29 )
                                    {
                                      v68 = v67 + 4;
                                      do
                                      {
                                        if ( v68 < 4 || v68 > v31 )
                                          break;
                                        if ( !*(_WORD *)(v68 - 2) )
                                          goto LABEL_183;
                                        v68 += 4LL;
                                      }
                                      while ( v68 - 4 >= v29 );
                                    }
                                    break;
                                  }
                                }
LABEL_183:
                                if ( a4 )
                                {
                                  v69 = *(_DWORD *)(v30 + 12);
                                  if ( a4 < v69 )
                                    break;
                                  v6 = v29 + a4 - v69;
                                  if ( v6 < v29 )
                                    break;
                                  v70 = v6 + 32;
                                  if ( v6 + 32 < v6 || v70 > v31 )
                                    break;
                                  v71 = *(_QWORD *)(v6 + 8);
                                  v72 = v71;
                                  if ( v71 )
                                  {
                                    v71 += v34;
                                    *(_QWORD *)(v6 + 8) = v71;
                                    v72 = v71;
                                    if ( v71 < v29 || v71 + 132 < v71 || v71 + 132 > v31 )
                                      break;
                                    if ( v71 )
                                    {
                                      v73 = *(unsigned int *)(v6 + 4);
                                      if ( v33 )
                                      {
                                        v75 = v71 + 132LL * (unsigned int)(v73 - 1);
                                        if ( v75 < v29 || v75 + 132 < v75 )
                                          break;
                                        v74 = v75 + 132 <= v31;
                                      }
                                      else
                                      {
                                        v71 = (v31 - v71) / 0x84;
                                        v74 = v73 <= v71;
                                      }
                                      if ( !v74 )
                                        break;
                                    }
                                  }
                                  v76 = *(_QWORD *)(v6 + 24);
                                  if ( v76 )
                                  {
                                    v76 += v34;
                                    *(_QWORD *)(v6 + 24) = v76;
                                    if ( v76 < v29 )
                                      break;
                                    if ( v76 + 2 < v76 )
                                      break;
                                    if ( v76 + 2 > v31 )
                                      break;
                                    if ( v76 )
                                    {
                                      v71 = v76 + 2LL * (*(_DWORD *)(v6 + 16) - 1);
                                      if ( v71 < v29 || v71 + 2 < v71 || v71 + 2 > v31 )
                                        break;
                                    }
                                  }
                                  if ( !v33 )
                                  {
                                    v77 = *(unsigned int *)(v6 + 4);
                                    if ( (_DWORD)v77 )
                                    {
                                      if ( v72 < v70 )
                                      {
                                        v76 = v72 + 132 * v77;
                                        if ( v76 > v6 )
                                          break;
                                      }
                                    }
                                    if ( v6 - 104 < v5 && v70 > v5 )
                                      break;
                                  }
                                  if ( (int)IsEditionValidateKbdNLSTableSupported(v76, v71, v72) >= 0
                                    && !(unsigned int)EditionValidateKbdNLSTable(v6) )
                                  {
                                    break;
                                  }
                                  *((_QWORD *)a1 + 6) = v6;
                                }
                                if ( v33 )
                                  goto LABEL_410;
                                v78 = *(_QWORD *)(v5 + 8);
                                if ( v78 )
                                {
                                  v79 = *(unsigned __int64 **)(v5 + 8);
                                  if ( v78 < v29 )
                                    break;
                                  v80 = v78 + 16;
LABEL_220:
                                  if ( v80 < (unsigned __int64)v79 || v80 > v31 )
                                    break;
                                  v81 = *v79;
                                  if ( *v79 )
                                  {
                                    for ( j = (_BYTE *)*v79;
                                          (unsigned __int64)j >= v29 && j + 4 >= j && (unsigned __int64)(j + 4) <= v31;
                                          j += *(unsigned __int8 *)(v80 - 7) )
                                    {
                                      if ( !*j )
                                      {
                                        v86 = j + 4;
                                        if ( !v6
                                          || (v87 = *(unsigned int *)(v6 + 4), !(_DWORD)v87)
                                          || (v88 = *(_QWORD *)(v6 + 8), v88 >= (unsigned __int64)v86)
                                          || v88 + 132 * v87 <= v81 )
                                        {
                                          if ( v81 - 104 >= v5 || (unsigned __int64)v86 <= v5 )
                                          {
                                            v79 += 2;
                                            v80 += 16LL;
                                            if ( (unsigned __int64)v79 >= v29 )
                                              goto LABEL_220;
                                          }
                                        }
                                        goto LABEL_409;
                                      }
                                      v83 = *(_BYTE *)(v80 - 8);
                                      if ( v83 > 1u )
                                      {
                                        v84 = &j[2 * v83];
                                        if ( (unsigned __int64)v84 < v29 )
                                          goto LABEL_409;
                                        v85 = &j[2 * v83 + 2];
                                        if ( v85 < v84 || (unsigned __int64)v85 > v31 )
                                          goto LABEL_409;
                                      }
                                    }
                                    break;
                                  }
                                  v89 = v79 + 2;
                                  if ( v6 )
                                  {
                                    v90 = *(unsigned int *)(v6 + 4);
                                    if ( (_DWORD)v90 )
                                    {
                                      v91 = *(_QWORD *)(v6 + 8);
                                      if ( v91 < (unsigned __int64)v89 && v91 + 132 * v90 > v78 )
                                        break;
                                    }
                                  }
                                  if ( v78 - 104 < v5 && (unsigned __int64)v89 > v5 )
                                    break;
                                }
                                v92 = *(_QWORD *)(v5 + 16);
                                v93 = (_DWORD *)v92;
                                if ( v92 )
                                {
                                  v94 = v92 + 8;
                                  while ( (unsigned __int64)v93 >= v29 && v94 >= (unsigned __int64)v93 && v94 <= v31 )
                                  {
                                    v95 = v93 + 2;
                                    if ( !*v93 )
                                    {
                                      if ( v6 )
                                      {
                                        v96 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v96 )
                                        {
                                          v97 = *(_QWORD *)(v6 + 8);
                                          if ( v97 < (unsigned __int64)v95 && v97 + 132 * v96 > v92 )
                                            goto LABEL_409;
                                        }
                                      }
                                      if ( v92 - 104 < v5 && (unsigned __int64)v95 > v5 )
                                        goto LABEL_409;
                                      goto LABEL_261;
                                    }
                                    v94 += 8LL;
                                    v93 += 2;
                                    if ( !v95 )
                                      goto LABEL_261;
                                  }
                                }
                                else
                                {
LABEL_261:
                                  v98 = *(_QWORD *)(v5 + 24);
                                  if ( v98 )
                                  {
                                    v99 = *(_BYTE **)(v5 + 24);
                                    if ( v98 >= v29 )
                                    {
                                      v100 = v98 + 16;
                                      while ( v100 >= (unsigned __int64)v99 && v100 <= v31 )
                                      {
                                        if ( !*v99 )
                                        {
                                          v106 = v99 + 16;
                                          if ( v6 )
                                          {
                                            v107 = *(unsigned int *)(v6 + 4);
                                            if ( (_DWORD)v107 )
                                            {
                                              v108 = *(_QWORD *)(v6 + 8);
                                              if ( v108 < (unsigned __int64)v106 && v108 + 132 * v107 > v98 )
                                                goto LABEL_409;
                                            }
                                          }
                                          if ( v98 - 104 < v5 && (unsigned __int64)v106 > v5 )
                                            goto LABEL_409;
                                          goto LABEL_288;
                                        }
                                        v101 = *(_QWORD *)(v100 - 8);
                                        if ( v101 )
                                        {
                                          for ( k = *(_WORD **)(v100 - 8); (unsigned __int64)k >= v29; ++k )
                                          {
                                            v103 = k + 1;
                                            if ( k + 1 < k || (unsigned __int64)v103 > v31 )
                                              break;
                                            if ( !*k )
                                            {
                                              if ( v6 )
                                              {
                                                v104 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v104 )
                                                {
                                                  v105 = *(_QWORD *)(v6 + 8);
                                                  if ( v105 < (unsigned __int64)v103 && v105 + 132 * v104 > v101 )
                                                    goto LABEL_409;
                                                }
                                              }
                                              if ( v101 - 104 < v5 && (unsigned __int64)v103 > v5 )
                                                goto LABEL_409;
                                              goto LABEL_280;
                                            }
                                          }
                                          goto LABEL_409;
                                        }
LABEL_280:
                                        v99 += 16;
                                        v100 += 16LL;
                                        if ( (unsigned __int64)v99 < v29 )
                                          goto LABEL_409;
                                      }
                                    }
                                  }
                                  else
                                  {
LABEL_288:
                                    v109 = *(_QWORD *)(v5 + 32);
                                    if ( v109 )
                                    {
                                      v110 = *(_BYTE **)(v5 + 32);
                                      if ( v109 >= v29 )
                                      {
                                        v111 = v109 + 16;
                                        while ( v111 >= (unsigned __int64)v110 && v111 <= v31 )
                                        {
                                          if ( !*v110 )
                                          {
                                            v117 = v110 + 16;
                                            if ( v6 )
                                            {
                                              v118 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v118 )
                                              {
                                                v119 = *(_QWORD *)(v6 + 8);
                                                if ( v119 < (unsigned __int64)v117 && v119 + 132 * v118 > v109 )
                                                  goto LABEL_409;
                                              }
                                            }
                                            if ( v109 - 104 < v5 && (unsigned __int64)v117 > v5 )
                                              goto LABEL_409;
                                            goto LABEL_315;
                                          }
                                          v112 = *(_QWORD *)(v111 - 8);
                                          if ( v112 )
                                          {
                                            for ( m = *(_WORD **)(v111 - 8); (unsigned __int64)m >= v29; ++m )
                                            {
                                              v114 = m + 1;
                                              if ( m + 1 < m || (unsigned __int64)v114 > v31 )
                                                break;
                                              if ( !*m )
                                              {
                                                if ( v6 )
                                                {
                                                  v115 = *(unsigned int *)(v6 + 4);
                                                  if ( (_DWORD)v115 )
                                                  {
                                                    v116 = *(_QWORD *)(v6 + 8);
                                                    if ( v116 < (unsigned __int64)v114 && v116 + 132 * v115 > v112 )
                                                      goto LABEL_409;
                                                  }
                                                }
                                                if ( v112 - 104 < v5 && (unsigned __int64)v114 > v5 )
                                                  goto LABEL_409;
                                                goto LABEL_307;
                                              }
                                            }
                                            goto LABEL_409;
                                          }
LABEL_307:
                                          v110 += 16;
                                          v111 += 16LL;
                                          if ( (unsigned __int64)v110 < v29 )
                                            goto LABEL_409;
                                        }
                                      }
                                    }
                                    else
                                    {
LABEL_315:
                                      v120 = *(_QWORD *)(v5 + 40);
                                      if ( v120 )
                                      {
                                        v121 = *(unsigned __int64 **)(v5 + 40);
                                        if ( v120 < v29 )
                                          break;
                                        v122 = v120 + 8;
LABEL_318:
                                        if ( v122 < (unsigned __int64)v121 || v122 > v31 )
                                          break;
                                        v123 = *v121;
                                        if ( *v121 )
                                        {
                                          for ( n = (_WORD *)*v121; (unsigned __int64)n >= v29; ++n )
                                          {
                                            v125 = n + 1;
                                            if ( n + 1 < n || (unsigned __int64)v125 > v31 )
                                              break;
                                            if ( !*n )
                                            {
                                              if ( !v6
                                                || (v126 = *(unsigned int *)(v6 + 4), !(_DWORD)v126)
                                                || (v127 = *(_QWORD *)(v6 + 8), v127 >= (unsigned __int64)v125)
                                                || v127 + 132 * v126 <= v123 )
                                              {
                                                if ( v123 - 104 >= v5 || (unsigned __int64)v125 <= v5 )
                                                {
                                                  ++v121;
                                                  v122 += 8LL;
                                                  if ( (unsigned __int64)v121 >= v29 )
                                                    goto LABEL_318;
                                                }
                                              }
                                              goto LABEL_409;
                                            }
                                          }
                                          break;
                                        }
                                        v128 = v121 + 1;
                                        if ( v6 )
                                        {
                                          v129 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v129 )
                                          {
                                            v130 = *(_QWORD *)(v6 + 8);
                                            if ( v130 < (unsigned __int64)v128 && v130 + 132 * v129 > v120 )
                                              break;
                                          }
                                        }
                                        if ( v120 - 104 < v5 && (unsigned __int64)v128 > v5 )
                                          break;
                                      }
                                      v131 = *(_BYTE *)(v5 + 56);
                                      if ( v131 )
                                      {
                                        if ( v6 )
                                        {
                                          v132 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v132 )
                                          {
                                            v133 = *(_QWORD *)(v5 + 48);
                                            v134 = *(_QWORD *)(v6 + 8);
                                            if ( v134 < v133 + 2LL * v131 && v134 + 132 * v132 > v133 )
                                              break;
                                          }
                                        }
                                      }
                                      v135 = *(_QWORD *)(v5 + 64);
                                      if ( v135 )
                                      {
                                        v136 = *(_QWORD *)(v5 + 64);
                                        if ( v135 >= v29 )
                                        {
                                          while ( 1 )
                                          {
                                            v137 = v136 + 4;
                                            if ( v136 + 4 < v136 || v137 > v31 )
                                              break;
                                            if ( !*(_WORD *)(v136 + 2) )
                                            {
                                              if ( v6 )
                                              {
                                                v138 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v138 )
                                                {
                                                  v139 = *(_QWORD *)(v6 + 8);
                                                  if ( v139 < v137 && v139 + 132 * v138 > v135 )
                                                    goto LABEL_409;
                                                }
                                              }
                                              if ( v135 - 104 < v5 && v137 > v5 )
                                                goto LABEL_409;
                                              goto LABEL_359;
                                            }
                                            v136 += 4LL;
                                            if ( v137 < v29 )
                                              goto LABEL_409;
                                          }
                                        }
                                      }
                                      else
                                      {
LABEL_359:
                                        v140 = *(_QWORD *)(v5 + 72);
                                        if ( v140 )
                                        {
                                          v141 = *(_QWORD *)(v5 + 72);
                                          if ( v140 >= v29 )
                                          {
                                            while ( 1 )
                                            {
                                              v142 = v141 + 4;
                                              if ( v141 + 4 < v141 || v142 > v31 )
                                                break;
                                              if ( !*(_WORD *)(v141 + 2) )
                                              {
                                                if ( v6 )
                                                {
                                                  v143 = *(unsigned int *)(v6 + 4);
                                                  if ( (_DWORD)v143 )
                                                  {
                                                    v144 = *(_QWORD *)(v6 + 8);
                                                    if ( v144 < v142 && v144 + 132 * v143 > v140 )
                                                      goto LABEL_409;
                                                  }
                                                }
                                                if ( v140 - 104 < v5 && v142 > v5 )
                                                  goto LABEL_409;
                                                goto LABEL_372;
                                              }
                                              v141 += 4LL;
                                              if ( v142 < v29 )
                                                goto LABEL_409;
                                            }
                                          }
                                        }
                                        else
                                        {
LABEL_372:
                                          if ( *(_WORD *)(v5 + 82) )
                                          {
                                            v145 = *(_BYTE **)(v5 + 88);
                                            if ( v145 )
                                            {
                                              if ( (unsigned __int64)v145 >= v29 )
                                              {
                                                v146 = *(_QWORD *)(v5 + 88);
                                                while ( (unsigned __int64)v145 <= v31 - 6 )
                                                {
                                                  if ( !*v145 )
                                                    goto LABEL_397;
                                                  v147 = 0;
                                                  if ( *(_BYTE *)(v5 + 84) )
                                                  {
                                                    v148 = (__int16 *)(v145 + 4);
                                                    while ( 1 )
                                                    {
                                                      if ( v147 > 0 )
                                                      {
                                                        v149 = (unsigned __int64)&v145[2 * v147 + 4];
                                                        if ( v149 < v29 || v149 > v31 - 2 )
                                                          break;
                                                      }
                                                      v150 = *v148++;
                                                      ++v147;
                                                      if ( v150 == -4096 || v147 >= *(unsigned __int8 *)(v5 + 84) )
                                                        goto LABEL_387;
                                                    }
                                                    *(_QWORD *)(v5 + 88) = 0LL;
                                                  }
LABEL_387:
                                                  v146 = *(_QWORD *)(v5 + 88);
                                                  if ( !v146 )
                                                    goto LABEL_405;
                                                  if ( v147 > 0 )
                                                  {
                                                    if ( v6 )
                                                    {
                                                      v151 = *(unsigned int *)(v6 + 4);
                                                      if ( (_DWORD)v151 )
                                                      {
                                                        v152 = *(_QWORD *)(v6 + 8);
                                                        if ( v152 < (unsigned __int64)&v145[2 * v147 + 4]
                                                          && v152 + 132 * v151 > (unsigned __int64)(v145 + 4) )
                                                        {
                                                          goto LABEL_404;
                                                        }
                                                      }
                                                    }
                                                    if ( (unsigned __int64)(v145 - 100) < v5
                                                      && (unsigned __int64)&v145[2 * v147 + 4] > v5 )
                                                    {
                                                      goto LABEL_404;
                                                    }
                                                  }
                                                  v145 += *(unsigned __int8 *)(v5 + 85);
                                                  if ( (unsigned __int64)v145 < v29 )
                                                    break;
                                                }
                                              }
                                              *(_QWORD *)(v5 + 88) = 0LL;
                                              v146 = 0LL;
LABEL_397:
                                              if ( v146 )
                                              {
                                                if ( (v153 = v145 + 6, v6)
                                                  && (v154 = *(unsigned int *)(v6 + 4), (_DWORD)v154)
                                                  && (v155 = *(_QWORD *)(v6 + 8), v155 < (unsigned __int64)v153)
                                                  && v155 + 132 * v154 > v146
                                                  || v146 - 104 < v5 && (unsigned __int64)v153 > v5 )
                                                {
LABEL_404:
                                                  *(_QWORD *)(v5 + 88) = 0LL;
                                                }
                                              }
                                            }
                                          }
LABEL_405:
                                          if ( !v6 )
                                            goto LABEL_410;
                                          v156 = *(unsigned int *)(v6 + 4);
                                          if ( !(_DWORD)v156 )
                                            goto LABEL_410;
                                          v157 = *(_QWORD *)(v6 + 8);
                                          if ( v157 - 104 >= v5 || v157 + 132 * v156 <= v5 )
                                            goto LABEL_410;
                                        }
                                      }
                                    }
                                  }
                                }
                                break;
                              }
                              v37 += 2;
                              v38 += 2;
                              if ( (unsigned __int64)v37 < v29 )
                                break;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_409:
              Win32FreePool(v29);
              v9 = a1;
              v7 = 0;
            }
            else
            {
LABEL_410:
              v7 = 1;
              v9 = a1;
            }
            goto LABEL_413;
          }
        }
        v9 = a1;
      }
      v7 = 0;
    }
  }
LABEL_413:
  if ( v161 )
    Win32FreePool((__int64)v161);
  if ( v7 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v9 + 6) = 0LL;
  return 0LL;
}
