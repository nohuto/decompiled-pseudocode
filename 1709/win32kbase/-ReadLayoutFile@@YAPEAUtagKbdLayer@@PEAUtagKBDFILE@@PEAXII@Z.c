/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0072C00
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0072B20 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C0073294 (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     strcmp_0 @ 0x1C00AA9D9 (strcmp_0.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

struct tagKbdLayer *__fastcall ReadLayoutFile(struct tagKBDFILE *a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  int v7; // r15d
  struct tagKBDFILE *v9; // r14
  bool v10; // zf
  BOOL v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // r8d
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
  __int64 v34; // r10
  unsigned __int64 v35; // rax
  _QWORD *v36; // rdx
  _BYTE *v37; // rcx
  _BYTE *v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 *v41; // rax
  unsigned __int64 *v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // r9
  unsigned __int64 v51; // r8
  __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rcx
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v73; // rax
  _DWORD *v74; // rcx
  unsigned __int64 v75; // rax
  _WORD *v76; // rcx
  _WORD *v77; // rcx
  unsigned __int64 v78; // rax
  _QWORD *v79; // r8
  _WORD *v80; // rax
  _WORD *v81; // rdx
  unsigned int v82; // eax
  unsigned __int64 v83; // r9
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // r8
  bool v87; // cc
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  __int64 v93; // rax
  unsigned __int64 v94; // rsi
  unsigned __int64 *v95; // r8
  unsigned __int64 v96; // r10
  unsigned __int64 v97; // r11
  _BYTE *i; // rdx
  unsigned __int8 v99; // al
  _BYTE *v100; // r9
  _BYTE *v101; // rax
  _BYTE *v102; // rdx
  __int64 v103; // rax
  unsigned __int64 v104; // r9
  _QWORD *v105; // r8
  __int64 v106; // rax
  unsigned __int64 v107; // rdx
  unsigned __int64 v108; // r9
  _DWORD *v109; // rdx
  unsigned __int64 v110; // rax
  _DWORD *v111; // rdx
  __int64 v112; // rax
  unsigned __int64 v113; // r8
  unsigned __int64 v114; // r11
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // r10
  unsigned __int64 v117; // r9
  _WORD *v118; // rdx
  unsigned __int64 j; // rax
  _WORD *v120; // rdx
  __int64 v121; // rax
  unsigned __int64 v122; // r8
  unsigned __int64 v123; // rdx
  __int64 v124; // rax
  unsigned __int64 v125; // r8
  unsigned __int64 v126; // r10
  unsigned __int64 v127; // rdx
  unsigned __int64 v128; // r11
  unsigned __int64 v129; // r8
  _WORD *v130; // rdx
  unsigned __int64 k; // rax
  _WORD *v132; // rdx
  __int64 v133; // rax
  unsigned __int64 v134; // r9
  unsigned __int64 v135; // rdx
  __int64 v136; // rax
  unsigned __int64 v137; // r8
  unsigned __int64 v138; // rsi
  unsigned __int64 *v139; // rdx
  unsigned __int64 v140; // r10
  unsigned __int64 v141; // r9
  _WORD *v142; // r8
  unsigned __int64 m; // rax
  _WORD *v144; // r8
  __int64 v145; // rax
  unsigned __int64 v146; // r11
  _QWORD *v147; // rdx
  __int64 v148; // rax
  unsigned __int64 v149; // r8
  unsigned __int8 v150; // al
  __int64 v151; // rdx
  unsigned __int64 v152; // r8
  unsigned __int64 v153; // r9
  unsigned __int64 v154; // r8
  unsigned __int64 v155; // rdx
  unsigned __int64 v156; // rax
  __int64 v157; // rax
  unsigned __int64 v158; // r9
  unsigned __int64 v159; // r8
  unsigned __int64 v160; // rdx
  unsigned __int64 v161; // rax
  __int64 v162; // rax
  unsigned __int64 v163; // r9
  _BYTE *v164; // rdx
  unsigned __int8 v165; // r10
  int v166; // r8d
  __int16 *v167; // rcx
  unsigned __int64 v168; // r9
  __int16 v169; // ax
  __int64 v170; // r9
  unsigned __int64 v171; // r10
  unsigned __int64 v172; // r8
  _BYTE *v173; // rdx
  __int64 v174; // rax
  unsigned __int64 v175; // r9
  __int64 v176; // rcx
  __int64 v177; // rdx
  unsigned int v178[2]; // [rsp+38h] [rbp-60h] BYREF
  BOOL v179; // [rsp+40h] [rbp-58h]
  void *v180; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v181; // [rsp+50h] [rbp-48h]

  v178[0] = 0;
  v5 = 0LL;
  v180 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  v10 = PsGetCurrentProcessId() == (HANDLE)gpidLogon;
  *((_QWORD *)v9 + 6) = 0LL;
  v11 = v10;
  v179 = v10;
  if ( (int)LoadFileContent(a2, v12, v13, &v180, v178) >= 0 )
  {
    v14 = v180;
    v15 = (char *)v180 + *((unsigned int *)v180 + 15);
    if ( v15 >= v180 && (v11 || v15 + 263 >= v15) )
    {
      v16 = (char *)v180 + v178[0];
      if ( v15 + 264 < v16 )
      {
        v17 = *((_WORD *)v15 + 2);
        if ( v17 == 512 || v17 == -31132 || v17 == -21916 )
          v18 = *((_QWORD *)v15 + 6);
        else
          v18 = *((unsigned int *)v15 + 13);
        v19 = *((unsigned __int16 *)v15 + 3);
        v20 = v179;
        v21 = (unsigned __int64)&v15[*((unsigned __int16 *)v15 + 10) + 24];
        v181 = v21;
        *(_QWORD *)v178 = v179;
        if ( v19 )
        {
          v22 = v21 + 40;
          while ( v21 >= (unsigned __int64)v14 && (v20 || v22 - 1 >= v21) && v22 < (unsigned __int64)v16 )
          {
            v23 = strcmp_0((const char *)v21, ".data");
            v14 = v180;
            if ( v23 )
            {
              v20 = *(_QWORD *)v178;
              v21 += 40LL;
              v22 += 40LL;
              v181 = v21;
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
            v27 = (char *)v180 + *(unsigned int *)(v21 + 20);
            if ( v27 < v180 || &v27[v25] < v27 || &v27[v25] >= v16 )
              break;
            v28 = (void *)Win32AllocPool((unsigned int)v25, 0x746B7355u);
            v29 = (unsigned __int64)v28;
            if ( v28 )
            {
              v30 = v181;
              *((_QWORD *)a1 + 3) = v28;
              memmove(v28, (char *)v180 + *(unsigned int *)(v30 + 20), (unsigned int)v25);
              *((_DWORD *)a1 + 10) = v25;
              v31 = v29 + (unsigned int)v25;
              v32 = *(unsigned int *)(v30 + 12);
              v5 = v29 + v26;
              if ( v29 >= v32 )
              {
                v33 = v179;
                v34 = v29 - v32 - v18;
                if ( v179 || v5 >= v29 && v5 <= v31 - 104 )
                {
                  if ( !*(_QWORD *)v5
                    || (v35 = v34 + *(_QWORD *)v5, *(_QWORD *)v5 = v35, v35 >= v29)
                    && v35 + 16 >= v35
                    && v35 + 16 <= v31 )
                  {
                    if ( v33 || *(_QWORD *)v5 )
                    {
                      v36 = *(_QWORD **)v5;
                      v37 = **(_BYTE ***)v5;
                      if ( !v37
                        || (*v36 = &v37[v34], v36 = *(_QWORD **)v5, v37 = **(_BYTE ***)v5, (unsigned __int64)v37 >= v29)
                        && v37 + 2 >= v37
                        && (unsigned __int64)(v37 + 2) <= v31 )
                      {
                        if ( (v33 || (unsigned __int64)v36 >= v29 && (unsigned __int64)v36 <= v31 - 16)
                          && (unsigned __int64)v37 >= v29 )
                        {
                          v38 = v37 + 2;
                          while ( v38 >= v37 && (unsigned __int64)v38 <= v31 )
                          {
                            if ( !*v37 )
                            {
                              v39 = *(_QWORD *)(v5 + 8);
                              if ( v39 )
                              {
                                v40 = v34 + v39;
                                *(_QWORD *)(v5 + 8) = v40;
                                if ( v40 < v29 || v40 + 16 < v40 || v40 + 16 > v31 )
                                  break;
                              }
                              v41 = *(unsigned __int64 **)(v5 + 8);
                              if ( v41 )
                              {
                                if ( (unsigned __int64)v41 >= v29 )
                                {
                                  v42 = v41 + 2;
                                  do
                                  {
                                    if ( v42 < v41 || (unsigned __int64)v42 > v31 )
                                      break;
                                    if ( !*v41 )
                                      goto LABEL_57;
                                    v43 = v34 + *v41;
                                    *v41 = v43;
                                    if ( v43 < v29 )
                                      break;
                                    if ( v43 + 4 < v43 )
                                      break;
                                    if ( v43 + 4 > v31 )
                                      break;
                                    v41 += 2;
                                    v42 += 2;
                                  }
                                  while ( (unsigned __int64)v41 >= v29 );
                                }
                                break;
                              }
LABEL_57:
                              v44 = *(_QWORD *)(v5 + 16);
                              if ( v44 )
                              {
                                v73 = v34 + v44;
                                *(_QWORD *)(v5 + 16) = v73;
                                if ( v73 < v29 || v73 + 8 < v73 || v73 + 8 > v31 )
                                  break;
                              }
                              v45 = *(_DWORD **)(v5 + 16);
                              if ( v45 )
                              {
                                v74 = v45 + 2;
                                while ( (unsigned __int64)v45 >= v29 && v74 >= v45 && (unsigned __int64)v74 <= v31 )
                                {
                                  if ( *v45 )
                                  {
                                    v74 += 2;
                                    v45 += 2;
                                    if ( v45 )
                                      continue;
                                  }
                                  goto LABEL_59;
                                }
                                break;
                              }
LABEL_59:
                              if ( *(_WORD *)(v5 + 82) )
                              {
                                v46 = *(_QWORD *)(v5 + 88);
                                if ( v46 )
                                {
                                  v75 = v34 + v46;
                                  *(_QWORD *)(v5 + 88) = v75;
                                  if ( v75 < v29 || v75 + 6 < v75 || v75 + 6 > v31 )
                                    break;
                                }
                              }
                              v47 = *(_QWORD *)(v5 + 24);
                              if ( v47 )
                              {
                                v48 = v34 + v47;
                                *(_QWORD *)(v5 + 24) = v48;
                                if ( v48 < v29 || v48 + 16 < v48 || v48 + 16 > v31 )
                                  break;
                              }
                              v49 = *(_QWORD *)(v5 + 24);
                              if ( v49 )
                              {
                                if ( v49 >= v29 )
                                {
                                  v50 = *(_QWORD *)v178;
                                  do
                                  {
                                    v51 = v49 + 16;
                                    if ( v49 + 16 < v49 || v51 > v31 )
                                      break;
                                    if ( !*(_BYTE *)v49 )
                                      goto LABEL_78;
                                    v52 = *(_QWORD *)(v49 + 8);
                                    if ( v52 )
                                    {
                                      v53 = v34 + v52;
                                      *(_QWORD *)(v49 + 8) = v53;
                                      if ( v53 < v29 || v53 + 2 < v53 || v53 + 2 > v31 )
                                        break;
                                    }
                                    if ( !v50 )
                                    {
                                      v76 = *(_WORD **)(v49 + 8);
                                      if ( v76 )
                                      {
                                        for ( ; (unsigned __int64)v76 >= v29; ++v76 )
                                        {
                                          if ( (unsigned __int64)v76 > v31 - 2 )
                                            break;
                                          if ( !*v76 )
                                            goto LABEL_76;
                                        }
                                        *(_QWORD *)(v49 + 8) = 0LL;
                                      }
                                    }
LABEL_76:
                                    v49 += 16LL;
                                  }
                                  while ( v51 >= v29 );
                                }
                                break;
                              }
                              v50 = *(_QWORD *)v178;
LABEL_78:
                              v54 = *(_QWORD *)(v5 + 32);
                              if ( v54 )
                              {
                                v55 = v34 + v54;
                                *(_QWORD *)(v5 + 32) = v55;
                                if ( v55 < v29 || v55 + 16 < v55 || v55 + 16 > v31 )
                                  break;
                              }
                              v56 = *(_QWORD *)(v5 + 32);
                              if ( v56 )
                              {
                                if ( v56 >= v29 )
                                {
                                  do
                                  {
                                    v57 = v56 + 16;
                                    if ( v56 + 16 < v56 || v57 > v31 )
                                      break;
                                    if ( !*(_BYTE *)v56 )
                                      goto LABEL_94;
                                    v58 = *(_QWORD *)(v56 + 8);
                                    if ( v58 )
                                    {
                                      v59 = v34 + v58;
                                      *(_QWORD *)(v56 + 8) = v59;
                                      if ( v59 < v29 || v59 + 2 < v59 || v59 + 2 > v31 )
                                        break;
                                    }
                                    if ( !v50 )
                                    {
                                      v77 = *(_WORD **)(v56 + 8);
                                      if ( v77 )
                                      {
                                        for ( ; (unsigned __int64)v77 >= v29; ++v77 )
                                        {
                                          if ( (unsigned __int64)v77 > v31 - 2 )
                                            break;
                                          if ( !*v77 )
                                            goto LABEL_92;
                                        }
                                        *(_QWORD *)(v56 + 8) = 0LL;
                                      }
                                    }
LABEL_92:
                                    v56 += 16LL;
                                  }
                                  while ( v57 >= v29 );
                                }
                                break;
                              }
LABEL_94:
                              v60 = *(_QWORD *)(v5 + 40);
                              if ( v60 )
                              {
                                v78 = v34 + v60;
                                *(_QWORD *)(v5 + 40) = v78;
                                if ( v78 < v29 || v78 + 8 < v78 || v78 + 8 > v31 )
                                  break;
                              }
                              v61 = *(_QWORD **)(v5 + 40);
                              if ( v61 )
                              {
                                if ( (unsigned __int64)v61 < v29 )
                                  break;
                                v79 = v61 + 1;
LABEL_185:
                                if ( v79 < v61 || (unsigned __int64)v79 > v31 )
                                  break;
                                if ( *v61 )
                                {
                                  v80 = (_WORD *)(v34 + *v61);
                                  *v61 = v80;
                                  if ( (unsigned __int64)v80 >= v29 )
                                  {
                                    v81 = v80 + 1;
                                    if ( v80 + 1 >= v80 && (unsigned __int64)v81 <= v31 )
                                    {
                                      while ( (unsigned __int64)v80 >= v29 && v81 >= v80 && (unsigned __int64)v81 <= v31 )
                                      {
                                        if ( !*v80 )
                                        {
                                          ++v61;
                                          ++v79;
                                          if ( (unsigned __int64)v61 >= v29 )
                                            goto LABEL_185;
                                          goto LABEL_423;
                                        }
                                        ++v80;
                                        ++v81;
                                      }
                                    }
                                  }
                                  break;
                                }
                              }
                              v62 = *(_QWORD *)(v5 + 48);
                              if ( !v62 )
                                break;
                              v63 = v62 + v34;
                              *(_QWORD *)(v5 + 48) = v62 + v34;
                              if ( v62 + v34 < v29 )
                                break;
                              if ( v63 + 2 < v63 )
                                break;
                              if ( v63 + 2 > v31 )
                                break;
                              v64 = v63 + 2LL * *(unsigned __int8 *)(v5 + 56);
                              if ( v64 < v29 )
                                break;
                              if ( v64 + 2 < v64 )
                                break;
                              if ( v64 + 2 > v31 )
                                break;
                              v65 = *(_QWORD *)(v5 + 64);
                              if ( v65 )
                              {
                                v66 = v34 + v65;
                                *(_QWORD *)(v5 + 64) = v66;
                                if ( v66 < v29 || v66 + 4 < v66 || v66 + 4 > v31 )
                                  break;
                              }
                              v67 = *(_QWORD *)(v5 + 64);
                              if ( v67 )
                              {
                                while ( !v50 || *(_WORD *)(v67 + 2) )
                                {
                                  if ( v67 < v29 || v67 + 4 < v67 || v67 + 4 > v31 )
                                    goto LABEL_423;
                                  if ( !v50 && !*(_WORD *)(v67 + 2) )
                                    break;
                                  v67 += 4LL;
                                }
                              }
                              v68 = *(_QWORD *)(v5 + 72);
                              if ( v68 )
                              {
                                v69 = v34 + v68;
                                *(_QWORD *)(v5 + 72) = v69;
                                if ( v69 < v29 || v69 + 4 < v69 || v69 + 4 > v31 )
                                  break;
                              }
                              v70 = *(_QWORD *)(v5 + 72);
                              if ( v70 )
                              {
                                if ( v70 >= v29 )
                                {
                                  v71 = v70 + 4;
                                  do
                                  {
                                    if ( v71 < v70 || v71 > v31 )
                                      break;
                                    if ( !*(_WORD *)(v71 - 2) )
                                      goto LABEL_127;
                                    v70 += 4LL;
                                    v71 += 4LL;
                                  }
                                  while ( v70 >= v29 );
                                }
                                break;
                              }
LABEL_127:
                              if ( a4 )
                              {
                                v82 = *(_DWORD *)(v30 + 12);
                                if ( a4 < v82 )
                                  break;
                                v6 = v29 + a4 - v82;
                                if ( v6 < v29 )
                                  break;
                                v83 = v6 + 32;
                                if ( v6 + 32 < v6 )
                                  break;
                                if ( v83 > v31 )
                                  break;
                                v84 = *(_QWORD *)(v6 + 8);
                                if ( v84 )
                                {
                                  v85 = v34 + v84;
                                  *(_QWORD *)(v6 + 8) = v85;
                                  if ( v85 < v29 || v85 + 132 < v85 || v85 + 132 > v31 )
                                    break;
                                }
                                v86 = *(_QWORD *)(v6 + 8);
                                if ( v86 )
                                {
                                  if ( v33 )
                                  {
                                    v88 = v86 + 132LL * (unsigned int)(*(_DWORD *)(v6 + 4) - 1);
                                    if ( v88 < v29 || v88 + 132 < v88 )
                                      break;
                                    v87 = v88 + 132 <= v31;
                                  }
                                  else
                                  {
                                    v87 = *(unsigned int *)(v6 + 4) <= (v31 - v86) / 0x84;
                                  }
                                  if ( !v87 )
                                    break;
                                }
                                v89 = *(_QWORD *)(v6 + 24);
                                if ( v89 )
                                {
                                  v90 = v34 + v89;
                                  *(_QWORD *)(v6 + 24) = v90;
                                  if ( v90 < v29 || v90 + 2 < v90 || v90 + 2 > v31 )
                                    break;
                                }
                                v91 = *(_QWORD *)(v6 + 24);
                                if ( v91 )
                                {
                                  v92 = v91 + 2LL * (*(_DWORD *)(v6 + 16) - 1);
                                  if ( v92 < v29 || v92 + 2 < v92 || v92 + 2 > v31 )
                                    break;
                                }
                                if ( !v33 )
                                {
                                  v93 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v93 )
                                  {
                                    if ( v86 < v83 && v86 + 132 * v93 > v6 )
                                      break;
                                  }
                                  if ( v6 - 104 < v5 && v83 > v5 )
                                    break;
                                }
                                if ( (int)IsEditionValidateKbdNLSTableSupported() >= 0
                                  && !(unsigned int)EditionValidateKbdNLSTable(v6) )
                                {
                                  break;
                                }
                                *((_QWORD *)a1 + 6) = v6;
                              }
                              if ( v33 )
                                goto LABEL_129;
                              v94 = *(_QWORD *)(v5 + 8);
                              if ( v94 )
                              {
                                v95 = *(unsigned __int64 **)(v5 + 8);
                                if ( v94 < v29 )
                                  break;
                                v96 = v94 + 16;
LABEL_235:
                                if ( v96 < (unsigned __int64)v95 || v96 > v31 )
                                  break;
                                v97 = *v95;
                                if ( *v95 )
                                {
                                  for ( i = (_BYTE *)*v95;
                                        (unsigned __int64)i >= v29 && i + 4 >= i && (unsigned __int64)(i + 4) <= v31;
                                        i += *(unsigned __int8 *)(v96 - 7) )
                                  {
                                    if ( !*i )
                                    {
                                      v102 = i + 4;
                                      if ( !v6
                                        || (v103 = *(unsigned int *)(v6 + 4), !(_DWORD)v103)
                                        || (v104 = *(_QWORD *)(v6 + 8), v104 >= (unsigned __int64)v102)
                                        || v104 + 132 * v103 <= v97 )
                                      {
                                        if ( v97 - 104 >= v5 || (unsigned __int64)v102 <= v5 )
                                        {
                                          v95 += 2;
                                          v96 += 16LL;
                                          if ( (unsigned __int64)v95 >= v29 )
                                            goto LABEL_235;
                                        }
                                      }
                                      goto LABEL_423;
                                    }
                                    v99 = *(_BYTE *)(v96 - 8);
                                    if ( v99 > 1u )
                                    {
                                      v100 = &i[2 * v99];
                                      if ( (unsigned __int64)v100 < v29 )
                                        goto LABEL_423;
                                      v101 = &i[2 * v99 + 2];
                                      if ( v101 < v100 || (unsigned __int64)v101 > v31 )
                                        goto LABEL_423;
                                    }
                                  }
                                  break;
                                }
                                v105 = v95 + 2;
                                if ( v6 )
                                {
                                  v106 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v106 )
                                  {
                                    v107 = *(_QWORD *)(v6 + 8);
                                    if ( v107 < (unsigned __int64)v105 && v107 + 132 * v106 > v94 )
                                      break;
                                  }
                                }
                                if ( v94 - 104 < v5 && (unsigned __int64)v105 > v5 )
                                  break;
                              }
                              v108 = *(_QWORD *)(v5 + 16);
                              v109 = (_DWORD *)v108;
                              if ( v108 )
                              {
                                v110 = v108 + 8;
                                while ( (unsigned __int64)v109 >= v29 && v110 >= (unsigned __int64)v109 && v110 <= v31 )
                                {
                                  if ( !*v109 )
                                  {
                                    v111 = v109 + 2;
                                    if ( v6 )
                                    {
                                      v112 = *(unsigned int *)(v6 + 4);
                                      if ( (_DWORD)v112 )
                                      {
                                        v113 = *(_QWORD *)(v6 + 8);
                                        if ( v113 < (unsigned __int64)v111 && v113 + 132 * v112 > v108 )
                                          goto LABEL_423;
                                      }
                                    }
                                    if ( v108 - 104 < v5 && (unsigned __int64)v111 > v5 )
                                      goto LABEL_423;
                                    goto LABEL_276;
                                  }
                                  v110 += 8LL;
                                  v109 += 2;
                                  if ( !v109 )
                                    goto LABEL_276;
                                }
                              }
                              else
                              {
LABEL_276:
                                v114 = *(_QWORD *)(v5 + 24);
                                if ( v114 )
                                {
                                  v115 = *(_QWORD *)(v5 + 24);
                                  if ( v114 >= v29 )
                                  {
                                    while ( 1 )
                                    {
                                      v116 = v115 + 16;
                                      if ( v115 + 16 < v115 || v116 > v31 )
                                        break;
                                      if ( !*(_BYTE *)v115 )
                                      {
                                        v123 = v115 + 16;
                                        if ( v6 )
                                        {
                                          v124 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v124 )
                                          {
                                            v125 = *(_QWORD *)(v6 + 8);
                                            if ( v125 < v123 && v125 + 132 * v124 > v114 )
                                              goto LABEL_423;
                                          }
                                        }
                                        if ( v114 - 104 < v5 && v123 > v5 )
                                          goto LABEL_423;
                                        goto LABEL_302;
                                      }
                                      v117 = *(_QWORD *)(v115 + 8);
                                      if ( v117 )
                                      {
                                        v118 = *(_WORD **)(v115 + 8);
                                        for ( j = v117 + 2;
                                              (unsigned __int64)v118 >= v29 && j >= (unsigned __int64)v118 && j <= v31;
                                              j += 2LL )
                                        {
                                          if ( !*v118 )
                                          {
                                            v120 = v118 + 1;
                                            if ( v6 )
                                            {
                                              v121 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v121 )
                                              {
                                                v122 = *(_QWORD *)(v6 + 8);
                                                if ( v122 < (unsigned __int64)v120 && v122 + 132 * v121 > v117 )
                                                  goto LABEL_423;
                                              }
                                            }
                                            if ( v117 - 104 < v5 && (unsigned __int64)v120 > v5 )
                                              goto LABEL_423;
                                            goto LABEL_294;
                                          }
                                          ++v118;
                                        }
                                        goto LABEL_423;
                                      }
LABEL_294:
                                      v115 = v116;
                                      if ( v116 < v29 )
                                        goto LABEL_423;
                                    }
                                  }
                                }
                                else
                                {
LABEL_302:
                                  v126 = *(_QWORD *)(v5 + 32);
                                  if ( v126 )
                                  {
                                    v127 = *(_QWORD *)(v5 + 32);
                                    if ( v126 >= v29 )
                                    {
                                      while ( 1 )
                                      {
                                        v128 = v127 + 16;
                                        if ( v127 + 16 < v127 || v128 > v31 )
                                          break;
                                        if ( !*(_BYTE *)v127 )
                                        {
                                          v135 = v127 + 16;
                                          if ( v6 )
                                          {
                                            v136 = *(unsigned int *)(v6 + 4);
                                            if ( (_DWORD)v136 )
                                            {
                                              v137 = *(_QWORD *)(v6 + 8);
                                              if ( v137 < v135 && v137 + 132 * v136 > v126 )
                                                goto LABEL_423;
                                            }
                                          }
                                          if ( v126 - 104 < v5 && v135 > v5 )
                                            goto LABEL_423;
                                          goto LABEL_328;
                                        }
                                        v129 = *(_QWORD *)(v127 + 8);
                                        if ( v129 )
                                        {
                                          v130 = *(_WORD **)(v127 + 8);
                                          for ( k = v129 + 2;
                                                (unsigned __int64)v130 >= v29 && k >= (unsigned __int64)v130 && k <= v31;
                                                k += 2LL )
                                          {
                                            if ( !*v130 )
                                            {
                                              v132 = v130 + 1;
                                              if ( v6 )
                                              {
                                                v133 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v133 )
                                                {
                                                  v134 = *(_QWORD *)(v6 + 8);
                                                  if ( v134 < (unsigned __int64)v132 && v134 + 132 * v133 > v129 )
                                                    goto LABEL_423;
                                                }
                                              }
                                              if ( v129 - 104 < v5 && (unsigned __int64)v132 > v5 )
                                                goto LABEL_423;
                                              goto LABEL_320;
                                            }
                                            ++v130;
                                          }
                                          goto LABEL_423;
                                        }
LABEL_320:
                                        v127 = v128;
                                        if ( v128 < v29 )
                                          goto LABEL_423;
                                      }
                                    }
                                  }
                                  else
                                  {
LABEL_328:
                                    v138 = *(_QWORD *)(v5 + 40);
                                    if ( v138 )
                                    {
                                      v139 = *(unsigned __int64 **)(v5 + 40);
                                      if ( v138 < v29 )
                                        break;
                                      v140 = v138 + 8;
LABEL_331:
                                      if ( v140 < (unsigned __int64)v139 || v140 > v31 )
                                        break;
                                      v141 = *v139;
                                      if ( *v139 )
                                      {
                                        v142 = (_WORD *)*v139;
                                        for ( m = v141 + 2;
                                              (unsigned __int64)v142 >= v29 && m >= (unsigned __int64)v142 && m <= v31;
                                              m += 2LL )
                                        {
                                          if ( !*v142 )
                                          {
                                            v144 = v142 + 1;
                                            if ( !v6
                                              || (v145 = *(unsigned int *)(v6 + 4), !(_DWORD)v145)
                                              || (v146 = *(_QWORD *)(v6 + 8), v146 >= (unsigned __int64)v144)
                                              || v146 + 132 * v145 <= v141 )
                                            {
                                              if ( v141 - 104 >= v5 || (unsigned __int64)v144 <= v5 )
                                              {
                                                ++v139;
                                                v140 += 8LL;
                                                if ( (unsigned __int64)v139 >= v29 )
                                                  goto LABEL_331;
                                              }
                                            }
                                            goto LABEL_423;
                                          }
                                          ++v142;
                                        }
                                        break;
                                      }
                                      v147 = v139 + 1;
                                      if ( v6 )
                                      {
                                        v148 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v148 )
                                        {
                                          v149 = *(_QWORD *)(v6 + 8);
                                          if ( v149 < (unsigned __int64)v147 && v149 + 132 * v148 > v138 )
                                            break;
                                        }
                                      }
                                      if ( v138 - 104 < v5 && (unsigned __int64)v147 > v5 )
                                        break;
                                    }
                                    v150 = *(_BYTE *)(v5 + 56);
                                    if ( v150 )
                                    {
                                      if ( v6 )
                                      {
                                        v151 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v151 )
                                        {
                                          v152 = *(_QWORD *)(v5 + 48);
                                          v153 = *(_QWORD *)(v6 + 8);
                                          if ( v153 < v152 + 2LL * v150 && v153 + 132 * v151 > v152 )
                                            break;
                                        }
                                      }
                                    }
                                    v154 = *(_QWORD *)(v5 + 64);
                                    if ( v154 )
                                    {
                                      v155 = *(_QWORD *)(v5 + 64);
                                      if ( v154 >= v29 )
                                      {
                                        v156 = v154 + 4;
                                        while ( v156 >= v155 && v156 <= v31 )
                                        {
                                          v155 += 4LL;
                                          if ( !*(_WORD *)(v156 - 2) )
                                          {
                                            if ( v6 )
                                            {
                                              v157 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v157 )
                                              {
                                                v158 = *(_QWORD *)(v6 + 8);
                                                if ( v158 < v155 && v158 + 132 * v157 > v154 )
                                                  goto LABEL_423;
                                              }
                                            }
                                            if ( v154 - 104 < v5 && v155 > v5 )
                                              goto LABEL_423;
                                            goto LABEL_373;
                                          }
                                          v156 += 4LL;
                                          if ( v155 < v29 )
                                            goto LABEL_423;
                                        }
                                      }
                                    }
                                    else
                                    {
LABEL_373:
                                      v159 = *(_QWORD *)(v5 + 72);
                                      if ( v159 )
                                      {
                                        v160 = *(_QWORD *)(v5 + 72);
                                        if ( v159 >= v29 )
                                        {
                                          v161 = v159 + 4;
                                          while ( v161 >= v160 && v161 <= v31 )
                                          {
                                            v160 += 4LL;
                                            if ( !*(_WORD *)(v161 - 2) )
                                            {
                                              if ( v6 )
                                              {
                                                v162 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v162 )
                                                {
                                                  v163 = *(_QWORD *)(v6 + 8);
                                                  if ( v163 < v160 && v163 + 132 * v162 > v159 )
                                                    goto LABEL_423;
                                                }
                                              }
                                              if ( v159 - 104 < v5 && v160 > v5 )
                                                goto LABEL_423;
                                              goto LABEL_387;
                                            }
                                            v161 += 4LL;
                                            if ( v160 < v29 )
                                              goto LABEL_423;
                                          }
                                        }
                                      }
                                      else
                                      {
LABEL_387:
                                        if ( *(_WORD *)(v5 + 82) )
                                        {
                                          v164 = *(_BYTE **)(v5 + 88);
                                          if ( v164 )
                                          {
                                            if ( (unsigned __int64)v164 >= v29 )
                                            {
                                              while ( (unsigned __int64)v164 <= v31 - 6 )
                                              {
                                                if ( !*v164 )
                                                  goto LABEL_411;
                                                v165 = *(_BYTE *)(v5 + 84);
                                                v166 = 0;
                                                if ( v165 )
                                                {
                                                  v167 = (__int16 *)(v164 + 4);
                                                  while ( 1 )
                                                  {
                                                    if ( v166 > 0 )
                                                    {
                                                      v168 = (unsigned __int64)&v164[2 * v166 + 4];
                                                      if ( v168 < v29 || v168 > v31 - 2 )
                                                        break;
                                                    }
                                                    v169 = *v167++;
                                                    ++v166;
                                                    if ( v169 == -4096 || v166 >= v165 )
                                                      goto LABEL_401;
                                                  }
                                                  *(_QWORD *)(v5 + 88) = 0LL;
                                                }
LABEL_401:
                                                if ( !*(_QWORD *)(v5 + 88) )
                                                  goto LABEL_411;
                                                if ( v166 <= 0
                                                  || (!v6
                                                   || (v170 = *(unsigned int *)(v6 + 4), !(_DWORD)v170)
                                                   || (v171 = *(_QWORD *)(v6 + 8),
                                                       v171 >= (unsigned __int64)&v164[2 * v166 + 4])
                                                   || v171 + 132 * v170 <= (unsigned __int64)(v164 + 4))
                                                  && ((unsigned __int64)(v164 - 100) >= v5
                                                   || (unsigned __int64)&v164[2 * v166 + 4] <= v5) )
                                                {
                                                  v164 += *(unsigned __int8 *)(v5 + 85);
                                                  if ( (unsigned __int64)v164 >= v29 )
                                                    continue;
                                                }
                                                break;
                                              }
                                            }
                                            *(_QWORD *)(v5 + 88) = 0LL;
LABEL_411:
                                            v172 = *(_QWORD *)(v5 + 88);
                                            if ( v172 )
                                            {
                                              if ( (v173 = v164 + 6, v6)
                                                && (v174 = *(unsigned int *)(v6 + 4), (_DWORD)v174)
                                                && (v175 = *(_QWORD *)(v6 + 8), v175 < (unsigned __int64)v173)
                                                && v175 + 132 * v174 > v172
                                                || v172 - 104 < v5 && (unsigned __int64)v173 > v5 )
                                              {
                                                *(_QWORD *)(v5 + 88) = 0LL;
                                              }
                                            }
                                          }
                                        }
                                        if ( !v6 )
                                          goto LABEL_129;
                                        v176 = *(unsigned int *)(v6 + 4);
                                        if ( !(_DWORD)v176 )
                                          goto LABEL_129;
                                        v177 = *(_QWORD *)(v6 + 8);
                                        if ( v177 - 104 >= v5 || v177 + 132 * v176 <= v5 )
                                          goto LABEL_129;
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
LABEL_423:
              Win32FreePool(v29);
              v9 = a1;
              v7 = 0;
            }
            else
            {
LABEL_129:
              v7 = 1;
              v9 = a1;
            }
            goto LABEL_130;
          }
        }
        v9 = a1;
      }
      v7 = 0;
    }
  }
LABEL_130:
  if ( v180 )
    Win32FreePool((__int64)v180);
  if ( v7 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v9 + 6) = 0LL;
  return 0LL;
}
