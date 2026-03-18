/*
 * XREFs of SPCallServerHandleRemoveLicense @ 0x140599FC4
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleRemoveLicense(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int64 v9; // r10
  unsigned int i; // esi
  __int64 v11; // rax
  unsigned __int64 v12; // r11
  signed int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // r11
  _QWORD *v16; // rax
  unsigned int j; // r10d
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rcx
  int v22; // esi
  int v23; // ebp
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // edx
  char *PoolWithTag; // rax
  char *v28; // rdx
  int v29; // esi
  char *v30; // rax
  __int64 v31; // r9
  __int64 v32; // r10
  int v33; // r11d
  char *v34; // r9
  unsigned int v35; // r14d
  int v36; // ecx
  char *v37; // rcx
  char *v38; // rdx
  __int64 v39; // rax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  _QWORD *v43; // [rsp+58h] [rbp+10h]

  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v9 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v11 = *(unsigned int *)v9;
      v12 = v9 + 4;
      if ( v9 + 4 < v9 )
      {
        v12 = -1LL;
        v13 = -1073741675;
      }
      else
      {
        v13 = 0;
      }
      if ( v13 < 0 )
        goto LABEL_78;
      v9 = -1LL;
      if ( v12 + v11 >= v12 )
        v9 = v12 + v11;
      v13 = v12 + v11 < v12 ? 0xC0000095 : 0;
      if ( v12 + v11 < v12 )
        goto LABEL_78;
    }
    v14 = *(_DWORD *)v9;
    v15 = -1LL;
    if ( v9 + 4 >= v9 )
      v15 = v9 + 4;
    v13 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_78:
      v14 = a3;
      v16 = v43;
      goto LABEL_18;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_18:
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v43 = (_QWORD *)*v16;
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 >= 0 )
  {
    if ( !v7 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; j < 4; ++j )
    {
      v18 = *(unsigned int *)v7;
      v19 = v7 + 4;
      if ( v7 + 4 < v7 )
      {
        v19 = -1LL;
        v13 = -1073741675;
      }
      else
      {
        v13 = 0;
      }
      if ( v13 < 0 )
        goto LABEL_80;
      v7 = -1LL;
      if ( v19 + v18 >= v19 )
        v7 = v19 + v18;
      v13 = v19 + v18 < v19 ? 0xC0000095 : 0;
      if ( v19 + v18 < v19 )
        goto LABEL_80;
    }
    v20 = -1LL;
    if ( v7 + 4 >= v7 )
      v20 = v7 + 4;
    v13 = v7 + 4 < v7 ? 0xC0000095 : 0;
    if ( v7 + 4 < v7 )
    {
LABEL_80:
      v21 = (__int64)v43;
      goto LABEL_37;
    }
    v21 = 0LL;
    if ( *(_DWORD *)v7 )
      v21 = v20;
LABEL_37:
    if ( v13 >= 0 )
    {
      if ( qword_1407AC370 )
        v22 = qword_1407AC370(v21);
      else
        v22 = -1073741637;
      v23 = -1;
      v24 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v24 = *(_DWORD *)(a2 + 16) + 48;
      v13 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v25 = v24 + 4;
        v26 = -1;
        if ( v24 + 4 >= v24 )
          v26 = v24 + 4;
        v13 = v25 < v24 ? 0xC0000095 : 0;
        if ( v25 >= v24 )
          v13 = v26 + *(_DWORD *)(a2 + 32) < v26 ? 0xC0000095 : 0;
      }
      if ( v13 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        v28 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v29 = v22 | 0x10000000;
        v30 = PoolWithTag + 4;
        v31 = -1LL;
        if ( v30 >= v28 )
          v31 = (__int64)v30;
        v13 = v30 < v28 ? 0xC0000095 : 0;
        if ( v30 >= v28 )
        {
          if ( v28 + 8 > &v28[*(unsigned int *)(a4 + 4)] )
            return (unsigned int)-1073741789;
          *(_DWORD *)v28 = 4;
          *(_DWORD *)v31 = v29;
          ++*(_DWORD *)a4;
        }
        if ( v30 < v28 )
          return (unsigned int)v13;
        v32 = *(_QWORD *)(a4 + 8);
        if ( !v32 )
        {
          v41 = *(_DWORD *)(a4 + 4);
          v42 = v41 + 12;
          if ( v41 + 12 >= v41 )
            v23 = v41 + 12;
          v13 = v42 < v41 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v23;
          if ( v42 >= v41 )
          {
            ++*(_DWORD *)a4;
            return 0;
          }
          return (unsigned int)v13;
        }
        v33 = 0;
        v34 = *(char **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          v35 = a3;
          while ( 1 )
          {
            v36 = -1;
            if ( *(_DWORD *)v34 < 0xFFFFFFFC )
              v36 = *(_DWORD *)v34 + 4;
            if ( (unsigned int)(*(_DWORD *)v34 + 4) >= 4 )
              v35 = v36;
            v13 = *(_DWORD *)v34 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( *(_DWORD *)v34 >= 0xFFFFFFFC )
              break;
            v37 = v34;
            v38 = &v34[v35];
            v39 = -1LL;
            if ( v38 >= v34 )
              v39 = (__int64)&v34[v35];
            v34 = (char *)v39;
            v13 = v38 < v37 ? 0xC0000095 : 0;
            if ( v38 < v37 )
              break;
            if ( (unsigned int)++v33 >= *(_DWORD *)a4 )
              goto LABEL_67;
          }
          return (unsigned int)v13;
        }
LABEL_67:
        if ( v34 + 4 >= v34 )
          v8 = (__int64)(v34 + 4);
        v13 = v34 + 4 < v34 ? 0xC0000095 : 0;
        if ( v34 + 4 < v34 )
          return (unsigned int)v13;
        if ( (unsigned __int64)(v34 + 12) <= v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v34 = 8;
          *(_QWORD *)v8 = v43;
          ++*(_DWORD *)a4;
          return (unsigned int)v13;
        }
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)v13;
}
