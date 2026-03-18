/*
 * XREFs of sub_140729A58 @ 0x140729A58
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140729A58(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r14
  signed int v9; // ebx
  unsigned __int64 v10; // rdx
  unsigned int i; // r10d
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int j; // r10d
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  unsigned int v21; // ecx
  __int64 v22; // r9
  unsigned int *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned int k; // r9d
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  unsigned int *v31; // rax
  int v32; // esi
  int v33; // r8d
  unsigned int v34; // eax
  int v35; // r15d
  unsigned int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // edx
  PVOID PoolWithTag; // rax
  __int64 v40; // r10
  int v41; // esi
  unsigned int v42; // edx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // r9d
  char *v46; // r8
  unsigned int v47; // r12d
  int v48; // ecx
  char *v49; // rcx
  char *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r9
  unsigned int v54; // ecx
  unsigned int v55; // eax
  int v56; // r10d
  char *v57; // r8
  unsigned int v58; // esi
  int v59; // ecx
  char *v60; // rcx
  char *v61; // rdx
  __int64 v62; // rax
  _QWORD *v64; // [rsp+20h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = *(unsigned int *)v10;
      v13 = v10 + 4;
      if ( v10 + 4 < v10 )
      {
        v13 = -1LL;
        v9 = -1073741675;
      }
      else
      {
        v9 = 0;
      }
      if ( v9 < 0 )
        goto LABEL_19;
      v10 = -1LL;
      if ( v13 + v12 >= v13 )
        v10 = v13 + v12;
      v9 = v13 + v12 < v13 ? 0xC0000095 : 0;
      if ( v13 + v12 < v13 )
        goto LABEL_19;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_19:
      v14 = a3;
      v16 = v64;
      goto LABEL_20;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_20:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v64 = (_QWORD *)*v16;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v17 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *(unsigned int *)v17;
      v20 = v17 + 4;
      if ( v17 + 4 < v17 )
      {
        v20 = -1LL;
        v9 = -1073741675;
      }
      else
      {
        v9 = 0;
      }
      if ( v9 < 0 )
        goto LABEL_42;
      v17 = -1LL;
      if ( v20 + v19 >= v20 )
        v17 = v20 + v19;
      v9 = v20 + v19 < v20 ? 0xC0000095 : 0;
      if ( v20 + v19 < v20 )
        goto LABEL_42;
    }
    v21 = *(_DWORD *)v17;
    v22 = -1LL;
    if ( v17 + 4 >= v17 )
      v22 = v17 + 4;
    v9 = v17 + 4 < v17 ? 0xC0000095 : 0;
    if ( v17 + 4 < v17 )
    {
LABEL_42:
      v21 = a3;
      v23 = (unsigned int *)v64;
      goto LABEL_43;
    }
    v23 = 0LL;
    if ( v21 )
      v23 = (unsigned int *)v22;
LABEL_43:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v21 != 4 )
      return (unsigned int)-1073741789;
    a3 = *v23;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !v4 || *(_DWORD *)a1 <= 5u )
  {
    v9 = -1073741811;
LABEL_49:
    v24 = a3;
    goto LABEL_50;
  }
  for ( k = 0; k < 5; ++k )
  {
    v27 = *(unsigned int *)v4;
    v28 = v4 + 4;
    if ( v4 + 4 < v4 )
    {
      v28 = -1LL;
      v9 = -1073741675;
    }
    else
    {
      v9 = 0;
    }
    if ( v9 < 0 )
      goto LABEL_69;
    v4 = -1LL;
    if ( v28 + v27 >= v28 )
      v4 = v28 + v27;
    v9 = v28 + v27 < v28 ? 0xC0000095 : 0;
    if ( v28 + v27 < v28 )
      goto LABEL_69;
  }
  v29 = *(_DWORD *)v4;
  v30 = -1LL;
  if ( v4 + 4 >= v4 )
    v30 = v4 + 4;
  v9 = v4 + 4 < v4 ? 0xC0000095 : 0;
  if ( v4 + 4 < v4 )
  {
LABEL_69:
    v29 = a3;
    v31 = (unsigned int *)v64;
    goto LABEL_70;
  }
  v31 = 0LL;
  if ( v29 )
    v31 = (unsigned int *)v30;
LABEL_70:
  if ( v9 < 0 )
    goto LABEL_49;
  if ( v29 != 4 )
    return (unsigned int)-1073741789;
  v24 = *v31;
LABEL_50:
  if ( v9 >= 0 )
  {
    v25 = a3 ? ClipSpInitialize(v24, &g_kernelCallbacks) : ClipSpUninitialize(v24);
    v32 = v25;
    v9 = v25;
    if ( v25 >= 0 )
    {
      v33 = *(_DWORD *)(a2 + 32);
      v34 = *(_DWORD *)(a2 + 16) + 48;
      v35 = -1;
      v36 = -1;
      if ( v34 >= 0x30 )
        v36 = v34;
      v9 = v34 < 0x30 ? 0xC0000095 : 0;
      if ( v34 >= 0x30 )
      {
        v37 = v36 + 4;
        v38 = -1;
        if ( v36 + 4 >= v36 )
          v38 = v36 + 4;
        v9 = v37 < v36 ? 0xC0000095 : 0;
        if ( v37 >= v36 )
          v9 = v38 + v33 < v38 ? 0xC0000095 : 0;
      }
      if ( v9 >= 0 )
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        *(_DWORD *)(a4 + 4) = 20;
        v9 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v9 = -1073741801;
        }
        if ( v9 >= 0 )
        {
          v40 = *(_QWORD *)(a4 + 8);
          v41 = v32 | 0x10000000;
          if ( v40 )
          {
            v45 = 0;
            v46 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              v47 = a3;
              while ( 1 )
              {
                v48 = -1;
                if ( *(_DWORD *)v46 < 0xFFFFFFFC )
                  v48 = *(_DWORD *)v46 + 4;
                if ( (unsigned int)(*(_DWORD *)v46 + 4) >= 4 )
                  v47 = v48;
                v9 = *(_DWORD *)v46 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v46 >= 0xFFFFFFFC )
                  break;
                v49 = v46;
                v50 = &v46[v47];
                v51 = -1LL;
                if ( v50 >= v46 )
                  v51 = (__int64)&v46[v47];
                v46 = (char *)v51;
                v9 = v50 < v49 ? 0xC0000095 : 0;
                if ( v50 < v49 )
                  break;
                if ( (unsigned int)++v45 >= *(_DWORD *)a4 )
                  goto LABEL_105;
              }
            }
            else
            {
LABEL_105:
              v52 = -1LL;
              if ( v46 + 4 >= v46 )
                v52 = (__int64)(v46 + 4);
              v9 = v46 + 4 < v46 ? 0xC0000095 : 0;
              if ( v46 + 4 >= v46 )
              {
                if ( (unsigned __int64)(v46 + 8) > v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  return (unsigned int)-1073741789;
                *(_DWORD *)v46 = 4;
                *(_DWORD *)v52 = v41;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v42 = *(_DWORD *)(a4 + 4);
            v43 = -1;
            v44 = v42 + 8;
            if ( v42 + 8 >= v42 )
              v43 = v42 + 8;
            v9 = v44 < v42 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v43;
            if ( v44 >= v42 )
            {
              ++*(_DWORD *)a4;
LABEL_111:
              v53 = *(_QWORD *)(a4 + 8);
              if ( !v53 )
              {
                v54 = *(_DWORD *)(a4 + 4);
                v55 = v54 + 12;
                if ( v54 + 12 >= v54 )
                  v35 = v54 + 12;
                v9 = v55 < v54 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v35;
                if ( v55 >= v54 )
                {
                  ++*(_DWORD *)a4;
                  return 0;
                }
                return (unsigned int)v9;
              }
              v56 = 0;
              v57 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                v58 = a3;
                while ( 1 )
                {
                  v59 = -1;
                  if ( *(_DWORD *)v57 < 0xFFFFFFFC )
                    v59 = *(_DWORD *)v57 + 4;
                  if ( (unsigned int)(*(_DWORD *)v57 + 4) >= 4 )
                    v58 = v59;
                  v9 = *(_DWORD *)v57 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( *(_DWORD *)v57 >= 0xFFFFFFFC )
                    break;
                  v60 = v57;
                  v61 = &v57[v58];
                  v62 = -1LL;
                  if ( v61 >= v57 )
                    v62 = (__int64)&v57[v58];
                  v57 = (char *)v62;
                  v9 = v61 < v60 ? 0xC0000095 : 0;
                  if ( v61 < v60 )
                    break;
                  if ( (unsigned int)++v56 >= *(_DWORD *)a4 )
                    goto LABEL_127;
                }
                return (unsigned int)v9;
              }
LABEL_127:
              if ( v57 + 4 >= v57 )
                v5 = (__int64)(v57 + 4);
              v9 = v57 + 4 < v57 ? 0xC0000095 : 0;
              if ( v57 + 4 < v57 )
                return (unsigned int)v9;
              if ( (unsigned __int64)(v57 + 12) <= v53 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v57 = 8;
                *(_QWORD *)v5 = v64;
                ++*(_DWORD *)a4;
                return (unsigned int)v9;
              }
              return (unsigned int)-1073741789;
            }
          }
          if ( v9 < 0 )
            return (unsigned int)v9;
          goto LABEL_111;
        }
      }
    }
  }
  return (unsigned int)v9;
}
