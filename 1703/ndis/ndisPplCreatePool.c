/*
 * XREFs of ndisPplCreatePool @ 0x1C001A268
 * Callers:
 *     NdisAllocateNetBufferPool @ 0x1C0013860 (NdisAllocateNetBufferPool.c)
 *     NdisAllocateNetBufferListPool @ 0x1C001A000 (NdisAllocateNetBufferListPool.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 */

char *__fastcall ndisPplCreatePool(__int64 a1, SIZE_T a2, ULONG a3, __int64 a4, FREE_FUNCTION_EX *Free)
{
  unsigned int v5; // ebx
  char *v6; // rsi
  __int64 v9; // rbp
  SIZE_T v10; // rax
  char *PoolWithTag; // rax
  unsigned __int64 v12; // rdi
  _SLIST_HEADER *v13; // rbx

  v5 = ndisMaxNumberOfProcessors;
  v6 = 0LL;
  if ( ndisMaxNumberOfProcessors > 1 )
    v5 = ndisMaxNumberOfProcessors + 1;
  v9 = v5;
  if ( is_mul_ok(0x100uLL, v5) )
  {
    v10 = ((unsigned __int64)v5 << 8) + 128;
    if ( v10 >= (unsigned __int64)v5 << 8 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v10, a3);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, ((unsigned __int64)v5 << 8) + 128);
        v12 = (unsigned __int64)(v6 + 128);
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)(v6 + 128),
          (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
          Free,
          NonPagedPoolNx,
          0,
          a2,
          a3,
          0x400u);
        v6[344] = 1;
        if ( v5 )
        {
          v13 = (_SLIST_HEADER *)(v6 + 256);
          do
          {
            InitializeSListHead(v13);
            KeInitializeSpinLock(&v13[5].Alignment);
            v13[4].Alignment = v12;
            v12 += 256LL;
            v13[4].Region = (unsigned __int64)v13;
            v13 += 16;
            --v9;
          }
          while ( v9 );
        }
      }
    }
  }
  return v6;
}
