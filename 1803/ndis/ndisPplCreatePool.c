/*
 * XREFs of ndisPplCreatePool @ 0x1C0015018
 * Callers:
 *     NdisAllocateNetBufferPool @ 0x1C0014C80 (NdisAllocateNetBufferPool.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0014E20 (NdisAllocateNetBufferListPool.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 */

char *__fastcall ndisPplCreatePool(__int64 a1, SIZE_T a2, ULONG a3, __int64 a4, FREE_FUNCTION_EX *Free)
{
  char *v5; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  SIZE_T v10; // rax
  unsigned __int64 v11; // kr00_8
  SIZE_T v12; // rcx
  SIZE_T v13; // rax
  size_t v14; // rbx
  char *PoolWithTag; // rax
  unsigned __int64 v16; // rdi
  _SLIST_HEADER *v17; // rbx

  v5 = 0LL;
  v8 = ndisMaxNumberOfProcessors + 1;
  if ( ndisMaxNumberOfProcessors <= 1 )
    v8 = ndisMaxNumberOfProcessors;
  v9 = (unsigned int)v8;
  v11 = v8;
  v10 = v8 << 8;
  v12 = v10;
  if ( is_mul_ok(0x100uLL, v11) )
  {
    v13 = v10 + 128;
    if ( v13 >= v12 )
    {
      v14 = v13;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v13, a3);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v14);
        v16 = (unsigned __int64)(v5 + 128);
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)(v5 + 128),
          (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
          Free,
          NonPagedPoolNx,
          0,
          a2,
          a3,
          0x400u);
        v5[344] = 1;
        if ( (_DWORD)v9 )
        {
          v17 = (_SLIST_HEADER *)(v5 + 256);
          do
          {
            InitializeSListHead(v17);
            KeInitializeSpinLock(&v17[5].Alignment);
            v17[4].Alignment = v16;
            v16 += 256LL;
            v17[4].Region = (unsigned __int64)v17;
            v17 += 16;
            --v9;
          }
          while ( v9 );
        }
      }
    }
  }
  return v5;
}
