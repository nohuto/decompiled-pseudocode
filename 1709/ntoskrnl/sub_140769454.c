/*
 * XREFs of sub_140769454 @ 0x140769454
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1400E3518 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140769454(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  void *v7; // r15
  signed int v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned int i; // r10d
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  void *v16; // rcx
  unsigned int j; // edx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
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
  unsigned int k; // r9d
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rcx
  unsigned int v34; // r9d
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned int m; // r9d
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rcx
  int v40; // ecx
  __int64 v41; // r9
  unsigned int *v42; // rax
  unsigned __int64 v44; // rdx
  unsigned int n; // r9d
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // rcx
  unsigned int v48; // r14d
  __int64 v49; // rcx
  __int64 v50; // rsi
  unsigned int v51; // r13d
  int v52; // ebx
  PVOID v53; // r11
  unsigned int ii; // edx
  unsigned __int64 v55; // r9
  unsigned __int64 v56; // rcx
  unsigned int v57; // ecx
  __int64 v58; // rdx
  unsigned int *v59; // rax
  PVOID v60; // rcx
  int v61; // r14d
  int v62; // esi
  int v63; // eax
  unsigned int v64; // ecx
  unsigned int v65; // eax
  unsigned int v66; // r8d
  unsigned int v67; // ecx
  unsigned int v68; // edx
  unsigned int v69; // r9d
  unsigned int v70; // eax
  int v71; // ecx
  unsigned int v72; // ecx
  int v73; // r11d
  unsigned int v74; // eax
  unsigned int v75; // edx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  unsigned int v78; // eax
  unsigned int v79; // edx
  PVOID v80; // rax
  __int64 v81; // r10
  int v82; // r14d
  unsigned int v83; // edx
  int v84; // eax
  unsigned int v85; // ecx
  char *v86; // r8
  int v87; // r9d
  unsigned int v88; // eax
  unsigned int v89; // r14d
  char *v90; // rcx
  char *v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r10
  unsigned int v95; // edx
  int v96; // eax
  unsigned int v97; // ecx
  char *v98; // r8
  int v99; // r9d
  unsigned int v100; // eax
  unsigned int v101; // r11d
  char *v102; // rcx
  char *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // xmm0_8
  const void *v107; // r11
  __int64 v108; // r9
  int v109; // r15d
  unsigned int v110; // edx
  int v111; // eax
  unsigned int v112; // ecx
  __int64 v113; // r13
  __int64 v114; // r10
  unsigned int v115; // edx
  int v116; // eax
  unsigned int v117; // ecx
  char *v118; // r8
  int v119; // r9d
  unsigned int v120; // eax
  unsigned int v121; // r11d
  char *v122; // rcx
  char *v123; // rdx
  __int64 v124; // rax
  __int64 v125; // r9
  char *v126; // r8
  int v127; // r10d
  unsigned int v128; // eax
  unsigned int v129; // r11d
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
  unsigned int v141; // eax
  unsigned int v142; // r11d
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
  unsigned int v153; // eax
  unsigned int v154; // r11d
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
      v15 = v161;
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
      v8 = -1073741789;
LABEL_22:
      v16 = 0LL;
      goto LABEL_98;
    }
    v161 = (_QWORD *)*v15;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_22;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v18 = -1LL;
      if ( v4 + 4 >= v4 )
        v18 = v4 + 4;
      v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
        goto LABEL_42;
      v19 = v18 + *(unsigned int *)v4;
      v4 = -1LL;
      if ( v19 >= v18 )
        v4 = v19;
      v8 = v19 < v18 ? 0xC0000095 : 0;
      if ( v19 < v18 )
        goto LABEL_42;
    }
    v20 = *(_DWORD *)v4;
    v21 = -1LL;
    if ( v4 + 4 >= v4 )
      v21 = v4 + 4;
    v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_42:
      v20 = 0;
      v22 = (const wchar_t *)v161;
      goto LABEL_43;
    }
    v22 = 0LL;
    if ( v20 )
      v22 = (const wchar_t *)v21;
LABEL_43:
    if ( v8 < 0 )
      goto LABEL_22;
    if ( !v20 || (v20 & 1) != 0 || (v24 = v20, v22[((unsigned __int64)v20 >> 1) - 1]) )
    {
LABEL_45:
      v8 = -1073741762;
      goto LABEL_22;
    }
    if ( StringCbLengthW(v22, v20, &pcbLength) < 0 || pcbLength + 2 != v24 )
    {
      v8 = -1073741762;
      goto LABEL_22;
    }
    v160 = pcbLength >> 1;
    Src = v25;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_22;
  v26 = 2 * v160 + 2;
  if ( 2 * v160 == -2 )
    goto LABEL_45;
  v27 = v26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x20534C53u);
  pcbLength = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801;
    goto LABEL_22;
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
        v32 = -1LL;
        if ( v30 + 4 >= v30 )
          v32 = v30 + 4;
        v8 = v30 + 4 < v30 ? 0xC0000095 : 0;
        if ( v30 + 4 < v30 )
          goto LABEL_74;
        v33 = v32 + *(unsigned int *)v30;
        v30 = -1LL;
        if ( v33 >= v32 )
          v30 = v33;
        v8 = v33 < v32 ? 0xC0000095 : 0;
        if ( v33 < v32 )
          goto LABEL_74;
      }
      v34 = *(_DWORD *)v30;
      v160 = *(_DWORD *)v30;
      v35 = -1LL;
      if ( v30 + 4 >= v30 )
        v35 = v30 + 4;
      v8 = v30 + 4 < v30 ? 0xC0000095 : 0;
      if ( v30 + 4 < v30 )
      {
LABEL_74:
        v7 = v161;
        v160 = 0;
        goto LABEL_75;
      }
      if ( v34 )
        v7 = (void *)v35;
LABEL_75:
      if ( v8 < 0 )
        goto LABEL_96;
      if ( v29 > 6 )
      {
        v36 = v23;
        for ( m = 0; m < 6; ++m )
        {
          v38 = -1LL;
          if ( v36 + 4 >= v36 )
            v38 = v36 + 4;
          v8 = v36 + 4 < v36 ? 0xC0000095 : 0;
          if ( v36 + 4 < v36 )
            goto LABEL_92;
          v39 = v38 + *(unsigned int *)v36;
          v36 = -1LL;
          if ( v39 >= v38 )
            v36 = v39;
          v8 = v39 < v38 ? 0xC0000095 : 0;
          if ( v39 < v38 )
            goto LABEL_92;
        }
        v40 = *(_DWORD *)v36;
        v41 = -1LL;
        if ( v36 + 4 >= v36 )
          v41 = v36 + 4;
        v8 = v36 + 4 < v36 ? 0xC0000095 : 0;
        if ( v36 + 4 < v36 )
        {
LABEL_92:
          v40 = 0;
          v42 = (unsigned int *)v161;
          goto LABEL_93;
        }
        v42 = 0LL;
        if ( v40 )
          v42 = (unsigned int *)v41;
LABEL_93:
        if ( v8 < 0 )
          goto LABEL_96;
        if ( v40 != 4 )
          goto LABEL_95;
        NumberOfBytes = *v42;
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 < 0 )
        goto LABEL_96;
      if ( v29 <= 7 )
      {
        v8 = -1073741811;
        goto LABEL_96;
      }
      v44 = v23;
      for ( n = 0; n < 7; ++n )
      {
        v46 = -1LL;
        if ( v44 + 4 >= v44 )
          v46 = v44 + 4;
        v8 = v44 + 4 < v44 ? 0xC0000095 : 0;
        if ( v44 + 4 < v44 )
          goto LABEL_121;
        v47 = v46 + *(unsigned int *)v44;
        v44 = -1LL;
        if ( v47 >= v46 )
          v44 = v47;
        v8 = v47 < v46 ? 0xC0000095 : 0;
        if ( v47 < v46 )
          goto LABEL_121;
      }
      v48 = *(_DWORD *)v44;
      v49 = -1LL;
      if ( v44 + 4 >= v44 )
        v49 = v44 + 4;
      v8 = v44 + 4 < v44 ? 0xC0000095 : 0;
      if ( v44 + 4 < v44 )
      {
LABEL_121:
        v48 = NumberOfBytes;
        v50 = (__int64)v161;
        goto LABEL_122;
      }
      v50 = 0LL;
      if ( v48 )
        v50 = v49;
LABEL_122:
      if ( v8 < 0 )
        goto LABEL_96;
      if ( v29 <= 8 )
      {
        v8 = -1073741811;
LABEL_125:
        v51 = NumberOfBytes;
        goto LABEL_126;
      }
      for ( ii = 0; ii < 8; ++ii )
      {
        v55 = -1LL;
        if ( v23 + 4 >= v23 )
          v55 = v23 + 4;
        v8 = v23 + 4 < v23 ? 0xC0000095 : 0;
        if ( v23 + 4 < v23 )
          goto LABEL_144;
        v56 = v55 + *(unsigned int *)v23;
        v23 = -1LL;
        if ( v56 >= v55 )
          v23 = v56;
        v8 = v56 < v55 ? 0xC0000095 : 0;
        if ( v56 < v55 )
          goto LABEL_144;
      }
      v57 = *(_DWORD *)v23;
      v58 = -1LL;
      if ( v23 + 4 >= v23 )
        v58 = v23 + 4;
      v8 = v23 + 4 < v23 ? 0xC0000095 : 0;
      if ( v23 + 4 < v23 )
      {
LABEL_144:
        v57 = NumberOfBytes;
        v59 = (unsigned int *)v161;
        goto LABEL_145;
      }
      v59 = 0LL;
      if ( v57 )
        v59 = (unsigned int *)v58;
LABEL_145:
      if ( v8 < 0 )
        goto LABEL_125;
      if ( v57 == 4 )
      {
        v51 = *v59;
LABEL_126:
        if ( v8 < 0 )
        {
          v7 = 0LL;
          goto LABEL_97;
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
            goto LABEL_97;
          }
        }
        else
        {
          v52 = 1;
          v53 = 0LL;
        }
        if ( qword_1407F33B8 )
        {
          v60 = v53;
          if ( v52 )
            v60 = 0LL;
          v61 = qword_1407F33B8(pcbLength, v7, v160, NumberOfBytes, v50, v48, v60, v51, &v162, &v163, &v164);
        }
        else
        {
          v61 = -1073741637;
        }
        v62 = -1;
        v160 = v51 + 4;
        v63 = -1;
        if ( v51 < 0xFFFFFFFC )
          v63 = v51 + 4;
        LODWORD(Src) = v51 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        v8 = (int)Src;
        if ( v51 + 4 < 4 )
        {
          v66 = NumberOfBytes;
        }
        else
        {
          v64 = v63;
          v65 = v63 + 20;
          if ( v64 >= 0xFFFFFFEC || v65 + 8 < v65 || v65 + 16 < v65 + 8 || (v66 = v65 + 24, v65 + 24 < v65 + 16) )
          {
            v8 = -1073741675;
            goto LABEL_163;
          }
          v8 = 0;
        }
        if ( v8 < 0 )
          goto LABEL_163;
        v67 = -1;
        if ( v66 < 0xFFFFFFF8 )
          v67 = v66 + 8;
        v8 = v66 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
        if ( v66 + 8 >= 8 )
        {
          v68 = (v67 + 7) & 0xFFFFFFF8;
          if ( v68 >= v67 )
          {
            v70 = v68 + 8;
            v71 = -1;
            if ( v68 + 8 >= v68 )
              v71 = v68 + 8;
            v8 = v70 < v68 ? 0xC0000095 : 0;
            v69 = NumberOfBytes;
            if ( v70 >= v68 )
              v69 = v71;
          }
          else
          {
            v8 = -1073741675;
            v69 = NumberOfBytes;
          }
          if ( v8 < 0 )
            goto LABEL_163;
          v72 = -1;
          v73 = *(_DWORD *)(a2 + 16);
          if ( v69 < 0xFFFFFFFC )
            v72 = v69 + 4;
          v8 = v69 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v69 + 4 >= 4 )
          {
            v74 = v72 + 4;
            v75 = -1;
            if ( v72 + 4 >= v72 )
              v75 = v72 + 4;
            v8 = v74 < v72 ? 0xC0000095 : 0;
            if ( v74 >= v72 )
            {
              v76 = v75 + v73;
              v77 = -1;
              if ( v75 + v73 >= v75 )
                v77 = v75 + v73;
              v8 = v76 < v75 ? 0xC0000095 : 0;
              if ( v76 >= v75 )
              {
                v78 = v77 + 4;
                v79 = -1;
                if ( v77 + 4 >= v77 )
                  v79 = v77 + 4;
                v8 = v78 < v77 ? 0xC0000095 : 0;
                if ( v78 >= v77 )
                  v8 = v79 + *(_DWORD *)(a2 + 32) < v79 ? 0xC0000095 : 0;
              }
            }
          }
        }
        if ( v8 < 0 )
        {
LABEL_163:
          v7 = v158;
          goto LABEL_97;
        }
        if ( !a4 )
        {
          v8 = -1073741811;
          goto LABEL_163;
        }
        *(_DWORD *)(a4 + 4) = v66;
        v8 = 0;
        if ( v66 )
        {
          v80 = ExAllocatePoolWithTag(PagedPool, v66, 0x20534C53u);
          if ( v80 )
          {
            *(_QWORD *)(a4 + 8) = v80;
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
          goto LABEL_163;
        v81 = *(_QWORD *)(a4 + 8);
        v82 = v61 | 0x10000000;
        NumberOfBytesa = v82;
        if ( v81 )
        {
          v86 = *(char **)(a4 + 8);
          v87 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v88 = -1;
              if ( *(_DWORD *)v86 < 0xFFFFFFFC )
                v88 = *(_DWORD *)v86 + 4;
              v8 = *(_DWORD *)v86 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v86 + 4) < 4 )
                break;
              v89 = v88;
              v90 = v86;
              v91 = &v86[v88];
              v92 = -1LL;
              if ( v91 >= v86 )
                v92 = (__int64)&v86[v89];
              v86 = (char *)v92;
              v8 = v91 < v90 ? 0xC0000095 : 0;
              if ( v91 < v90 )
                break;
              if ( (unsigned int)++v87 >= *(_DWORD *)a4 )
              {
                v82 = NumberOfBytesa;
                goto LABEL_212;
              }
            }
          }
          else
          {
LABEL_212:
            v93 = -1LL;
            if ( v86 + 4 >= v86 )
              v93 = (__int64)(v86 + 4);
            v8 = v86 + 4 < v86 ? 0xC0000095 : 0;
            if ( v86 + 4 >= v86 )
            {
              if ( (unsigned __int64)(v86 + 8) > v81 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_216;
              *(_DWORD *)v86 = 4;
              *(_DWORD *)v93 = v82;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v83 = *(_DWORD *)(a4 + 4);
          v84 = -1;
          v85 = v83 + 8;
          if ( v83 + 8 >= v83 )
            v84 = v83 + 8;
          v8 = v85 < v83 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v84;
          if ( v85 >= v83 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_219;
          }
        }
        if ( v8 < 0 )
          goto LABEL_163;
LABEL_219:
        v94 = *(_QWORD *)(a4 + 8);
        if ( v94 )
        {
          v98 = *(char **)(a4 + 8);
          v99 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v100 = -1;
              if ( *(_DWORD *)v98 < 0xFFFFFFFC )
                v100 = *(_DWORD *)v98 + 4;
              v8 = *(_DWORD *)v98 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v98 + 4) < 4 )
                break;
              v101 = v100;
              v102 = v98;
              v103 = &v98[v100];
              v104 = -1LL;
              if ( v103 >= v98 )
                v104 = (__int64)&v98[v101];
              v98 = (char *)v104;
              v8 = v103 < v102 ? 0xC0000095 : 0;
              if ( v103 < v102 )
                break;
              if ( (unsigned int)++v99 >= *(_DWORD *)a4 )
                goto LABEL_232;
            }
          }
          else
          {
LABEL_232:
            v105 = -1LL;
            if ( v98 + 4 >= v98 )
              v105 = (__int64)(v98 + 4);
            v8 = v98 + 4 < v98 ? 0xC0000095 : 0;
            if ( v98 + 4 >= v98 )
            {
              if ( (unsigned __int64)(v98 + 12) > v94 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_216;
              v106 = v161;
              *(_DWORD *)v98 = 8;
              *(_QWORD *)v105 = v106;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v95 = *(_DWORD *)(a4 + 4);
          v96 = -1;
          v97 = v95 + 12;
          if ( v95 + 12 >= v95 )
            v96 = v95 + 12;
          v8 = v97 < v95 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v96;
          if ( v97 >= v95 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_238;
          }
        }
        if ( v8 < 0 )
          goto LABEL_163;
LABEL_238:
        v107 = v158;
        if ( v158 )
        {
          if ( !v51 )
            goto LABEL_240;
        }
        else if ( v51 )
        {
LABEL_240:
          v8 = -1073741811;
          goto LABEL_241;
        }
        v114 = *(_QWORD *)(a4 + 8);
        if ( v114 )
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
              v122 = v118;
              v123 = &v118[v120];
              v124 = -1LL;
              if ( v123 >= v118 )
                v124 = (__int64)&v118[v121];
              v118 = (char *)v124;
              v8 = v123 < v122 ? 0xC0000095 : 0;
              if ( v123 < v122 )
                break;
              if ( (unsigned int)++v119 >= *(_DWORD *)a4 )
              {
                v107 = v158;
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
              if ( (unsigned __int64)&v118[v51 + 4] > v114 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_216;
              *(_DWORD *)v118 = v51;
              if ( v107 )
                memmove((void *)v125, v107, v51);
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v8 = (int)Src;
          if ( v160 >= 4 )
          {
            v115 = *(_DWORD *)(a4 + 4);
            v116 = -1;
            v117 = v115 + v160;
            if ( v115 + v160 >= v115 )
              v116 = v115 + v160;
            v8 = v117 < v115 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v116;
            if ( v117 >= v115 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_242;
            }
          }
        }
LABEL_241:
        if ( v8 < 0 )
          goto LABEL_163;
LABEL_242:
        v108 = *(_QWORD *)(a4 + 8);
        v109 = v162;
        if ( v108 )
        {
          v126 = *(char **)(a4 + 8);
          v127 = 0;
          if ( *(_DWORD *)a4 )
          {
            v113 = -1LL;
            while ( 1 )
            {
              v128 = -1;
              if ( *(_DWORD *)v126 < 0xFFFFFFFC )
                v128 = *(_DWORD *)v126 + 4;
              v8 = *(_DWORD *)v126 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v126 + 4) < 4 )
                break;
              v129 = v128;
              v130 = v126;
              v131 = &v126[v128];
              v132 = -1LL;
              if ( v131 >= v126 )
                v132 = (__int64)&v126[v129];
              v126 = (char *)v132;
              v8 = v131 < v130 ? 0xC0000095 : 0;
              if ( v131 < v130 )
                break;
              if ( (unsigned int)++v127 >= *(_DWORD *)a4 )
                goto LABEL_279;
            }
LABEL_285:
            if ( v8 < 0 )
              goto LABEL_163;
            goto LABEL_286;
          }
LABEL_279:
          v133 = -1LL;
          if ( v126 + 4 >= v126 )
            v133 = (__int64)(v126 + 4);
          v8 = v126 + 4 < v126 ? 0xC0000095 : 0;
          if ( v126 + 4 >= v126 )
          {
            if ( (unsigned __int64)(v126 + 8) > v108 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_216;
            *(_DWORD *)v126 = 4;
            *(_DWORD *)v133 = v109;
            ++*(_DWORD *)a4;
          }
        }
        else
        {
          v110 = *(_DWORD *)(a4 + 4);
          v111 = -1;
          v112 = v110 + 8;
          if ( v110 + 8 >= v110 )
            v111 = v110 + 8;
          v8 = v112 < v110 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v111;
          if ( v112 >= v110 )
          {
            ++*(_DWORD *)a4;
            v113 = -1LL;
LABEL_286:
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
                goto LABEL_305;
              }
LABEL_304:
              if ( v8 < 0 )
                goto LABEL_163;
LABEL_305:
              v147 = *(_QWORD *)(a4 + 8);
              v148 = v164;
              if ( !v147 )
              {
                v149 = *(_DWORD *)(a4 + 4);
                v150 = v149 + 8;
                if ( v149 + 8 >= v149 )
                  v62 = v149 + 8;
                v8 = v150 < v149 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v62;
                if ( v150 >= v149 )
                {
                  ++*(_DWORD *)a4;
                  v8 = 0;
                }
                goto LABEL_163;
              }
              v151 = 0;
              v152 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                do
                {
                  v153 = -1;
                  if ( *(_DWORD *)v152 < 0xFFFFFFFC )
                    v153 = *(_DWORD *)v152 + 4;
                  v8 = *(_DWORD *)v152 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v152 + 4) < 4 )
                    goto LABEL_163;
                  v154 = v153;
                  v155 = v152;
                  v156 = &v152[v153];
                  v157 = -1LL;
                  if ( v156 >= v152 )
                    v157 = (__int64)&v152[v154];
                  v152 = (char *)v157;
                  v8 = v156 < v155 ? 0xC0000095 : 0;
                  if ( v156 < v155 )
                    goto LABEL_163;
                }
                while ( (unsigned int)++v151 < *(_DWORD *)a4 );
              }
              if ( v152 + 4 >= v152 )
                v113 = (__int64)(v152 + 4);
              v8 = v152 + 4 < v152 ? 0xC0000095 : 0;
              if ( v152 + 4 >= v152 )
              {
                if ( (unsigned __int64)(v152 + 8) <= v147 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v152 = 4;
                  *(_DWORD *)v113 = v148;
                  ++*(_DWORD *)a4;
                  goto LABEL_163;
                }
                goto LABEL_216;
              }
              goto LABEL_163;
            }
            v139 = 0;
            v140 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              do
              {
                v141 = -1;
                if ( *(_DWORD *)v140 < 0xFFFFFFFC )
                  v141 = *(_DWORD *)v140 + 4;
                v8 = *(_DWORD *)v140 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v140 + 4) < 4 )
                  goto LABEL_304;
                v142 = v141;
                v143 = v140;
                v144 = &v140[v141];
                v145 = -1LL;
                if ( v144 >= v140 )
                  v145 = (__int64)&v140[v142];
                v140 = (char *)v145;
                v8 = v144 < v143 ? 0xC0000095 : 0;
                if ( v144 < v143 )
                  goto LABEL_304;
              }
              while ( (unsigned int)++v139 < *(_DWORD *)a4 );
            }
            v146 = -1LL;
            if ( v140 + 4 >= v140 )
              v146 = (__int64)(v140 + 4);
            v8 = v140 + 4 < v140 ? 0xC0000095 : 0;
            if ( v140 + 4 < v140 )
              goto LABEL_304;
            if ( (unsigned __int64)(v140 + 8) <= v134 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v140 = 4;
              *(_DWORD *)v146 = v135;
              ++*(_DWORD *)a4;
              goto LABEL_304;
            }
LABEL_216:
            v8 = -1073741789;
            goto LABEL_163;
          }
        }
        v113 = -1LL;
        goto LABEL_285;
      }
LABEL_95:
      v8 = -1073741789;
LABEL_96:
      v7 = 0LL;
      goto LABEL_97;
    }
  }
  v8 = -1073741811;
LABEL_97:
  v16 = (void *)pcbLength;
LABEL_98:
  if ( v16 )
    ExFreePoolWithTag(v16, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v8;
}
