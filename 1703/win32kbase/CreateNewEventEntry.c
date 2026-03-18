/*
 * XREFs of CreateNewEventEntry @ 0x1C0156900
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C0156D70 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     CBufferGetNextOffset @ 0x1C01568CC (CBufferGetNextOffset.c)
 */

__int64 __fastcall CreateNewEventEntry(
        __int128 *a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        __int64 *a6)
{
  unsigned __int8 v6; // si
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // dl
  unsigned int *v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rbx
  size_t v17; // rdi
  PVOID PoolWithTag; // rax
  __int64 NextOffset; // r12
  unsigned int v20; // edx
  void *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int128 v24; // xmm0
  unsigned __int8 v25; // r14
  const void **v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rbp
  unsigned int v29; // edx
  void *v30; // rbx
  char *v31; // rdx
  int v32; // eax
  PVOID v33; // [rsp+20h] [rbp-38h] BYREF
  size_t v34; // [rsp+28h] [rbp-30h]

  v6 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  *a6 = 0LL;
  if ( a2 )
  {
    v13 = (unsigned int *)(a3 + 8);
    do
    {
      v14 = *v13;
      if ( v12 >= 2u )
        v11 += v14;
      else
        v10 += v14;
      ++v12;
      v13 += 4;
    }
    while ( v12 < a2 );
  }
  if ( (unsigned __int64)(v11 + v10) > 0xFFFF )
    return 3221225621LL;
  v16 = 16LL * a2;
  v17 = v11 + v16 + 46;
  if ( !v17 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v11 + v16 + 46, 0x47417254u);
  v33 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v17);
  v34 = v17;
  NextOffset = CBufferGetNextOffset((__int64 *)&v33, 16LL * a2);
  if ( a4 != -2 )
  {
    do
    {
      if ( v6 >= 2u )
      {
        v21 = (void *)CBufferGetNextOffset((__int64 *)&v33, *(unsigned int *)(a3 + 16LL * v6 + 8));
        memmove(v21, *(const void **)(a3 + 16LL * v6), v20);
        *(_QWORD *)(NextOffset + 16LL * v6) = v21;
        *(_DWORD *)(NextOffset + 16LL * v6 + 12) = *(_DWORD *)(a3 + 16LL * v6 + 12);
        *(_DWORD *)(NextOffset + 16LL * v6 + 8) = *(_DWORD *)(a3 + 16LL * v6 + 8);
      }
      else
      {
        *(_OWORD *)(NextOffset + 16LL * v6) = *(_OWORD *)(a3 + 16LL * v6);
      }
      ++v6;
    }
    while ( v6 < (unsigned int)a4 + 2 );
  }
  v23 = CBufferGetNextOffset((__int64 *)&v33, 0x2EuLL);
  *(_QWORD *)(v23 + 16) = NextOffset;
  v24 = *a1;
  *(_BYTE *)(v23 + 45) = a4;
  v25 = a4 + 2;
  *(_BYTE *)(v23 + 44) = a2;
  *(_DWORD *)(v23 + 40) = a5;
  *(_OWORD *)v23 = v24;
  if ( v25 < a2 )
  {
    v26 = (const void **)(16LL * v25 + a3 + 8);
    v27 = v22 - 54 - a3;
    v28 = (unsigned __int8)(a2 - v25);
    do
    {
      v30 = (void *)CBufferGetNextOffset((__int64 *)&v33, *(unsigned int *)v26);
      memmove(v30, *(v26 - 1), v29);
      v31 = (char *)v26 + v27;
      *(_QWORD *)&v31[*(_QWORD *)(v23 + 16)] = v30;
      *(_DWORD *)&v31[*(_QWORD *)(v23 + 16) + 12] = *((_DWORD *)v26 + 1);
      v32 = *(_DWORD *)v26;
      v26 += 2;
      *(_DWORD *)&v31[*(_QWORD *)(v23 + 16) + 8] = v32;
      --v28;
    }
    while ( v28 );
  }
  *a6 = v23;
  return 0LL;
}
