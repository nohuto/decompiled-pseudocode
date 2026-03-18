/*
 * XREFs of sub_14076C270 @ 0x14076C270
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1400E3518 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14076C270(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  signed int v7; // ebx
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  unsigned int i; // r9d
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned int j; // r8d
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // r8
  const wchar_t *v22; // r11
  unsigned __int64 v23; // rdx
  __int64 v24; // r14
  void *v25; // r11
  unsigned int v26; // eax
  size_t v27; // r14
  PVOID PoolWithTag; // rax
  void *v29; // rbx
  void *v30; // r10
  unsigned int k; // r8d
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // esi
  int v37; // r14d
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  char *v41; // rax
  char *v42; // rdx
  int v43; // esi
  char *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // edx
  int v48; // eax
  unsigned int v49; // ecx
  char *v50; // r8
  int v51; // r10d
  unsigned int v52; // eax
  unsigned int v53; // esi
  char *v54; // rcx
  char *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // xmm0_8
  __int64 v59; // r9
  unsigned int v60; // ecx
  unsigned int v61; // eax
  int v62; // r10d
  char *v63; // r8
  unsigned int v64; // eax
  unsigned int v65; // esi
  char *v66; // rcx
  char *v67; // rdx
  __int64 v68; // rax
  size_t pcbLength; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v71; // [rsp+38h] [rbp-38h]
  PVOID P; // [rsp+40h] [rbp-30h]
  void *Src; // [rsp+48h] [rbp-28h]
  __int64 v74; // [rsp+50h] [rbp-20h]
  __int128 v75; // [rsp+58h] [rbp-18h] BYREF

  v74 = a2;
  P = 0LL;
  v75 = 0uLL;
  v6 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = -1LL;
      if ( v10 + 4 >= v10 )
        v12 = v10 + 4;
      v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_21;
      v13 = v12 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v13 >= v12 )
        v10 = v13;
      v7 = v13 < v12 ? 0xC0000095 : 0;
      if ( v13 < v12 )
        goto LABEL_21;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_21:
      v14 = pcbLength;
      v16 = v71;
      goto LABEL_22;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_22:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v71 = (_QWORD *)*v16;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( !v8 || *(_DWORD *)a1 <= 4u )
  {
    v7 = -1073741811;
    goto LABEL_56;
  }
  for ( j = 0; j < 4; ++j )
  {
    v18 = -1LL;
    if ( v8 + 4 >= v8 )
      v18 = v8 + 4;
    v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
      goto LABEL_44;
    v19 = v18 + *(unsigned int *)v8;
    v8 = -1LL;
    if ( v19 >= v18 )
      v8 = v19;
    v7 = v19 < v18 ? 0xC0000095 : 0;
    if ( v19 < v18 )
      goto LABEL_44;
  }
  v20 = *(_DWORD *)v8;
  v21 = -1LL;
  if ( v8 + 4 >= v8 )
    v21 = v8 + 4;
  v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
  if ( v8 + 4 < v8 )
  {
LABEL_44:
    v20 = pcbLength;
    v22 = (const wchar_t *)v71;
    goto LABEL_45;
  }
  v22 = 0LL;
  if ( v20 )
    v22 = (const wchar_t *)v21;
LABEL_45:
  if ( v7 >= 0 )
  {
    if ( !v20 || (v20 & 1) != 0 )
      return (unsigned int)-1073741762;
    v24 = v20;
    if ( v22[((unsigned __int64)v20 >> 1) - 1] || StringCbLengthW(v22, v20, &pcbLength) < 0 || pcbLength + 2 != v24 )
      return (unsigned int)-1073741762;
    LODWORD(pcbLength) = pcbLength >> 1;
    Src = v25;
LABEL_56:
    if ( v7 < 0 )
      return (unsigned int)v7;
    v26 = 2 * pcbLength + 2;
    if ( 2 * (_DWORD)pcbLength != -2 )
    {
      v27 = v26;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x20534C53u);
      v29 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, Src, v27);
      v30 = v29;
      P = v29;
      v23 = *(_QWORD *)(a1 + 8);
      if ( !v23 || *(_DWORD *)a1 <= 5u )
      {
        v7 = -1073741811;
        goto LABEL_135;
      }
      for ( k = 0; k < 5; ++k )
      {
        v32 = -1LL;
        if ( v23 + 4 >= v23 )
          v32 = v23 + 4;
        v7 = v23 + 4 < v23 ? 0xC0000095 : 0;
        if ( v23 + 4 < v23 )
          goto LABEL_76;
        v33 = v32 + *(unsigned int *)v23;
        v23 = -1LL;
        if ( v33 >= v32 )
          v23 = v33;
        v7 = v33 < v32 ? 0xC0000095 : 0;
        if ( v33 < v32 )
          goto LABEL_76;
      }
      v34 = *(unsigned int *)v23;
      v35 = -1LL;
      if ( v23 + 4 >= v23 )
        v35 = v23 + 4;
      v7 = v23 + 4 < v23 ? 0xC0000095 : 0;
      if ( v23 + 4 < v23 )
      {
LABEL_76:
        v34 = (unsigned int)pcbLength;
        goto LABEL_77;
      }
      v6 = 0LL;
      if ( (_DWORD)v34 )
        v6 = v35;
LABEL_77:
      if ( v7 < 0 )
        goto LABEL_135;
      if ( qword_1407F33C0 )
        v36 = qword_1407F33C0(v30, v6, v34, &v75);
      else
        v36 = -1073700223;
      v37 = -1;
      v38 = -1;
      if ( *(_DWORD *)(v74 + 16) < 0xFFFFFFC0 )
        v38 = *(_DWORD *)(v74 + 16) + 64;
      v7 = *(_DWORD *)(v74 + 16) >= 0xFFFFFFC0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(v74 + 16) + 64) >= 0x40 )
      {
        v39 = v38 + 4;
        v40 = -1;
        if ( v38 + 4 >= v38 )
          v40 = v38 + 4;
        v7 = v39 < v38 ? 0xC0000095 : 0;
        if ( v39 >= v38 )
          v7 = v40 + *(_DWORD *)(v74 + 32) < v40 ? 0xC0000095 : 0;
      }
      if ( v7 < 0 )
        goto LABEL_135;
      *(_DWORD *)(a4 + 4) = 40;
      v41 = (char *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20534C53u);
      v42 = v41;
      if ( !v41 )
      {
        v7 = -1073741801;
        goto LABEL_135;
      }
      *(_QWORD *)(a4 + 8) = v41;
      *(_DWORD *)a4 = 0;
      v43 = v36 | 0x10000000;
      v44 = v41 + 4;
      v45 = -1LL;
      if ( v44 >= v42 )
        v45 = (__int64)v44;
      v7 = v44 < v42 ? 0xC0000095 : 0;
      if ( v44 >= v42 )
      {
        if ( v42 + 8 > &v42[*(unsigned int *)(a4 + 4)] )
        {
LABEL_95:
          v7 = -1073741789;
          goto LABEL_135;
        }
        *(_DWORD *)v42 = 4;
        *(_DWORD *)v45 = v43;
        ++*(_DWORD *)a4;
      }
      if ( v44 < v42 )
      {
LABEL_135:
        if ( P )
          ExFreePoolWithTag(P, 0x20534C53u);
        return (unsigned int)v7;
      }
      v46 = *(_QWORD *)(a4 + 8);
      if ( v46 )
      {
        v50 = *(char **)(a4 + 8);
        v51 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v52 = -1;
            if ( *(_DWORD *)v50 < 0xFFFFFFFC )
              v52 = *(_DWORD *)v50 + 4;
            v7 = *(_DWORD *)v50 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v50 + 4) < 4 )
              break;
            v53 = v52;
            v54 = v50;
            v55 = &v50[v52];
            v56 = -1LL;
            if ( v55 >= v50 )
              v56 = (__int64)&v50[v53];
            v50 = (char *)v56;
            v7 = v55 < v54 ? 0xC0000095 : 0;
            if ( v55 < v54 )
              break;
            if ( (unsigned int)++v51 >= *(_DWORD *)a4 )
              goto LABEL_111;
          }
        }
        else
        {
LABEL_111:
          v57 = -1LL;
          if ( v50 + 4 >= v50 )
            v57 = (__int64)(v50 + 4);
          v7 = v50 + 4 < v50 ? 0xC0000095 : 0;
          if ( v50 + 4 >= v50 )
          {
            if ( (unsigned __int64)(v50 + 12) > v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_95;
            v58 = v71;
            *(_DWORD *)v50 = 8;
            *(_QWORD *)v57 = v58;
            ++*(_DWORD *)a4;
          }
        }
      }
      else
      {
        v47 = *(_DWORD *)(a4 + 4);
        v48 = -1;
        v49 = v47 + 12;
        if ( v47 + 12 >= v47 )
          v48 = v47 + 12;
        v7 = v49 < v47 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v48;
        if ( v49 >= v47 )
        {
          ++*(_DWORD *)a4;
LABEL_117:
          v59 = *(_QWORD *)(a4 + 8);
          if ( !v59 )
          {
            v60 = *(_DWORD *)(a4 + 4);
            v61 = v60 + 20;
            if ( v60 + 20 >= v60 )
              v37 = v60 + 20;
            v7 = v61 < v60 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v37;
            if ( v61 >= v60 )
            {
              ++*(_DWORD *)a4;
              v7 = 0;
            }
            goto LABEL_135;
          }
          v62 = 0;
          v63 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            do
            {
              v64 = -1;
              if ( *(_DWORD *)v63 < 0xFFFFFFFC )
                v64 = *(_DWORD *)v63 + 4;
              v7 = *(_DWORD *)v63 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v63 + 4) < 4 )
                goto LABEL_135;
              v65 = v64;
              v66 = v63;
              v67 = &v63[v64];
              v68 = -1LL;
              if ( v67 >= v63 )
                v68 = (__int64)&v63[v65];
              v63 = (char *)v68;
              v7 = v67 < v66 ? 0xC0000095 : 0;
              if ( v67 < v66 )
                goto LABEL_135;
            }
            while ( (unsigned int)++v62 < *(_DWORD *)a4 );
          }
          if ( v63 + 4 >= v63 )
            v9 = (__int64)(v63 + 4);
          v7 = v63 + 4 < v63 ? 0xC0000095 : 0;
          if ( v63 + 4 >= v63 )
          {
            if ( (unsigned __int64)(v63 + 20) > v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_95;
            *(_DWORD *)v63 = 16;
            *(_OWORD *)v9 = v75;
            ++*(_DWORD *)a4;
          }
          goto LABEL_135;
        }
      }
      if ( v7 < 0 )
        goto LABEL_135;
      goto LABEL_117;
    }
    return (unsigned int)-1073741762;
  }
  return (unsigned int)v7;
}
