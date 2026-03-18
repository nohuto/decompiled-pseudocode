/*
 * XREFs of sub_140764FA4 @ 0x140764FA4
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140764FA4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v7; // r13
  signed int v8; // r8d
  unsigned __int64 v9; // r9
  __int64 v10; // r14
  unsigned __int64 v11; // r10
  unsigned int i; // esi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  unsigned int v18; // r15d
  unsigned __int64 v19; // r10
  unsigned int j; // r11d
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  unsigned int v23; // r12d
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  unsigned int k; // r11d
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned int v30; // r11d
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned int m; // edx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rdx
  int v38; // esi
  int v39; // r15d
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // edx
  char *PoolWithTag; // rax
  char *v44; // rdx
  int v45; // esi
  char *v46; // rax
  __int64 v47; // r9
  __int64 v48; // r10
  unsigned int v49; // edx
  int v50; // eax
  unsigned int v51; // ecx
  char *v52; // r9
  int v53; // r11d
  unsigned int v54; // eax
  unsigned int v55; // r12d
  char *v56; // rcx
  char *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r10
  unsigned int v61; // ecx
  unsigned int v62; // eax
  char *v63; // r9
  unsigned int v64; // eax
  unsigned int v65; // r11d
  char *v66; // rcx
  char *v67; // rdx
  __int64 v68; // rax
  __int64 v70; // [rsp+58h] [rbp-9h]
  _QWORD *v71; // [rsp+60h] [rbp-1h]
  _OWORD v73[2]; // [rsp+70h] [rbp+Fh] BYREF

  v4 = 0;
  v70 = 0LL;
  v7 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = -1LL;
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v13 = -1LL;
      if ( v11 + 4 >= v11 )
        v13 = v11 + 4;
      v8 = v11 + 4 < v11 ? 0xC0000095 : 0;
      if ( v11 + 4 < v11 )
        goto LABEL_22;
      v14 = v13 + *(unsigned int *)v11;
      v11 = -1LL;
      if ( v14 >= v13 )
        v11 = v14;
      v8 = v14 < v13 ? 0xC0000095 : 0;
      if ( v14 < v13 )
        goto LABEL_22;
    }
    v15 = *(_DWORD *)v11;
    v16 = -1LL;
    if ( v11 + 4 >= v11 )
      v16 = v11 + 4;
    v8 = v11 + 4 < v11 ? 0xC0000095 : 0;
    if ( v11 + 4 < v11 )
    {
LABEL_22:
      v15 = 0;
      v17 = v71;
      goto LABEL_23;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_23:
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v71 = (_QWORD *)*v17;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( !v9 )
    return (unsigned int)-1073741811;
  v18 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v19 = v9;
  for ( j = 0; j < 4; ++j )
  {
    v21 = -1LL;
    if ( v19 + 4 >= v19 )
      v21 = v19 + 4;
    v8 = v19 + 4 < v19 ? 0xC0000095 : 0;
    if ( v19 + 4 < v19 )
      goto LABEL_44;
    v22 = v21 + *(unsigned int *)v19;
    v19 = -1LL;
    if ( v22 >= v21 )
      v19 = v22;
    v8 = v22 < v21 ? 0xC0000095 : 0;
    if ( v22 < v21 )
      goto LABEL_44;
  }
  v23 = *(_DWORD *)v19;
  v24 = -1LL;
  if ( v19 + 4 >= v19 )
    v24 = v19 + 4;
  v8 = v19 + 4 < v19 ? 0xC0000095 : 0;
  if ( v19 + 4 < v19 )
  {
LABEL_44:
    v23 = 0;
    goto LABEL_45;
  }
  v25 = 0LL;
  if ( v23 )
    v25 = v24;
  v70 = v25;
LABEL_45:
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v18 <= 5 )
    return (unsigned int)-1073741811;
  v26 = v9;
  for ( k = 0; k < 5; ++k )
  {
    v28 = -1LL;
    if ( v26 + 4 >= v26 )
      v28 = v26 + 4;
    v8 = v26 + 4 < v26 ? 0xC0000095 : 0;
    if ( v26 + 4 < v26 )
      goto LABEL_61;
    v29 = v28 + *(unsigned int *)v26;
    v26 = -1LL;
    if ( v29 >= v28 )
      v26 = v29;
    v8 = v29 < v28 ? 0xC0000095 : 0;
    if ( v29 < v28 )
      goto LABEL_61;
  }
  v30 = *(_DWORD *)v26;
  v31 = -1LL;
  if ( v26 + 4 >= v26 )
    v31 = v26 + 4;
  v8 = v26 + 4 < v26 ? 0xC0000095 : 0;
  if ( v26 + 4 < v26 )
  {
LABEL_61:
    v30 = v70;
    v32 = 0LL;
    goto LABEL_62;
  }
  v32 = 0LL;
  if ( v30 )
    v32 = v31;
LABEL_62:
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v18 <= 6 )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v34 = -1LL;
    if ( v9 + 4 >= v9 )
      v34 = v9 + 4;
    v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
      goto LABEL_78;
    v35 = v34 + *(unsigned int *)v9;
    v9 = -1LL;
    if ( v35 >= v34 )
      v9 = v35;
    v8 = v35 < v34 ? 0xC0000095 : 0;
    if ( v35 < v34 )
      goto LABEL_78;
  }
  v36 = *(_DWORD *)v9;
  v37 = -1LL;
  if ( v9 + 4 >= v9 )
    v37 = v9 + 4;
  v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
  if ( v9 + 4 < v9 )
  {
LABEL_78:
    v36 = v70;
    goto LABEL_79;
  }
  if ( v36 )
    v7 = v37;
LABEL_79:
  if ( v8 < 0 )
    return (unsigned int)v8;
  v38 = qword_1407F33E0
      ? ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, int, _OWORD *, int))qword_1407F3438)(
          v70,
          v23,
          v32,
          v30,
          v7,
          v36,
          v73,
          32)
      : -1073741637;
  v8 = v38;
  if ( v38 < 0 )
    return (unsigned int)v8;
  v39 = -1;
  v40 = -1;
  if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
    v40 = *(_DWORD *)(a2 + 16) + 80;
  v8 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 ? 0xC0000095 : 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 80) >= 0x50 )
  {
    v41 = v40 + 4;
    v42 = -1;
    if ( v40 + 4 >= v40 )
      v42 = v40 + 4;
    v8 = v41 < v40 ? 0xC0000095 : 0;
    if ( v41 >= v40 )
      v8 = v42 + *(_DWORD *)(a2 + 32) < v42 ? 0xC0000095 : 0;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  *(_DWORD *)(a4 + 4) = 56;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20534C53u);
  v44 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = PoolWithTag;
  *(_DWORD *)a4 = 0;
  v45 = v38 | 0x10000000;
  v46 = PoolWithTag + 4;
  v47 = -1LL;
  if ( v46 >= v44 )
    v47 = (__int64)v46;
  v8 = v46 < v44 ? 0xC0000095 : 0;
  if ( v46 >= v44 )
  {
    if ( v44 + 8 > &v44[*(unsigned int *)(a4 + 4)] )
      return (unsigned int)-1073741789;
    *(_DWORD *)v44 = 4;
    *(_DWORD *)v47 = v45;
    ++*(_DWORD *)a4;
  }
  if ( v46 < v44 )
    return (unsigned int)v8;
  v48 = *(_QWORD *)(a4 + 8);
  if ( v48 )
  {
    v52 = *(char **)(a4 + 8);
    v53 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v54 = -1;
        if ( *(_DWORD *)v52 < 0xFFFFFFFC )
          v54 = *(_DWORD *)v52 + 4;
        v8 = *(_DWORD *)v52 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v52 + 4) < 4 )
          break;
        v55 = v54;
        v56 = v52;
        v57 = &v52[v54];
        v58 = -1LL;
        if ( v57 >= v52 )
          v58 = (__int64)&v52[v55];
        v52 = (char *)v58;
        v8 = v57 < v56 ? 0xC0000095 : 0;
        if ( v57 < v56 )
          break;
        if ( (unsigned int)++v53 >= *(_DWORD *)a4 )
          goto LABEL_113;
      }
    }
    else
    {
LABEL_113:
      v59 = -1LL;
      if ( v52 + 4 >= v52 )
        v59 = (__int64)(v52 + 4);
      v8 = v52 + 4 < v52 ? 0xC0000095 : 0;
      if ( v52 + 4 >= v52 )
      {
        if ( (unsigned __int64)(v52 + 12) > v48 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *(_DWORD *)v52 = 8;
        *(_QWORD *)v59 = v71;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v49 = *(_DWORD *)(a4 + 4);
    v50 = -1;
    v51 = v49 + 12;
    if ( v49 + 12 >= v49 )
      v50 = v49 + 12;
    v8 = v51 < v49 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v50;
    if ( v51 >= v49 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_119;
    }
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
LABEL_119:
  v60 = *(_QWORD *)(a4 + 8);
  if ( v60 )
  {
    v63 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v64 = -1;
        if ( *(_DWORD *)v63 < 0xFFFFFFFC )
          v64 = *(_DWORD *)v63 + 4;
        v8 = *(_DWORD *)v63 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v63 + 4) < 4 )
          break;
        v65 = v64;
        v66 = v63;
        v67 = &v63[v64];
        v68 = -1LL;
        if ( v67 >= v63 )
          v68 = (__int64)&v63[v65];
        v63 = (char *)v68;
        v8 = v67 < v66 ? 0xC0000095 : 0;
        if ( v67 < v66 )
          break;
        if ( (unsigned int)++v4 >= *(_DWORD *)a4 )
          goto LABEL_132;
      }
      return (unsigned int)v8;
    }
LABEL_132:
    if ( v63 + 4 >= v63 )
      v10 = (__int64)(v63 + 4);
    v8 = v63 + 4 < v63 ? 0xC0000095 : 0;
    if ( v63 + 4 < v63 )
      return (unsigned int)v8;
    if ( (unsigned __int64)(v63 + 36) <= v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v63 = 32;
      *(_OWORD *)v10 = v73[0];
      *(_OWORD *)(v10 + 16) = v73[1];
      goto LABEL_138;
    }
    return (unsigned int)-1073741789;
  }
  v61 = *(_DWORD *)(a4 + 4);
  v62 = v61 + 36;
  if ( v61 + 36 >= v61 )
    v39 = v61 + 36;
  v8 = v62 < v61 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v39;
  if ( v62 >= v61 )
  {
    v8 = 0;
LABEL_138:
    ++*(_DWORD *)a4;
  }
  return (unsigned int)v8;
}
