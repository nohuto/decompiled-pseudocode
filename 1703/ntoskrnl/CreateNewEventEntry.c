/*
 * XREFs of CreateNewEventEntry @ 0x14002A1AC
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140081DE4 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferGetNextOffset @ 0x14002A3D4 (CBufferGetNextOffset.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
  __int64 v15; // rbx
  size_t v16; // rdi
  PVOID PoolWithTag; // rax
  __int64 NextOffset; // r12
  unsigned int v19; // edx
  void *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int128 v23; // xmm0
  unsigned __int8 v24; // r14
  const void **v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rbp
  unsigned int v28; // edx
  void *v29; // rbx
  char *v30; // rdx
  int v31; // eax
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
      if ( v12 < 2u )
        v10 += v14;
      else
        v11 += v14;
      ++v12;
      v13 += 4;
    }
    while ( v12 < a2 );
  }
  if ( (unsigned __int64)(v11 + v10) > 0xFFFF )
    return 3221225621LL;
  v15 = 16LL * a2;
  v16 = v11 + v15 + 46;
  if ( !v16 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11 + v15 + 46, 0x47417254u);
  v33 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v16);
  v34 = v16;
  NextOffset = CBufferGetNextOffset(&v33, 16LL * a2);
  if ( a4 != -2 )
  {
    do
    {
      if ( v6 < 2u )
      {
        *(_OWORD *)(NextOffset + 16LL * v6) = *(_OWORD *)(a3 + 16LL * v6);
      }
      else
      {
        v20 = (void *)CBufferGetNextOffset(&v33, *(unsigned int *)(a3 + 16LL * v6 + 8));
        memmove(v20, *(const void **)(a3 + 16LL * v6), v19);
        *(_QWORD *)(NextOffset + 16LL * v6) = v20;
        *(_DWORD *)(NextOffset + 16LL * v6 + 12) = *(_DWORD *)(a3 + 16LL * v6 + 12);
        *(_DWORD *)(NextOffset + 16LL * v6 + 8) = *(_DWORD *)(a3 + 16LL * v6 + 8);
      }
      ++v6;
    }
    while ( v6 < (unsigned int)a4 + 2 );
  }
  v22 = CBufferGetNextOffset(&v33, 46LL);
  *(_QWORD *)(v22 + 16) = NextOffset;
  v23 = *a1;
  *(_BYTE *)(v22 + 45) = a4;
  v24 = a4 + 2;
  *(_BYTE *)(v22 + 44) = a2;
  *(_DWORD *)(v22 + 40) = a5;
  *(_OWORD *)v22 = v23;
  if ( v24 < a2 )
  {
    v25 = (const void **)(16LL * v24 + a3 + 8);
    v26 = v21 - 54 - a3;
    v27 = (unsigned __int8)(a2 - v24);
    do
    {
      v29 = (void *)CBufferGetNextOffset(&v33, *(unsigned int *)v25);
      memmove(v29, *(v25 - 1), v28);
      v30 = (char *)v25 + v26;
      *(_QWORD *)&v30[*(_QWORD *)(v22 + 16)] = v29;
      *(_DWORD *)&v30[*(_QWORD *)(v22 + 16) + 12] = *((_DWORD *)v25 + 1);
      v31 = *(_DWORD *)v25;
      v25 += 2;
      *(_DWORD *)&v30[*(_QWORD *)(v22 + 16) + 8] = v31;
      --v27;
    }
    while ( v27 );
  }
  *a6 = v22;
  return 0LL;
}
