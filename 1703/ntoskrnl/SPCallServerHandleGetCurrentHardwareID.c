/*
 * XREFs of SPCallServerHandleGetCurrentHardwareID @ 0x140152A3C
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetCurrentHardwareID(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r13
  PVOID v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  signed int v13; // ebx
  unsigned int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned int i; // r9d
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  unsigned int *v22; // rax
  unsigned int v23; // esi
  int v24; // ebx
  PVOID v25; // rcx
  int v26; // r15d
  unsigned int v27; // ecx
  int v28; // r14d
  int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // eax
  int v34; // ecx
  unsigned int v35; // r9d
  int v36; // r11d
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // edx
  PVOID PoolWithTag; // rax
  __int64 v45; // r10
  int v46; // r15d
  int v47; // r9d
  char *v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r10
  int v51; // r9d
  char *v52; // r8
  unsigned int v53; // r15d
  int v54; // ecx
  char *v55; // rcx
  char *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  const void *v59; // r11
  __int64 v60; // r10
  int v61; // r9d
  char *v62; // r8
  unsigned int v63; // r11d
  int v64; // ecx
  char *v65; // rcx
  char *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // r9
  unsigned int v70; // r15d
  int v71; // r10d
  char *v72; // r8
  unsigned int v73; // r11d
  int v74; // ecx
  char *v75; // rcx
  char *v76; // rdx
  __int64 v77; // rax
  unsigned int v79; // edx
  int v80; // eax
  unsigned int v81; // ecx
  unsigned int v82; // r15d
  int v83; // ecx
  char *v84; // rcx
  char *v85; // rdx
  __int64 v86; // rax
  unsigned int v87; // edx
  int v88; // eax
  unsigned int v89; // ecx
  unsigned int v90; // ecx
  unsigned int v91; // edx
  int v92; // eax
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95; // eax
  int v96; // [rsp+20h] [rbp-20h]
  PVOID Src; // [rsp+30h] [rbp-10h]
  _QWORD *v98; // [rsp+38h] [rbp-8h]
  unsigned int v99; // [rsp+80h] [rbp+40h] BYREF

  v99 = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  Src = 0LL;
  v99 = 0;
  v9 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v10 = v4;
    do
    {
      v11 = *(unsigned int *)v10;
      v12 = v10 + 4;
      if ( v10 + 4 < v10 )
      {
        v12 = -1LL;
        v13 = -1073741675;
      }
      else
      {
        v13 = 0;
      }
      if ( v13 < 0 )
        goto LABEL_156;
      v10 = -1LL;
      if ( v12 + v11 >= v12 )
        v10 = v12 + v11;
      v13 = v12 + v11 < v12 ? 0xC0000095 : 0;
      if ( v12 + v11 < v12 )
        goto LABEL_156;
      LODWORD(v9) = (_DWORD)v9 + 1;
    }
    while ( (unsigned int)v9 < 3 );
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v13 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_156:
      v14 = v99;
      v16 = v98;
      goto LABEL_16;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_16:
    if ( v13 >= 0 )
    {
      if ( v14 != 8 )
        return (unsigned int)-1073741789;
      v98 = (_QWORD *)*v16;
    }
    v9 = 0LL;
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    for ( i = 0; i < 4; ++i )
    {
      v18 = *(unsigned int *)v4;
      v19 = v4 + 4;
      if ( v4 + 4 < v4 )
      {
        v19 = -1LL;
        v13 = -1073741675;
      }
      else
      {
        v13 = 0;
      }
      if ( v13 < 0 )
        goto LABEL_161;
      v4 = -1LL;
      if ( v19 + v18 >= v19 )
        v4 = v19 + v18;
      v13 = v19 + v18 < v19 ? 0xC0000095 : 0;
      if ( v19 + v18 < v19 )
        goto LABEL_161;
    }
    v20 = *(_DWORD *)v4;
    v21 = -1LL;
    if ( v4 + 4 >= v4 )
      v21 = v4 + 4;
    v13 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_161:
      v20 = v99;
      v22 = (unsigned int *)v98;
      goto LABEL_36;
    }
    v22 = 0LL;
    if ( v20 )
      v22 = (unsigned int *)v21;
LABEL_36:
    if ( v13 >= 0 )
    {
      if ( v20 == 4 )
      {
        v23 = *v22;
        goto LABEL_39;
      }
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  v23 = v99;
LABEL_39:
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( v23 )
  {
    v24 = 0;
    Src = ExAllocatePoolWithTag(PagedPool, v23, 0x20534C53u);
    v9 = Src;
    if ( !Src )
      return (unsigned int)-1073741801;
  }
  else
  {
    v24 = 1;
  }
  if ( qword_1407AC438 )
  {
    v25 = v9;
    if ( v24 )
      v25 = 0LL;
    v26 = qword_1407AC438(v25, v23, &v99);
  }
  else
  {
    v26 = -1073741637;
  }
  v27 = 12;
  v28 = -1;
  v29 = -1;
  if ( v23 < 0xFFFFFFFC )
    v29 = v23 + 4;
  v13 = v23 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v23 + 4 >= 4 )
    v27 = v29;
  if ( v23 >= 0xFFFFFFFC )
  {
    v30 = v99;
  }
  else
  {
    if ( v27 >= 0xFFFFFFEC || (v30 = v27 + 28, v27 + 28 < v27 + 20) )
    {
      v13 = -1073741675;
      goto LABEL_149;
    }
    v13 = 0;
  }
  if ( v13 < 0 )
    goto LABEL_149;
  v31 = -1;
  if ( v30 < 0xFFFFFFF8 )
    v31 = v30 + 8;
  v13 = v30 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
  if ( v30 + 8 >= 8 )
  {
    v32 = (v31 + 7) & 0xFFFFFFF8;
    if ( v32 < v31 )
    {
      v13 = -1073741675;
      v35 = v99;
    }
    else
    {
      v33 = v32 + 8;
      v34 = -1;
      if ( v32 + 8 >= v32 )
        v34 = v32 + 8;
      v13 = v33 < v32 ? 0xC0000095 : 0;
      v35 = v99;
      if ( v33 >= v32 )
        v35 = v34;
    }
    if ( v13 < 0 )
      goto LABEL_149;
    v36 = *(_DWORD *)(a2 + 16);
    v37 = -1;
    if ( v35 < 0xFFFFFFFC )
      v37 = v35 + 4;
    v13 = v35 >= 0xFFFFFFFC ? 0xC0000095 : 0;
    if ( v35 + 4 >= 4 )
    {
      v38 = v37 + 4;
      v39 = -1;
      if ( v37 + 4 >= v37 )
        v39 = v37 + 4;
      v13 = v38 < v37 ? 0xC0000095 : 0;
      if ( v38 >= v37 )
      {
        v40 = v39 + v36;
        v41 = -1;
        if ( v39 + v36 >= v39 )
          v41 = v39 + v36;
        v13 = v40 < v39 ? 0xC0000095 : 0;
        if ( v40 >= v39 )
        {
          v42 = v41 + 4;
          v43 = -1;
          if ( v41 + 4 >= v41 )
            v43 = v41 + 4;
          v13 = v42 < v41 ? 0xC0000095 : 0;
          if ( v42 >= v41 )
            v13 = v43 + *(_DWORD *)(a2 + 32) < v43 ? 0xC0000095 : 0;
        }
      }
    }
  }
  if ( v13 < 0 )
    goto LABEL_149;
  if ( !a4 )
  {
    v13 = -1073741811;
    goto LABEL_149;
  }
  v13 = 0;
  *(_DWORD *)(a4 + 4) = v30;
  if ( v30 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v30, 0x20534C53u);
    if ( PoolWithTag )
    {
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v13 = -1073741801;
    }
  }
  else
  {
    v13 = -1073741762;
  }
  if ( v13 < 0 )
    goto LABEL_149;
  v45 = *(_QWORD *)(a4 + 8);
  v46 = v26 | 0x10000000;
  v96 = v46;
  if ( v45 )
  {
    v47 = 0;
    v48 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      v82 = v99;
      while ( 1 )
      {
        v83 = -1;
        if ( *(_DWORD *)v48 < 0xFFFFFFFC )
          v83 = *(_DWORD *)v48 + 4;
        if ( (unsigned int)(*(_DWORD *)v48 + 4) >= 4 )
          v82 = v83;
        v13 = *(_DWORD *)v48 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( *(_DWORD *)v48 >= 0xFFFFFFFC )
          break;
        v84 = v48;
        v85 = &v48[v82];
        v86 = -1LL;
        if ( v85 >= v48 )
          v86 = (__int64)&v48[v82];
        v48 = (char *)v86;
        v13 = v85 < v84 ? 0xC0000095 : 0;
        if ( v85 < v84 )
          break;
        if ( (unsigned int)++v47 >= *(_DWORD *)a4 )
        {
          v46 = v96;
          goto LABEL_85;
        }
      }
    }
    else
    {
LABEL_85:
      v49 = -1LL;
      if ( v48 + 4 >= v48 )
        v49 = (__int64)(v48 + 4);
      v13 = v48 + 4 < v48 ? 0xC0000095 : 0;
      if ( v48 + 4 >= v48 )
      {
        if ( (unsigned __int64)(v48 + 8) > v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_153;
        *(_DWORD *)v48 = 4;
        *(_DWORD *)v49 = v46;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v79 = *(_DWORD *)(a4 + 4);
    v80 = -1;
    v81 = v79 + 8;
    if ( v79 + 8 >= v79 )
      v80 = v79 + 8;
    v13 = v81 < v79 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v80;
    if ( v81 >= v79 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_91;
    }
  }
  if ( v13 < 0 )
    goto LABEL_149;
LABEL_91:
  v50 = *(_QWORD *)(a4 + 8);
  if ( v50 )
  {
    v51 = 0;
    v52 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      v53 = v99;
      while ( 1 )
      {
        v54 = -1;
        if ( *(_DWORD *)v52 < 0xFFFFFFFC )
          v54 = *(_DWORD *)v52 + 4;
        if ( (unsigned int)(*(_DWORD *)v52 + 4) >= 4 )
          v53 = v54;
        v13 = *(_DWORD *)v52 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( *(_DWORD *)v52 >= 0xFFFFFFFC )
          break;
        v55 = v52;
        v56 = &v52[v53];
        v57 = -1LL;
        if ( v56 >= v52 )
          v57 = (__int64)&v52[v53];
        v52 = (char *)v57;
        v13 = v56 < v55 ? 0xC0000095 : 0;
        if ( v56 < v55 )
          break;
        if ( (unsigned int)++v51 >= *(_DWORD *)a4 )
          goto LABEL_103;
      }
    }
    else
    {
LABEL_103:
      v58 = -1LL;
      if ( v52 + 4 >= v52 )
        v58 = (__int64)(v52 + 4);
      v13 = v52 + 4 < v52 ? 0xC0000095 : 0;
      if ( v52 + 4 >= v52 )
      {
        if ( (unsigned __int64)(v52 + 12) > v50 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_153;
        *(_DWORD *)v52 = 8;
        *(_QWORD *)v58 = v98;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v87 = *(_DWORD *)(a4 + 4);
    v88 = -1;
    v89 = v87 + 12;
    if ( v87 + 12 >= v87 )
      v88 = v87 + 12;
    v13 = v89 < v87 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v88;
    if ( v89 >= v87 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_109;
    }
  }
  if ( v13 < 0 )
    goto LABEL_149;
LABEL_109:
  v59 = Src;
  if ( Src )
  {
    if ( v23 )
      goto LABEL_111;
LABEL_190:
    v13 = -1073741811;
    goto LABEL_131;
  }
  if ( v23 )
    goto LABEL_190;
LABEL_111:
  v60 = *(_QWORD *)(a4 + 8);
  if ( v60 )
  {
    v61 = 0;
    v62 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      v63 = v99;
      while ( 1 )
      {
        v64 = -1;
        if ( *(_DWORD *)v62 < 0xFFFFFFFC )
          v64 = *(_DWORD *)v62 + 4;
        if ( (unsigned int)(*(_DWORD *)v62 + 4) >= 4 )
          v63 = v64;
        v13 = *(_DWORD *)v62 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( *(_DWORD *)v62 >= 0xFFFFFFFC )
          goto LABEL_131;
        v65 = v62;
        v66 = &v62[v63];
        v67 = -1LL;
        if ( v66 >= v62 )
          v67 = (__int64)&v62[v63];
        v62 = (char *)v67;
        v13 = v66 < v65 ? 0xC0000095 : 0;
        if ( v66 < v65 )
          goto LABEL_131;
        if ( (unsigned int)++v61 >= *(_DWORD *)a4 )
        {
          v59 = Src;
          break;
        }
      }
    }
    v68 = -1LL;
    if ( v62 + 4 >= v62 )
      v68 = (__int64)(v62 + 4);
    v13 = v62 + 4 < v62 ? 0xC0000095 : 0;
    if ( v62 + 4 < v62 )
      goto LABEL_131;
    if ( (unsigned __int64)&v62[v23 + 4] <= v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v62 = v23;
      if ( v59 )
        memmove((void *)v68, v59, v23);
      ++*(_DWORD *)a4;
      goto LABEL_131;
    }
LABEL_153:
    v13 = -1073741789;
    goto LABEL_149;
  }
  v90 = v99;
  v13 = v23 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v23 + 4 >= 4 )
    v90 = v23 + 4;
  if ( v23 >= 0xFFFFFFFC )
    goto LABEL_149;
  v91 = *(_DWORD *)(a4 + 4);
  v92 = -1;
  v93 = v91 + v90;
  if ( v93 >= v91 )
    v92 = v93;
  v13 = v93 < v91 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v92;
  if ( v93 >= v91 )
  {
    ++*(_DWORD *)a4;
    goto LABEL_132;
  }
LABEL_131:
  if ( v13 < 0 )
    goto LABEL_149;
LABEL_132:
  v69 = *(_QWORD *)(a4 + 8);
  v70 = v99;
  if ( !v69 )
  {
    v94 = *(_DWORD *)(a4 + 4);
    v95 = v94 + 8;
    if ( v94 + 8 >= v94 )
      v28 = v94 + 8;
    v13 = v95 < v94 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v28;
    if ( v95 >= v94 )
    {
      ++*(_DWORD *)a4;
      v13 = 0;
    }
    goto LABEL_149;
  }
  v71 = 0;
  v72 = *(char **)(a4 + 8);
  if ( *(_DWORD *)a4 )
  {
    v73 = v99;
    do
    {
      v74 = -1;
      if ( *(_DWORD *)v72 < 0xFFFFFFFC )
        v74 = *(_DWORD *)v72 + 4;
      if ( (unsigned int)(*(_DWORD *)v72 + 4) >= 4 )
        v73 = v74;
      v13 = *(_DWORD *)v72 >= 0xFFFFFFFC ? 0xC0000095 : 0;
      if ( *(_DWORD *)v72 >= 0xFFFFFFFC )
        goto LABEL_149;
      v75 = v72;
      v76 = &v72[v73];
      v77 = -1LL;
      if ( v76 >= v72 )
        v77 = (__int64)&v72[v73];
      v72 = (char *)v77;
      v13 = v76 < v75 ? 0xC0000095 : 0;
      if ( v76 < v75 )
        goto LABEL_149;
    }
    while ( (unsigned int)++v71 < *(_DWORD *)a4 );
  }
  if ( v72 + 4 >= v72 )
    v5 = (__int64)(v72 + 4);
  v13 = v72 + 4 < v72 ? 0xC0000095 : 0;
  if ( v72 + 4 >= v72 )
  {
    if ( (unsigned __int64)(v72 + 8) <= v69 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v72 = 4;
      *(_DWORD *)v5 = v70;
      ++*(_DWORD *)a4;
      goto LABEL_149;
    }
    goto LABEL_153;
  }
LABEL_149:
  if ( Src )
    ExFreePoolWithTag(Src, 0x20534C53u);
  return (unsigned int)v13;
}
