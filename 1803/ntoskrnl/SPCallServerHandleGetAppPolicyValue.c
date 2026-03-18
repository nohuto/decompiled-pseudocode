/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x1405C0EE4
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14007A3C8 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetAppPolicyValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v7; // rdx
  unsigned int i; // r9d
  unsigned __int64 v9; // r10
  signed int v10; // ebx
  unsigned __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // r9
  _QWORD *v14; // rax
  void *v15; // rsi
  unsigned int j; // edx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  const wchar_t *v21; // r11
  __int64 v22; // r14
  size_t v23; // r11
  unsigned int v24; // eax
  size_t v25; // r14
  PVOID PoolWithTag; // rax
  unsigned __int64 v27; // r8
  unsigned int v28; // r11d
  unsigned __int64 v29; // rdx
  unsigned int k; // r9d
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r15
  unsigned __int64 v35; // rdx
  unsigned int m; // r9d
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // r9
  unsigned int *v41; // rax
  unsigned __int64 v42; // rdx
  unsigned int n; // r9d
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rcx
  unsigned int v46; // r14d
  __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned int ii; // edx
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rcx
  unsigned int v52; // ecx
  __int64 v53; // rdx
  unsigned int *v54; // rax
  unsigned int v55; // r13d
  int v56; // ebx
  void *v57; // r12
  void *v58; // rcx
  int v59; // r12d
  int v60; // esi
  int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // ecx
  unsigned int v64; // eax
  unsigned int v65; // edx
  unsigned int v66; // eax
  unsigned int v67; // r9d
  unsigned int v68; // r8d
  unsigned int v69; // ecx
  int v70; // eax
  unsigned int v71; // ecx
  unsigned int v72; // r9d
  unsigned int v73; // edx
  unsigned int v74; // eax
  int v75; // ecx
  unsigned int v76; // ecx
  int v77; // r11d
  unsigned int v78; // eax
  unsigned int v79; // edx
  unsigned int v80; // eax
  unsigned int v81; // ecx
  unsigned int v82; // eax
  unsigned int v83; // edx
  PVOID v84; // rax
  __int64 v85; // r10
  int v86; // r12d
  int v87; // r9d
  char *v88; // r8
  __int64 v89; // rdx
  __int64 v90; // r10
  int v91; // r9d
  char *v92; // r8
  int v93; // eax
  unsigned int v94; // r14d
  __int64 v95; // rax
  char *v96; // rdx
  char *v97; // rcx
  __int64 v98; // rdx
  _QWORD *v99; // xmm0_8
  __int64 v100; // r10
  int v101; // r9d
  char *v102; // r8
  int v103; // eax
  unsigned int v104; // r11d
  __int64 v105; // rax
  char *v106; // rdx
  char *v107; // rcx
  __int64 v108; // r9
  __int64 v109; // r9
  int v110; // r15d
  char *v111; // r8
  int v112; // r10d
  int v113; // eax
  unsigned int v114; // r11d
  __int64 v115; // rax
  char *v116; // rdx
  char *v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // r9
  int v120; // r15d
  char *v121; // r8
  int v122; // r10d
  int v123; // eax
  unsigned int v124; // r11d
  __int64 v125; // rax
  char *v126; // rdx
  char *v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // r9
  int v130; // r15d
  char *v131; // r8
  int v132; // r10d
  int v133; // eax
  unsigned int v134; // r11d
  __int64 v135; // rax
  char *v136; // rdx
  char *v137; // rcx
  __int64 v138; // rdx
  unsigned int v140; // edx
  int v141; // eax
  unsigned int v142; // ecx
  int v143; // eax
  unsigned int v144; // r14d
  __int64 v145; // rax
  char *v146; // rdx
  char *v147; // rcx
  unsigned int v148; // edx
  int v149; // eax
  unsigned int v150; // ecx
  int v151; // eax
  int v152; // ecx
  unsigned int v153; // edx
  int v154; // eax
  unsigned int v155; // ecx
  unsigned int v156; // edx
  int v157; // eax
  unsigned int v158; // ecx
  unsigned int v159; // edx
  int v160; // eax
  unsigned int v161; // ecx
  unsigned int v162; // ecx
  unsigned int v163; // eax
  int v164; // [rsp+68h] [rbp-9h]
  unsigned int v165; // [rsp+68h] [rbp-9h]
  int v166; // [rsp+6Ch] [rbp-5h] BYREF
  int v167; // [rsp+70h] [rbp-1h] BYREF
  int v168; // [rsp+74h] [rbp+3h] BYREF
  void *Src; // [rsp+78h] [rbp+7h]
  size_t pcbLength; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD *v171; // [rsp+88h] [rbp+17h]
  unsigned int v173; // [rsp+E8h] [rbp+77h]
  unsigned int v174; // [rsp+E8h] [rbp+77h]

  v4 = *(_QWORD *)(a1 + 8);
  v173 = 0;
  Src = 0LL;
  v166 = 0;
  v167 = 0;
  v168 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v7 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v9 = -1LL;
      if ( v7 + 4 >= v7 )
        v9 = v7 + 4;
      v10 = v7 + 4 < v7 ? 0xC0000095 : 0;
      if ( v7 + 4 < v7 )
        goto LABEL_266;
      v11 = v9 + *(unsigned int *)v7;
      v7 = -1LL;
      if ( v11 >= v9 )
        v7 = v11;
      v10 = v11 < v9 ? 0xC0000095 : 0;
      if ( v11 < v9 )
        goto LABEL_266;
    }
    v12 = *(_DWORD *)v7;
    v13 = -1LL;
    if ( v7 + 4 >= v7 )
      v13 = v7 + 4;
    v10 = v7 + 4 < v7 ? 0xC0000095 : 0;
    if ( v7 + 4 < v7 )
    {
LABEL_266:
      v12 = 0;
      v14 = v171;
      goto LABEL_16;
    }
    v14 = 0LL;
    if ( v12 )
      v14 = (_QWORD *)v13;
