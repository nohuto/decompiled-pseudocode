/*
 * XREFs of sub_14076C850 @ 0x14076C850
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14076C850(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  signed int v8; // r8d
  unsigned __int64 v9; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // r10
  unsigned int i; // r11d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // r11
  _QWORD *v17; // rax
  unsigned int j; // edx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rcx
  int v24; // ebp
  int v25; // r14d
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edx
  char *PoolWithTag; // rax
  char *v30; // rdx
  int v31; // ebp
  char *v32; // rax
  __int64 v33; // r9
  __int64 v34; // r10
  unsigned int v35; // ecx
  unsigned int v36; // eax
  char *v37; // r9
  unsigned int v38; // eax
  unsigned int v39; // ebp
  char *v40; // rcx
  char *v41; // rdx
  __int64 v42; // rax
  _QWORD *v44; // [rsp+58h] [rbp+10h]

  v4 = 0;
  if ( !a2 || !a4 )
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
        goto LABEL_21;
      v14 = v13 + *(unsigned int *)v11;
      v11 = -1LL;
      if ( v14 >= v13 )
        v11 = v14;
      v8 = v14 < v13 ? 0xC0000095 : 0;
      if ( v14 < v13 )
        goto LABEL_21;
    }
    v15 = *(_DWORD *)v11;
    v16 = -1LL;
    if ( v11 + 4 >= v11 )
      v16 = v11 + 4;
    v8 = v11 + 4 < v11 ? 0xC0000095 : 0;
    if ( v11 + 4 < v11 )
    {
LABEL_21:
      v15 = a3;
      v17 = v44;
      goto LABEL_22;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_22:
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v44 = (_QWORD *)*v17;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    if ( !v9 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; j < 4; ++j )
    {
      v19 = -1LL;
      if ( v9 + 4 >= v9 )
        v19 = v9 + 4;
      v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
      if ( v9 + 4 < v9 )
        goto LABEL_43;
      v20 = v19 + *(unsigned int *)v9;
      v9 = -1LL;
      if ( v20 >= v19 )
        v9 = v20;
      v8 = v20 < v19 ? 0xC0000095 : 0;
      if ( v20 < v19 )
        goto LABEL_43;
    }
    v21 = *(unsigned int *)v9;
    v22 = -1LL;
    if ( v9 + 4 >= v9 )
      v22 = v9 + 4;
    v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_43:
      v21 = a3;
      v23 = (__int64)v44;
      goto LABEL_44;
    }
    v23 = 0LL;
    if ( (_DWORD)v21 )
      v23 = v22;
LABEL_44:
    if ( v8 >= 0 )
    {
      if ( qword_1407F3360 )
        v24 = qword_1407F3360(v23, v21);
      else
        v24 = -1073741637;
      v25 = -1;
      v26 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v26 = *(_DWORD *)(a2 + 16) + 48;
      v8 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v27 = v26 + 4;
        v28 = -1;
        if ( v26 + 4 >= v26 )
          v28 = v26 + 4;
        v8 = v27 < v26 ? 0xC0000095 : 0;
        if ( v27 >= v26 )
          v8 = v28 + *(_DWORD *)(a2 + 32) < v28 ? 0xC0000095 : 0;
      }
      if ( v8 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        v30 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v31 = v24 | 0x10000000;
        v32 = PoolWithTag + 4;
        v33 = -1LL;
        if ( v32 >= v30 )
          v33 = (__int64)v32;
        v8 = v32 < v30 ? 0xC0000095 : 0;
        if ( v32 >= v30 )
        {
          if ( v30 + 8 > &v30[*(unsigned int *)(a4 + 4)] )
            return (unsigned int)-1073741789;
          *(_DWORD *)v30 = 4;
          *(_DWORD *)v33 = v31;
          ++*(_DWORD *)a4;
        }
        if ( v32 < v30 )
          return (unsigned int)v8;
        v34 = *(_QWORD *)(a4 + 8);
        if ( !v34 )
        {
          v35 = *(_DWORD *)(a4 + 4);
          v36 = v35 + 12;
          if ( v35 + 12 >= v35 )
            v25 = v35 + 12;
          v8 = v36 < v35 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v25;
          if ( v36 >= v35 )
          {
            v8 = 0;
LABEL_83:
            ++*(_DWORD *)a4;
            return (unsigned int)v8;
          }
          return (unsigned int)v8;
        }
        v37 = *(char **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v38 = -1;
            if ( *(_DWORD *)v37 < 0xFFFFFFFC )
              v38 = *(_DWORD *)v37 + 4;
            v8 = *(_DWORD *)v37 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v37 + 4) < 4 )
              break;
            v39 = v38;
            v40 = v37;
            v41 = &v37[v38];
            v42 = -1LL;
            if ( v41 >= v37 )
              v42 = (__int64)&v37[v39];
            v37 = (char *)v42;
            v8 = v41 < v40 ? 0xC0000095 : 0;
            if ( v41 < v40 )
              break;
            if ( (unsigned int)++v4 >= *(_DWORD *)a4 )
              goto LABEL_77;
          }
          return (unsigned int)v8;
        }
LABEL_77:
        if ( v37 + 4 >= v37 )
          v10 = (__int64)(v37 + 4);
        v8 = v37 + 4 < v37 ? 0xC0000095 : 0;
        if ( v37 + 4 < v37 )
          return (unsigned int)v8;
        if ( (unsigned __int64)(v37 + 12) <= v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v37 = 8;
          *(_QWORD *)v10 = v44;
          goto LABEL_83;
        }
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)v8;
}
