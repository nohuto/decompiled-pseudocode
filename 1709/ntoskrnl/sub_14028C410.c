/*
 * XREFs of sub_14028C410 @ 0x14028C410
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14028C410(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r12
  PVOID v9; // r10
  signed int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned int v17; // esi
  int v18; // ebx
  unsigned int i; // r9d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rdx
  unsigned int *v24; // rax
  PVOID v25; // rcx
  int v26; // r15d
  int v27; // r14d
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // r9d
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // r11d
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // edx
  PVOID PoolWithTag; // rax
  __int64 v46; // r10
  int v47; // r15d
  unsigned int v48; // edx
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // r9d
  char *v52; // r8
  unsigned int v53; // eax
  unsigned int v54; // r15d
  char *v55; // rcx
  char *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r10
  unsigned int v60; // edx
  int v61; // eax
  unsigned int v62; // ecx
  int v63; // r9d
  char *v64; // r8
  unsigned int v65; // eax
  unsigned int v66; // r15d
  char *v67; // rcx
  char *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  const void *v71; // r11
  __int64 v72; // r9
  int v73; // r15d
  unsigned int v74; // ecx
  unsigned int v75; // eax
  __int64 v76; // r10
  unsigned int v77; // edx
  int v78; // eax
  unsigned int v79; // ecx
  int v80; // r9d
  char *v81; // r8
  unsigned int v82; // eax
  unsigned int v83; // r11d
  char *v84; // rcx
  char *v85; // rdx
  __int64 v86; // rax
  __int64 v87; // r9
  int v88; // r10d
  char *v89; // r8
  unsigned int v90; // eax
  unsigned int v91; // r11d
  char *v92; // rcx
  char *v93; // rdx
  __int64 v94; // rax
  int v96; // [rsp+20h] [rbp-20h]
  unsigned int v97; // [rsp+24h] [rbp-1Ch]
  PVOID Src; // [rsp+30h] [rbp-10h]
  _QWORD *v99; // [rsp+38h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+40h] BYREF

  LODWORD(NumberOfBytes) = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  Src = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v9 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v11 = v4;
    do
    {
      v12 = -1LL;
      if ( v11 + 4 >= v11 )
        v12 = v11 + 4;
      v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
      if ( v11 + 4 < v11 )
        goto LABEL_18;
      v13 = v12 + *(unsigned int *)v11;
      v11 = -1LL;
      if ( v13 >= v12 )
        v11 = v13;
      v10 = v13 < v12 ? 0xC0000095 : 0;
      if ( v13 < v12 )
        goto LABEL_18;
      LODWORD(v9) = (_DWORD)v9 + 1;
    }
    while ( (unsigned int)v9 < 3 );
    v14 = *(_DWORD *)v11;
    v15 = -1LL;
    if ( v11 + 4 >= v11 )
      v15 = v11 + 4;
    v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
    if ( v11 + 4 < v11 )
    {
LABEL_18:
      v14 = NumberOfBytes;
      v16 = v99;
      goto LABEL_19;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_19:
    if ( v10 >= 0 )
    {
      if ( v14 != 8 )
        return (unsigned int)-1073741789;
      v99 = (_QWORD *)*v16;
    }
    v9 = 0LL;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( !v4 || *(_DWORD *)a1 <= 4u )
  {
    v10 = -1073741811;
LABEL_27:
    v17 = NumberOfBytes;
    goto LABEL_28;
  }
  for ( i = 0; i < 4; ++i )
  {
    v20 = -1LL;
    if ( v4 + 4 >= v4 )
      v20 = v4 + 4;
    v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
      goto LABEL_47;
    v21 = v20 + *(unsigned int *)v4;
    v4 = -1LL;
    if ( v21 >= v20 )
      v4 = v21;
    v10 = v21 < v20 ? 0xC0000095 : 0;
    if ( v21 < v20 )
      goto LABEL_47;
  }
  v22 = *(_DWORD *)v4;
  v23 = -1LL;
  if ( v4 + 4 >= v4 )
    v23 = v4 + 4;
  v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
  if ( v4 + 4 < v4 )
  {
LABEL_47:
    v22 = NumberOfBytes;
    v24 = (unsigned int *)v99;
    goto LABEL_48;
  }
  v24 = 0LL;
  if ( v22 )
    v24 = (unsigned int *)v23;
LABEL_48:
  if ( v10 < 0 )
    goto LABEL_27;
  if ( v22 != 4 )
    return (unsigned int)-1073741789;
  v17 = *v24;
LABEL_28:
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( v17 )
  {
    v18 = 0;
    Src = ExAllocatePoolWithTag(PagedPool, v17, 0x20534C53u);
    v9 = Src;
    if ( !Src )
      return (unsigned int)-1073741801;
  }
  else
  {
    v18 = 1;
  }
  if ( qword_1407F3428 )
  {
    v25 = v9;
    if ( v18 )
      v25 = 0LL;
    v26 = qword_1407F3428(v25, v17, &NumberOfBytes);
  }
  else
  {
    v26 = -1073741637;
  }
  v27 = -1;
  v97 = v17 + 4;
  v28 = -1;
  if ( v17 < 0xFFFFFFFC )
    v28 = v17 + 4;
  v10 = v17 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v17 + 4 < 4 )
  {
    v31 = NumberOfBytes;
  }
  else
  {
    v29 = v28;
    v30 = v28 + 20;
    if ( v29 >= 0xFFFFFFEC || (v31 = v30 + 8, v30 + 8 < v30) )
    {
      v10 = -1073741675;
      goto LABEL_183;
    }
    v10 = 0;
  }
  if ( v10 < 0 )
    goto LABEL_183;
  v32 = -1;
  if ( v31 < 0xFFFFFFF8 )
    v32 = v31 + 8;
  v10 = v31 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
  if ( v31 + 8 >= 8 )
  {
    v33 = (v32 + 7) & 0xFFFFFFF8;
    if ( v33 >= v32 )
    {
      v35 = v33 + 8;
      v36 = -1;
      if ( v33 + 8 >= v33 )
        v36 = v33 + 8;
      v10 = v35 < v33 ? 0xC0000095 : 0;
      v34 = NumberOfBytes;
      if ( v35 >= v33 )
        v34 = v36;
    }
    else
    {
      v10 = -1073741675;
      v34 = NumberOfBytes;
    }
    if ( v10 < 0 )
      goto LABEL_183;
    v37 = *(_DWORD *)(a2 + 16);
    v38 = -1;
    if ( v34 < 0xFFFFFFFC )
      v38 = v34 + 4;
    v10 = v34 >= 0xFFFFFFFC ? 0xC0000095 : 0;
    if ( v34 + 4 >= 4 )
    {
      v39 = v38 + 4;
      v40 = -1;
      if ( v38 + 4 >= v38 )
        v40 = v38 + 4;
      v10 = v39 < v38 ? 0xC0000095 : 0;
      if ( v39 >= v38 )
      {
        v41 = v40 + v37;
        v42 = -1;
        if ( v40 + v37 >= v40 )
          v42 = v40 + v37;
        v10 = v41 < v40 ? 0xC0000095 : 0;
        if ( v41 >= v40 )
        {
          v43 = v42 + 4;
          v44 = -1;
          if ( v42 + 4 >= v42 )
            v44 = v42 + 4;
          v10 = v43 < v42 ? 0xC0000095 : 0;
          if ( v43 >= v42 )
            v10 = v44 + *(_DWORD *)(a2 + 32) < v44 ? 0xC0000095 : 0;
        }
      }
    }
  }
  if ( v10 < 0 )
    goto LABEL_183;
  if ( !a4 )
  {
    v10 = -1073741811;
    goto LABEL_183;
  }
  v10 = 0;
  *(_DWORD *)(a4 + 4) = v31;
  if ( v31 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v31, 0x20534C53u);
    if ( PoolWithTag )
    {
      *(_QWORD *)(a4 + 8) = PoolWithTag;
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
    goto LABEL_183;
  v46 = *(_QWORD *)(a4 + 8);
  v47 = v26 | 0x10000000;
  v96 = v47;
  if ( v46 )
  {
    v51 = 0;
    v52 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v53 = -1;
        if ( *(_DWORD *)v52 < 0xFFFFFFFC )
          v53 = *(_DWORD *)v52 + 4;
        v10 = *(_DWORD *)v52 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v52 + 4) < 4 )
          break;
        v54 = v53;
        v55 = v52;
        v56 = &v52[v53];
        v57 = -1LL;
        if ( v56 >= v52 )
          v57 = (__int64)&v52[v54];
        v52 = (char *)v57;
        v10 = v56 < v55 ? 0xC0000095 : 0;
        if ( v56 < v55 )
          break;
        if ( (unsigned int)++v51 >= *(_DWORD *)a4 )
        {
          v47 = v96;
          goto LABEL_112;
        }
      }
    }
    else
    {
LABEL_112:
      v58 = -1LL;
      if ( v52 + 4 >= v52 )
        v58 = (__int64)(v52 + 4);
      v10 = v52 + 4 < v52 ? 0xC0000095 : 0;
      if ( v52 + 4 >= v52 )
      {
        if ( (unsigned __int64)(v52 + 8) > v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_181;
        *(_DWORD *)v52 = 4;
        *(_DWORD *)v58 = v47;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v48 = *(_DWORD *)(a4 + 4);
    v49 = -1;
    v50 = v48 + 8;
    if ( v48 + 8 >= v48 )
      v49 = v48 + 8;
    v10 = v50 < v48 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v49;
    if ( v50 >= v48 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_118;
    }
  }
  if ( v10 < 0 )
    goto LABEL_183;
LABEL_118:
  v59 = *(_QWORD *)(a4 + 8);
  if ( v59 )
  {
    v63 = 0;
    v64 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v65 = -1;
        if ( *(_DWORD *)v64 < 0xFFFFFFFC )
          v65 = *(_DWORD *)v64 + 4;
        v10 = *(_DWORD *)v64 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v64 + 4) < 4 )
          break;
        v66 = v65;
        v67 = v64;
        v68 = &v64[v65];
        v69 = -1LL;
        if ( v68 >= v64 )
          v69 = (__int64)&v64[v66];
        v64 = (char *)v69;
        v10 = v68 < v67 ? 0xC0000095 : 0;
        if ( v68 < v67 )
          break;
        if ( (unsigned int)++v63 >= *(_DWORD *)a4 )
          goto LABEL_131;
      }
    }
    else
    {
LABEL_131:
      v70 = -1LL;
      if ( v64 + 4 >= v64 )
        v70 = (__int64)(v64 + 4);
      v10 = v64 + 4 < v64 ? 0xC0000095 : 0;
      if ( v64 + 4 >= v64 )
      {
        if ( (unsigned __int64)(v64 + 12) > v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_181;
        *(_DWORD *)v64 = 8;
        *(_QWORD *)v70 = v99;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v60 = *(_DWORD *)(a4 + 4);
    v61 = -1;
    v62 = v60 + 12;
    if ( v60 + 12 >= v60 )
      v61 = v60 + 12;
    v10 = v62 < v60 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v61;
    if ( v62 >= v60 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_137;
    }
  }
  if ( v10 < 0 )
    goto LABEL_183;
LABEL_137:
  v71 = Src;
  if ( Src )
  {
    if ( !v17 )
      goto LABEL_139;
  }
  else if ( v17 )
  {
LABEL_139:
    v10 = -1073741811;
    goto LABEL_140;
  }
  v76 = *(_QWORD *)(a4 + 8);
  if ( v76 )
  {
    v80 = 0;
    v81 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v82 = -1;
        if ( *(_DWORD *)v81 < 0xFFFFFFFC )
          v82 = *(_DWORD *)v81 + 4;
        v10 = *(_DWORD *)v81 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v81 + 4) < 4 )
          goto LABEL_140;
        v83 = v82;
        v84 = v81;
        v85 = &v81[v82];
        v86 = -1LL;
        if ( v85 >= v81 )
          v86 = (__int64)&v81[v83];
        v81 = (char *)v86;
        v10 = v85 < v84 ? 0xC0000095 : 0;
        if ( v85 < v84 )
          goto LABEL_140;
        if ( (unsigned int)++v80 >= *(_DWORD *)a4 )
        {
          v71 = Src;
          break;
        }
      }
    }
    v87 = -1LL;
    if ( v81 + 4 >= v81 )
      v87 = (__int64)(v81 + 4);
    v10 = v81 + 4 < v81 ? 0xC0000095 : 0;
    if ( v81 + 4 < v81 )
      goto LABEL_140;
    if ( (unsigned __int64)&v81[v17 + 4] <= v76 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v81 = v17;
      if ( v71 )
        memmove((void *)v87, v71, v17);
      ++*(_DWORD *)a4;
      goto LABEL_140;
    }
LABEL_181:
    v10 = -1073741789;
    goto LABEL_183;
  }
  v10 = v17 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v97 >= 4 )
  {
    v77 = *(_DWORD *)(a4 + 4);
    v78 = -1;
    v79 = v77 + v97;
    if ( v77 + v97 >= v77 )
      v78 = v77 + v97;
    v10 = v79 < v77 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v78;
    if ( v79 >= v77 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_141;
    }
  }
LABEL_140:
  if ( v10 < 0 )
    goto LABEL_183;
LABEL_141:
  v72 = *(_QWORD *)(a4 + 8);
  v73 = NumberOfBytes;
  if ( !v72 )
  {
    v74 = *(_DWORD *)(a4 + 4);
    v75 = v74 + 8;
    if ( v74 + 8 >= v74 )
      v27 = v74 + 8;
    v10 = v75 < v74 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v27;
    if ( v75 >= v74 )
    {
      ++*(_DWORD *)a4;
      v10 = 0;
    }
    goto LABEL_183;
  }
  v88 = 0;
  v89 = *(char **)(a4 + 8);
  if ( *(_DWORD *)a4 )
  {
    do
    {
      v90 = -1;
      if ( *(_DWORD *)v89 < 0xFFFFFFFC )
        v90 = *(_DWORD *)v89 + 4;
      v10 = *(_DWORD *)v89 >= 0xFFFFFFFC ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)v89 + 4) < 4 )
        goto LABEL_183;
      v91 = v90;
      v92 = v89;
      v93 = &v89[v90];
      v94 = -1LL;
      if ( v93 >= v89 )
        v94 = (__int64)&v89[v91];
      v89 = (char *)v94;
      v10 = v93 < v92 ? 0xC0000095 : 0;
      if ( v93 < v92 )
        goto LABEL_183;
    }
    while ( (unsigned int)++v88 < *(_DWORD *)a4 );
  }
  if ( v89 + 4 >= v89 )
    v5 = (__int64)(v89 + 4);
  v10 = v89 + 4 < v89 ? 0xC0000095 : 0;
  if ( v89 + 4 >= v89 )
  {
    if ( (unsigned __int64)(v89 + 8) > v72 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_181;
    *(_DWORD *)v89 = 4;
    *(_DWORD *)v5 = v73;
    ++*(_DWORD *)a4;
  }
LABEL_183:
  if ( Src )
    ExFreePoolWithTag(Src, 0x20534C53u);
  return (unsigned int)v10;
}