LABEL_16:
    if ( v10 < 0 )
      goto LABEL_264;
    if ( v12 != 8 )
      goto LABEL_267;
    v171 = (_QWORD *)*v14;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    goto LABEL_264;
  v15 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v17 = -1LL;
      if ( v4 + 4 >= v4 )
        v17 = v4 + 4;
      v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
        goto LABEL_269;
      v18 = v17 + *(unsigned int *)v4;
      v4 = -1LL;
      if ( v18 >= v17 )
        v4 = v18;
      v10 = v18 < v17 ? 0xC0000095 : 0;
      if ( v18 < v17 )
        goto LABEL_269;
    }
    v19 = *(_DWORD *)v4;
    v20 = -1LL;
    if ( v4 + 4 >= v4 )
      v20 = v4 + 4;
    v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_269:
      v19 = 0;
      v21 = (const wchar_t *)v171;
      goto LABEL_35;
    }
    v21 = 0LL;
    if ( v19 )
      v21 = (const wchar_t *)v20;
LABEL_35:
    if ( v10 < 0 )
      goto LABEL_264;
    if ( !v19 || (v19 & 1) != 0 || (v22 = v19, v21[((unsigned __int64)v19 >> 1) - 1]) )
    {
      v10 = -1073741762;
      goto LABEL_50;
    }
    if ( StringCbLengthW(v21, v19, &pcbLength) < 0 || pcbLength + 2 != v22 )
    {
      v10 = -1073741762;
      goto LABEL_50;
    }
    v164 = pcbLength >> 1;
    pcbLength = v23;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    goto LABEL_264;
  v10 = 0;
  v24 = 2 * v164 + 2;
  v25 = v24;
  if ( 2 * v164 == -2 )
  {
    v10 = -1073741762;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x20534C53u);
    if ( PoolWithTag )
      v15 = PoolWithTag;
    else
      v10 = -1073741801;
  }
  if ( v10 >= 0 )
  {
    memmove(v15, (const void *)pcbLength, v25);
    pcbLength = (size_t)v15;
    v15 = 0LL;
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0x20534C53u);
LABEL_50:
  if ( v10 < 0 )
    goto LABEL_264;
  v27 = *(_QWORD *)(a1 + 8);
  if ( !v27 )
    goto LABEL_274;
  v28 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 5u )
    goto LABEL_274;
  v29 = *(_QWORD *)(a1 + 8);
  for ( k = 0; k < 5; ++k )
  {
    v31 = -1LL;
    if ( v29 + 4 >= v29 )
      v31 = v29 + 4;
    v10 = v29 + 4 < v29 ? 0xC0000095 : 0;
    if ( v29 + 4 < v29 )
      goto LABEL_275;
    v32 = v31 + *(unsigned int *)v29;
    v29 = -1LL;
    if ( v32 >= v31 )
      v29 = v32;
    v10 = v32 < v31 ? 0xC0000095 : 0;
    if ( v32 < v31 )
      goto LABEL_275;
  }
  v165 = *(_DWORD *)v29;
  v33 = -1LL;
  if ( v29 + 4 >= v29 )
    v33 = v29 + 4;
  v10 = v29 + 4 < v29 ? 0xC0000095 : 0;
  if ( v29 + 4 < v29 )
  {
LABEL_275:
    v34 = (__int64)v171;
    v165 = 0;
    goto LABEL_66;
  }
  v34 = 0LL;
  if ( *(_DWORD *)v29 )
    v34 = v33;
