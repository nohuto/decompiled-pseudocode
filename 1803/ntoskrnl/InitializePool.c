/*
 * XREFs of InitializePool @ 0x1408ACB14
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmGetNumberOfPhysicalPages @ 0x1405587B8 (MmGetNumberOfPhysicalPages.c)
 *     ExInitializePoolDescriptor @ 0x14060AF74 (ExInitializePoolDescriptor.c)
 *     ExpSeedHotTags @ 0x1408ACD00 (ExpSeedHotTags.c)
 *     InitializePagedPool @ 0x1408ACF98 (InitializePagedPool.c)
 */

__int64 __fastcall InitializePool(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // ecx
  unsigned __int64 v10; // r8
  void *HeapPages; // rax
  void *v12; // r9
  __int64 v13; // rax
  size_t v14; // r8
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // ecx
  __int64 v18; // rdi
  __int64 IndependentPages; // rsi

  if ( a1 != 512 )
  {
    InitializePagedPool();
    return 1LL;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v6 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v7 = (v6 | (unsigned int)ExGenRandom(0)) ^ v5;
  if ( !v7 )
    v7 = 1LL;
  v8 = a2 | ExpPoolFlags;
  ExpPoolQuotaCookie = v7;
  ExpPoolFlags |= a2;
  if ( ExpHeapBackedPoolEnabled )
    ExpPoolFlags = v8 | 0x20;
  _BitScanReverse((unsigned int *)&v9, KeLargestCacheLine);
  ExpCacheLineSize = 1 << v9;
  if ( (unsigned int)(1 << v9) < 0x10 )
  {
    ExpCacheLineSize = 16;
  }
  else if ( (unsigned int)(1 << v9) > 0x1000 )
  {
    ExpCacheLineSize = 4096;
  }
  if ( PoolTrackTableSize )
  {
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v15, PoolTrackTableSize);
      v10 = 1LL << v15;
      goto LABEL_22;
    }
    v10 = 64LL;
    PoolTrackTableSize = 64LL;
  }
  else
  {
    PoolTrackTableSize = 4096LL;
    if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) <= 0x10000 )
    {
      v10 = 512LL;
      PoolTrackTableSize = 512LL;
    }
  }
  while ( 1 )
  {
    if ( v10 + 1 > 0x492492492492492LL )
      goto LABEL_21;
    HeapPages = (void *)ExAllocateHeapPages(512LL, (56 * v10 + 4151) & 0xFFFFFFFFFFFFF000uLL);
    PoolTrackTable = (__int64)HeapPages;
    v12 = HeapPages;
    if ( HeapPages )
      break;
    v10 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 0LL;
LABEL_21:
    v10 >>= 1;
LABEL_22:
    PoolTrackTableSize = v10;
  }
  ExPoolTagTables = HeapPages;
  v13 = PoolTrackTableSize - 1;
  v14 = 56 * ++PoolTrackTableSize;
  PoolTrackTableMask = v13;
  memset(v12, 0, v14);
  ExpSeedHotTags();
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_16;
  v16 = (unsigned __int16)KeNumberNodes;
  ExpNumberOfNonPagedPools = (unsigned __int16)KeNumberNodes;
  v17 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
  {
    ExpNumberOfNonPagedPools = 127;
    v16 = 127;
    v17 = 127;
  }
  if ( v16 > 0x40 )
  {
    ExpNumberOfNonPagedPools = 64;
    v17 = 64;
  }
  v18 = 0LL;
  if ( !v17 )
  {
LABEL_16:
    ExpTaggedPoolLock = 0LL;
    PoolVector[0] = (__int64)&NonPagedPoolDescriptor;
    ExInitializePoolDescriptor((__int64)&NonPagedPoolDescriptor, 512, 0);
    ExInitializePoolDescriptor((__int64)&unk_1403E39C0, 0, 0);
    return 1LL;
  }
  while ( 1 )
  {
    IndependentPages = MmAllocateIndependentPages(0x2280uLL, v18);
    if ( !IndependentPages )
      return 0LL;
    ExpNonPagedPoolDescriptor[v18] = IndependentPages;
    ExInitializePoolDescriptor(IndependentPages, 512, v18);
    ExInitializePoolDescriptor(IndependentPages + 4416, 0, v18);
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= ExpNumberOfNonPagedPools )
      goto LABEL_16;
  }
}
