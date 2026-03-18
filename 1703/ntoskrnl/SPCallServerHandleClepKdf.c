/*
 * XREFs of SPCallServerHandleClepKdf @ 0x14044FB70
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleClepKdf(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned __int64 v8; // r10
  __int64 v9; // rdi
  unsigned __int64 v10; // r9
  unsigned int i; // r14d
  __int64 v12; // rax
  unsigned __int64 v13; // r11
  signed int v14; // r8d
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
  int v48; // r11d
  char *v49; // r9
  unsigned int v50; // r15d
  int v51; // ecx
  char *v52; // rcx
  char *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r10
  int v57; // r11d
  char *v58; // r9
  unsigned int v59; // esi
  int v60; // ecx
  char *v61; // rcx
  char *v62; // rdx
  __int64 v63; // rax
  unsigned int v65; // edx
  int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned int v69; // eax
  _QWORD *v70; // [rsp+60h] [rbp-1h]
  _OWORD v72[2]; // [rsp+70h] [rbp+Fh] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = *(unsigned int *)v10;
      v13 = v10 + 4;
      if ( v10 + 4 < v10 )
      {
        v13 = -1LL;
        v14 = -1073741675;
      }
      else
      {
        v14 = 0;
      }
      if ( v14 < 0 )
        goto LABEL_128;
      v10 = -1LL;
      if ( v13 + v12 >= v13 )
        v10 = v13 + v12;
      v14 = v13 + v12 < v13 ? 0xC0000095 : 0;
      if ( v13 + v12 < v13 )
        goto LABEL_128;
    }
    v15 = *(_DWORD *)v10;
    v16 = -1LL;
    if ( v10 + 4 >= v10 )
      v16 = v10 + 4;
    v14 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_128:
      v15 = 0;
      v17 = v70;
      goto LABEL_19;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_19:
    if ( v14 < 0 )
      return (unsigned int)v14;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v70 = (_QWORD *)*v17;
  }
  else
  {
    v14 = -1073741811;
  }
  if ( v14 < 0 )
    return (unsigned int)v14;
  if ( !v8 )
    return (unsigned int)-1073741811;
  v18 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v19 = v8;
  for ( j = 0; j < 4; ++j )
  {
    v21 = *(unsigned int *)v19;
    v22 = v19 + 4;
    if ( v19 + 4 < v19 )
    {
      v22 = -1LL;
      v14 = -1073741675;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 < 0 )
      goto LABEL_130;
    v19 = -1LL;
    if ( v22 + v21 >= v22 )
      v19 = v22 + v21;
    v14 = v22 + v21 < v22 ? 0xC0000095 : 0;
    if ( v22 + v21 < v22 )
      goto LABEL_130;
  }
  v23 = *(_DWORD *)v19;
  v24 = -1LL;
  if ( v19 + 4 >= v19 )
    v24 = v19 + 4;
  v14 = v19 + 4 < v19 ? 0xC0000095 : 0;
  if ( v19 + 4 < v19 )
  {
LABEL_130:
    v23 = 0;
    goto LABEL_38;
  }
  if ( v23 )
    v4 = v24;
LABEL_38:
  if ( v14 < 0 )
    return (unsigned int)v14;
  if ( v18 <= 5 )
    return (unsigned int)-1073741811;
  v25 = v8;
  for ( k = 0; k < 5; ++k )
  {
    v27 = *(unsigned int *)v25;
    v28 = v25 + 4;
    if ( v25 + 4 < v25 )
    {
      v28 = -1LL;
      v14 = -1073741675;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 < 0 )
      goto LABEL_132;
    v25 = -1LL;
    if ( v28 + v27 >= v28 )
      v25 = v28 + v27;
    v14 = v28 + v27 < v28 ? 0xC0000095 : 0;
    if ( v28 + v27 < v28 )
      goto LABEL_132;
  }
  v29 = *(_DWORD *)v25;
  v30 = -1LL;
  if ( v25 + 4 >= v25 )
    v30 = v25 + 4;
  v14 = v25 + 4 < v25 ? 0xC0000095 : 0;
  if ( v25 + 4 < v25 )
  {
LABEL_132:
    v29 = 0;
    v31 = 0LL;
    goto LABEL_53;
  }
  v31 = 0LL;
  if ( v29 )
    v31 = v30;
LABEL_53:
  if ( v14 < 0 )
    return (unsigned int)v14;
  if ( v18 <= 6 )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v33 = *(unsigned int *)v8;
    v34 = v8 + 4;
    if ( v8 + 4 < v8 )
    {
      v34 = -1LL;
      v14 = -1073741675;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 < 0 )
      goto LABEL_134;
    v8 = -1LL;
    if ( v34 + v33 >= v34 )
      v8 = v34 + v33;
    v14 = v34 + v33 < v34 ? 0xC0000095 : 0;
    if ( v34 + v33 < v34 )
      goto LABEL_134;
  }
  v35 = *(_DWORD *)v8;
  v36 = -1LL;
  if ( v8 + 4 >= v8 )
    v36 = v8 + 4;
  v14 = v8 + 4 < v8 ? 0xC0000095 : 0;
  if ( v8 + 4 < v8 )
  {
LABEL_134:
    v35 = 0;
    goto LABEL_68;
  }
  if ( v35 )
    v5 = v36;
LABEL_68:
  if ( v14 >= 0 )
  {
    v37 = qword_1407AC3F0 ? qword_1407AC3F0(v4, v23, v31, v29, v5, v35, v72, 32) : -1073741637;
    v14 = v37;
    if ( v37 >= 0 )
    {
      v38 = -1;
      v39 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
        v39 = *(_DWORD *)(a2 + 16) + 80;
      v14 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 80) >= 0x50 )
      {
        v40 = v39 + 4;
        v41 = -1;
        if ( v39 + 4 >= v39 )
          v41 = v39 + 4;
        v14 = v40 < v39 ? 0xC0000095 : 0;
        if ( v40 >= v39 )
          v14 = v41 + *(_DWORD *)(a2 + 32) < v41 ? 0xC0000095 : 0;
      }
      if ( v14 >= 0 )
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
        v14 = v45 < v43 ? 0xC0000095 : 0;
        if ( v45 >= v43 )
        {
          if ( v43 + 8 > &v43[*(unsigned int *)(a4 + 4)] )
            return (unsigned int)-1073741789;
          *(_DWORD *)v43 = 4;
          *(_DWORD *)v46 = v44;
          ++*(_DWORD *)a4;
        }
        if ( v45 < v43 )
          return (unsigned int)v14;
        v47 = *(_QWORD *)(a4 + 8);
        if ( v47 )
        {
          v48 = 0;
          v49 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            v50 = 0;
            while ( 1 )
            {
              v51 = -1;
              if ( *(_DWORD *)v49 < 0xFFFFFFFC )
                v51 = *(_DWORD *)v49 + 4;
              if ( (unsigned int)(*(_DWORD *)v49 + 4) >= 4 )
                v50 = v51;
              v14 = *(_DWORD *)v49 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( *(_DWORD *)v49 >= 0xFFFFFFFC )
                break;
              v52 = v49;
              v53 = &v49[v50];
              v54 = -1LL;
              if ( v53 >= v49 )
                v54 = (__int64)&v49[v50];
              v49 = (char *)v54;
              v14 = v53 < v52 ? 0xC0000095 : 0;
              if ( v53 < v52 )
                break;
              if ( (unsigned int)++v48 >= *(_DWORD *)a4 )
                goto LABEL_99;
            }
          }
          else
          {
LABEL_99:
            v55 = -1LL;
            if ( v49 + 4 >= v49 )
              v55 = (__int64)(v49 + 4);
            v14 = v49 + 4 < v49 ? 0xC0000095 : 0;
            if ( v49 + 4 >= v49 )
            {
              if ( (unsigned __int64)(v49 + 12) > v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                return (unsigned int)-1073741789;
              *(_DWORD *)v49 = 8;
              *(_QWORD *)v55 = v70;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v65 = *(_DWORD *)(a4 + 4);
          v66 = -1;
          v67 = v65 + 12;
          if ( v65 + 12 >= v65 )
            v66 = v65 + 12;
          v14 = v67 < v65 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v66;
          if ( v67 >= v65 )
          {
            ++*(_DWORD *)a4;
LABEL_105:
            v56 = *(_QWORD *)(a4 + 8);
            if ( !v56 )
            {
              v68 = *(_DWORD *)(a4 + 4);
              v69 = v68 + 36;
              if ( v68 + 36 >= v68 )
                v38 = v68 + 36;
              v14 = v69 < v68 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v38;
              if ( v69 >= v68 )
              {
                ++*(_DWORD *)a4;
                return 0;
              }
              return (unsigned int)v14;
            }
            v57 = 0;
            v58 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              v59 = 0;
              while ( 1 )
              {
                v60 = -1;
                if ( *(_DWORD *)v58 < 0xFFFFFFFC )
                  v60 = *(_DWORD *)v58 + 4;
                if ( (unsigned int)(*(_DWORD *)v58 + 4) >= 4 )
                  v59 = v60;
                v14 = *(_DWORD *)v58 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v58 >= 0xFFFFFFFC )
                  break;
                v61 = v58;
                v62 = &v58[v59];
                v63 = -1LL;
                if ( v62 >= v58 )
                  v63 = (__int64)&v58[v59];
                v58 = (char *)v63;
                v14 = v62 < v61 ? 0xC0000095 : 0;
                if ( v62 < v61 )
                  break;
                if ( (unsigned int)++v57 >= *(_DWORD *)a4 )
                  goto LABEL_117;
              }
              return (unsigned int)v14;
            }
LABEL_117:
            if ( v58 + 4 >= v58 )
              v9 = (__int64)(v58 + 4);
            v14 = v58 + 4 < v58 ? 0xC0000095 : 0;
            if ( v58 + 4 < v58 )
              return (unsigned int)v14;
            if ( (unsigned __int64)(v58 + 36) <= v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v58 = 32;
              *(_OWORD *)v9 = v72[0];
              *(_OWORD *)(v9 + 16) = v72[1];
              ++*(_DWORD *)a4;
              return (unsigned int)v14;
            }
            return (unsigned int)-1073741789;
          }
        }
        if ( v14 < 0 )
          return (unsigned int)v14;
        goto LABEL_105;
      }
    }
  }
  return (unsigned int)v14;
}