LABEL_66:
  if ( v10 < 0 )
    goto LABEL_264;
  if ( v28 <= 6 )
  {
    v10 = -1073741811;
  }
  else
  {
    v35 = v27;
    for ( m = 0; m < 6; ++m )
    {
      v37 = -1LL;
      if ( v35 + 4 >= v35 )
        v37 = v35 + 4;
      v10 = v35 + 4 < v35 ? 0xC0000095 : 0;
      if ( v35 + 4 < v35 )
        goto LABEL_277;
      v38 = v37 + *(unsigned int *)v35;
      v35 = -1LL;
      if ( v38 >= v37 )
        v35 = v38;
      v10 = v38 < v37 ? 0xC0000095 : 0;
      if ( v38 < v37 )
        goto LABEL_277;
    }
    v39 = *(_DWORD *)v35;
    v40 = -1LL;
    if ( v35 + 4 >= v35 )
      v40 = v35 + 4;
    v10 = v35 + 4 < v35 ? 0xC0000095 : 0;
    if ( v35 + 4 < v35 )
    {
LABEL_277:
      v39 = 0;
      v41 = (unsigned int *)v171;
      goto LABEL_81;
    }
    v41 = 0LL;
    if ( v39 )
      v41 = (unsigned int *)v40;
LABEL_81:
    if ( v10 < 0 )
      goto LABEL_264;
    if ( v39 != 4 )
      goto LABEL_267;
    v173 = *v41;
  }
  if ( v10 < 0 )
  {
LABEL_264:
    v57 = 0LL;
    goto LABEL_258;
  }
  if ( v28 <= 7 )
  {
LABEL_274:
    v10 = -1073741811;
    goto LABEL_264;
  }
  v42 = v27;
  for ( n = 0; n < 7; ++n )
  {
    v44 = -1LL;
    if ( v42 + 4 >= v42 )
      v44 = v42 + 4;
    v10 = v42 + 4 < v42 ? 0xC0000095 : 0;
    if ( v42 + 4 < v42 )
      goto LABEL_278;
    v45 = v44 + *(unsigned int *)v42;
    v42 = -1LL;
    if ( v45 >= v44 )
      v42 = v45;
    v10 = v45 < v44 ? 0xC0000095 : 0;
    if ( v45 < v44 )
      goto LABEL_278;
  }
  v46 = *(_DWORD *)v42;
  v47 = -1LL;
  if ( v42 + 4 >= v42 )
    v47 = v42 + 4;
  v10 = v42 + 4 < v42 ? 0xC0000095 : 0;
  if ( v42 + 4 < v42 )
  {
LABEL_278:
    v46 = v173;
    v48 = (__int64)v171;
    goto LABEL_99;
  }
  v48 = 0LL;
  if ( v46 )
    v48 = v47;
