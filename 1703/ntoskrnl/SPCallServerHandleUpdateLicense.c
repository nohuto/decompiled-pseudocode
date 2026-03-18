/*
 * XREFs of SPCallServerHandleUpdateLicense @ 0x140599CA4
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleUpdateLicense(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r10
  unsigned int i; // esi
  __int64 v12; // rax
  unsigned __int64 v13; // r11
  signed int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // r11
  _QWORD *v17; // rax
  int v18; // r10d
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
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

  v4 = 0LL;
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
        v14 = -1073741675;
      }
      else
      {
        v14 = 0;
      }
      if ( v14 < 0 )
        goto LABEL_78;
      v10 = -1LL;
      if ( v13 + v12 >= v13 )
        v10 = v13 + v12;
      v14 = v13 + v12 < v13 ? 0xC0000095 : 0;
      if ( v13 + v12 < v13 )
        goto LABEL_78;
    }
    v15 = *(_DWORD *)v10;
    v16 = -1LL;
    if ( v10 + 4 >= v10 )
      v16 = v10 + 4;
    v14 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_78:
      v15 = a3;
      v17 = v43;
      goto LABEL_18;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_18:
    if ( v14 < 0 )
      return (unsigned int)v14;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v43 = (_QWORD *)*v17;
  }
  else
  {
    v14 = -1073741811;
  }
  if ( v14 >= 0 )
  {
    if ( !v8 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v18 = 0;
    while ( 1 )
    {
      v19 = *(unsigned int *)v8;
      v20 = v8 + 4;
      if ( v8 + 4 < v8 )
      {
        v20 = -1LL;
        v14 = -1073741675;
      }
      else
      {
        v14 = 0;
      }
      if ( v14 < 0 )
        break;
      v8 = -1LL;
      if ( v20 + v19 >= v20 )
        v8 = v20 + v19;
      v14 = v20 + v19 < v20 ? 0xC0000095 : 0;
      if ( v20 + v19 < v20 )
        break;
      if ( (unsigned int)++v18 >= 4 )
      {
        v21 = -1LL;
        if ( v8 + 4 >= v8 )
          v21 = v8 + 4;
        v14 = v8 + 4 < v8 ? 0xC0000095 : 0;
        if ( v8 + 4 >= v8 && *(_DWORD *)v8 )
          v4 = v21;
        break;
      }
    }
    if ( v14 >= 0 )
    {
      if ( qword_1407AC378 )
        v22 = qword_1407AC378(v4);
      else
        v22 = -1073741637;
      v23 = -1;
      v24 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v24 = *(_DWORD *)(a2 + 16) + 48;
      v14 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v25 = v24 + 4;
        v26 = -1;
        if ( v24 + 4 >= v24 )
          v26 = v24 + 4;
        v14 = v25 < v24 ? 0xC0000095 : 0;
        if ( v25 >= v24 )
          v14 = v26 + *(_DWORD *)(a2 + 32) < v26 ? 0xC0000095 : 0;
      }
      if ( v14 >= 0 )
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
        v14 = v30 < v28 ? 0xC0000095 : 0;
        if ( v30 >= v28 )
        {
          if ( v28 + 8 > &v28[*(unsigned int *)(a4 + 4)] )
            return (unsigned int)-1073741789;
          *(_DWORD *)v28 = 4;
          *(_DWORD *)v31 = v29;
          ++*(_DWORD *)a4;
        }
        if ( v30 < v28 )
          return (unsigned int)v14;
        v32 = *(_QWORD *)(a4 + 8);
        if ( !v32 )
        {
          v41 = *(_DWORD *)(a4 + 4);
          v42 = v41 + 12;
          if ( v41 + 12 >= v41 )
            v23 = v41 + 12;
          v14 = v42 < v41 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v23;
          if ( v42 >= v41 )
          {
            ++*(_DWORD *)a4;
            return 0;
          }
          return (unsigned int)v14;
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
            v14 = *(_DWORD *)v34 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( *(_DWORD *)v34 >= 0xFFFFFFFC )
              break;
            v37 = v34;
            v38 = &v34[v35];
            v39 = -1LL;
            if ( v38 >= v34 )
              v39 = (__int64)&v34[v35];
            v34 = (char *)v39;
            v14 = v38 < v37 ? 0xC0000095 : 0;
            if ( v38 < v37 )
              break;
            if ( (unsigned int)++v33 >= *(_DWORD *)a4 )
              goto LABEL_67;
          }
          return (unsigned int)v14;
        }
LABEL_67:
        if ( v34 + 4 >= v34 )
          v9 = (__int64)(v34 + 4);
        v14 = v34 + 4 < v34 ? 0xC0000095 : 0;
        if ( v34 + 4 < v34 )
          return (unsigned int)v14;
        if ( (unsigned __int64)(v34 + 12) <= v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v34 = 8;
          *(_QWORD *)v9 = v43;
          ++*(_DWORD *)a4;
          return (unsigned int)v14;
        }
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)v14;
}
