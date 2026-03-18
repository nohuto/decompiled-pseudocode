/*
 * XREFs of sub_140726100 @ 0x140726100
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140726100(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  int v9; // r9d
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r12d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  PVOID PoolWithTag; // rax
  __int64 v18; // r9
  unsigned int v19; // edx
  unsigned int v20; // ecx
  int v21; // eax
  char *v22; // r8
  int v23; // r10d
  unsigned int v24; // r13d
  int v25; // ecx
  char *v26; // rcx
  char *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r9
  unsigned int v31; // ecx
  unsigned int v32; // eax
  char *v33; // r8
  int v34; // r10d
  unsigned int v35; // r13d
  int v36; // ecx
  char *v37; // rcx
  char *v38; // rdx
  __int64 v39; // rax
  unsigned int v41; // [rsp+3Ch] [rbp-5Ch]
  __int64 *v42; // [rsp+40h] [rbp-58h]
  __int64 v43; // [rsp+48h] [rbp-50h]
  unsigned int v44; // [rsp+A0h] [rbp+8h]

  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = -1LL;
      if ( v7 + 4 >= v7 )
        v10 = v7 + 4;
      v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
      if ( v7 + 4 < v7 )
        break;
      v11 = v10 + *(unsigned int *)v7;
      v7 = -1LL;
      if ( v11 >= v10 )
        v7 = v11;
      v6 = v11 < v10 ? 0xC0000095 : 0;
      if ( v11 < v10 )
        break;
      if ( (unsigned int)++v9 >= 3 )
      {
        v12 = -1LL;
        if ( v7 + 4 >= v7 )
          v12 = v7 + 4;
        v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
        if ( v7 + 4 >= v7 )
        {
          a3 = *(_DWORD *)v7;
          if ( !*(_DWORD *)v7 )
            v12 = 0LL;
          v42 = (__int64 *)v12;
        }
        break;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    if ( a3 == 8 )
      v43 = *v42;
    else
      v6 = -1073741789;
    if ( v6 >= 0 )
    {
      KeReleaseMutex(&stru_1403423C0, 0);
      v13 = -1;
      v14 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v14 = *(_DWORD *)(a2 + 16) + 48;
      v6 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v15 = v14 + 4;
        v16 = -1;
        if ( v14 + 4 >= v14 )
          v16 = v14 + 4;
        v6 = v15 < v14 ? 0xC0000095 : 0;
        if ( v15 >= v14 )
          v6 = v16 + *(_DWORD *)(a2 + 32) < v16 ? 0xC0000095 : 0;
      }
      if ( v6 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        v6 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v6 = -1073741801;
        }
        if ( v6 >= 0 )
        {
          v18 = *(_QWORD *)(a4 + 8);
          if ( v18 )
          {
            v22 = *(char **)(a4 + 8);
            v23 = 0;
            if ( *(_DWORD *)a4 )
            {
              v24 = v44;
              while ( 1 )
              {
                v25 = -1;
                if ( *(_DWORD *)v22 < 0xFFFFFFFC )
                  v25 = *(_DWORD *)v22 + 4;
                if ( (unsigned int)(*(_DWORD *)v22 + 4) >= 4 )
                  v24 = v25;
                v6 = *(_DWORD *)v22 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v22 >= 0xFFFFFFFC )
                  break;
                v26 = v22;
                v27 = &v22[v24];
                v28 = -1LL;
                if ( v27 >= v22 )
                  v28 = (__int64)&v22[v24];
                v22 = (char *)v28;
                v6 = v27 < v26 ? 0xC0000095 : 0;
                if ( v27 < v26 )
                  break;
                if ( (unsigned int)++v23 >= *(_DWORD *)a4 )
                  goto LABEL_55;
              }
            }
            else
            {
LABEL_55:
              v29 = -1LL;
              if ( v22 + 4 >= v22 )
                v29 = (__int64)(v22 + 4);
              v6 = v22 + 4 < v22 ? 0xC0000095 : 0;
              if ( v22 + 4 >= v22 )
              {
                if ( (unsigned __int64)(v22 + 8) > v18 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  v6 = -1073741789;
                  goto LABEL_62;
                }
                *(_DWORD *)v22 = 4;
                *(_DWORD *)v29 = 0;
                goto LABEL_61;
              }
            }
          }
          else
          {
            v19 = *(_DWORD *)(a4 + 4);
            v20 = v19 + 8;
            v21 = -1;
            if ( v19 + 8 >= v19 )
              v21 = v19 + 8;
            *(_DWORD *)(a4 + 4) = v21;
            v6 = v20 < v19 ? 0xC0000095 : 0;
            if ( v20 >= v19 )
            {
              v6 = 0;
LABEL_61:
              ++*(_DWORD *)a4;
            }
          }
LABEL_62:
          if ( v6 >= 0 )
          {
            v30 = *(_QWORD *)(a4 + 8);
            if ( v30 )
            {
              v33 = *(char **)(a4 + 8);
              v34 = 0;
              if ( *(_DWORD *)a4 )
              {
                v35 = v41;
                while ( 1 )
                {
                  v36 = -1;
                  if ( *(_DWORD *)v33 < 0xFFFFFFFC )
                    v36 = *(_DWORD *)v33 + 4;
                  if ( (unsigned int)(*(_DWORD *)v33 + 4) >= 4 )
                    v35 = v36;
                  v6 = *(_DWORD *)v33 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( *(_DWORD *)v33 >= 0xFFFFFFFC )
                    break;
                  v37 = v33;
                  v38 = &v33[v35];
                  v39 = -1LL;
                  if ( v38 >= v33 )
                    v39 = (__int64)&v33[v35];
                  v33 = (char *)v39;
                  v6 = v38 < v37 ? 0xC0000095 : 0;
                  if ( v38 < v37 )
                    break;
                  if ( (unsigned int)++v34 >= *(_DWORD *)a4 )
                    goto LABEL_79;
                }
              }
              else
              {
LABEL_79:
                if ( v33 + 4 >= v33 )
                  v8 = (__int64)(v33 + 4);
                v6 = v33 + 4 < v33 ? 0xC0000095 : 0;
                if ( v33 + 4 >= v33 )
                {
                  if ( (unsigned __int64)(v33 + 12) <= v30 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *(_DWORD *)v33 = 8;
                    *(_QWORD *)v8 = v43;
                    goto LABEL_85;
                  }
                  return (unsigned int)-1073741789;
                }
              }
            }
            else
            {
              v31 = *(_DWORD *)(a4 + 4);
              v32 = v31 + 12;
              if ( v31 + 12 >= v31 )
                v13 = v31 + 12;
              *(_DWORD *)(a4 + 4) = v13;
              v6 = v32 < v31 ? 0xC0000095 : 0;
              if ( v32 >= v31 )
              {
                v6 = 0;
LABEL_85:
                ++*(_DWORD *)a4;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
