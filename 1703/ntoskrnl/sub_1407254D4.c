/*
 * XREFs of sub_1407254D4 @ 0x1407254D4
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407254D4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  signed int v8; // r8d
  unsigned __int64 v9; // r10
  __int64 v10; // rdi
  unsigned __int64 v11; // r9
  unsigned int i; // r14d
  __int64 v13; // rax
  unsigned __int64 v14; // r11
  int v15; // ecx
  __int64 v16; // r11
  _QWORD *v17; // rax
  unsigned int v18; // r14d
  unsigned __int64 v19; // r9
  unsigned int j; // esi
  __int64 v21; // rax
  unsigned __int64 v22; // r11
  unsigned int v23; // r15d
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  unsigned int k; // esi
  __int64 v27; // rax
  unsigned __int64 v28; // r11
  unsigned int v29; // r11d
  __int64 v30; // rcx
  __int64 v31; // rsi
  unsigned int m; // r9d
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  int v37; // esi
  int v38; // r14d
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // edx
  char *PoolWithTag; // rax
  char *v43; // rdx
  int v44; // esi
  char *v45; // rax
  __int64 v46; // r9
  __int64 v47; // r10
  unsigned int v48; // edx
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // r11d
  char *v52; // r9
  unsigned int v53; // r15d
  int v54; // ecx
  char *v55; // rcx
  char *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r10
  unsigned int v60; // ecx
  unsigned int v61; // eax
  int v62; // r11d
  char *v63; // r9
  unsigned int v64; // esi
  int v65; // ecx
  char *v66; // rcx
  char *v67; // rdx
  __int64 v68; // rax
  _QWORD *v70; // [rsp+60h] [rbp-1h]
  _OWORD v72[2]; // [rsp+70h] [rbp+Fh] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = -1LL;
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v13 = *(unsigned int *)v11;
      v14 = v11 + 4;
      if ( v11 + 4 < v11 )
      {
        v14 = -1LL;
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
      }
      if ( v8 < 0 )
        goto LABEL_23;
      v11 = -1LL;
      if ( v14 + v13 >= v14 )
        v11 = v14 + v13;
      v8 = v14 + v13 < v14 ? 0xC0000095 : 0;
      if ( v14 + v13 < v14 )
        goto LABEL_23;
    }
    v15 = *(_DWORD *)v11;
    v16 = -1LL;
    if ( v11 + 4 >= v11 )
      v16 = v11 + 4;
    v8 = v11 + 4 < v11 ? 0xC0000095 : 0;
    if ( v11 + 4 < v11 )
    {
LABEL_23:
      v15 = 0;
      v17 = v70;
      goto LABEL_24;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_24:
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v70 = (_QWORD *)*v17;
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
    v21 = *(unsigned int *)v19;
    v22 = v19 + 4;
    if ( v19 + 4 < v19 )
    {
      v22 = -1LL;
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_46;
    v19 = -1LL;
    if ( v22 + v21 >= v22 )
      v19 = v22 + v21;
    v8 = v22 + v21 < v22 ? 0xC0000095 : 0;
    if ( v22 + v21 < v22 )
      goto LABEL_46;
  }
  v23 = *(_DWORD *)v19;
  v24 = -1LL;
  if ( v19 + 4 >= v19 )
    v24 = v19 + 4;
  v8 = v19 + 4 < v19 ? 0xC0000095 : 0;
  if ( v19 + 4 < v19 )
  {
LABEL_46:
    v23 = 0;
    goto LABEL_47;
  }
  if ( v23 )
    v4 = v24;
LABEL_47:
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v18 <= 5 )
    return (unsigned int)-1073741811;
  v25 = v9;
  for ( k = 0; k < 5; ++k )
  {
    v27 = *(unsigned int *)v25;
    v28 = v25 + 4;
    if ( v25 + 4 < v25 )
    {
      v28 = -1LL;
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_64;
    v25 = -1LL;
    if ( v28 + v27 >= v28 )
      v25 = v28 + v27;
    v8 = v28 + v27 < v28 ? 0xC0000095 : 0;
    if ( v28 + v27 < v28 )
      goto LABEL_64;
  }
  v29 = *(_DWORD *)v25;
  v30 = -1LL;
  if ( v25 + 4 >= v25 )
    v30 = v25 + 4;
  v8 = v25 + 4 < v25 ? 0xC0000095 : 0;
  if ( v25 + 4 < v25 )
  {
LABEL_64:
    v29 = 0;
    v31 = 0LL;
    goto LABEL_65;
  }
  v31 = 0LL;
  if ( v29 )
    v31 = v30;
LABEL_65:
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v18 <= 6 )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v33 = *(unsigned int *)v9;
    v34 = v9 + 4;
    if ( v9 + 4 < v9 )
    {
      v34 = -1LL;
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_82;
    v9 = -1LL;
    if ( v34 + v33 >= v34 )
      v9 = v34 + v33;
    v8 = v34 + v33 < v34 ? 0xC0000095 : 0;
    if ( v34 + v33 < v34 )
      goto LABEL_82;
  }
  v35 = *(_DWORD *)v9;
  v36 = -1LL;
  if ( v9 + 4 >= v9 )
    v36 = v9 + 4;
  v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
  if ( v9 + 4 < v9 )
  {
LABEL_82:
    v35 = 0;
    goto LABEL_83;
  }
  if ( v35 )
    v5 = v36;
LABEL_83:
  if ( v8 >= 0 )
  {
    v37 = qword_1407AC3F0
        ? ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, int, _OWORD *, int))qword_1407AC448)(
            v4,
            v23,
            v31,
            v29,
            v5,
            v35,
            v72,
            32)
        : -1073741637;
    v8 = v37;
    if ( v37 >= 0 )
    {
      v38 = -1;
      v39 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
        v39 = *(_DWORD *)(a2 + 16) + 80;
      v8 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 80) >= 0x50 )
      {
        v40 = v39 + 4;
        v41 = -1;
        if ( v39 + 4 >= v39 )
          v41 = v39 + 4;
        v8 = v40 < v39 ? 0xC0000095 : 0;
        if ( v40 >= v39 )
          v8 = v41 + *(_DWORD *)(a2 + 32) < v41 ? 0xC0000095 : 0;
      }
      if ( v8 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 56;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20534C53u);
        v43 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v44 = v37 | 0x10000000;
        v45 = PoolWithTag + 4;
        v46 = -1LL;
        if ( v45 >= v43 )
          v46 = (__int64)v45;
        v8 = v45 < v43 ? 0xC0000095 : 0;
        if ( v45 >= v43 )
        {
          if ( v43 + 8 > &v43[*(unsigned int *)(a4 + 4)] )
            return (unsigned int)-1073741789;
          *(_DWORD *)v43 = 4;
          *(_DWORD *)v46 = v44;
          ++*(_DWORD *)a4;
        }
        if ( v45 < v43 )
          return (unsigned int)v8;
        v47 = *(_QWORD *)(a4 + 8);
        if ( v47 )
        {
          v51 = 0;
          v52 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            v53 = 0;
            while ( 1 )
            {
              v54 = -1;
              if ( *(_DWORD *)v52 < 0xFFFFFFFC )
                v54 = *(_DWORD *)v52 + 4;
              if ( (unsigned int)(*(_DWORD *)v52 + 4) >= 4 )
                v53 = v54;
              v8 = *(_DWORD *)v52 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( *(_DWORD *)v52 >= 0xFFFFFFFC )
                break;
              v55 = v52;
              v56 = &v52[v53];
              v57 = -1LL;
              if ( v56 >= v52 )
                v57 = (__int64)&v52[v53];
              v52 = (char *)v57;
              v8 = v56 < v55 ? 0xC0000095 : 0;
              if ( v56 < v55 )
                break;
              if ( (unsigned int)++v51 >= *(_DWORD *)a4 )
                goto LABEL_120;
            }
          }
          else
          {
LABEL_120:
            v58 = -1LL;
            if ( v52 + 4 >= v52 )
              v58 = (__int64)(v52 + 4);
            v8 = v52 + 4 < v52 ? 0xC0000095 : 0;
            if ( v52 + 4 >= v52 )
            {
              if ( (unsigned __int64)(v52 + 12) > v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                return (unsigned int)-1073741789;
              *(_DWORD *)v52 = 8;
              *(_QWORD *)v58 = v70;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v48 = *(_DWORD *)(a4 + 4);
          v49 = -1;
          v50 = v48 + 12;
          if ( v48 + 12 >= v48 )
            v49 = v48 + 12;
          v8 = v50 < v48 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v49;
          if ( v50 >= v48 )
          {
            ++*(_DWORD *)a4;
LABEL_126:
            v59 = *(_QWORD *)(a4 + 8);
            if ( !v59 )
            {
              v60 = *(_DWORD *)(a4 + 4);
              v61 = v60 + 36;
              if ( v60 + 36 >= v60 )
                v38 = v60 + 36;
              v8 = v61 < v60 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v38;
              if ( v61 >= v60 )
              {
                ++*(_DWORD *)a4;
                return 0;
              }
              return (unsigned int)v8;
            }
            v62 = 0;
            v63 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              v64 = 0;
              while ( 1 )
              {
                v65 = -1;
                if ( *(_DWORD *)v63 < 0xFFFFFFFC )
                  v65 = *(_DWORD *)v63 + 4;
                if ( (unsigned int)(*(_DWORD *)v63 + 4) >= 4 )
                  v64 = v65;
                v8 = *(_DWORD *)v63 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v63 >= 0xFFFFFFFC )
                  break;
                v66 = v63;
                v67 = &v63[v64];
                v68 = -1LL;
                if ( v67 >= v63 )
                  v68 = (__int64)&v63[v64];
                v63 = (char *)v68;
                v8 = v67 < v66 ? 0xC0000095 : 0;
                if ( v67 < v66 )
                  break;
                if ( (unsigned int)++v62 >= *(_DWORD *)a4 )
                  goto LABEL_142;
              }
              return (unsigned int)v8;
            }
LABEL_142:
            if ( v63 + 4 >= v63 )
              v10 = (__int64)(v63 + 4);
            v8 = v63 + 4 < v63 ? 0xC0000095 : 0;
            if ( v63 + 4 < v63 )
              return (unsigned int)v8;
            if ( (unsigned __int64)(v63 + 36) <= v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v63 = 32;
              *(_OWORD *)v10 = v72[0];
              *(_OWORD *)(v10 + 16) = v72[1];
              ++*(_DWORD *)a4;
              return (unsigned int)v8;
            }
            return (unsigned int)-1073741789;
          }
        }
        if ( v8 < 0 )
          return (unsigned int)v8;
        goto LABEL_126;
      }
    }
  }
  return (unsigned int)v8;
}
