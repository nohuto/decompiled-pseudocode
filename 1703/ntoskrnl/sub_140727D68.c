/*
 * XREFs of sub_140727D68 @ 0x140727D68
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14006B320 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140727D68(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r13
  signed int v7; // ebx
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  unsigned int i; // r10d
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // r9
  __int64 *v16; // rax
  unsigned int j; // r9d
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // r8
  const wchar_t *v22; // r11
  unsigned __int64 v23; // rdx
  __int64 v24; // r14
  size_t v25; // r11
  unsigned int v26; // eax
  size_t v27; // r14
  PVOID PoolWithTag; // rax
  PVOID v29; // rbx
  PVOID v30; // r14
  unsigned __int64 v31; // r8
  unsigned int k; // r10d
  __int64 v33; // rax
  unsigned __int64 v34; // r9
  unsigned int v35; // r10d
  __int64 v36; // rcx
  unsigned int m; // r9d
  __int64 v38; // rax
  unsigned __int64 v39; // r8
  unsigned int v40; // ecx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // edi
  int v44; // r14d
  unsigned int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // edx
  char *v48; // rax
  char *v49; // rdx
  int v50; // edi
  char *v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // ecx
  unsigned int v55; // eax
  char *v56; // r8
  int v57; // r10d
  unsigned int v58; // edi
  int v59; // ecx
  char *v60; // rcx
  char *v61; // rdx
  __int64 v62; // rax
  PVOID P; // [rsp+30h] [rbp-20h]
  size_t pcbLength; // [rsp+38h] [rbp-18h] BYREF
  __int64 v66; // [rsp+40h] [rbp-10h]
  __int64 v68; // [rsp+98h] [rbp+48h]

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
      v12 = *(unsigned int *)v10;
      v13 = v10 + 4;
      if ( v10 + 4 < v10 )
      {
        v13 = -1LL;
        v7 = -1073741675;
      }
      else
      {
        v7 = 0;
      }
      if ( v7 < 0 )
        goto LABEL_22;
      v10 = -1LL;
      if ( v13 + v12 >= v13 )
        v10 = v13 + v12;
      v7 = v13 + v12 < v13 ? 0xC0000095 : 0;
      if ( v13 + v12 < v13 )
        goto LABEL_22;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_22:
      v14 = a3;
      v16 = (__int64 *)a2;
      goto LABEL_23;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (__int64 *)v15;
LABEL_23:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v66 = *v16;
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
    goto LABEL_57;
  }
  for ( j = 0; j < 4; ++j )
  {
    v18 = *(unsigned int *)v8;
    v19 = v8 + 4;
    if ( v8 + 4 < v8 )
    {
      v19 = -1LL;
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
    }
    if ( v7 < 0 )
      goto LABEL_46;
    v8 = -1LL;
    if ( v19 + v18 >= v19 )
      v8 = v19 + v18;
    v7 = v19 + v18 < v19 ? 0xC0000095 : 0;
    if ( v19 + v18 < v19 )
      goto LABEL_46;
  }
  v20 = *(_DWORD *)v8;
  v21 = -1LL;
  if ( v8 + 4 >= v8 )
    v21 = v8 + 4;
  v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
  if ( v8 + 4 < v8 )
  {
LABEL_46:
    v20 = a3;
    v22 = (const wchar_t *)a2;
    goto LABEL_47;
  }
  v22 = 0LL;
  if ( v20 )
    v22 = (const wchar_t *)v21;
LABEL_47:
  if ( v7 >= 0 )
  {
    if ( !v20 )
      return (unsigned int)-1073741762;
    if ( (v20 & 1) != 0 )
      return (unsigned int)-1073741762;
    v24 = v20;
    if ( v22[((unsigned __int64)v20 >> 1) - 1] || StringCbLengthW(v22, v20, &pcbLength) < 0 || pcbLength + 2 != v24 )
      return (unsigned int)-1073741762;
    a3 = pcbLength >> 1;
    pcbLength = v25;
LABEL_57:
    if ( v7 < 0 )
      return (unsigned int)v7;
    v26 = 2 * a3 + 2;
    if ( 2 * a3 != -2 )
    {
      v27 = v26;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x20534C53u);
      v29 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, (const void *)pcbLength, v27);
      v30 = v29;
      P = v29;
      v23 = *(_QWORD *)(a1 + 8);
      if ( !v23 || *(_DWORD *)a1 <= 5u )
        goto LABEL_51;
      v31 = *(_QWORD *)(a1 + 8);
      for ( k = 0; k < 5; ++k )
      {
        v33 = *(unsigned int *)v31;
        v34 = v31 + 4;
        if ( v31 + 4 < v31 )
        {
          v34 = -1LL;
          v7 = -1073741675;
        }
        else
        {
          v7 = 0;
        }
        if ( v7 < 0 )
          goto LABEL_78;
        v31 = -1LL;
        if ( v34 + v33 >= v34 )
          v31 = v34 + v33;
        v7 = v34 + v33 < v34 ? 0xC0000095 : 0;
        if ( v34 + v33 < v34 )
          goto LABEL_78;
      }
      v35 = *(_DWORD *)v31;
      v36 = -1LL;
      if ( v31 + 4 >= v31 )
        v36 = v31 + 4;
      v7 = v31 + 4 < v31 ? 0xC0000095 : 0;
      if ( v31 + 4 < v31 )
      {
LABEL_78:
        v35 = a3;
        goto LABEL_79;
      }
      if ( v35 )
        v6 = v36;
LABEL_79:
      if ( v7 < 0 )
        goto LABEL_141;
      if ( *(_DWORD *)a1 <= 6u )
      {
LABEL_51:
        v7 = -1073741811;
        goto LABEL_141;
      }
      for ( m = 0; m < 6; ++m )
      {
        v38 = *(unsigned int *)v23;
        v39 = v23 + 4;
        if ( v23 + 4 < v23 )
        {
          v39 = -1LL;
          v7 = -1073741675;
        }
        else
        {
          v7 = 0;
        }
        if ( v7 < 0 )
          goto LABEL_96;
        v23 = -1LL;
        if ( v39 + v38 >= v39 )
          v23 = v39 + v38;
        v7 = v39 + v38 < v39 ? 0xC0000095 : 0;
        if ( v39 + v38 < v39 )
          goto LABEL_96;
      }
      v40 = *(_DWORD *)v23;
      v41 = -1LL;
      if ( v23 + 4 >= v23 )
        v41 = v23 + 4;
      v7 = v23 + 4 < v23 ? 0xC0000095 : 0;
      if ( v23 + 4 < v23 )
      {
LABEL_96:
        v40 = a3;
        v42 = a2;
        goto LABEL_97;
      }
      v42 = 0LL;
      if ( v40 )
        v42 = v41;
LABEL_97:
      if ( v7 < 0 )
        goto LABEL_141;
      v43 = qword_1407AC3E0 ? qword_1407AC3E0(v30, v6, v35, v42, v40) : -1073741637;
      v7 = v43;
      if ( v43 < 0 )
        goto LABEL_141;
      v44 = -1;
      v45 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v45 = *(_DWORD *)(a2 + 16) + 48;
      v7 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v46 = v45 + 4;
        v47 = -1;
        if ( v45 + 4 >= v45 )
          v47 = v45 + 4;
        v7 = v46 < v45 ? 0xC0000095 : 0;
        if ( v46 >= v45 )
          v7 = v47 + *(_DWORD *)(a2 + 32) < v47 ? 0xC0000095 : 0;
      }
      if ( v7 < 0 )
        goto LABEL_141;
      *(_DWORD *)(a4 + 4) = 20;
      v48 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
      v49 = v48;
      if ( !v48 )
      {
        v7 = -1073741801;
        goto LABEL_141;
      }
      *(_QWORD *)(a4 + 8) = v48;
      *(_DWORD *)a4 = 0;
      v50 = v43 | 0x10000000;
      v51 = v48 + 4;
      v52 = -1LL;
      if ( v51 >= v49 )
        v52 = (__int64)v51;
      v7 = v51 < v49 ? 0xC0000095 : 0;
      if ( v51 >= v49 )
      {
        if ( v49 + 8 > &v49[*(unsigned int *)(a4 + 4)] )
          goto LABEL_138;
        *(_DWORD *)v49 = 4;
        *(_DWORD *)v52 = v50;
        ++*(_DWORD *)a4;
      }
      if ( v51 < v49 )
        goto LABEL_141;
      v53 = *(_QWORD *)(a4 + 8);
      v68 = v66;
      if ( !v53 )
      {
        v54 = *(_DWORD *)(a4 + 4);
        v55 = v54 + 12;
        if ( v54 + 12 >= v54 )
          v44 = v54 + 12;
        v7 = v55 < v54 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v44;
        if ( v55 < v54 )
          goto LABEL_141;
        v7 = 0;
        goto LABEL_140;
      }
      v56 = *(char **)(a4 + 8);
      v57 = 0;
      if ( *(_DWORD *)a4 )
      {
        v58 = a3;
        do
        {
          v59 = -1;
          if ( *(_DWORD *)v56 < 0xFFFFFFFC )
            v59 = *(_DWORD *)v56 + 4;
          if ( (unsigned int)(*(_DWORD *)v56 + 4) >= 4 )
            v58 = v59;
          v7 = *(_DWORD *)v56 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( *(_DWORD *)v56 >= 0xFFFFFFFC )
            goto LABEL_141;
          v60 = v56;
          v61 = &v56[v58];
          v62 = -1LL;
          if ( v61 >= v56 )
            v62 = (__int64)&v56[v58];
          v56 = (char *)v62;
          v7 = v61 < v60 ? 0xC0000095 : 0;
          if ( v61 < v60 )
            goto LABEL_141;
        }
        while ( (unsigned int)++v57 < *(_DWORD *)a4 );
      }
      if ( v56 + 4 >= v56 )
        v9 = (__int64)(v56 + 4);
      v7 = v56 + 4 < v56 ? 0xC0000095 : 0;
      if ( v56 + 4 < v56 )
      {
LABEL_141:
        if ( P )
          ExFreePoolWithTag(P, 0x20534C53u);
        return (unsigned int)v7;
      }
      if ( (unsigned __int64)(v56 + 12) <= v53 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)v56 = 8;
        *(_QWORD *)v9 = v68;
LABEL_140:
        ++*(_DWORD *)a4;
        goto LABEL_141;
      }
LABEL_138:
      v7 = -1073741789;
      goto LABEL_141;
    }
    return (unsigned int)-1073741762;
  }
  return (unsigned int)v7;
}
