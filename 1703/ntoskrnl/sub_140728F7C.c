/*
 * XREFs of sub_140728F7C @ 0x140728F7C
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14006B320 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140728F7C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r15
  signed int v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned int i; // r10d
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  void *v16; // r12
  unsigned __int64 v17; // rdx
  unsigned int j; // r10d
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  unsigned int v21; // ecx
  __int64 v22; // r9
  unsigned int *v23; // rax
  unsigned int k; // r9d
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
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
  unsigned int m; // r10d
  __int64 v39; // rax
  unsigned __int64 v40; // r9
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned int n; // r10d
  __int64 v44; // rax
  unsigned __int64 v45; // r9
  unsigned int v46; // r14d
  __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned int v49; // r13d
  int v50; // ebx
  unsigned int ii; // r9d
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned int v54; // ecx
  __int64 v55; // rdx
  unsigned int *v56; // rax
  void *v57; // rdx
  int v58; // r12d
  unsigned int v59; // ecx
  int v60; // esi
  int v61; // eax
  unsigned int v62; // r8d
  unsigned int v63; // ecx
  unsigned int v64; // r9d
  unsigned int v65; // edx
  unsigned int v66; // eax
  int v67; // ecx
  unsigned int v68; // ecx
  unsigned int v69; // eax
  unsigned int v70; // r9d
  unsigned int v71; // eax
  unsigned int v72; // edx
  unsigned int v73; // eax
  unsigned int v74; // ecx
  PVOID v75; // rax
  __int64 v76; // r10
  int v77; // r12d
  unsigned int v78; // edx
  int v79; // eax
  unsigned int v80; // ecx
  char *v81; // r8
  int v82; // r9d
  unsigned int v83; // r14d
  int v84; // ecx
  __int64 v85; // rax
  char *v86; // rdx
  char *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // r10
  unsigned int v90; // edx
  int v91; // eax
  unsigned int v92; // ecx
  char *v93; // r8
  int v94; // r9d
  unsigned int v95; // r11d
  int v96; // ecx
  __int64 v97; // rax
  char *v98; // rdx
  char *v99; // rcx
  __int64 v100; // rdx
  _QWORD *v101; // xmm0_8
  __int64 v102; // r9
  int v103; // r15d
  unsigned int v104; // ecx
  unsigned int v105; // eax
  __int64 v106; // r10
  unsigned int v107; // ecx
  unsigned int v108; // edx
  int v109; // eax
  unsigned int v110; // ecx
  char *v111; // r8
  int v112; // r9d
  unsigned int v113; // r11d
  int v114; // ecx
  __int64 v115; // rax
  char *v116; // rdx
  char *v117; // rcx
  __int64 v118; // r9
  char *v119; // r8
  int v120; // r10d
  unsigned int v121; // r11d
  int v122; // ecx
  __int64 v123; // rax
  char *v124; // rdx
  char *v125; // rcx
  __int64 v126; // rdx
  unsigned int v128; // [rsp+50h] [rbp-30h]
  int v129; // [rsp+54h] [rbp-2Ch] BYREF
  void *v130; // [rsp+58h] [rbp-28h]
  size_t pcbLength; // [rsp+60h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp-18h]
  _QWORD *v133; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v128 = 0;
  v130 = 0LL;
  v129 = 0;
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
      v13 = a3;
      v15 = v133;
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
LABEL_22:
      v8 = -1073741789;
LABEL_23:
      v16 = 0LL;
      goto LABEL_294;
    }
    v133 = (_QWORD *)*v15;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_23;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v17 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *(unsigned int *)v17;
      v20 = v17 + 4;
      if ( v17 + 4 < v17 )
      {
        v20 = -1LL;
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
      }
      if ( v8 < 0 )
        goto LABEL_44;
      v17 = -1LL;
      if ( v20 + v19 >= v20 )
        v17 = v20 + v19;
      v8 = v20 + v19 < v20 ? 0xC0000095 : 0;
      if ( v20 + v19 < v20 )
        goto LABEL_44;
    }
    v21 = *(_DWORD *)v17;
    v22 = -1LL;
    if ( v17 + 4 >= v17 )
      v22 = v17 + 4;
    v8 = v17 + 4 < v17 ? 0xC0000095 : 0;
    if ( v17 + 4 < v17 )
    {
LABEL_44:
      v21 = a3;
      v23 = (unsigned int *)v133;
      goto LABEL_45;
    }
    v23 = 0LL;
    if ( v21 )
      v23 = (unsigned int *)v22;
LABEL_45:
    if ( v8 < 0 )
      goto LABEL_23;
    if ( v21 != 4 )
      goto LABEL_22;
    v128 = *v23;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_23;
  if ( v4 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v25 = *(unsigned int *)v4;
      v26 = v4 + 4;
      if ( v4 + 4 < v4 )
      {
        v26 = -1LL;
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
      }
      if ( v8 < 0 )
        goto LABEL_67;
      v4 = -1LL;
      if ( v26 + v25 >= v26 )
        v4 = v26 + v25;
      v8 = v26 + v25 < v26 ? 0xC0000095 : 0;
      if ( v26 + v25 < v26 )
        goto LABEL_67;
    }
    v27 = *(_DWORD *)v4;
    v28 = -1LL;
    if ( v4 + 4 >= v4 )
      v28 = v4 + 4;
    v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_67:
      v27 = a3;
      v29 = (const wchar_t *)v133;
      goto LABEL_68;
    }
    v29 = 0LL;
    if ( v27 )
      v29 = (const wchar_t *)v28;
LABEL_68:
    if ( v8 < 0 )
      goto LABEL_23;
    if ( !v27 || (v27 & 1) != 0 || (v31 = v27, v29[((unsigned __int64)v27 >> 1) - 1]) )
    {
LABEL_70:
      v8 = -1073741762;
      goto LABEL_23;
    }
    if ( StringCbLengthW(v29, v27, &pcbLength) < 0 || pcbLength + 2 != v31 )
    {
      v8 = -1073741762;
      goto LABEL_23;
    }
    a3 = pcbLength >> 1;
    Src = v32;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_23;
  v33 = 2 * a3 + 2;
  if ( 2 * a3 == -2 )
    goto LABEL_70;
  v34 = v33;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
  pcbLength = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801;
    goto LABEL_23;
  }
  memmove(PoolWithTag, Src, v34);
  v30 = *(_QWORD *)(a1 + 8);
  if ( !v30 || (v36 = *(_DWORD *)a1, *(_DWORD *)a1 <= 6u) )
  {
    v8 = -1073741811;
    goto LABEL_23;
  }
  v37 = *(_QWORD *)(a1 + 8);
  for ( m = 0; m < 6; ++m )
  {
    v39 = *(unsigned int *)v37;
    v40 = v37 + 4;
    if ( v37 + 4 < v37 )
    {
      v40 = -1LL;
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_100;
    v37 = -1LL;
    if ( v40 + v39 >= v40 )
      v37 = v40 + v39;
    v8 = v40 + v39 < v40 ? 0xC0000095 : 0;
    if ( v40 + v39 < v40 )
      goto LABEL_100;
  }
  a3 = *(_DWORD *)v37;
  v41 = -1LL;
  if ( v37 + 4 >= v37 )
    v41 = v37 + 4;
  v8 = v37 + 4 < v37 ? 0xC0000095 : 0;
  if ( v37 + 4 < v37 )
  {
LABEL_100:
    v5 = (__int64)v133;
    goto LABEL_101;
  }
  if ( *(_DWORD *)v37 )
    v5 = v41;
LABEL_101:
  if ( v8 < 0 )
    goto LABEL_293;
  if ( v36 <= 7 )
    goto LABEL_103;
  v42 = *(_QWORD *)(a1 + 8);
  for ( n = 0; n < 7; ++n )
  {
    v44 = *(unsigned int *)v42;
    v45 = v42 + 4;
    if ( v42 + 4 < v42 )
    {
      v45 = -1LL;
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_119;
    v42 = -1LL;
    if ( v45 + v44 >= v45 )
      v42 = v45 + v44;
    v8 = v45 + v44 < v45 ? 0xC0000095 : 0;
    if ( v45 + v44 < v45 )
      goto LABEL_119;
  }
  v46 = *(_DWORD *)v42;
  v47 = -1LL;
  if ( v42 + 4 >= v42 )
    v47 = v42 + 4;
  v8 = v42 + 4 < v42 ? 0xC0000095 : 0;
  if ( v42 + 4 < v42 )
  {
LABEL_119:
    v46 = a3;
    v48 = (__int64)v133;
    goto LABEL_120;
  }
  v48 = 0LL;
  if ( v46 )
    v48 = v47;
LABEL_120:
  if ( v8 < 0 )
    goto LABEL_293;
  if ( v36 <= 8 )
  {
    v8 = -1073741811;
LABEL_123:
    v49 = a3;
    goto LABEL_124;
  }
  for ( ii = 0; ii < 8; ++ii )
  {
    v52 = *(unsigned int *)v30;
    v53 = v30 + 4;
    if ( v30 + 4 < v30 )
    {
      v53 = -1LL;
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_143;
    v30 = -1LL;
    if ( v53 + v52 >= v53 )
      v30 = v53 + v52;
    v8 = v53 + v52 < v53 ? 0xC0000095 : 0;
    if ( v53 + v52 < v53 )
      goto LABEL_143;
  }
  v54 = *(_DWORD *)v30;
  v55 = -1LL;
  if ( v30 + 4 >= v30 )
    v55 = v30 + 4;
  v8 = v30 + 4 < v30 ? 0xC0000095 : 0;
  if ( v30 + 4 < v30 )
  {
LABEL_143:
    v54 = a3;
    v56 = (unsigned int *)v133;
    goto LABEL_144;
  }
  v56 = 0LL;
  if ( v54 )
    v56 = (unsigned int *)v55;
LABEL_144:
  if ( v8 < 0 )
    goto LABEL_123;
  if ( v54 != 4 )
    goto LABEL_146;
  v49 = *v56;
LABEL_124:
  if ( v8 < 0 )
    goto LABEL_293;
  if ( v49 )
  {
    v50 = 0;
    v130 = ExAllocatePoolWithTag(PagedPool, v49, 0x20534C53u);
    v16 = v130;
    if ( !v130 )
    {
      v8 = -1073741801;
      goto LABEL_294;
    }
  }
  else
  {
    v16 = v130;
    v50 = 1;
  }
  if ( qword_1407AC3C0 )
  {
    v57 = v16;
    if ( v50 )
      v57 = 0LL;
    v58 = qword_1407AC3C0(v128, pcbLength, v5, a3, v48, v46, v57, v49, &v129);
  }
  else
  {
    v58 = -1073741637;
  }
  v59 = 12;
  v60 = -1;
  v61 = -1;
  if ( v49 < 0xFFFFFFFC )
    v61 = v49 + 4;
  v8 = v49 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v49 + 4 >= 4 )
    v59 = v61;
  if ( v49 >= 0xFFFFFFFC )
  {
    v62 = v49 + 4;
  }
  else
  {
    if ( v59 >= 0xFFFFFFEC || (v62 = v59 + 28, v59 + 28 < v59 + 20) )
    {
      v8 = -1073741675;
      goto LABEL_293;
    }
    v8 = 0;
  }
  if ( v8 < 0 )
    goto LABEL_293;
  v63 = -1;
  if ( v62 < 0xFFFFFFF8 )
    v63 = v62 + 8;
  v8 = v62 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
  if ( v62 + 8 >= 8 )
  {
    v64 = v49 + 4;
    v65 = (v63 + 7) & 0xFFFFFFF8;
    if ( v65 >= v63 )
    {
      v66 = v65 + 8;
      v67 = -1;
      if ( v65 + 8 >= v65 )
        v67 = v65 + 8;
      v8 = v66 < v65 ? 0xC0000095 : 0;
      if ( v66 >= v65 )
        v64 = v67;
    }
    else
    {
      v8 = -1073741675;
    }
    if ( v8 < 0 )
      goto LABEL_293;
    v68 = -1;
    if ( v64 < 0xFFFFFFFC )
      v68 = v64 + 4;
    v8 = v64 >= 0xFFFFFFFC ? 0xC0000095 : 0;
    if ( v64 + 4 >= 4 )
    {
      v69 = v68 + 4;
      v70 = -1;
      if ( v68 + 4 >= v68 )
        v70 = v68 + 4;
      v8 = v69 < v68 ? 0xC0000095 : 0;
      if ( v69 >= v68 )
      {
        v71 = v70 + *(_DWORD *)(a2 + 16);
        v72 = -1;
        if ( v71 >= v70 )
          v72 = v70 + *(_DWORD *)(a2 + 16);
        v8 = v71 < v70 ? 0xC0000095 : 0;
        if ( v71 >= v70 )
        {
          v73 = v72 + 4;
          v74 = -1;
          if ( v72 + 4 >= v72 )
            v74 = v72 + 4;
          v8 = v73 < v72 ? 0xC0000095 : 0;
          if ( v73 >= v72 )
            v8 = v74 + *(_DWORD *)(a2 + 32) < v74 ? 0xC0000095 : 0;
        }
      }
    }
  }
  if ( v8 < 0 )
    goto LABEL_293;
  if ( !a4 )
  {
LABEL_103:
    v8 = -1073741811;
    goto LABEL_293;
  }
  *(_DWORD *)(a4 + 4) = v62;
  v8 = 0;
  if ( v62 )
  {
    v75 = ExAllocatePoolWithTag(PagedPool, v62, 0x20534C53u);
    if ( v75 )
    {
      *(_QWORD *)(a4 + 8) = v75;
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
    goto LABEL_293;
  v76 = *(_QWORD *)(a4 + 8);
  v77 = v58 | 0x10000000;
  if ( v76 )
  {
    v81 = *(char **)(a4 + 8);
    v82 = 0;
    if ( *(_DWORD *)a4 )
    {
      v83 = v49 + 4;
      while ( 1 )
      {
        v84 = -1;
        if ( *(_DWORD *)v81 < 0xFFFFFFFC )
          v84 = *(_DWORD *)v81 + 4;
        if ( (unsigned int)(*(_DWORD *)v81 + 4) >= 4 )
          v83 = v84;
        v8 = *(_DWORD *)v81 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( *(_DWORD *)v81 >= 0xFFFFFFFC )
          break;
        v85 = -1LL;
        v86 = &v81[v83];
        v87 = v81;
        if ( v86 >= v81 )
          v85 = (__int64)&v81[v83];
        v81 = (char *)v85;
        v8 = v86 < v87 ? 0xC0000095 : 0;
        if ( v86 < v87 )
          break;
        if ( (unsigned int)++v82 >= *(_DWORD *)a4 )
          goto LABEL_212;
      }
    }
    else
    {
LABEL_212:
      v88 = -1LL;
      if ( v81 + 4 >= v81 )
        v88 = (__int64)(v81 + 4);
      v8 = v81 + 4 < v81 ? 0xC0000095 : 0;
      if ( v81 + 4 >= v81 )
      {
        if ( (unsigned __int64)(v81 + 8) > v76 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_146;
        *(_DWORD *)v81 = 4;
        *(_DWORD *)v88 = v77;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v78 = *(_DWORD *)(a4 + 4);
    v79 = -1;
    v80 = v78 + 8;
    if ( v78 + 8 >= v78 )
      v79 = v78 + 8;
    v8 = v80 < v78 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v79;
    if ( v80 >= v78 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_218;
    }
  }
  if ( v8 < 0 )
    goto LABEL_293;
LABEL_218:
  v89 = *(_QWORD *)(a4 + 8);
  if ( v89 )
  {
    v93 = *(char **)(a4 + 8);
    v94 = 0;
    if ( *(_DWORD *)a4 )
    {
      v95 = v49 + 4;
      do
      {
        v96 = -1;
        if ( *(_DWORD *)v93 < 0xFFFFFFFC )
          v96 = *(_DWORD *)v93 + 4;
        if ( (unsigned int)(*(_DWORD *)v93 + 4) >= 4 )
          v95 = v96;
        v8 = *(_DWORD *)v93 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( *(_DWORD *)v93 >= 0xFFFFFFFC )
          goto LABEL_239;
        v97 = -1LL;
        v98 = &v93[v95];
        v99 = v93;
        if ( v98 >= v93 )
          v97 = (__int64)&v93[v95];
        v93 = (char *)v97;
        v8 = v98 < v99 ? 0xC0000095 : 0;
        if ( v98 < v99 )
          goto LABEL_239;
      }
      while ( (unsigned int)++v94 < *(_DWORD *)a4 );
    }
    v100 = -1LL;
    if ( v93 + 4 >= v93 )
      v100 = (__int64)(v93 + 4);
    v8 = v93 + 4 < v93 ? 0xC0000095 : 0;
    if ( v93 + 4 < v93 )
      goto LABEL_239;
    if ( (unsigned __int64)(v93 + 12) <= v89 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v101 = v133;
      *(_DWORD *)v93 = 8;
      *(_QWORD *)v100 = v101;
      ++*(_DWORD *)a4;
      goto LABEL_239;
    }
LABEL_146:
    v8 = -1073741789;
    goto LABEL_293;
  }
  v90 = *(_DWORD *)(a4 + 4);
  v91 = -1;
  v92 = v90 + 12;
  if ( v90 + 12 >= v90 )
    v91 = v90 + 12;
  v8 = v92 < v90 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v91;
  if ( v92 >= v90 )
  {
    ++*(_DWORD *)a4;
    goto LABEL_240;
  }
LABEL_239:
  if ( v8 < 0 )
    goto LABEL_293;
LABEL_240:
  v16 = v130;
  if ( v130 )
  {
    if ( !v49 )
      goto LABEL_242;
  }
  else if ( v49 )
  {
LABEL_242:
    v8 = -1073741811;
    goto LABEL_243;
  }
  v106 = *(_QWORD *)(a4 + 8);
  if ( v106 )
  {
    v111 = *(char **)(a4 + 8);
    v112 = 0;
    if ( *(_DWORD *)a4 )
    {
      v113 = v49 + 4;
      while ( 1 )
      {
        v114 = -1;
        if ( *(_DWORD *)v111 < 0xFFFFFFFC )
          v114 = *(_DWORD *)v111 + 4;
        if ( (unsigned int)(*(_DWORD *)v111 + 4) >= 4 )
          v113 = v114;
        v8 = *(_DWORD *)v111 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( *(_DWORD *)v111 >= 0xFFFFFFFC )
          break;
        v115 = -1LL;
        v116 = &v111[v113];
        v117 = v111;
        if ( v116 >= v111 )
          v115 = (__int64)&v111[v113];
        v111 = (char *)v115;
        v8 = v116 < v117 ? 0xC0000095 : 0;
        if ( v116 < v117 )
          break;
        if ( (unsigned int)++v112 >= *(_DWORD *)a4 )
          goto LABEL_269;
      }
    }
    else
    {
LABEL_269:
      v118 = -1LL;
      if ( v111 + 4 >= v111 )
        v118 = (__int64)(v111 + 4);
      v8 = v111 + 4 < v111 ? 0xC0000095 : 0;
      if ( v111 + 4 >= v111 )
      {
        if ( (unsigned __int64)&v111[v49 + 4] > v106 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v8 = -1073741789;
          goto LABEL_294;
        }
        *(_DWORD *)v111 = v49;
        if ( v16 )
          memmove((void *)v118, v16, v49);
        ++*(_DWORD *)a4;
      }
    }
    goto LABEL_243;
  }
  v107 = v49 + 4;
  v8 = v49 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v49 + 4 >= 4 )
    v107 = v49 + 4;
  if ( v49 < 0xFFFFFFFC )
  {
    v108 = *(_DWORD *)(a4 + 4);
    v109 = -1;
    v110 = v108 + v107;
    if ( v110 >= v108 )
      v109 = v110;
    v8 = v110 < v108 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v109;
    if ( v110 >= v108 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_244;
    }
LABEL_243:
    if ( v8 < 0 )
      goto LABEL_294;
LABEL_244:
    v102 = *(_QWORD *)(a4 + 8);
    v103 = v129;
    if ( !v102 )
    {
      v104 = *(_DWORD *)(a4 + 4);
      v105 = v104 + 8;
      if ( v104 + 8 >= v104 )
        v60 = v104 + 8;
      v8 = v105 < v104 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v60;
      if ( v105 >= v104 )
      {
        ++*(_DWORD *)a4;
        v8 = 0;
      }
      goto LABEL_293;
    }
    v119 = *(char **)(a4 + 8);
    v120 = 0;
    if ( *(_DWORD *)a4 )
    {
      v121 = v49 + 4;
      do
      {
        v122 = -1;
        if ( *(_DWORD *)v119 < 0xFFFFFFFC )
          v122 = *(_DWORD *)v119 + 4;
        if ( (unsigned int)(*(_DWORD *)v119 + 4) >= 4 )
          v121 = v122;
        v8 = *(_DWORD *)v119 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( *(_DWORD *)v119 >= 0xFFFFFFFC )
          goto LABEL_293;
        v123 = -1LL;
        v124 = &v119[v121];
        v125 = v119;
        if ( v124 >= v119 )
          v123 = (__int64)&v119[v121];
        v119 = (char *)v123;
        v8 = v124 < v125 ? 0xC0000095 : 0;
        if ( v124 < v125 )
          goto LABEL_293;
      }
      while ( (unsigned int)++v120 < *(_DWORD *)a4 );
    }
    v126 = -1LL;
    if ( v119 + 4 >= v119 )
      v126 = (__int64)(v119 + 4);
    v8 = v119 + 4 < v119 ? 0xC0000095 : 0;
    if ( v119 + 4 >= v119 )
    {
      if ( (unsigned __int64)(v119 + 8) <= v102 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)v119 = 4;
        *(_DWORD *)v126 = v103;
        ++*(_DWORD *)a4;
        goto LABEL_293;
      }
      goto LABEL_146;
    }
LABEL_293:
    v16 = v130;
  }
LABEL_294:
  if ( pcbLength )
    ExFreePoolWithTag((PVOID)pcbLength, 0x20534C53u);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x20534C53u);
  return (unsigned int)v8;
}