LABEL_99:
  if ( v10 < 0 )
    goto LABEL_264;
  if ( v28 <= 8 )
  {
    v10 = -1073741811;
  }
  else
  {
    for ( ii = 0; ii < 8; ++ii )
    {
      v50 = -1LL;
      if ( v27 + 4 >= v27 )
        v50 = v27 + 4;
      v10 = v27 + 4 < v27 ? 0xC0000095 : 0;
      if ( v27 + 4 < v27 )
        goto LABEL_281;
      v51 = v50 + *(unsigned int *)v27;
      v27 = -1LL;
      if ( v51 >= v50 )
        v27 = v51;
      v10 = v51 < v50 ? 0xC0000095 : 0;
      if ( v51 < v50 )
        goto LABEL_281;
    }
    v52 = *(_DWORD *)v27;
    v53 = -1LL;
    if ( v27 + 4 >= v27 )
      v53 = v27 + 4;
    v10 = v27 + 4 < v27 ? 0xC0000095 : 0;
    if ( v27 + 4 < v27 )
    {
LABEL_281:
      v52 = v173;
      v54 = (unsigned int *)v171;
      goto LABEL_114;
    }
    v54 = 0LL;
    if ( v52 )
      v54 = (unsigned int *)v53;
LABEL_114:
    if ( v10 >= 0 )
    {
      if ( v52 == 4 )
      {
        v55 = *v54;
        goto LABEL_117;
      }
LABEL_267:
      v10 = -1073741789;
      goto LABEL_264;
    }
  }
  v55 = v173;
