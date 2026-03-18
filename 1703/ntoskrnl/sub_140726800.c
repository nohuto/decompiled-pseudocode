/*
 * XREFs of sub_140726800 @ 0x140726800
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140726800(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rbp
  signed int v8; // ebx
  unsigned int i; // r9d
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  int v15; // esi
  int v16; // r8d
  unsigned int v17; // eax
  int v18; // r14d
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  PVOID PoolWithTag; // rax
  __int64 v23; // r10
  int v24; // esi
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // r9d
  char *v29; // r8
  unsigned int v30; // r15d
  int v31; // ecx
  char *v32; // rcx
  char *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r9
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int v39; // r10d
  char *v40; // r8
  unsigned int v41; // esi
  int v42; // ecx
  char *v43; // rcx
  char *v44; // rdx
  __int64 v45; // rax
  _QWORD *v47; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v10 = *(unsigned int *)v4;
      v11 = v4 + 4;
      if ( v4 + 4 < v4 )
      {
        v11 = -1LL;
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
      }
      if ( v8 < 0 )
        goto LABEL_19;
      v4 = -1LL;
      if ( v11 + v10 >= v11 )
        v4 = v11 + v10;
      v8 = v11 + v10 < v11 ? 0xC0000095 : 0;
      if ( v11 + v10 < v11 )
        goto LABEL_19;
    }
    v12 = *(_DWORD *)v4;
    v13 = -1LL;
    if ( v4 + 4 >= v4 )
      v13 = v4 + 4;
    v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_19:
      v12 = a3;
      v14 = v47;
      goto LABEL_20;
    }
    v14 = 0LL;
    if ( v12 )
      v14 = (_QWORD *)v13;
LABEL_20:
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( v12 != 8 )
      return (unsigned int)-1073741789;
    v47 = (_QWORD *)*v14;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    v15 = qword_1407AC380 ? qword_1407AC380() : -1073741637;
    v8 = v15;
    if ( v15 >= 0 )
    {
      v16 = *(_DWORD *)(a2 + 32);
      v17 = *(_DWORD *)(a2 + 16) + 48;
      v18 = -1;
      v19 = -1;
      if ( v17 >= 0x30 )
        v19 = v17;
      v8 = v17 < 0x30 ? 0xC0000095 : 0;
      if ( v17 >= 0x30 )
      {
        v20 = v19 + 4;
        v21 = -1;
        if ( v19 + 4 >= v19 )
          v21 = v19 + 4;
        v8 = v20 < v19 ? 0xC0000095 : 0;
        if ( v20 >= v19 )
          v8 = v21 + v16 < v21 ? 0xC0000095 : 0;
      }
      if ( v8 >= 0 )
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        *(_DWORD *)(a4 + 4) = 20;
        v8 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v8 = -1073741801;
        }
        if ( v8 >= 0 )
        {
          v23 = *(_QWORD *)(a4 + 8);
          v24 = v15 | 0x10000000;
          if ( v23 )
          {
            v28 = 0;
            v29 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              v30 = a3;
              while ( 1 )
              {
                v31 = -1;
                if ( *(_DWORD *)v29 < 0xFFFFFFFC )
                  v31 = *(_DWORD *)v29 + 4;
                if ( (unsigned int)(*(_DWORD *)v29 + 4) >= 4 )
                  v30 = v31;
                v8 = *(_DWORD *)v29 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v29 >= 0xFFFFFFFC )
                  break;
                v32 = v29;
                v33 = &v29[v30];
                v34 = -1LL;
                if ( v33 >= v29 )
                  v34 = (__int64)&v29[v30];
                v29 = (char *)v34;
                v8 = v33 < v32 ? 0xC0000095 : 0;
                if ( v33 < v32 )
                  break;
                if ( (unsigned int)++v28 >= *(_DWORD *)a4 )
                  goto LABEL_58;
              }
            }
            else
            {
LABEL_58:
              v35 = -1LL;
              if ( v29 + 4 >= v29 )
                v35 = (__int64)(v29 + 4);
              v8 = v29 + 4 < v29 ? 0xC0000095 : 0;
              if ( v29 + 4 >= v29 )
              {
                if ( (unsigned __int64)(v29 + 8) > v23 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  return (unsigned int)-1073741789;
                *(_DWORD *)v29 = 4;
                *(_DWORD *)v35 = v24;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v25 = *(_DWORD *)(a4 + 4);
            v26 = -1;
            v27 = v25 + 8;
            if ( v25 + 8 >= v25 )
              v26 = v25 + 8;
            v8 = v27 < v25 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v26;
            if ( v27 >= v25 )
            {
              ++*(_DWORD *)a4;
LABEL_64:
              v36 = *(_QWORD *)(a4 + 8);
              if ( !v36 )
              {
                v37 = *(_DWORD *)(a4 + 4);
                v38 = v37 + 12;
                if ( v37 + 12 >= v37 )
                  v18 = v37 + 12;
                v8 = v38 < v37 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v18;
                if ( v38 >= v37 )
                {
                  ++*(_DWORD *)a4;
                  return 0;
                }
                return (unsigned int)v8;
              }
              v39 = 0;
              v40 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                v41 = a3;
                while ( 1 )
                {
                  v42 = -1;
                  if ( *(_DWORD *)v40 < 0xFFFFFFFC )
                    v42 = *(_DWORD *)v40 + 4;
                  if ( (unsigned int)(*(_DWORD *)v40 + 4) >= 4 )
                    v41 = v42;
                  v8 = *(_DWORD *)v40 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( *(_DWORD *)v40 >= 0xFFFFFFFC )
                    break;
                  v43 = v40;
                  v44 = &v40[v41];
                  v45 = -1LL;
                  if ( v44 >= v40 )
                    v45 = (__int64)&v40[v41];
                  v40 = (char *)v45;
                  v8 = v44 < v43 ? 0xC0000095 : 0;
                  if ( v44 < v43 )
                    break;
                  if ( (unsigned int)++v39 >= *(_DWORD *)a4 )
                    goto LABEL_80;
                }
                return (unsigned int)v8;
              }
LABEL_80:
              if ( v40 + 4 >= v40 )
                v5 = (__int64)(v40 + 4);
              v8 = v40 + 4 < v40 ? 0xC0000095 : 0;
              if ( v40 + 4 < v40 )
                return (unsigned int)v8;
              if ( (unsigned __int64)(v40 + 12) <= v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v40 = 8;
                *(_QWORD *)v5 = v47;
                ++*(_DWORD *)a4;
                return (unsigned int)v8;
              }
              return (unsigned int)-1073741789;
            }
          }
          if ( v8 < 0 )
            return (unsigned int)v8;
          goto LABEL_64;
        }
      }
    }
  }
  return (unsigned int)v8;
}
