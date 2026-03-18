/*
 * XREFs of CreateNewEventEntry @ 0x1C002DD54
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C002E210 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     CBufferGetNextOffset @ 0x1C002DD20 (CBufferGetNextOffset.c)
 */

__int64 __fastcall CreateNewEventEntry(
        char a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        __int64 *a7)
{
  unsigned __int8 v7; // si
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int8 v13; // r8
  unsigned int *v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rdi
  size_t v18; // r14
  PVOID PoolWithTag; // rax
  __int64 v20; // rbx
  __int64 NextOffset; // r12
  unsigned int v22; // edx
  void *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int128 v26; // xmm0
  unsigned __int8 v27; // r14
  const void **v28; // rsi
  __int64 v29; // r12
  __int64 v30; // rbp
  unsigned int v31; // edx
  void *v32; // rbx
  char *v33; // rdx
  int v34; // eax
  __int64 v35; // [rsp+20h] [rbp-38h] BYREF
  size_t v36; // [rsp+28h] [rbp-30h]

  v7 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  *a7 = 0LL;
  if ( a3 )
  {
    v14 = (unsigned int *)(a4 + 8);
    do
    {
      v15 = *v14;
      if ( v13 >= 2u )
        v12 += v15;
      else
        v11 += v15;
      ++v13;
      v14 += 4;
    }
    while ( v13 < a3 );
  }
  if ( (unsigned __int64)(v12 + v11) > 0xFFFF )
    return 3221225621LL;
  v17 = 16LL * a3;
  v18 = v12 + v17 + 46;
  if ( !v18 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), v12 + v17 + 46, 0x47417254u);
  v20 = (__int64)PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v18);
  v35 = v20;
  if ( !v20 )
    return 3221225495LL;
  v36 = v18;
  NextOffset = CBufferGetNextOffset(&v35, 16LL * a3);
  if ( a5 != -2 )
  {
    do
    {
      if ( v7 >= 2u )
      {
        v23 = (void *)CBufferGetNextOffset(&v35, *(unsigned int *)(a4 + 16LL * v7 + 8));
        memmove(v23, *(const void **)(a4 + 16LL * v7), v22);
        *(_QWORD *)(NextOffset + 16LL * v7) = v23;
        *(_DWORD *)(NextOffset + 16LL * v7 + 12) = *(_DWORD *)(a4 + 16LL * v7 + 12);
        *(_DWORD *)(NextOffset + 16LL * v7 + 8) = *(_DWORD *)(a4 + 16LL * v7 + 8);
      }
      else
      {
        *(_OWORD *)(NextOffset + 16LL * v7) = *(_OWORD *)(a4 + 16LL * v7);
      }
      ++v7;
    }
    while ( v7 < (unsigned int)a5 + 2 );
  }
  v25 = CBufferGetNextOffset(&v35, 0x2EuLL);
  *(_QWORD *)(v25 + 16) = NextOffset;
  v26 = *a2;
  *(_BYTE *)(v25 + 45) = a5;
  v27 = a5 + 2;
  *(_BYTE *)(v25 + 44) = a3;
  *(_DWORD *)(v25 + 40) = a6;
  *(_OWORD *)v25 = v26;
  if ( (unsigned __int8)(a5 + 2) < a3 )
  {
    v28 = (const void **)(16LL * v27 + a4 + 8);
    v29 = v24 - 54 - a4;
    v30 = (unsigned __int8)(a3 - v27);
    do
    {
      v32 = (void *)CBufferGetNextOffset(&v35, *(unsigned int *)v28);
      memmove(v32, *(v28 - 1), v31);
      v33 = (char *)v28 + v29;
      *(_QWORD *)&v33[*(_QWORD *)(v25 + 16)] = v32;
      *(_DWORD *)&v33[*(_QWORD *)(v25 + 16) + 12] = *((_DWORD *)v28 + 1);
      v34 = *(_DWORD *)v28;
      v28 += 2;
      *(_DWORD *)&v33[*(_QWORD *)(v25 + 16) + 8] = v34;
      --v30;
    }
    while ( v30 );
  }
  *a7 = v25;
  return 0LL;
}
