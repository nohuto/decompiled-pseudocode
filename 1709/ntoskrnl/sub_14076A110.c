/*
 * XREFs of sub_14076A110 @ 0x14076A110
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1400E3518 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14076A110(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  void *v7; // r15
  signed int v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  void *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned int j; // r9d
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // r9
  unsigned int *v23; // rax
  unsigned int k; // edx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  const wchar_t *v29; // r11
  unsigned __int64 v30; // r8
  __int64 v31; // rsi
  void *v32; // r11
  unsigned int v33; // eax
  size_t v34; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v36; // r11d
  unsigned __int64 v37; // rdx
  unsigned int m; // r9d
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rcx
  unsigned int v41; // r12d
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  unsigned int n; // r9d
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // rcx
  unsigned int v47; // r14d
  __int64 v48; // rcx
  __int64 v49; // rsi
  unsigned int v50; // r13d
  int v51; // ebx
  void *v52; // r11
  unsigned int ii; // edx
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // rcx
  unsigned int v56; // ecx
  __int64 v57; // rdx
  unsigned int *v58; // rax
  void *v59; // rdx
  int v60; // r12d
  int v61; // esi
  int v62; // eax
  unsigned int v63; // ecx
  unsigned int v64; // eax
  unsigned int v65; // r8d
  unsigned int v66; // ecx
  unsigned int v67; // r9d
  unsigned int v68; // edx
  unsigned int v69; // eax
  int v70; // ecx
  unsigned int v71; // ecx
  unsigned int v72; // eax
  unsigned int v73; // r9d
  unsigned int v74; // eax
  unsigned int v75; // edx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  PVOID v78; // rax
  __int64 v79; // r10
  int v80; // r12d
  unsigned int v81; // edx
  int v82; // eax
  unsigned int v83; // ecx
  char *v84; // r8
  int v85; // r9d
  int v86; // eax
  unsigned int v87; // r14d
  __int64 v88; // rax
  char *v89; // rdx
  char *v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // r10
  unsigned int v93; // edx
  int v94; // eax
  unsigned int v95; // ecx
  char *v96; // r8
  int v97; // r9d
  int v98; // eax
  unsigned int v99; // r14d
  __int64 v100; // rax
  char *v101; // rdx
  char *v102; // rcx
  __int64 v103; // rdx
  _QWORD *v104; // xmm0_8
  void *v105; // r11
  __int64 v106; // r10
  unsigned int v107; // edx
  int v108; // eax
  unsigned int v109; // ecx
  char *v110; // r8
  int v111; // r9d
  int v112; // eax
  unsigned int v113; // r11d
  __int64 v114; // rax
  char *v115; // rdx
  char *v116; // rcx
  __int64 v117; // r9
  __int64 v118; // r9
  int v119; // r15d
  unsigned int v120; // ecx
  unsigned int v121; // eax
  char *v122; // r8
  int v123; // r10d
  int v124; // eax
  unsigned int v125; // r11d
  __int64 v126; // rax
  char *v127; // rdx
  char *v128; // rcx
  __int64 v129; // rdx
  int v131; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v132; // [rsp+54h] [rbp-2Ch]
  size_t pcbLength; // [rsp+58h] [rbp-28h] BYREF
  void *v134; // [rsp+60h] [rbp-20h]
  void *Src; // [rsp+68h] [rbp-18h]
  _QWORD *v136; // [rsp+70h] [rbp-10h]
  unsigned int NumberOfBytes; // [rsp+D0h] [rbp+50h]
  unsigned int NumberOfBytesa; // [rsp+D0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  NumberOfBytes = 0;
  v134 = 0LL;
  v131 = 0;
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
      v15 = v136;
      goto LABEL_19;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (_QWORD *)v14;
LABEL_19:
    if ( v8 < 0 )
      goto LABEL_22;
    if ( v13 != 8 )
    {
LABEL_21:
      v8 = -1073741789;
LABEL_22:
      v16 = v134;
      goto LABEL_274;
    }
    v136 = (_QWORD *)*v15;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_22;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v17 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v19 = -1LL;
      if ( v17 + 4 >= v17 )
        v19 = v17 + 4;
      v8 = v17 + 4 < v17 ? 0xC0000095 : 0;
      if ( v17 + 4 < v17 )
        goto LABEL_42;
      v20 = v19 + *(unsigned int *)v17;
      v17 = -1LL;
      if ( v20 >= v19 )
        v17 = v20;
      v8 = v20 < v19 ? 0xC0000095 : 0;
      if ( v20 < v19 )
        goto LABEL_42;
    }
    v21 = *(_DWORD *)v17;
    v22 = -1LL;
    if ( v17 + 4 >= v17 )
      v22 = v17 + 4;
    v8 = v17 + 4 < v17 ? 0xC0000095 : 0;
    if ( v17 + 4 < v17 )
    {
LABEL_42:
      v21 = 0;
      v23 = (unsigned int *)v136;
      goto LABEL_43;
    }
    v23 = 0LL;
    if ( v21 )
      v23 = (unsigned int *)v22;
LABEL_43:
    if ( v8 < 0 )
      goto LABEL_22;
    if ( v21 != 4 )
      goto LABEL_21;
    NumberOfBytes = *v23;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_22;
  if ( v4 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v25 = -1LL;
      if ( v4 + 4 >= v4 )
        v25 = v4 + 4;
      v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
        goto LABEL_64;
      v26 = v25 + *(unsigned int *)v4;
      v4 = -1LL;
      if ( v26 >= v25 )
        v4 = v26;
      v8 = v26 < v25 ? 0xC0000095 : 0;
      if ( v26 < v25 )
        goto LABEL_64;
    }
    v27 = *(_DWORD *)v4;
    v28 = -1LL;
    if ( v4 + 4 >= v4 )
      v28 = v4 + 4;
    v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_64:
      v27 = NumberOfBytes;
      v29 = (const wchar_t *)v136;
      goto LABEL_65;
    }
    v29 = 0LL;
    if ( v27 )
      v29 = (const wchar_t *)v28;
LABEL_65:
    if ( v8 < 0 )
      goto LABEL_22;
    if ( !v27 || (v27 & 1) != 0 || (v31 = v27, v29[((unsigned __int64)v27 >> 1) - 1]) )
    {
LABEL_67:
      v8 = -1073741762;
      goto LABEL_22;
    }
    if ( StringCbLengthW(v29, v27, &pcbLength) < 0 || pcbLength + 2 != v31 )
    {
      v8 = -1073741762;
      goto LABEL_22;
    }
    v132 = pcbLength >> 1;
    Src = v32;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_22;
  v33 = 2 * v132 + 2;
  if ( 2 * v132 == -2 )
    goto LABEL_67;
  v34 = v33;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
  pcbLength = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801;
    goto LABEL_22;
  }
  memmove(PoolWithTag, Src, v34);
  v30 = *(_QWORD *)(a1 + 8);
  if ( v30 )
  {
    v36 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 6u )
    {
      v37 = *(_QWORD *)(a1 + 8);
      for ( m = 0; m < 6; ++m )
      {
        v39 = -1LL;
        if ( v37 + 4 >= v37 )
          v39 = v37 + 4;
        v8 = v37 + 4 < v37 ? 0xC0000095 : 0;
        if ( v37 + 4 < v37 )
          goto LABEL_96;
        v40 = v39 + *(unsigned int *)v37;
        v37 = -1LL;
        if ( v40 >= v39 )
          v37 = v40;
        v8 = v40 < v39 ? 0xC0000095 : 0;
        if ( v40 < v39 )
          goto LABEL_96;
      }
      v41 = *(_DWORD *)v37;
      v42 = -1LL;
      if ( v37 + 4 >= v37 )
        v42 = v37 + 4;
      v8 = v37 + 4 < v37 ? 0xC0000095 : 0;
      if ( v37 + 4 < v37 )
      {
LABEL_96:
        v41 = NumberOfBytes;
        v7 = v136;
        goto LABEL_97;
      }
      if ( v41 )
        v7 = (void *)v42;
LABEL_97:
      if ( v8 < 0 )
        goto LABEL_272;
      if ( v36 <= 7 )
        goto LABEL_99;
      v43 = *(_QWORD *)(a1 + 8);
      for ( n = 0; n < 7; ++n )
      {
        v45 = -1LL;
        if ( v43 + 4 >= v43 )
          v45 = v43 + 4;
        v8 = v43 + 4 < v43 ? 0xC0000095 : 0;
        if ( v43 + 4 < v43 )
          goto LABEL_114;
        v46 = v45 + *(unsigned int *)v43;
        v43 = -1LL;
        if ( v46 >= v45 )
          v43 = v46;
        v8 = v46 < v45 ? 0xC0000095 : 0;
        if ( v46 < v45 )
          goto LABEL_114;
      }
      v47 = *(_DWORD *)v43;
      v48 = -1LL;
      if ( v43 + 4 >= v43 )
        v48 = v43 + 4;
      v8 = v43 + 4 < v43 ? 0xC0000095 : 0;
      if ( v43 + 4 < v43 )
      {
LABEL_114:
        v47 = NumberOfBytes;
        v49 = (__int64)v136;
        goto LABEL_115;
      }
      v49 = 0LL;
      if ( v47 )
        v49 = v48;
LABEL_115:
      if ( v8 < 0 )
        goto LABEL_272;
      if ( v36 > 8 )
      {
        for ( ii = 0; ii < 8; ++ii )
        {
          v54 = -1LL;
          if ( v30 + 4 >= v30 )
            v54 = v30 + 4;
          v8 = v30 + 4 < v30 ? 0xC0000095 : 0;
          if ( v30 + 4 < v30 )
            goto LABEL_137;
          v55 = v54 + *(unsigned int *)v30;
          v30 = -1LL;
          if ( v55 >= v54 )
            v30 = v55;
          v8 = v55 < v54 ? 0xC0000095 : 0;
          if ( v55 < v54 )
            goto LABEL_137;
        }
        v56 = *(_DWORD *)v30;
        v57 = -1LL;
        if ( v30 + 4 >= v30 )
          v57 = v30 + 4;
        v8 = v30 + 4 < v30 ? 0xC0000095 : 0;
        if ( v30 + 4 < v30 )
        {
LABEL_137:
          v56 = NumberOfBytes;
          v58 = (unsigned int *)v136;
          goto LABEL_138;
        }
        v58 = 0LL;
        if ( v56 )
          v58 = (unsigned int *)v57;
LABEL_138:
        if ( v8 >= 0 )
        {
          if ( v56 != 4 )
            goto LABEL_140;
          v50 = *v58;
LABEL_119:
          if ( v8 < 0 )
            goto LABEL_272;
          if ( v50 )
          {
            v51 = 0;
            v134 = ExAllocatePoolWithTag(PagedPool, v50, 0x20534C53u);
            v52 = v134;
            if ( !v134 )
            {
              v8 = -1073741801;
              v7 = 0LL;
              goto LABEL_273;
            }
          }
          else
          {
            v52 = v134;
            v51 = 1;
          }
          if ( qword_1407F33B0 )
          {
            v59 = v52;
            if ( v51 )
              v59 = 0LL;
            v60 = qword_1407F33B0(NumberOfBytes, pcbLength, v7, v41, v49, v47, v59, v50, &v131);
          }
          else
          {
            v60 = -1073741637;
          }
          v61 = -1;
          NumberOfBytesa = v50 + 4;
          v62 = -1;
          if ( v50 < 0xFFFFFFFC )
            v62 = v50 + 4;
          v132 = v50 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          v8 = v132;
          if ( v50 + 4 < 4 )
          {
            v65 = v50 + 4;
          }
          else
          {
            v63 = v62;
            v64 = v62 + 20;
            if ( v63 >= 0xFFFFFFEC || (v65 = v64 + 8, v64 + 8 < v64) )
            {
              v8 = -1073741675;
              goto LABEL_272;
            }
            v8 = 0;
          }
          if ( v8 < 0 )
            goto LABEL_272;
          v66 = -1;
          if ( v65 < 0xFFFFFFF8 )
            v66 = v65 + 8;
          v8 = v65 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
          if ( v65 + 8 >= 8 )
          {
            v67 = v50 + 4;
            v68 = (v66 + 7) & 0xFFFFFFF8;
            if ( v68 >= v66 )
            {
              v69 = v68 + 8;
              v70 = -1;
              if ( v68 + 8 >= v68 )
                v70 = v68 + 8;
              v8 = v69 < v68 ? 0xC0000095 : 0;
              if ( v69 >= v68 )
                v67 = v70;
            }
            else
            {
              v8 = -1073741675;
            }
            if ( v8 < 0 )
              goto LABEL_272;
            v71 = -1;
            if ( v67 < 0xFFFFFFFC )
              v71 = v67 + 4;
            v8 = v67 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( v67 + 4 >= 4 )
            {
              v72 = v71 + 4;
              v73 = -1;
              if ( v71 + 4 >= v71 )
                v73 = v71 + 4;
              v8 = v72 < v71 ? 0xC0000095 : 0;
              if ( v72 >= v71 )
              {
                v74 = v73 + *(_DWORD *)(a2 + 16);
                v75 = -1;
                if ( v74 >= v73 )
                  v75 = v73 + *(_DWORD *)(a2 + 16);
                v8 = v74 < v73 ? 0xC0000095 : 0;
                if ( v74 >= v73 )
                {
                  v76 = v75 + 4;
                  v77 = -1;
                  if ( v75 + 4 >= v75 )
                    v77 = v75 + 4;
                  v8 = v76 < v75 ? 0xC0000095 : 0;
                  if ( v76 >= v75 )
                    v8 = v77 + *(_DWORD *)(a2 + 32) < v77 ? 0xC0000095 : 0;
                }
              }
            }
          }
          if ( v8 < 0 )
            goto LABEL_272;
          if ( !a4 )
          {
LABEL_99:
            v8 = -1073741811;
            goto LABEL_272;
          }
          *(_DWORD *)(a4 + 4) = v65;
          v8 = 0;
          if ( v65 )
          {
            v78 = ExAllocatePoolWithTag(PagedPool, v65, 0x20534C53u);
            if ( v78 )
            {
              *(_QWORD *)(a4 + 8) = v78;
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
            goto LABEL_272;
          v79 = *(_QWORD *)(a4 + 8);
          v80 = v60 | 0x10000000;
          if ( v79 )
          {
            v84 = *(char **)(a4 + 8);
            v85 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v86 = -1;
                if ( *(_DWORD *)v84 < 0xFFFFFFFC )
                  v86 = *(_DWORD *)v84 + 4;
                v8 = *(_DWORD *)v84 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v84 + 4) < 4 )
                  break;
                v87 = v86;
                v88 = -1LL;
                v89 = &v84[v87];
                v90 = v84;
                if ( v89 >= v84 )
                  v88 = (__int64)&v84[v87];
                v84 = (char *)v88;
                v8 = v89 < v90 ? 0xC0000095 : 0;
                if ( v89 < v90 )
                  break;
                if ( (unsigned int)++v85 >= *(_DWORD *)a4 )
                  goto LABEL_201;
              }
            }
            else
            {
LABEL_201:
              v91 = -1LL;
              if ( v84 + 4 >= v84 )
                v91 = (__int64)(v84 + 4);
              v8 = v84 + 4 < v84 ? 0xC0000095 : 0;
              if ( v84 + 4 >= v84 )
              {
                if ( (unsigned __int64)(v84 + 8) > v79 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_140;
                *(_DWORD *)v84 = 4;
                *(_DWORD *)v91 = v80;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v81 = *(_DWORD *)(a4 + 4);
            v82 = -1;
            v83 = v81 + 8;
            if ( v81 + 8 >= v81 )
              v82 = v81 + 8;
            v8 = v83 < v81 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v82;
            if ( v83 >= v81 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_207;
            }
          }
          if ( v8 < 0 )
            goto LABEL_272;
LABEL_207:
          v92 = *(_QWORD *)(a4 + 8);
          if ( v92 )
          {
            v96 = *(char **)(a4 + 8);
            v97 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v98 = -1;
                if ( *(_DWORD *)v96 < 0xFFFFFFFC )
                  v98 = *(_DWORD *)v96 + 4;
                v8 = *(_DWORD *)v96 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v96 + 4) < 4 )
                  break;
                v99 = v98;
                v100 = -1LL;
                v101 = &v96[v99];
                v102 = v96;
                if ( v101 >= v96 )
                  v100 = (__int64)&v96[v99];
                v96 = (char *)v100;
                v8 = v101 < v102 ? 0xC0000095 : 0;
                if ( v101 < v102 )
                  break;
                if ( (unsigned int)++v97 >= *(_DWORD *)a4 )
                  goto LABEL_220;
              }
            }
            else
            {
LABEL_220:
              v103 = -1LL;
              if ( v96 + 4 >= v96 )
                v103 = (__int64)(v96 + 4);
              v8 = v96 + 4 < v96 ? 0xC0000095 : 0;
              if ( v96 + 4 >= v96 )
              {
                if ( (unsigned __int64)(v96 + 12) > v92 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_140;
                v104 = v136;
                *(_DWORD *)v96 = 8;
                *(_QWORD *)v103 = v104;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v93 = *(_DWORD *)(a4 + 4);
            v94 = -1;
            v95 = v93 + 12;
            if ( v93 + 12 >= v93 )
              v94 = v93 + 12;
            v8 = v95 < v93 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v94;
            if ( v95 >= v93 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_226;
            }
          }
          if ( v8 < 0 )
            goto LABEL_272;
LABEL_226:
          v105 = v134;
          if ( v134 )
          {
            if ( !v50 )
              goto LABEL_228;
          }
          else if ( v50 )
          {
LABEL_228:
            v8 = -1073741811;
            goto LABEL_252;
          }
          v106 = *(_QWORD *)(a4 + 8);
          if ( v106 )
          {
            v110 = *(char **)(a4 + 8);
            v111 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v112 = -1;
                if ( *(_DWORD *)v110 < 0xFFFFFFFC )
                  v112 = *(_DWORD *)v110 + 4;
                v8 = *(_DWORD *)v110 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v110 + 4) < 4 )
                  break;
                v113 = v112;
                v114 = -1LL;
                v115 = &v110[v113];
                v116 = v110;
                if ( v115 >= v110 )
                  v114 = (__int64)&v110[v113];
                v110 = (char *)v114;
                v8 = v115 < v116 ? 0xC0000095 : 0;
                if ( v115 < v116 )
                  break;
                if ( (unsigned int)++v111 >= *(_DWORD *)a4 )
                {
                  v105 = v134;
                  goto LABEL_245;
                }
              }
            }
            else
            {
LABEL_245:
              v117 = -1LL;
              if ( v110 + 4 >= v110 )
                v117 = (__int64)(v110 + 4);
              v8 = v110 + 4 < v110 ? 0xC0000095 : 0;
              if ( v110 + 4 >= v110 )
              {
                if ( (unsigned __int64)&v110[v50 + 4] > v106 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_140;
                *(_DWORD *)v110 = v50;
                if ( v105 )
                  memmove((void *)v117, v105, v50);
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v8 = v132;
            if ( NumberOfBytesa >= 4 )
            {
              v107 = *(_DWORD *)(a4 + 4);
              v108 = -1;
              v109 = v107 + NumberOfBytesa;
              if ( v107 + NumberOfBytesa >= v107 )
                v108 = v107 + NumberOfBytesa;
              v8 = v109 < v107 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v108;
              if ( v109 >= v107 )
              {
                ++*(_DWORD *)a4;
                goto LABEL_253;
              }
            }
          }
LABEL_252:
          if ( v8 < 0 )
            goto LABEL_272;
LABEL_253:
          v118 = *(_QWORD *)(a4 + 8);
          v119 = v131;
          if ( !v118 )
          {
            v120 = *(_DWORD *)(a4 + 4);
            v121 = v120 + 8;
            if ( v120 + 8 >= v120 )
              v61 = v120 + 8;
            v8 = v121 < v120 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v61;
            if ( v121 < v120 )
              goto LABEL_272;
            v8 = 0;
            goto LABEL_271;
          }
          v122 = *(char **)(a4 + 8);
          v123 = 0;
          if ( *(_DWORD *)a4 )
          {
            do
            {
              v124 = -1;
              if ( *(_DWORD *)v122 < 0xFFFFFFFC )
                v124 = *(_DWORD *)v122 + 4;
              v8 = *(_DWORD *)v122 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v122 + 4) < 4 )
                goto LABEL_272;
              v125 = v124;
              v126 = -1LL;
              v127 = &v122[v125];
              v128 = v122;
              if ( v127 >= v122 )
                v126 = (__int64)&v122[v125];
              v122 = (char *)v126;
              v8 = v127 < v128 ? 0xC0000095 : 0;
              if ( v127 < v128 )
                goto LABEL_272;
            }
            while ( (unsigned int)++v123 < *(_DWORD *)a4 );
          }
          v129 = -1LL;
          if ( v122 + 4 >= v122 )
            v129 = (__int64)(v122 + 4);
          v8 = v122 + 4 < v122 ? 0xC0000095 : 0;
          if ( v122 + 4 >= v122 )
          {
            if ( (unsigned __int64)(v122 + 8) <= v118 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v122 = 4;
              *(_DWORD *)v129 = v119;
LABEL_271:
              ++*(_DWORD *)a4;
              goto LABEL_272;
            }
LABEL_140:
            v8 = -1073741789;
          }
LABEL_272:
          v7 = v134;
          goto LABEL_273;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      v50 = NumberOfBytes;
      goto LABEL_119;
    }
  }
  v8 = -1073741811;
LABEL_273:
  v16 = (void *)pcbLength;
LABEL_274:
  if ( v16 )
    ExFreePoolWithTag(v16, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v8;
}
