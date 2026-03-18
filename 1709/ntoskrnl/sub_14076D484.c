/*
 * XREFs of sub_14076D484 @ 0x14076D484
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14076D484(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  __int64 v9; // r14
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  __int64 *QuadPart; // rax
  NTSTATUS v16; // eax
  NTSTATUS v17; // esi
  NTSTATUS v18; // eax
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // ebp
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edx
  char *PoolWithTag; // rax
  char *v26; // rdx
  int v27; // esi
  char *v28; // rax
  __int64 v29; // r9
  __int64 v30; // r10
  unsigned int v31; // ecx
  unsigned int v32; // eax
  char *v33; // r9
  unsigned int v34; // eax
  unsigned int v35; // esi
  char *v36; // rcx
  char *v37; // rdx
  __int64 v38; // rax
  __int64 v40; // [rsp+30h] [rbp-38h]
  LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF
  int v42; // [rsp+80h] [rbp+18h]

  v42 = a3;
  v4 = 0;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v11 = -1LL;
      if ( v8 + 4 >= v8 )
        v11 = v8 + 4;
      v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
        goto LABEL_22;
      v12 = v11 + *(unsigned int *)v8;
      v8 = -1LL;
      if ( v12 >= v11 )
        v8 = v12;
      v7 = v12 < v11 ? 0xC0000095 : 0;
      if ( v12 < v11 )
        goto LABEL_22;
    }
    v13 = *(_DWORD *)v8;
    v14 = -1LL;
    if ( v8 + 4 >= v8 )
      v14 = v8 + 4;
    v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
    {
LABEL_22:
      v13 = v42;
      QuadPart = (__int64 *)Interval.QuadPart;
      goto LABEL_23;
    }
    QuadPart = 0LL;
    if ( v13 )
      QuadPart = (__int64 *)v14;
LABEL_23:
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v40 = *QuadPart;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  Interval.QuadPart = -35000000LL;
  do
  {
    v16 = KeDelayExecutionThread(1, 1u, &Interval);
    v17 = v16;
  }
  while ( v16 == 257 );
  if ( v16 >= 0 && v16 != 192 )
  {
    Interval.QuadPart = -270000000LL;
    do
    {
      v18 = KeWaitForSingleObject(&stru_14035AB40, UserRequest, 1, 1u, &Interval);
      v17 = v18;
    }
    while ( v18 == 257 );
    if ( v18 >= 0 && v18 != 192 && v18 != 258 )
      KeReleaseMutex(&stru_14035AB40, 0);
  }
  v19 = *(_DWORD *)(a2 + 32);
  v20 = *(_DWORD *)(a2 + 16) + 48;
  v21 = -1;
  v22 = -1;
  if ( v20 >= 0x30 )
    v22 = v20;
  v7 = v20 < 0x30 ? 0xC0000095 : 0;
  if ( v20 >= 0x30 )
  {
    v23 = v22 + 4;
    v24 = -1;
    if ( v22 + 4 >= v22 )
      v24 = v22 + 4;
    v7 = v23 < v22 ? 0xC0000095 : 0;
    if ( v23 >= v22 )
      v7 = v24 + v19 < v24 ? 0xC0000095 : 0;
  }
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  *(_DWORD *)(a4 + 4) = 20;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  v26 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = PoolWithTag;
  *(_DWORD *)a4 = 0;
  v27 = v17 | 0x10000000;
  v28 = PoolWithTag + 4;
  v29 = -1LL;
  if ( v28 >= v26 )
    v29 = (__int64)v28;
  v7 = v28 < v26 ? 0xC0000095 : 0;
  if ( v28 >= v26 )
  {
    if ( v26 + 8 > &v26[*(unsigned int *)(a4 + 4)] )
      return (unsigned int)-1073741789;
    *(_DWORD *)v26 = 4;
    *(_DWORD *)v29 = v27;
    ++*(_DWORD *)a4;
  }
  if ( v28 < v26 )
    return v7;
  v30 = *(_QWORD *)(a4 + 8);
  if ( v30 )
  {
    v33 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      do
      {
        v34 = -1;
        if ( *(_DWORD *)v33 < 0xFFFFFFFC )
          v34 = *(_DWORD *)v33 + 4;
        v7 = *(_DWORD *)v33 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v33 + 4) < 4 )
          return v7;
        v35 = v34;
        v36 = v33;
        v37 = &v33[v34];
        v38 = -1LL;
        if ( v37 >= v33 )
          v38 = (__int64)&v33[v35];
        v33 = (char *)v38;
        v7 = v37 < v36 ? 0xC0000095 : 0;
        if ( v37 < v36 )
          return v7;
      }
      while ( (unsigned int)++v4 < *(_DWORD *)a4 );
    }
    if ( v33 + 4 >= v33 )
      v9 = (__int64)(v33 + 4);
    v7 = v33 + 4 < v33 ? 0xC0000095 : 0;
    if ( v33 + 4 < v33 )
      return v7;
    if ( (unsigned __int64)(v33 + 12) <= v30 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v33 = 8;
      *(_QWORD *)v9 = v40;
      goto LABEL_72;
    }
    return (unsigned int)-1073741789;
  }
  v31 = *(_DWORD *)(a4 + 4);
  v32 = v31 + 12;
  if ( v31 + 12 >= v31 )
    v21 = v31 + 12;
  v7 = v32 < v31 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v21;
  if ( v32 >= v31 )
  {
    v7 = 0;
LABEL_72:
    ++*(_DWORD *)a4;
  }
  return v7;
}