LABEL_117:
  if ( v10 < 0 )
    goto LABEL_257;
  if ( v55 )
  {
    v56 = 0;
    Src = ExAllocatePoolWithTag(PagedPool, v55, 0x20534C53u);
    v57 = Src;
    if ( !Src )
    {
      v10 = -1073741801;
      goto LABEL_258;
    }
  }
  else
  {
    v57 = Src;
    v56 = 1;
  }
  if ( qword_1408613B8 )
  {
    v58 = 0LL;
    if ( !v56 )
      v58 = v57;
    v59 = qword_1408613B8(pcbLength, v34, v165, v173, v48, v46, v58, v55, &v166, &v167, &v168);
  }
  else
  {
    v59 = -1073741637;
  }
  v60 = -1;
  v174 = v55 + 4;
  v61 = -1;
  if ( v55 < 0xFFFFFFFC )
    v61 = v55 + 4;
  v10 = v55 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v55 + 4 < 4 )
    goto LABEL_285;
  v62 = v61 + 20;
  v63 = -1;
  if ( v62 >= 0x14 )
    v63 = v62;
  v10 = v62 < 0x14 ? 0xC0000095 : 0;
  if ( v62 < 0x14 )
    goto LABEL_285;
  v64 = v63 + 8;
  v65 = -1;
  if ( v63 + 8 >= v63 )
    v65 = v63 + 8;
  v10 = v64 < v63 ? 0xC0000095 : 0;
  if ( v64 < v63 )
    goto LABEL_285;
  v66 = v65 + 8;
  v67 = -1;
  if ( v65 + 8 >= v65 )
    v67 = v65 + 8;
  v10 = v66 < v65 ? 0xC0000095 : 0;
  if ( v66 < v65 )
  {
LABEL_285:
    v68 = v55 + 4;
  }
  else
  {
    v68 = v55 + 4;
    v69 = v67 + 8;
    v70 = -1;
    if ( v67 + 8 >= v67 )
      v70 = v67 + 8;
    v10 = v69 < v67 ? 0xC0000095 : 0;
    if ( v69 >= v67 )
      v68 = v70;
  }
  if ( v10 < 0 )
    goto LABEL_257;
  v71 = -1;
  if ( v68 < 0xFFFFFFF8 )
    v71 = v68 + 8;
  v10 = v68 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
  if ( v68 + 8 >= 8 )
  {
    v72 = v55 + 4;
    v73 = (v71 + 7) & 0xFFFFFFF8;
    if ( v73 < v71 )
    {
      v10 = -1073741675;
    }
    else
    {
      v74 = v73 + 8;
      v75 = -1;
      if ( v73 + 8 >= v73 )
        v75 = v73 + 8;
      v10 = v74 < v73 ? 0xC0000095 : 0;
      if ( v74 >= v73 )
        v72 = v75;
    }
    if ( v10 < 0 )
      goto LABEL_257;
    v76 = -1;
    v77 = *(_DWORD *)(a2 + 16);
    if ( v72 < 0xFFFFFFFC )
      v76 = v72 + 4;
    v10 = v72 >= 0xFFFFFFFC ? 0xC0000095 : 0;
    if ( v72 + 4 >= 4 )
    {
      v78 = v76 + 4;
      v79 = -1;
      if ( v76 + 4 >= v76 )
        v79 = v76 + 4;
      v10 = v78 < v76 ? 0xC0000095 : 0;
      if ( v78 >= v76 )
      {
        v80 = v79 + v77;
        v81 = -1;
        if ( v79 + v77 >= v79 )
          v81 = v79 + v77;
        v10 = v80 < v79 ? 0xC0000095 : 0;
        if ( v80 >= v79 )
        {
          v82 = v81 + 4;
          v83 = -1;
          if ( v81 + 4 >= v81 )
            v83 = v81 + 4;
          v10 = v82 < v81 ? 0xC0000095 : 0;
          if ( v82 >= v81 )
            v10 = v83 + *(_DWORD *)(a2 + 32) < v83 ? 0xC0000095 : 0;
        }
      }
    }
  }
  if ( v10 < 0 )
    goto LABEL_257;
  if ( !a4 )
  {
    v10 = -1073741811;
    goto LABEL_257;
  }
  v10 = 0;
  *(_DWORD *)(a4 + 4) = v68;
  if ( v68 )
  {
    v84 = ExAllocatePoolWithTag(PagedPool, v68, 0x20534C53u);
    if ( v84 )
    {
      *(_QWORD *)(a4 + 8) = v84;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
  }
  else
  {
    v10 = -1073741762;
  }
  if ( v10 < 0 )
    goto LABEL_257;
  v85 = *(_QWORD *)(a4 + 8);
  v86 = v59 | 0x10000000;
  if ( v85 )
  {
    v87 = 0;
    v88 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v143 = -1;
        if ( *(_DWORD *)v88 < 0xFFFFFFFC )
          v143 = *(_DWORD *)v88 + 4;
        v10 = *(_DWORD *)v88 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v88 + 4) < 4 )
          break;
        v144 = v143;
        v145 = -1LL;
        v146 = &v88[v144];
        v147 = v88;
        if ( v146 >= v88 )
          v145 = (__int64)&v88[v144];
        v88 = (char *)v145;
        v10 = v146 < v147 ? 0xC0000095 : 0;
        if ( v146 < v147 )
          break;
        if ( (unsigned int)++v87 >= *(_DWORD *)a4 )
          goto LABEL_171;
      }
    }
    else
    {
LABEL_171:
      v89 = -1LL;
      if ( v88 + 4 >= v88 )
        v89 = (__int64)(v88 + 4);
      v10 = v88 + 4 < v88 ? 0xC0000095 : 0;
      if ( v88 + 4 >= v88 )
      {
        if ( (unsigned __int64)(v88 + 8) > v85 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_263;
        *(_DWORD *)v88 = 4;
        *(_DWORD *)v89 = v86;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v140 = *(_DWORD *)(a4 + 4);
    v141 = -1;
    v142 = v140 + 8;
    if ( v140 + 8 >= v140 )
      v141 = v140 + 8;
    v10 = v142 < v140 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v141;
    if ( v142 >= v140 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_177;
    }
  }
  if ( v10 < 0 )
    goto LABEL_257;
LABEL_177:
  v90 = *(_QWORD *)(a4 + 8);
  if ( v90 )
  {
    v91 = 0;
    v92 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v93 = -1;
        if ( *(_DWORD *)v92 < 0xFFFFFFFC )
          v93 = *(_DWORD *)v92 + 4;
        v10 = *(_DWORD *)v92 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v92 + 4) < 4 )
          break;
        v94 = v93;
        v95 = -1LL;
        v96 = &v92[v94];
        v97 = v92;
        if ( v96 >= v92 )
          v95 = (__int64)&v92[v94];
        v92 = (char *)v95;
        v10 = v96 < v97 ? 0xC0000095 : 0;
        if ( v96 < v97 )
          break;
        if ( (unsigned int)++v91 >= *(_DWORD *)a4 )
          goto LABEL_186;
      }
    }
    else
    {
LABEL_186:
      v98 = -1LL;
      if ( v92 + 4 >= v92 )
        v98 = (__int64)(v92 + 4);
      v10 = v92 + 4 < v92 ? 0xC0000095 : 0;
      if ( v92 + 4 >= v92 )
      {
        if ( (unsigned __int64)(v92 + 12) > v90 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_263;
        v99 = v171;
        *(_DWORD *)v92 = 8;
        *(_QWORD *)v98 = v99;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v148 = *(_DWORD *)(a4 + 4);
    v149 = -1;
    v150 = v148 + 12;
    if ( v148 + 12 >= v148 )
      v149 = v148 + 12;
    v10 = v150 < v148 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v149;
    if ( v150 >= v148 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_192;
    }
  }
  if ( v10 < 0 )
    goto LABEL_257;
LABEL_192:
  v57 = Src;
  if ( Src )
  {
    if ( v55 )
      goto LABEL_194;
LABEL_309:
    v10 = -1073741811;
    goto LABEL_210;
  }
  if ( v55 )
    goto LABEL_309;
LABEL_194:
  v100 = *(_QWORD *)(a4 + 8);
  if ( !v100 )
  {
    v151 = -1;
    if ( v174 >= 4 )
      v151 = v55 + 4;
    v10 = v55 >= 0xFFFFFFFC ? 0xC0000095 : 0;
    if ( v174 >= 4 )
    {
      v152 = v151;
      v153 = *(_DWORD *)(a4 + 4);
      v154 = -1;
      v155 = v153 + v152;
      if ( v155 >= v153 )
        v154 = v155;
      v10 = v155 < v153 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v154;
      if ( v155 >= v153 )
      {
        ++*(_DWORD *)a4;
LABEL_211:
        v109 = *(_QWORD *)(a4 + 8);
        v110 = v166;
        if ( !v109 )
        {
          v156 = *(_DWORD *)(a4 + 4);
          v157 = -1;
          v158 = v156 + 8;
          if ( v156 + 8 >= v156 )
            v157 = v156 + 8;
          v10 = v158 < v156 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v157;
          if ( v158 >= v156 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_227;
          }
LABEL_226:
          if ( v10 < 0 )
            goto LABEL_257;
LABEL_227:
          v119 = *(_QWORD *)(a4 + 8);
          v120 = v167;
          if ( v119 )
          {
            v121 = *(char **)(a4 + 8);
            v122 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v123 = -1;
                if ( *(_DWORD *)v121 < 0xFFFFFFFC )
                  v123 = *(_DWORD *)v121 + 4;
                v10 = *(_DWORD *)v121 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v121 + 4) < 4 )
                  break;
                v124 = v123;
                v125 = -1LL;
                v126 = &v121[v124];
                v127 = v121;
                if ( v126 >= v121 )
                  v125 = (__int64)&v121[v124];
                v121 = (char *)v125;
                v10 = v126 < v127 ? 0xC0000095 : 0;
                if ( v126 < v127 )
                  break;
                if ( (unsigned int)++v122 >= *(_DWORD *)a4 )
                  goto LABEL_236;
              }
            }
            else
            {
LABEL_236:
              v128 = -1LL;
              if ( v121 + 4 >= v121 )
                v128 = (__int64)(v121 + 4);
              v10 = v121 + 4 < v121 ? 0xC0000095 : 0;
              if ( v121 + 4 >= v121 )
              {
                if ( (unsigned __int64)(v121 + 8) > v119 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_263;
                *(_DWORD *)v121 = 4;
                *(_DWORD *)v128 = v120;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v159 = *(_DWORD *)(a4 + 4);
            v160 = -1;
            v161 = v159 + 8;
            if ( v159 + 8 >= v159 )
              v160 = v159 + 8;
            v10 = v161 < v159 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v160;
            if ( v161 >= v159 )
            {
              ++*(_DWORD *)a4;
LABEL_242:
              v129 = *(_QWORD *)(a4 + 8);
              v130 = v168;
              if ( !v129 )
              {
                v162 = *(_DWORD *)(a4 + 4);
                v163 = v162 + 8;
                if ( v162 + 8 >= v162 )
                  v60 = v162 + 8;
                v10 = v163 < v162 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v60;
                if ( v163 < v162 )
                  goto LABEL_257;
                v10 = 0;
                goto LABEL_256;
              }
              v131 = *(char **)(a4 + 8);
              v132 = 0;
              if ( *(_DWORD *)a4 )
              {
                do
                {
                  v133 = -1;
                  if ( *(_DWORD *)v131 < 0xFFFFFFFC )
                    v133 = *(_DWORD *)v131 + 4;
                  v10 = *(_DWORD *)v131 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v131 + 4) < 4 )
                    goto LABEL_257;
                  v134 = v133;
                  v135 = -1LL;
                  v136 = &v131[v134];
                  v137 = v131;
                  if ( v136 >= v131 )
                    v135 = (__int64)&v131[v134];
                  v131 = (char *)v135;
                  v10 = v136 < v137 ? 0xC0000095 : 0;
                  if ( v136 < v137 )
                    goto LABEL_257;
                }
                while ( (unsigned int)++v132 < *(_DWORD *)a4 );
              }
              v138 = -1LL;
              if ( v131 + 4 >= v131 )
                v138 = (__int64)(v131 + 4);
              v10 = v131 + 4 < v131 ? 0xC0000095 : 0;
              if ( v131 + 4 >= v131 )
              {
                if ( (unsigned __int64)(v131 + 8) <= v129 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v131 = 4;
                  *(_DWORD *)v138 = v130;
LABEL_256:
                  ++*(_DWORD *)a4;
                  goto LABEL_257;
                }
LABEL_263:
                v10 = -1073741789;
              }
LABEL_257:
              v57 = Src;
              goto LABEL_258;
            }
          }
          if ( v10 < 0 )
            goto LABEL_257;
          goto LABEL_242;
        }
        v111 = *(char **)(a4 + 8);
        v112 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v113 = -1;
            if ( *(_DWORD *)v111 < 0xFFFFFFFC )
              v113 = *(_DWORD *)v111 + 4;
            v10 = *(_DWORD *)v111 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v111 + 4) < 4 )
              goto LABEL_226;
            v114 = v113;
            v115 = -1LL;
            v116 = &v111[v114];
            v117 = v111;
            if ( v116 >= v111 )
              v115 = (__int64)&v111[v114];
            v111 = (char *)v115;
            v10 = v116 < v117 ? 0xC0000095 : 0;
            if ( v116 < v117 )
              goto LABEL_226;
            if ( (unsigned int)++v112 >= *(_DWORD *)a4 )
            {
              v57 = Src;
              break;
            }
          }
        }
        v118 = -1LL;
        if ( v111 + 4 >= v111 )
          v118 = (__int64)(v111 + 4);
        v10 = v111 + 4 < v111 ? 0xC0000095 : 0;
        if ( v111 + 4 < v111 )
          goto LABEL_226;
        if ( (unsigned __int64)(v111 + 8) <= v109 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v111 = 4;
          *(_DWORD *)v118 = v110;
          ++*(_DWORD *)a4;
          goto LABEL_226;
        }
        goto LABEL_317;
      }
    }
