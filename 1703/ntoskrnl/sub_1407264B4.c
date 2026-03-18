/*
 * XREFs of sub_1407264B4 @ 0x1407264B4
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407264B4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v7; // r8d
  unsigned __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r10
  unsigned int i; // esi
  __int64 v12; // rax
  unsigned __int64 v13; // r11
  unsigned int v14; // ecx
  __int64 v15; // r11
  _QWORD *v16; // rax
  unsigned int j; // r10d
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rcx
  int v23; // esi
  int v24; // ebp
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edx
  char *PoolWithTag; // rax
  char *v29; // rdx
  int v30; // esi
  char *v31; // rax
  __int64 v32; // r9
  __int64 v33; // r10
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // r11d
  char *v37; // r9
  unsigned int v38; // r14d
  int v39; // ecx
  char *v40; // rcx
  char *v41; // rdx
  __int64 v42; // rax
  _QWORD *v44; // [rsp+58h] [rbp+10h]

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
      v16 = v44;
      goto LABEL_23;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_23:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v44 = (_QWORD *)*v16;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( !v8 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
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
        goto LABEL_45;
      v8 = -1LL;
      if ( v19 + v18 >= v19 )
        v8 = v19 + v18;
      v7 = v19 + v18 < v19 ? 0xC0000095 : 0;
      if ( v19 + v18 < v19 )
        goto LABEL_45;
    }
    v20 = *(unsigned int *)v8;
    v21 = -1LL;
    if ( v8 + 4 >= v8 )
      v21 = v8 + 4;
    v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
    {
LABEL_45:
      v20 = a3;
      v22 = (__int64)v44;
      goto LABEL_46;
    }
    v22 = 0LL;
    if ( (_DWORD)v20 )
      v22 = v21;
LABEL_46:
    if ( v7 >= 0 )
    {
      if ( qword_1407AC428 )
        v23 = qword_1407AC428(v22, v20);
      else
        v23 = -1073741637;
      v24 = -1;
      v25 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v25 = *(_DWORD *)(a2 + 16) + 48;
      v7 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v26 = v25 + 4;
        v27 = -1;
        if ( v25 + 4 >= v25 )
          v27 = v25 + 4;
        v7 = v26 < v25 ? 0xC0000095 : 0;
        if ( v26 >= v25 )
          v7 = v27 + *(_DWORD *)(a2 + 32) < v27 ? 0xC0000095 : 0;
      }
      if ( v7 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        v29 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v30 = v23 | 0x10000000;
        v31 = PoolWithTag + 4;
        v32 = -1LL;
        if ( v31 >= v29 )
          v32 = (__int64)v31;
        v7 = v31 < v29 ? 0xC0000095 : 0;
        if ( v31 >= v29 )
        {
          if ( v29 + 8 > &v29[*(unsigned int *)(a4 + 4)] )
            return (unsigned int)-1073741789;
          *(_DWORD *)v29 = 4;
          *(_DWORD *)v32 = v30;
          ++*(_DWORD *)a4;
        }
        if ( v31 < v29 )
          return (unsigned int)v7;
        v33 = *(_QWORD *)(a4 + 8);
        if ( !v33 )
        {
          v34 = *(_DWORD *)(a4 + 4);
          v35 = v34 + 12;
          if ( v34 + 12 >= v34 )
            v24 = v34 + 12;
          v7 = v35 < v34 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v24;
          if ( v35 >= v34 )
          {
            ++*(_DWORD *)a4;
            return 0;
          }
          return (unsigned int)v7;
        }
        v36 = 0;
        v37 = *(char **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          v38 = a3;
          while ( 1 )
          {
            v39 = -1;
            if ( *(_DWORD *)v37 < 0xFFFFFFFC )
              v39 = *(_DWORD *)v37 + 4;
            if ( (unsigned int)(*(_DWORD *)v37 + 4) >= 4 )
              v38 = v39;
            v7 = *(_DWORD *)v37 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( *(_DWORD *)v37 >= 0xFFFFFFFC )
              break;
            v40 = v37;
            v41 = &v37[v38];
            v42 = -1LL;
            if ( v41 >= v37 )
              v42 = (__int64)&v37[v38];
            v37 = (char *)v42;
            v7 = v41 < v40 ? 0xC0000095 : 0;
            if ( v41 < v40 )
              break;
            if ( (unsigned int)++v36 >= *(_DWORD *)a4 )
              goto LABEL_82;
          }
          return (unsigned int)v7;
        }
LABEL_82:
        if ( v37 + 4 >= v37 )
          v9 = (__int64)(v37 + 4);
        v7 = v37 + 4 < v37 ? 0xC0000095 : 0;
        if ( v37 + 4 < v37 )
          return (unsigned int)v7;
        if ( (unsigned __int64)(v37 + 12) <= v33 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v37 = 8;
          *(_QWORD *)v9 = v44;
          ++*(_DWORD *)a4;
          return (unsigned int)v7;
        }
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)v7;
}
