/*
 * XREFs of sub_1407282B8 @ 0x1407282B8
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14006B320 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407282B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  void *v7; // r15
  signed int v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned int i; // r10d
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  void *v16; // rcx
  unsigned int j; // r9d
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  const wchar_t *v22; // r11
  unsigned __int64 v23; // r8
  __int64 v24; // rsi
  void *v25; // r11
  unsigned int v26; // eax
  size_t v27; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v29; // r11d
  unsigned __int64 v30; // rdx
  unsigned int k; // r10d
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  unsigned int v34; // r9d
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned int m; // r10d
  __int64 v38; // rax
  unsigned __int64 v39; // r9
  int v40; // ecx
  __int64 v41; // r9
  unsigned int *v42; // rax
  unsigned __int64 v44; // rdx
  unsigned int n; // r10d
  __int64 v46; // rax
  unsigned __int64 v47; // r9
  unsigned int v48; // r14d
  __int64 v49; // rcx
  __int64 v50; // rsi
  unsigned int v51; // r13d
  int v52; // ebx
  PVOID v53; // r11
  unsigned int ii; // r9d
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned int v57; // ecx
  __int64 v58; // rdx
  unsigned int *v59; // rax
  PVOID v60; // rcx
  int v61; // r15d
  unsigned int v62; // ecx
  int v63; // esi
  int v64; // eax
  unsigned int v65; // r8d
  unsigned int v66; // ecx
  unsigned int v67; // edx
  unsigned int v68; // r9d
  unsigned int v69; // eax
  int v70; // ecx
  unsigned int v71; // ecx
  int v72; // r11d
  unsigned int v73; // eax
  unsigned int v74; // edx
  unsigned int v75; // eax
  unsigned int v76; // ecx
  unsigned int v77; // eax
  unsigned int v78; // edx
  PVOID v79; // rax
  __int64 v80; // r10
  int v81; // r15d
  unsigned int v82; // edx
  int v83; // eax
  unsigned int v84; // ecx
  int v85; // r9d
  char *v86; // r8
  unsigned int v87; // r11d
  int v88; // ecx
  char *v89; // rcx
  char *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r10
  unsigned int v94; // edx
  int v95; // eax
  unsigned int v96; // ecx
  int v97; // r9d
  char *v98; // r8
  unsigned int v99; // r11d
  int v100; // ecx
  char *v101; // rcx
  char *v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  _QWORD *v105; // xmm0_8
  const void *v106; // r11
  __int64 v107; // r9
  int v108; // r15d
  unsigned int v109; // edx
  int v110; // eax
  unsigned int v111; // ecx
  __int64 v112; // r13
  __int64 v113; // r10
  unsigned int v114; // ecx
  unsigned int v115; // edx
  int v116; // eax
  unsigned int v117; // ecx
  int v118; // r9d
  char *v119; // r8
  unsigned int v120; // r11d
  int v121; // ecx
  char *v122; // rcx
  char *v123; // rdx
  __int64 v124; // rax
  __int64 v125; // r9
  char *v126; // r8
  int v127; // r10d
  unsigned int v128; // r11d
  int v129; // ecx
  char *v130; // rcx
  char *v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // r9
  int v135; // r15d
  unsigned int v136; // edx
  int v137; // eax
  unsigned int v138; // ecx
  int v139; // r10d
  char *v140; // r8
  unsigned int v141; // r11d
  int v142; // ecx
  char *v143; // rcx
  char *v144; // rdx
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // r9
  int v148; // r15d
  unsigned int v149; // ecx
  unsigned int v150; // eax
  int v151; // r10d
  char *v152; // r8
  unsigned int v153; // r11d
  int v154; // ecx
  char *v155; // rcx
  char *v156; // rdx
  __int64 v157; // rax
  PVOID v158; // [rsp+68h] [rbp-19h]
  size_t pcbLength; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v160; // [rsp+78h] [rbp-9h]
  _QWORD *v161; // [rsp+80h] [rbp-1h]
  int v162; // [rsp+88h] [rbp+7h] BYREF
  int v163; // [rsp+8Ch] [rbp+Bh] BYREF
  int v164; // [rsp+90h] [rbp+Fh] BYREF
  void *Src; // [rsp+98h] [rbp+17h]
  unsigned int NumberOfBytes; // [rsp+F8h] [rbp+77h]
  int NumberOfBytesa; // [rsp+F8h] [rbp+77h]

  v4 = *(_QWORD *)(a1 + 8);
  NumberOfBytes = 0;
  v158 = 0LL;
  v162 = 0;
  v163 = 0;
  v7 = 0LL;
  v164 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *(unsigned int *)v9;
      v12 = v9 + 4;
      if ( v9 + 4 < v9 )
      {
        v12 = -1LL;
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
      }
      if ( v8 < 0 )
        goto LABEL_19;
      v9 = -1LL;
      if ( v12 + v11 >= v12 )
        v9 = v12 + v11;
      v8 = v12 + v11 < v12 ? 0xC0000095 : 0;
      if ( v12 + v11 < v12 )
        goto LABEL_19;
    }
    v13 = *(_DWORD *)v9;
    v14 = -1LL;
    if ( v9 + 4 >= v9 )
      v14 = v9 + 4;
    v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_19:
      v13 = 0;
      v15 = v161;
      goto LABEL_20;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (_QWORD *)v14;
LABEL_20:
    if ( v8 < 0 )
      goto LABEL_23;
    if ( v13 != 8 )
    {
      v8 = -1073741789;
LABEL_23:
      v16 = 0LL;
      goto LABEL_102;
    }
    v161 = (_QWORD *)*v15;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_23;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v18 = *(unsigned int *)v4;
      v19 = v4 + 4;
      if ( v4 + 4 < v4 )
      {
        v19 = -1LL;
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
      }
      if ( v8 < 0 )
        goto LABEL_44;
      v4 = -1LL;
      if ( v19 + v18 >= v19 )
        v4 = v19 + v18;
      v8 = v19 + v18 < v19 ? 0xC0000095 : 0;
      if ( v19 + v18 < v19 )
        goto LABEL_44;
    }
    v20 = *(_DWORD *)v4;
    v21 = -1LL;
    if ( v4 + 4 >= v4 )
      v21 = v4 + 4;
    v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_44:
      v20 = 0;
      v22 = (const wchar_t *)v161;
      goto LABEL_45;
    }
    v22 = 0LL;
    if ( v20 )
      v22 = (const wchar_t *)v21;
LABEL_45:
    if ( v8 < 0 )
      goto LABEL_23;
    if ( !v20 || (v20 & 1) != 0 || (v24 = v20, v22[((unsigned __int64)v20 >> 1) - 1]) )
    {
LABEL_47:
      v8 = -1073741762;
      goto LABEL_23;
    }
    if ( StringCbLengthW(v22, v20, &pcbLength) < 0 || pcbLength + 2 != v24 )
    {
      v8 = -1073741762;
      goto LABEL_23;
    }
    v160 = pcbLength >> 1;
    Src = v25;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_23;
  v26 = 2 * v160 + 2;
  if ( 2 * v160 == -2 )
    goto LABEL_47;
  v27 = v26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x20534C53u);
  pcbLength = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801;
    goto LABEL_23;
  }
  memmove(PoolWithTag, Src, v27);
  v23 = *(_QWORD *)(a1 + 8);
  if ( v23 )
  {
    v29 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 5u )
    {
      v30 = *(_QWORD *)(a1 + 8);
      for ( k = 0; k < 5; ++k )
      {
        v32 = *(unsigned int *)v30;
        v33 = v30 + 4;
        if ( v30 + 4 < v30 )
        {
          v33 = -1LL;
          v8 = -1073741675;
        }
        else
        {
          v8 = 0;
        }
        if ( v8 < 0 )
          goto LABEL_77;
        v30 = -1LL;
        if ( v33 + v32 >= v33 )
          v30 = v33 + v32;
        v8 = v33 + v32 < v33 ? 0xC0000095 : 0;
        if ( v33 + v32 < v33 )
          goto LABEL_77;
      }
      v34 = *(_DWORD *)v30;
      v160 = *(_DWORD *)v30;
      v35 = -1LL;
      if ( v30 + 4 >= v30 )
        v35 = v30 + 4;
      v8 = v30 + 4 < v30 ? 0xC0000095 : 0;
      if ( v30 + 4 < v30 )
      {
LABEL_77:
        v7 = v161;
        v160 = 0;
        goto LABEL_78;
      }
      if ( v34 )
        v7 = (void *)v35;
LABEL_78:
      if ( v8 < 0 )
        goto LABEL_100;
      if ( v29 > 6 )
      {
        v36 = v23;
        for ( m = 0; m < 6; ++m )
        {
          v38 = *(unsigned int *)v36;
          v39 = v36 + 4;
          if ( v36 + 4 < v36 )
          {
            v39 = -1LL;
            v8 = -1073741675;
          }
          else
          {
            v8 = 0;
          }
          if ( v8 < 0 )
            goto LABEL_96;
          v36 = -1LL;
          if ( v39 + v38 >= v39 )
            v36 = v39 + v38;
          v8 = v39 + v38 < v39 ? 0xC0000095 : 0;
          if ( v39 + v38 < v39 )
            goto LABEL_96;
        }
        v40 = *(_DWORD *)v36;
        v41 = -1LL;
        if ( v36 + 4 >= v36 )
          v41 = v36 + 4;
        v8 = v36 + 4 < v36 ? 0xC0000095 : 0;
        if ( v36 + 4 < v36 )
        {
LABEL_96:
          v40 = 0;
          v42 = (unsigned int *)v161;
          goto LABEL_97;
        }
        v42 = 0LL;
        if ( v40 )
          v42 = (unsigned int *)v41;
LABEL_97:
        if ( v8 < 0 )
          goto LABEL_100;
        if ( v40 != 4 )
          goto LABEL_99;
        NumberOfBytes = *v42;
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 < 0 )
        goto LABEL_100;
      if ( v29 <= 7 )
      {
        v8 = -1073741811;
        goto LABEL_100;
      }
      v44 = v23;
      for ( n = 0; n < 7; ++n )
      {
        v46 = *(unsigned int *)v44;
        v47 = v44 + 4;
        if ( v44 + 4 < v44 )
        {
          v47 = -1LL;
          v8 = -1073741675;
        }
        else
        {
          v8 = 0;
        }
        if ( v8 < 0 )
          goto LABEL_126;
        v44 = -1LL;
        if ( v47 + v46 >= v47 )
          v44 = v47 + v46;
        v8 = v47 + v46 < v47 ? 0xC0000095 : 0;
        if ( v47 + v46 < v47 )
          goto LABEL_126;
      }
      v48 = *(_DWORD *)v44;
      v49 = -1LL;
      if ( v44 + 4 >= v44 )
        v49 = v44 + 4;
      v8 = v44 + 4 < v44 ? 0xC0000095 : 0;
      if ( v44 + 4 < v44 )
      {
LABEL_126:
        v48 = NumberOfBytes;
        v50 = (__int64)v161;
        goto LABEL_127;
      }
      v50 = 0LL;
      if ( v48 )
        v50 = v49;
LABEL_127:
      if ( v8 < 0 )
        goto LABEL_100;
      if ( v29 <= 8 )
      {
        v8 = -1073741811;
LABEL_130:
        v51 = NumberOfBytes;
        goto LABEL_131;
      }
      for ( ii = 0; ii < 8; ++ii )
      {
        v55 = *(unsigned int *)v23;
        v56 = v23 + 4;
        if ( v23 + 4 < v23 )
        {
          v56 = -1LL;
          v8 = -1073741675;
        }
        else
        {
          v8 = 0;
        }
        if ( v8 < 0 )
          goto LABEL_150;
        v23 = -1LL;
        if ( v56 + v55 >= v56 )
          v23 = v56 + v55;
        v8 = v56 + v55 < v56 ? 0xC0000095 : 0;
        if ( v56 + v55 < v56 )
          goto LABEL_150;
      }
      v57 = *(_DWORD *)v23;
      v58 = -1LL;
      if ( v23 + 4 >= v23 )
        v58 = v23 + 4;
      v8 = v23 + 4 < v23 ? 0xC0000095 : 0;
      if ( v23 + 4 < v23 )
      {
LABEL_150:
        v57 = NumberOfBytes;
        v59 = (unsigned int *)v161;
        goto LABEL_151;
      }
      v59 = 0LL;
      if ( v57 )
        v59 = (unsigned int *)v58;
LABEL_151:
      if ( v8 < 0 )
        goto LABEL_130;
      if ( v57 == 4 )
      {
        v51 = *v59;
LABEL_131:
        if ( v8 < 0 )
        {
          v7 = 0LL;
          goto LABEL_101;
        }
        if ( v51 )
        {
          v52 = 0;
          v158 = ExAllocatePoolWithTag(PagedPool, v51, 0x20534C53u);
          v53 = v158;
          if ( !v158 )
          {
            v8 = -1073741801;
            v7 = 0LL;
            goto LABEL_101;
          }
        }
        else
        {
          v52 = 1;
          v53 = 0LL;
        }
        if ( qword_1407AC3C8 )
        {
          v60 = v53;
          if ( v52 )
            v60 = 0LL;
          v61 = qword_1407AC3C8(pcbLength, v7, v160, NumberOfBytes, v50, v48, v60, v51, &v162, &v163, &v164);
        }
        else
        {
          v61 = -1073741637;
        }
        v62 = 12;
        v63 = -1;
        v160 = v51 + 4;
        v64 = -1;
        if ( v51 < 0xFFFFFFFC )
          v64 = v51 + 4;
        LODWORD(Src) = v51 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        v8 = (int)Src;
        if ( v51 + 4 >= 4 )
          v62 = v64;
        if ( v51 >= 0xFFFFFFFC )
        {
          v65 = NumberOfBytes;
        }
        else
        {
          if ( v62 >= 0xFFFFFFEC || v62 + 28 < v62 + 20 || v62 + 36 < v62 + 28 || (v65 = v62 + 44, v62 + 44 < v62 + 36) )
          {
            v8 = -1073741675;
            goto LABEL_171;
          }
          v8 = 0;
        }
        if ( v8 < 0 )
          goto LABEL_171;
        v66 = -1;
        if ( v65 < 0xFFFFFFF8 )
          v66 = v65 + 8;
        v8 = v65 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
        if ( v65 + 8 >= 8 )
        {
          v67 = (v66 + 7) & 0xFFFFFFF8;
          if ( v67 >= v66 )
          {
            v69 = v67 + 8;
            v70 = -1;
            if ( v67 + 8 >= v67 )
              v70 = v67 + 8;
            v8 = v69 < v67 ? 0xC0000095 : 0;
            v68 = NumberOfBytes;
            if ( v69 >= v67 )
              v68 = v70;
          }
          else
          {
            v8 = -1073741675;
            v68 = NumberOfBytes;
          }
          if ( v8 < 0 )
            goto LABEL_171;
          v71 = -1;
          v72 = *(_DWORD *)(a2 + 16);
          if ( v68 < 0xFFFFFFFC )
            v71 = v68 + 4;
          v8 = v68 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v68 + 4 >= 4 )
          {
            v73 = v71 + 4;
            v74 = -1;
            if ( v71 + 4 >= v71 )
              v74 = v71 + 4;
            v8 = v73 < v71 ? 0xC0000095 : 0;
            if ( v73 >= v71 )
            {
              v75 = v74 + v72;
              v76 = -1;
              if ( v74 + v72 >= v74 )
                v76 = v74 + v72;
              v8 = v75 < v74 ? 0xC0000095 : 0;
              if ( v75 >= v74 )
              {
                v77 = v76 + 4;
                v78 = -1;
                if ( v76 + 4 >= v76 )
                  v78 = v76 + 4;
                v8 = v77 < v76 ? 0xC0000095 : 0;
                if ( v77 >= v76 )
                  v8 = v78 + *(_DWORD *)(a2 + 32) < v78 ? 0xC0000095 : 0;
              }
            }
          }
        }
        if ( v8 < 0 )
        {
LABEL_171:
          v7 = v158;
          goto LABEL_101;
        }
        if ( !a4 )
        {
          v8 = -1073741811;
          goto LABEL_171;
        }
        *(_DWORD *)(a4 + 4) = v65;
        v8 = 0;
        if ( v65 )
        {
          v79 = ExAllocatePoolWithTag(PagedPool, v65, 0x20534C53u);
          if ( v79 )
          {
            *(_QWORD *)(a4 + 8) = v79;
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
          goto LABEL_171;
        v80 = *(_QWORD *)(a4 + 8);
        v81 = v61 | 0x10000000;
        NumberOfBytesa = v81;
        if ( v80 )
        {
          v85 = 0;
          v86 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            v87 = v81;
            while ( 1 )
            {
              v88 = -1;
              if ( *(_DWORD *)v86 < 0xFFFFFFFC )
                v88 = *(_DWORD *)v86 + 4;
              if ( (unsigned int)(*(_DWORD *)v86 + 4) >= 4 )
                v87 = v88;
              v8 = *(_DWORD *)v86 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( *(_DWORD *)v86 >= 0xFFFFFFFC )
                break;
              v89 = v86;
              v90 = &v86[v87];
              v91 = -1LL;
              if ( v90 >= v86 )
                v91 = (__int64)&v86[v87];
              v86 = (char *)v91;
              v8 = v90 < v89 ? 0xC0000095 : 0;
              if ( v90 < v89 )
                break;
              if ( (unsigned int)++v85 >= *(_DWORD *)a4 )
                goto LABEL_222;
            }
          }
          else
          {
LABEL_222:
            v92 = -1LL;
            if ( v86 + 4 >= v86 )
              v92 = (__int64)(v86 + 4);
            v8 = v86 + 4 < v86 ? 0xC0000095 : 0;
            if ( v86 + 4 >= v86 )
            {
              if ( (unsigned __int64)(v86 + 8) > v80 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_226;
              *(_DWORD *)v86 = 4;
              *(_DWORD *)v92 = v81;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v82 = *(_DWORD *)(a4 + 4);
          v83 = -1;
          v84 = v82 + 8;
          if ( v82 + 8 >= v82 )
            v83 = v82 + 8;
          v8 = v84 < v82 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v83;
          if ( v84 >= v82 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_229;
          }
        }
        if ( v8 < 0 )
          goto LABEL_171;
LABEL_229:
        v93 = *(_QWORD *)(a4 + 8);
        if ( v93 )
        {
          v97 = 0;
          v98 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            v99 = v81;
            while ( 1 )
            {
              v100 = -1;
              if ( *(_DWORD *)v98 < 0xFFFFFFFC )
                v100 = *(_DWORD *)v98 + 4;
              if ( (unsigned int)(*(_DWORD *)v98 + 4) >= 4 )
                v99 = v100;
              v8 = *(_DWORD *)v98 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( *(_DWORD *)v98 >= 0xFFFFFFFC )
                break;
              v101 = v98;
              v102 = &v98[v99];
              v103 = -1LL;
              if ( v102 >= v98 )
                v103 = (__int64)&v98[v99];
              v98 = (char *)v103;
              v8 = v102 < v101 ? 0xC0000095 : 0;
              if ( v102 < v101 )
                break;
              if ( (unsigned int)++v97 >= *(_DWORD *)a4 )
                goto LABEL_245;
            }
          }
          else
          {
LABEL_245:
            v104 = -1LL;
            if ( v98 + 4 >= v98 )
              v104 = (__int64)(v98 + 4);
            v8 = v98 + 4 < v98 ? 0xC0000095 : 0;
            if ( v98 + 4 >= v98 )
            {
              if ( (unsigned __int64)(v98 + 12) > v93 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_226;
              v105 = v161;
              *(_DWORD *)v98 = 8;
              *(_QWORD *)v104 = v105;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v94 = *(_DWORD *)(a4 + 4);
          v95 = -1;
          v96 = v94 + 12;
          if ( v94 + 12 >= v94 )
            v95 = v94 + 12;
          v8 = v96 < v94 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v95;
          if ( v96 >= v94 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_251;
          }
        }
        if ( v8 < 0 )
          goto LABEL_171;
LABEL_251:
        v106 = v158;
        if ( v158 )
        {
          if ( !v51 )
            goto LABEL_253;
        }
        else if ( v51 )
        {
LABEL_253:
          v8 = -1073741811;
          goto LABEL_254;
        }
        v113 = *(_QWORD *)(a4 + 8);
        if ( v113 )
        {
          v118 = 0;
          v119 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            v120 = v81;
            while ( 1 )
            {
              v121 = -1;
              if ( *(_DWORD *)v119 < 0xFFFFFFFC )
                v121 = *(_DWORD *)v119 + 4;
              if ( (unsigned int)(*(_DWORD *)v119 + 4) >= 4 )
                v120 = v121;
              v8 = *(_DWORD *)v119 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( *(_DWORD *)v119 >= 0xFFFFFFFC )
                break;
              v122 = v119;
              v123 = &v119[v120];
              v124 = -1LL;
              if ( v123 >= v119 )
                v124 = (__int64)&v119[v120];
              v119 = (char *)v124;
              v8 = v123 < v122 ? 0xC0000095 : 0;
              if ( v123 < v122 )
                break;
              if ( (unsigned int)++v118 >= *(_DWORD *)a4 )
              {
                v106 = v158;
                goto LABEL_281;
              }
            }
          }
          else
          {
LABEL_281:
            v125 = -1LL;
            if ( v119 + 4 >= v119 )
              v125 = (__int64)(v119 + 4);
            v8 = v119 + 4 < v119 ? 0xC0000095 : 0;
            if ( v119 + 4 >= v119 )
            {
              if ( (unsigned __int64)&v119[v51 + 4] > v113 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_226;
              *(_DWORD *)v119 = v51;
              if ( v106 )
                memmove((void *)v125, v106, v51);
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v114 = v81;
          v8 = (int)Src;
          if ( v160 >= 4 )
            v114 = v160;
          if ( (int)Src < 0 )
            goto LABEL_171;
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
            goto LABEL_255;
          }
        }
LABEL_254:
        if ( v8 < 0 )
          goto LABEL_171;
LABEL_255:
        v107 = *(_QWORD *)(a4 + 8);
        v108 = v162;
        if ( v107 )
        {
          v126 = *(char **)(a4 + 8);
          v127 = 0;
          if ( *(_DWORD *)a4 )
          {
            v128 = NumberOfBytesa;
            v112 = -1LL;
            while ( 1 )
            {
              v129 = -1;
              if ( *(_DWORD *)v126 < 0xFFFFFFFC )
                v129 = *(_DWORD *)v126 + 4;
              if ( (unsigned int)(*(_DWORD *)v126 + 4) >= 4 )
                v128 = v129;
              v8 = *(_DWORD *)v126 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( *(_DWORD *)v126 >= 0xFFFFFFFC )
                break;
              v130 = v126;
              v131 = &v126[v128];
              v132 = -1LL;
              if ( v131 >= v126 )
                v132 = (__int64)&v126[v128];
              v126 = (char *)v132;
              v8 = v131 < v130 ? 0xC0000095 : 0;
              if ( v131 < v130 )
                break;
              if ( (unsigned int)++v127 >= *(_DWORD *)a4 )
                goto LABEL_299;
            }
LABEL_305:
            if ( v8 < 0 )
              goto LABEL_171;
            goto LABEL_306;
          }
LABEL_299:
          v133 = -1LL;
          if ( v126 + 4 >= v126 )
            v133 = (__int64)(v126 + 4);
          v8 = v126 + 4 < v126 ? 0xC0000095 : 0;
          if ( v126 + 4 >= v126 )
          {
            if ( (unsigned __int64)(v126 + 8) > v107 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_226;
            *(_DWORD *)v126 = 4;
            *(_DWORD *)v133 = v108;
            ++*(_DWORD *)a4;
          }
        }
        else
        {
          v109 = *(_DWORD *)(a4 + 4);
          v110 = -1;
          v111 = v109 + 8;
          if ( v109 + 8 >= v109 )
            v110 = v109 + 8;
          v8 = v111 < v109 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v110;
          if ( v111 >= v109 )
          {
            ++*(_DWORD *)a4;
            v112 = -1LL;
LABEL_306:
            v134 = *(_QWORD *)(a4 + 8);
            v135 = v163;
            if ( !v134 )
            {
              v136 = *(_DWORD *)(a4 + 4);
              v137 = -1;
              v138 = v136 + 8;
              if ( v136 + 8 >= v136 )
                v137 = v136 + 8;
              v8 = v138 < v136 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v137;
              if ( v138 >= v136 )
              {
                ++*(_DWORD *)a4;
                goto LABEL_328;
              }
LABEL_327:
              if ( v8 < 0 )
                goto LABEL_171;
LABEL_328:
              v147 = *(_QWORD *)(a4 + 8);
              v148 = v164;
              if ( !v147 )
              {
                v149 = *(_DWORD *)(a4 + 4);
                v150 = v149 + 8;
                if ( v149 + 8 >= v149 )
                  v63 = v149 + 8;
                v8 = v150 < v149 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v63;
                if ( v150 >= v149 )
                {
                  ++*(_DWORD *)a4;
                  v8 = 0;
                }
                goto LABEL_171;
              }
              v151 = 0;
              v152 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                v153 = NumberOfBytesa;
                do
                {
                  v154 = -1;
                  if ( *(_DWORD *)v152 < 0xFFFFFFFC )
                    v154 = *(_DWORD *)v152 + 4;
                  if ( (unsigned int)(*(_DWORD *)v152 + 4) >= 4 )
                    v153 = v154;
                  v8 = *(_DWORD *)v152 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( *(_DWORD *)v152 >= 0xFFFFFFFC )
                    goto LABEL_171;
                  v155 = v152;
                  v156 = &v152[v153];
                  v157 = -1LL;
                  if ( v156 >= v152 )
                    v157 = (__int64)&v152[v153];
                  v152 = (char *)v157;
                  v8 = v156 < v155 ? 0xC0000095 : 0;
                  if ( v156 < v155 )
                    goto LABEL_171;
                }
                while ( (unsigned int)++v151 < *(_DWORD *)a4 );
              }
              if ( v152 + 4 >= v152 )
                v112 = (__int64)(v152 + 4);
              v8 = v152 + 4 < v152 ? 0xC0000095 : 0;
              if ( v152 + 4 >= v152 )
              {
                if ( (unsigned __int64)(v152 + 8) <= v147 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v152 = 4;
                  *(_DWORD *)v112 = v148;
                  ++*(_DWORD *)a4;
                  goto LABEL_171;
                }
                goto LABEL_226;
              }
              goto LABEL_171;
            }
            v139 = 0;
            v140 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              v141 = NumberOfBytesa;
              do
              {
                v142 = -1;
                if ( *(_DWORD *)v140 < 0xFFFFFFFC )
                  v142 = *(_DWORD *)v140 + 4;
                if ( (unsigned int)(*(_DWORD *)v140 + 4) >= 4 )
                  v141 = v142;
                v8 = *(_DWORD *)v140 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v140 >= 0xFFFFFFFC )
                  goto LABEL_327;
                v143 = v140;
                v144 = &v140[v141];
                v145 = -1LL;
                if ( v144 >= v140 )
                  v145 = (__int64)&v140[v141];
                v140 = (char *)v145;
                v8 = v144 < v143 ? 0xC0000095 : 0;
                if ( v144 < v143 )
                  goto LABEL_327;
              }
              while ( (unsigned int)++v139 < *(_DWORD *)a4 );
            }
            v146 = -1LL;
            if ( v140 + 4 >= v140 )
              v146 = (__int64)(v140 + 4);
            v8 = v140 + 4 < v140 ? 0xC0000095 : 0;
            if ( v140 + 4 < v140 )
              goto LABEL_327;
            if ( (unsigned __int64)(v140 + 8) <= v134 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v140 = 4;
              *(_DWORD *)v146 = v135;
              ++*(_DWORD *)a4;
              goto LABEL_327;
            }
LABEL_226:
            v8 = -1073741789;
            goto LABEL_171;
          }
        }
        v112 = -1LL;
        goto LABEL_305;
      }
LABEL_99:
      v8 = -1073741789;
LABEL_100:
      v7 = 0LL;
      goto LABEL_101;
    }
  }
  v8 = -1073741811;
LABEL_101:
  v16 = (void *)pcbLength;
LABEL_102:
  if ( v16 )
    ExFreePoolWithTag(v16, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v8;
}