LABEL_210:
    if ( v10 < 0 )
      goto LABEL_258;
    goto LABEL_211;
  }
  v101 = 0;
  v102 = *(char **)(a4 + 8);
  if ( *(_DWORD *)a4 )
  {
    do
    {
      v103 = -1;
      if ( *(_DWORD *)v102 < 0xFFFFFFFC )
        v103 = *(_DWORD *)v102 + 4;
      v10 = *(_DWORD *)v102 >= 0xFFFFFFFC ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)v102 + 4) < 4 )
        goto LABEL_210;
      v104 = v103;
      v105 = -1LL;
      v106 = &v102[v104];
      v107 = v102;
      if ( v106 >= v102 )
        v105 = (__int64)&v102[v104];
      v102 = (char *)v105;
      v10 = v106 < v107 ? 0xC0000095 : 0;
      if ( v106 < v107 )
        goto LABEL_210;
    }
    while ( (unsigned int)++v101 < *(_DWORD *)a4 );
  }
  v108 = -1LL;
  if ( v102 + 4 >= v102 )
    v108 = (__int64)(v102 + 4);
  v10 = v102 + 4 < v102 ? 0xC0000095 : 0;
  if ( v102 + 4 < v102 )
    goto LABEL_210;
  if ( (unsigned __int64)&v102[v55 + 4] <= v100 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
    *(_DWORD *)v102 = v55;
    if ( v57 )
      memmove((void *)v108, v57, v55);
    ++*(_DWORD *)a4;
    goto LABEL_210;
  }
LABEL_317:
  v10 = -1073741789;
LABEL_258:
  if ( pcbLength )
    ExFreePoolWithTag((PVOID)pcbLength, 0x20534C53u);
  if ( v57 )
    ExFreePoolWithTag(v57, 0x20534C53u);
  return (unsigned int)v10;
}
