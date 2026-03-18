/*
 * XREFs of InitializePool @ 0x140814AC0
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmGetNumberOfPhysicalPages @ 0x140437454 (MmGetNumberOfPhysicalPages.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     ExInitializePoolDescriptor @ 0x14057E934 (ExInitializePoolDescriptor.c)
 *     ExpSeedHotTags @ 0x140814D14 (ExpSeedHotTags.c)
 *     InitializePagedPool @ 0x140814FA8 (InitializePagedPool.c)
 */

__int64 __fastcall InitializePool(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // ecx
  unsigned __int64 v8; // r8
  void *PoolPages; // rax
  void *v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 IndependentPages; // rsi
  unsigned __int64 v17; // rcx

  if ( a1 != 512 )
  {
    InitializePagedPool();
    return 1LL;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v5 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v6 = (v5 | (unsigned int)ExGenRandom(0)) ^ v4;
  ExpNumberOfNonPagedPools = 1;
  if ( !v6 )
    v6 = 1LL;
  ExpPoolFlags |= a2;
  _BitScanReverse((unsigned int *)&v7, KeLargestCacheLine);
  ExpPoolQuotaCookie = v6;
  ExpCacheLineSize = 1 << v7;
  if ( (unsigned int)(1 << v7) < 0x10 )
  {
    ExpCacheLineSize = 16;
  }
  else if ( (unsigned int)(1 << v7) > 0x1000 )
  {
    ExpCacheLineSize = 4096;
  }
  if ( PoolTrackTableSize )
  {
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v17, PoolTrackTableSize);
      v8 = 1LL << v17;
      goto LABEL_28;
    }
    v8 = 64LL;
    PoolTrackTableSize = 64LL;
  }
  else
  {
    PoolTrackTableSize = 2048LL;
    if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) <= 0x10000 )
    {
      v8 = 512LL;
      PoolTrackTableSize = 512LL;
    }
  }
  while ( 1 )
  {
    if ( v8 + 1 > 0x666666666666666LL )
      goto LABEL_27;
    PoolPages = (void *)MiAllocatePoolPages(0x200u, (40 * v8 + 4135) & 0xFFFFFFFFFFFFF000uLL);
    PoolTrackTable = (__int64)PoolPages;
    v10 = PoolPages;
    if ( PoolPages )
      break;
    v8 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 0LL;
LABEL_27:
    v8 >>= 1;
LABEL_28:
    PoolTrackTableSize = v8;
  }
  ExPoolTagTables = PoolPages;
  v11 = PoolTrackTableSize++ - 1;
  PoolTrackTableMask = v11;
  memset(v10, 0, 40 * PoolTrackTableSize);
  ExpSeedHotTags();
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_20;
  v13 = (unsigned __int16)KeNumberNodes;
  ExpNumberOfNonPagedPools = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
  {
    v13 = 127;
    ExpNumberOfNonPagedPools = 127;
  }
  if ( v13 > 0x40 )
  {
    v13 = 64;
    ExpNumberOfNonPagedPools = 64;
  }
  v14 = 0LL;
  if ( !v13 )
  {
LABEL_20:
    ExpTaggedPoolLock = 0LL;
    PoolVector[0] = (__int64)&NonPagedPoolDescriptor;
    ExInitializePoolDescriptor((__int64)&NonPagedPoolDescriptor, 512, 0);
    ExInitializePoolDescriptor((__int64)&unk_140383E00, 0, 0);
    return 1LL;
  }
  while ( 1 )
  {
    IndependentPages = MmAllocateIndependentPages(0x2280uLL, v14, v12);
    if ( !IndependentPages )
      return 0LL;
    ExpNonPagedPoolDescriptor[v14] = IndependentPages;
    ExInitializePoolDescriptor(IndependentPages, 512, v14);
    ExInitializePoolDescriptor(IndependentPages + 4416, 0, v14);
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= ExpNumberOfNonPagedPools )
      goto LABEL_20;
  }
}
