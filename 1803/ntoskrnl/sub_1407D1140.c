/*
 * XREFs of sub_1407D1140 @ 0x1407D1140
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14007A3C8 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407D1140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  void *v7; // rsi
  signed int v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int j; // r9d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // r9
  unsigned int *v22; // rax
  void *v23; // r14
  unsigned int k; // edx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  const wchar_t *v29; // r11
  __int64 v30; // rsi
  size_t v31; // r11
  unsigned int v32; // eax
  size_t v33; // rsi
  PVOID PoolWithTag; // rax
  unsigned __int64 v35; // r8
  unsigned int v37; // r11d
  unsigned __int64 v38; // rdx
  unsigned int m; // r9d
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // rcx
  unsigned int v42; // r12d
  __int64 v43; // rcx
  __int64 v44; // r15
  unsigned __int64 v45; // rdx
  unsigned int n; // r9d
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // rcx
  unsigned int v49; // r14d
  __int64 v50; // rcx
  __int64 v51; // rsi
  unsigned int v52; // r13d
  int v53; // ebx
  void *v54; // r11
  unsigned int ii; // edx
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rcx
  unsigned int v58; // ecx
  __int64 v59; // rdx
  unsigned int *v60; // rax
  void *v61; // rdx
  int v62; // r12d
  int v63; // esi
  int v64; // eax
  unsigned int v65; // ecx
  unsigned int v66; // eax
  unsigned int v67; // edx
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
  unsigned int v87; // edx
  int v88; // eax
  unsigned int v89; // ecx
  int v90; // r9d
  char *v91; // r8
  int v92; // eax
  unsigned int v93; // r14d
  __int64 v94; // rax
  char *v95; // rdx
  char *v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r10
  unsigned int v99; // edx
  int v100; // eax
  unsigned int v101; // ecx
  char *v102; // r8
  int v103; // r9d
  int v104; // eax
  unsigned int v105; // r14d
  __int64 v106; // rax
  char *v107; // rdx
  char *v108; // rcx
  __int64 v109; // rdx
  _QWORD *v110; // xmm0_8
  void *v111; // r11
  __int64 v112; // r10
  int v113; // eax
  int v114; // ecx
  unsigned int v115; // edx
  int v116; // eax
  unsigned int v117; // ecx
  char *v118; // r8
  int v119; // r9d
  int v120; // eax
  unsigned int v121; // r11d
  __int64 v122; // rax
  char *v123; // rdx
  char *v124; // rcx
  __int64 v125; // r9
  __int64 v126; // r9
  int v127; // r15d
  unsigned int v128; // ecx
  unsigned int v129; // eax
  char *v130; // r8
  int v131; // r10d
  int v132; // eax
  unsigned int v133; // r11d
  __int64 v134; // rax
  char *v135; // rdx
  char *v136; // rcx
  __int64 v137; // rdx
  int v138; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v139; // [rsp+54h] [rbp-1Ch]
  void *Src; // [rsp+58h] [rbp-18h]
  size_t pcbLength; // [rsp+60h] [rbp-10h] BYREF
  _QWORD *v142; // [rsp+68h] [rbp-8h]
  unsigned int NumberOfBytes; // [rsp+C0h] [rbp+50h]
  unsigned int NumberOfBytesa; // [rsp+C0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  NumberOfBytes = 0;
  Src = 0LL;
  v138 = 0;
  v7 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v11 = -1LL;
      if ( v9 + 4 >= v9 )
        v11 = v9 + 4;
      v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
      if ( v9 + 4 < v9 )
        goto LABEL_18;
      v12 = v11 + *(unsigned int *)v9;
      v9 = -1LL;
      if ( v12 >= v11 )
        v9 = v12;
      v8 = v12 < v11 ? 0xC0000095 : 0;
      if ( v12 < v11 )
        goto LABEL_18;
    }
    v13 = *(_DWORD *)v9;
    v14 = -1LL;
    if ( v9 + 4 >= v9 )
      v14 = v9 + 4;
    v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_18:
      v13 = 0;
      v15 = v142;
      goto LABEL_19;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (_QWORD *)v14;
LABEL_19:
    if ( v8 < 0 )
      goto LABEL_87;
    if ( v13 != 8 )
    {
LABEL_21:
      v8 = -1073741789;
      goto LABEL_87;
    }
    v142 = (_QWORD *)*v15;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_87;
  if ( !v4 || *(_DWORD *)a1 <= 4u )
  {
    v8 = -1073741811;
    goto LABEL_45;
  }
  v16 = v4;
  for ( j = 0; j < 4; ++j )
  {
    v18 = -1LL;
    if ( v16 + 4 >= v16 )
      v18 = v16 + 4;
    v8 = v16 + 4 < v16 ? 0xC0000095 : 0;
    if ( v16 + 4 < v16 )
      goto LABEL_41;
    v19 = v18 + *(unsigned int *)v16;
    v16 = -1LL;
    if ( v19 >= v18 )
      v16 = v19;
    v8 = v19 < v18 ? 0xC0000095 : 0;
    if ( v19 < v18 )
      goto LABEL_41;
  }
  v20 = *(_DWORD *)v16;
  v21 = -1LL;
  if ( v16 + 4 >= v16 )
    v21 = v16 + 4;
  v8 = v16 + 4 < v16 ? 0xC0000095 : 0;
  if ( v16 + 4 < v16 )
  {
LABEL_41:
    v20 = 0;
    v22 = (unsigned int *)v142;
    goto LABEL_42;
  }
  v22 = 0LL;
  if ( v20 )
    v22 = (unsigned int *)v21;
LABEL_42:
  if ( v8 >= 0 )
  {
    if ( v20 != 4 )
      goto LABEL_21;
    NumberOfBytes = *v22;
LABEL_45:
    if ( v8 < 0 )
      goto LABEL_87;
    v23 = 0LL;
    if ( v4 && *(_DWORD *)a1 > 5u )
    {
      for ( k = 0; k < 5; ++k )
      {
        v25 = -1LL;
        if ( v4 + 4 >= v4 )
          v25 = v4 + 4;
        v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
        if ( v4 + 4 < v4 )
          goto LABEL_63;
        v26 = v25 + *(unsigned int *)v4;
        v4 = -1LL;
        if ( v26 >= v25 )
          v4 = v26;
        v8 = v26 < v25 ? 0xC0000095 : 0;
        if ( v26 < v25 )
          goto LABEL_63;
      }
      v27 = *(_DWORD *)v4;
      v28 = -1LL;
      if ( v4 + 4 >= v4 )
        v28 = v4 + 4;
      v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
      {
LABEL_63:
        v27 = NumberOfBytes;
        v29 = (const wchar_t *)v142;
        goto LABEL_64;
      }
      v29 = 0LL;
      if ( v27 )
        v29 = (const wchar_t *)v28;
LABEL_64:
      if ( v8 < 0 )
        goto LABEL_86;
      if ( !v27 || (v27 & 1) != 0 || (v30 = v27, v29[((unsigned __int64)v27 >> 1) - 1]) )
      {
        v8 = -1073741762;
        goto LABEL_83;
      }
      if ( StringCbLengthW(v29, v27, &pcbLength) < 0 || pcbLength + 2 != v30 )
      {
        v8 = -1073741762;
        goto LABEL_83;
      }
      v139 = pcbLength >> 1;
      pcbLength = v31;
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v8 < 0 )
      goto LABEL_86;
    v8 = 0;
    v32 = 2 * v139 + 2;
    v33 = v32;
    if ( 2 * v139 == -2 )
    {
      v8 = -1073741762;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x20534C53u);
      if ( PoolWithTag )
        v23 = PoolWithTag;
      else
        v8 = -1073741801;
    }
    if ( v8 >= 0 )
    {
      memmove(v23, (const void *)pcbLength, v33);
      pcbLength = (size_t)v23;
      v23 = 0LL;
    }
    if ( v23 )
      ExFreePoolWithTag(v23, 0x20534C53u);
LABEL_83:
    if ( v8 >= 0 )
    {
      v35 = *(_QWORD *)(a1 + 8);
      if ( v35 )
      {
        v37 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 > 6u )
        {
          v38 = *(_QWORD *)(a1 + 8);
          for ( m = 0; m < 6; ++m )
          {
            v40 = -1LL;
            if ( v38 + 4 >= v38 )
              v40 = v38 + 4;
            v8 = v38 + 4 < v38 ? 0xC0000095 : 0;
            if ( v38 + 4 < v38 )
              goto LABEL_107;
            v41 = v40 + *(unsigned int *)v38;
            v38 = -1LL;
            if ( v41 >= v40 )
              v38 = v41;
            v8 = v41 < v40 ? 0xC0000095 : 0;
            if ( v41 < v40 )
              goto LABEL_107;
          }
          v42 = *(_DWORD *)v38;
          v43 = -1LL;
          if ( v38 + 4 >= v38 )
            v43 = v38 + 4;
          v8 = v38 + 4 < v38 ? 0xC0000095 : 0;
          if ( v38 + 4 < v38 )
          {
LABEL_107:
            v42 = NumberOfBytes;
            v44 = (__int64)v142;
            goto LABEL_108;
          }
          v44 = 0LL;
          if ( v42 )
            v44 = v43;
LABEL_108:
          if ( v8 < 0 )
            goto LABEL_111;
          if ( v37 <= 7 )
            goto LABEL_110;
          v45 = v35;
          for ( n = 0; n < 7; ++n )
          {
            v47 = -1LL;
            if ( v45 + 4 >= v45 )
              v47 = v45 + 4;
            v8 = v45 + 4 < v45 ? 0xC0000095 : 0;
            if ( v45 + 4 < v45 )
              goto LABEL_126;
            v48 = v47 + *(unsigned int *)v45;
            v45 = -1LL;
            if ( v48 >= v47 )
              v45 = v48;
            v8 = v48 < v47 ? 0xC0000095 : 0;
            if ( v48 < v47 )
              goto LABEL_126;
          }
          v49 = *(_DWORD *)v45;
          v50 = -1LL;
          if ( v45 + 4 >= v45 )
            v50 = v45 + 4;
          v8 = v45 + 4 < v45 ? 0xC0000095 : 0;
          if ( v45 + 4 < v45 )
          {
LABEL_126:
            v49 = NumberOfBytes;
            v51 = (__int64)v142;
            goto LABEL_127;
          }
          v51 = 0LL;
          if ( v49 )
            v51 = v50;
LABEL_127:
          if ( v8 < 0 )
            goto LABEL_111;
          if ( v37 > 8 )
          {
            for ( ii = 0; ii < 8; ++ii )
            {
              v56 = -1LL;
              if ( v35 + 4 >= v35 )
                v56 = v35 + 4;
              v8 = v35 + 4 < v35 ? 0xC0000095 : 0;
              if ( v35 + 4 < v35 )
                goto LABEL_149;
              v57 = v56 + *(unsigned int *)v35;
              v35 = -1LL;
              if ( v57 >= v56 )
                v35 = v57;
              v8 = v57 < v56 ? 0xC0000095 : 0;
              if ( v57 < v56 )
                goto LABEL_149;
            }
            v58 = *(_DWORD *)v35;
            v59 = -1LL;
            if ( v35 + 4 >= v35 )
              v59 = v35 + 4;
            v8 = v35 + 4 < v35 ? 0xC0000095 : 0;
            if ( v35 + 4 < v35 )
            {
LABEL_149:
              v58 = NumberOfBytes;
              v60 = (unsigned int *)v142;
              goto LABEL_150;
            }
            v60 = 0LL;
            if ( v58 )
              v60 = (unsigned int *)v59;
LABEL_150:
            if ( v8 >= 0 )
            {
              if ( v58 != 4 )
                goto LABEL_152;
              v52 = *v60;
LABEL_131:
              if ( v8 < 0 )
                goto LABEL_111;
              if ( v52 )
              {
                v53 = 0;
                Src = ExAllocatePoolWithTag(PagedPool, v52, 0x20534C53u);
                v54 = Src;
                if ( !Src )
                {
                  v8 = -1073741801;
                  v7 = 0LL;
                  goto LABEL_87;
                }
              }
              else
              {
                v54 = Src;
                v53 = 1;
              }
              if ( qword_1408613B0 )
              {
                v61 = 0LL;
                if ( !v53 )
                  v61 = v54;
                v62 = qword_1408613B0(NumberOfBytes, pcbLength, v44, v42, v51, v49, v61, v52, &v138);
              }
              else
              {
                v62 = -1073741637;
              }
              v63 = -1;
              NumberOfBytesa = v52 + 4;
              v64 = -1;
              if ( v52 < 0xFFFFFFFC )
                v64 = v52 + 4;
              v139 = v52 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              v8 = v139;
              if ( v52 + 4 < 4 )
                goto LABEL_171;
              v65 = v64;
              v66 = v64 + 20;
              v67 = -1;
              if ( v65 < 0xFFFFFFEC )
                v67 = v66;
              v8 = v65 >= 0xFFFFFFEC ? 0xC0000095 : 0;
              if ( v66 < 0x14 )
              {
LABEL_171:
                v68 = v52 + 4;
              }
              else
              {
                v68 = v52 + 4;
                v69 = v67 + 8;
                v70 = -1;
                if ( v67 + 8 >= v67 )
                  v70 = v67 + 8;
                v8 = v69 < v67 ? 0xC0000095 : 0;
                if ( v69 >= v67 )
                  v68 = v70;
              }
              if ( v8 < 0 )
                goto LABEL_111;
              v71 = -1;
              if ( v68 < 0xFFFFFFF8 )
                v71 = v68 + 8;
              v8 = v68 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
              if ( v68 + 8 >= 8 )
              {
                v72 = v52 + 4;
                v73 = (v71 + 7) & 0xFFFFFFF8;
                if ( v73 >= v71 )
                {
                  v74 = v73 + 8;
                  v75 = -1;
                  if ( v73 + 8 >= v73 )
                    v75 = v73 + 8;
                  v8 = v74 < v73 ? 0xC0000095 : 0;
                  if ( v74 >= v73 )
                    v72 = v75;
                }
                else
                {
                  v8 = -1073741675;
                }
                if ( v8 < 0 )
                  goto LABEL_111;
                v76 = -1;
                v77 = *(_DWORD *)(a2 + 16);
                if ( v72 < 0xFFFFFFFC )
                  v76 = v72 + 4;
                v8 = v72 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( v72 + 4 >= 4 )
                {
                  v78 = v76 + 4;
                  v79 = -1;
                  if ( v76 + 4 >= v76 )
                    v79 = v76 + 4;
                  v8 = v78 < v76 ? 0xC0000095 : 0;
                  if ( v78 >= v76 )
                  {
                    v80 = v79 + v77;
                    v81 = -1;
                    if ( v79 + v77 >= v79 )
                      v81 = v79 + v77;
                    v8 = v80 < v79 ? 0xC0000095 : 0;
                    if ( v80 >= v79 )
                    {
                      v82 = v81 + 4;
                      v83 = -1;
                      if ( v81 + 4 >= v81 )
                        v83 = v81 + 4;
                      v8 = v82 < v81 ? 0xC0000095 : 0;
                      if ( v82 >= v81 )
                        v8 = v83 + *(_DWORD *)(a2 + 32) < v83 ? 0xC0000095 : 0;
                    }
                  }
                }
              }
              if ( v8 < 0 )
                goto LABEL_111;
              if ( !a4 )
              {
LABEL_110:
                v8 = -1073741811;
                goto LABEL_111;
              }
              v8 = 0;
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
                  v8 = -1073741801;
                }
              }
              else
              {
                v8 = -1073741762;
              }
              if ( v8 < 0 )
                goto LABEL_111;
              v85 = *(_QWORD *)(a4 + 8);
              v86 = v62 | 0x10000000;
              if ( v85 )
              {
                v90 = 0;
                v91 = *(char **)(a4 + 8);
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v92 = -1;
                    if ( *(_DWORD *)v91 < 0xFFFFFFFC )
                      v92 = *(_DWORD *)v91 + 4;
                    v8 = *(_DWORD *)v91 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v91 + 4) < 4 )
                      break;
                    v93 = v92;
                    v94 = -1LL;
                    v95 = &v91[v93];
                    v96 = v91;
                    if ( v95 >= v91 )
                      v94 = (__int64)&v91[v93];
                    v91 = (char *)v94;
                    v8 = v95 < v96 ? 0xC0000095 : 0;
                    if ( v95 < v96 )
                      break;
                    if ( (unsigned int)++v90 >= *(_DWORD *)a4 )
                      goto LABEL_217;
                  }
                }
                else
                {
LABEL_217:
                  v97 = -1LL;
                  if ( v91 + 4 >= v91 )
                    v97 = (__int64)(v91 + 4);
                  v8 = v91 + 4 < v91 ? 0xC0000095 : 0;
                  if ( v91 + 4 >= v91 )
                  {
                    if ( (unsigned __int64)(v91 + 8) > v85 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      goto LABEL_152;
                    *(_DWORD *)v91 = 4;
                    *(_DWORD *)v97 = v86;
                    ++*(_DWORD *)a4;
                  }
                }
              }
              else
              {
                v87 = *(_DWORD *)(a4 + 4);
                v88 = -1;
                v89 = v87 + 8;
                if ( v87 + 8 >= v87 )
                  v88 = v87 + 8;
                v8 = v89 < v87 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v88;
                if ( v89 >= v87 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_223;
                }
              }
              if ( v8 < 0 )
                goto LABEL_111;
LABEL_223:
              v98 = *(_QWORD *)(a4 + 8);
              if ( v98 )
              {
                v102 = *(char **)(a4 + 8);
                v103 = 0;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v104 = -1;
                    if ( *(_DWORD *)v102 < 0xFFFFFFFC )
                      v104 = *(_DWORD *)v102 + 4;
                    v8 = *(_DWORD *)v102 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v102 + 4) < 4 )
                      break;
                    v105 = v104;
                    v106 = -1LL;
                    v107 = &v102[v105];
                    v108 = v102;
                    if ( v107 >= v102 )
                      v106 = (__int64)&v102[v105];
                    v102 = (char *)v106;
                    v8 = v107 < v108 ? 0xC0000095 : 0;
                    if ( v107 < v108 )
                      break;
                    if ( (unsigned int)++v103 >= *(_DWORD *)a4 )
                      goto LABEL_236;
                  }
                }
                else
                {
LABEL_236:
                  v109 = -1LL;
                  if ( v102 + 4 >= v102 )
                    v109 = (__int64)(v102 + 4);
                  v8 = v102 + 4 < v102 ? 0xC0000095 : 0;
                  if ( v102 + 4 >= v102 )
                  {
                    if ( (unsigned __int64)(v102 + 12) > v98 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      goto LABEL_152;
                    v110 = v142;
                    *(_DWORD *)v102 = 8;
                    *(_QWORD *)v109 = v110;
                    ++*(_DWORD *)a4;
                  }
                }
              }
              else
              {
                v99 = *(_DWORD *)(a4 + 4);
                v100 = -1;
                v101 = v99 + 12;
                if ( v99 + 12 >= v99 )
                  v100 = v99 + 12;
                v8 = v101 < v99 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v100;
                if ( v101 >= v99 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_242;
                }
              }
              if ( v8 < 0 )
                goto LABEL_111;
LABEL_242:
              v111 = Src;
              if ( Src )
              {
                if ( !v52 )
                  goto LABEL_244;
              }
              else if ( v52 )
              {
LABEL_244:
                v8 = -1073741811;
                goto LABEL_270;
              }
              v112 = *(_QWORD *)(a4 + 8);
              if ( v112 )
              {
                v118 = *(char **)(a4 + 8);
                v119 = 0;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v120 = -1;
                    if ( *(_DWORD *)v118 < 0xFFFFFFFC )
                      v120 = *(_DWORD *)v118 + 4;
                    v8 = *(_DWORD *)v118 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v118 + 4) < 4 )
                      break;
                    v121 = v120;
                    v122 = -1LL;
                    v123 = &v118[v121];
                    v124 = v118;
                    if ( v123 >= v118 )
                      v122 = (__int64)&v118[v121];
                    v118 = (char *)v122;
                    v8 = v123 < v124 ? 0xC0000095 : 0;
                    if ( v123 < v124 )
                      break;
                    if ( (unsigned int)++v119 >= *(_DWORD *)a4 )
                    {
                      v111 = Src;
                      goto LABEL_263;
                    }
                  }
                }
                else
                {
LABEL_263:
                  v125 = -1LL;
                  if ( v118 + 4 >= v118 )
                    v125 = (__int64)(v118 + 4);
                  v8 = v118 + 4 < v118 ? 0xC0000095 : 0;
                  if ( v118 + 4 >= v118 )
                  {
                    if ( (unsigned __int64)&v118[v52 + 4] > v112 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      goto LABEL_152;
                    *(_DWORD *)v118 = v52;
                    if ( v111 )
                      memmove((void *)v125, v111, v52);
                    ++*(_DWORD *)a4;
                  }
                }
              }
              else
              {
                v113 = -1;
                if ( NumberOfBytesa >= 4 )
                  v113 = v52 + 4;
                v8 = v139;
                if ( NumberOfBytesa >= 4 )
                {
                  v114 = v113;
                  v115 = *(_DWORD *)(a4 + 4);
                  v116 = -1;
                  v117 = v115 + v114;
                  if ( v117 >= v115 )
                    v116 = v117;
                  v8 = v117 < v115 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v116;
                  if ( v117 >= v115 )
                  {
                    ++*(_DWORD *)a4;
                    goto LABEL_271;
                  }
                }
              }
LABEL_270:
              if ( v8 < 0 )
                goto LABEL_111;
LABEL_271:
              v126 = *(_QWORD *)(a4 + 8);
              v127 = v138;
              if ( !v126 )
              {
                v128 = *(_DWORD *)(a4 + 4);
                v129 = v128 + 8;
                if ( v128 + 8 >= v128 )
                  v63 = v128 + 8;
                v8 = v129 < v128 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v63;
                if ( v129 < v128 )
                  goto LABEL_111;
                v8 = 0;
                goto LABEL_289;
              }
              v130 = *(char **)(a4 + 8);
              v131 = 0;
              if ( *(_DWORD *)a4 )
              {
                do
                {
                  v132 = -1;
                  if ( *(_DWORD *)v130 < 0xFFFFFFFC )
                    v132 = *(_DWORD *)v130 + 4;
                  v8 = *(_DWORD *)v130 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v130 + 4) < 4 )
                    goto LABEL_111;
                  v133 = v132;
                  v134 = -1LL;
                  v135 = &v130[v133];
                  v136 = v130;
                  if ( v135 >= v130 )
                    v134 = (__int64)&v130[v133];
                  v130 = (char *)v134;
                  v8 = v135 < v136 ? 0xC0000095 : 0;
                  if ( v135 < v136 )
                    goto LABEL_111;
                }
                while ( (unsigned int)++v131 < *(_DWORD *)a4 );
              }
              v137 = -1LL;
              if ( v130 + 4 >= v130 )
                v137 = (__int64)(v130 + 4);
              v8 = v130 + 4 < v130 ? 0xC0000095 : 0;
              if ( v130 + 4 >= v130 )
              {
                if ( (unsigned __int64)(v130 + 8) <= v126 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v130 = 4;
                  *(_DWORD *)v137 = v127;
LABEL_289:
                  ++*(_DWORD *)a4;
                  goto LABEL_111;
                }
LABEL_152:
                v8 = -1073741789;
              }
LABEL_111:
              v7 = Src;
              goto LABEL_87;
            }
          }
          else
          {
            v8 = -1073741811;
          }
          v52 = NumberOfBytes;
          goto LABEL_131;
        }
      }
      v8 = -1073741811;
    }
LABEL_86:
    v7 = 0LL;
  }
LABEL_87:
  if ( pcbLength )
    ExFreePoolWithTag((PVOID)pcbLength, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v8;
}
