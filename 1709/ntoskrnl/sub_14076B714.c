/*
 * XREFs of sub_14076B714 @ 0x14076B714
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeQueryTimeIncrement @ 0x1400B5AF0 (KeQueryTimeIncrement.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14076B714(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // edi
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  __int64 *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rbx
  ULONG TimeIncrement; // eax
  int v19; // ebx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // edx
  char *PoolWithTag; // rax
  char *v24; // rdx
  char *v25; // rax
  __int64 v26; // r9
  char *v27; // r10
  unsigned int v28; // ecx
  unsigned int v29; // eax
  char *v30; // r9
  unsigned int v31; // eax
  unsigned int v32; // r14d
  char *v33; // rcx
  char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // xmm0_8
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-48h] BYREF
  __int64 v39; // [rsp+38h] [rbp-40h]
  __int64 v40; // [rsp+40h] [rbp-38h]
  __int64 *v41; // [rsp+48h] [rbp-30h]

  v4 = 0;
  Timeout.QuadPart = 0LL;
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
      v13 = a3;
      v15 = v41;
      goto LABEL_23;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (__int64 *)v14;
LABEL_23:
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v39 = *v15;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  Timeout.QuadPart = -270000000LL;
  v16 = KeWaitForSingleObject(&stru_14035AB40, UserRequest, 1, 0, &Timeout);
  if ( v16 >= 0 && v16 != 192 && v16 != 258 )
  {
    if ( stru_14035AB20.Header.SignalState || !dword_1407F3124 )
    {
      v17 = MEMORY[0xFFFFF78000000320];
      TimeIncrement = KeQueryTimeIncrement();
      dword_1407F3124 = 1;
      qword_1407F3130 = v17 * TimeIncrement / 10000;
      KeResetEvent(&stru_14035AB20);
    }
    KeReleaseMutex(&stru_14035AB40, 0);
  }
  v19 = -1;
  v20 = -1;
  if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
    v20 = *(_DWORD *)(a2 + 16) + 48;
  v7 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
  {
    v21 = v20 + 4;
    v22 = -1;
    if ( v20 + 4 >= v20 )
      v22 = v20 + 4;
    v7 = v21 < v20 ? 0xC0000095 : 0;
    if ( v21 >= v20 )
      v7 = v22 + *(_DWORD *)(a2 + 32) < v22 ? 0xC0000095 : 0;
  }
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  *(_DWORD *)(a4 + 4) = 20;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  v24 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = PoolWithTag;
  *(_DWORD *)a4 = 0;
  v25 = PoolWithTag + 4;
  v26 = -1LL;
  if ( v25 >= v24 )
    v26 = (__int64)v25;
  v7 = v25 < v24 ? 0xC0000095 : 0;
  if ( v25 >= v24 )
  {
    if ( v24 + 8 > &v24[*(unsigned int *)(a4 + 4)] )
      return (unsigned int)-1073741789;
    *(_DWORD *)v24 = 4;
    *(_DWORD *)v26 = 0x10000000;
    ++*(_DWORD *)a4;
  }
  if ( v25 < v24 )
    return v7;
  v27 = *(char **)(a4 + 8);
  v40 = v39;
  if ( v27 )
  {
    v30 = v27;
    if ( *(_DWORD *)a4 )
    {
      do
      {
        v31 = -1;
        if ( *(_DWORD *)v30 < 0xFFFFFFFC )
          v31 = *(_DWORD *)v30 + 4;
        v7 = *(_DWORD *)v30 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v30 + 4) < 4 )
          return v7;
        v32 = v31;
        v33 = v30;
        v34 = &v30[v31];
        v35 = -1LL;
        if ( v34 >= v30 )
          v35 = (__int64)&v30[v32];
        v30 = (char *)v35;
        v7 = v34 < v33 ? 0xC0000095 : 0;
        if ( v34 < v33 )
          return v7;
      }
      while ( (unsigned int)++v4 < *(_DWORD *)a4 );
    }
    if ( v30 + 4 >= v30 )
      v9 = (__int64)(v30 + 4);
    v7 = v30 + 4 < v30 ? 0xC0000095 : 0;
    if ( v30 + 4 < v30 )
      return v7;
    if ( v30 + 12 <= &v27[*(unsigned int *)(a4 + 4)] )
    {
      v36 = v40;
      *(_DWORD *)v30 = 8;
      *(_QWORD *)v9 = v36;
      goto LABEL_69;
    }
    return (unsigned int)-1073741789;
  }
  v28 = *(_DWORD *)(a4 + 4);
  v29 = v28 + 12;
  if ( v28 + 12 >= v28 )
    v19 = v28 + 12;
  v7 = v29 < v28 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v19;
  if ( v29 >= v28 )
  {
    v7 = 0;
LABEL_69:
    ++*(_DWORD *)a4;
  }
  return v7;
}
