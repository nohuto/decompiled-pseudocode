/*
 * XREFs of InitializePool @ 0x14082DEFC
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmGetNumberOfPhysicalPages @ 0x14056E6E0 (MmGetNumberOfPhysicalPages.c)
 *     ExInitializePoolDescriptor @ 0x1405B73F8 (ExInitializePoolDescriptor.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     InitializePagedPool @ 0x14082DD0C (InitializePagedPool.c)
 *     ExpSeedHotTags @ 0x14082F6C0 (ExpSeedHotTags.c)
 */

__int64 __fastcall InitializePool(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  void *v7; // r9
  int v8; // ecx
  unsigned __int64 v9; // r8
  void *PoolPages; // rax
  __int64 v11; // rax
  size_t v12; // r8
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 IndependentPages; // rsi
  unsigned __int64 v18; // rcx

  if ( a1 != 512 )
  {
    InitializePagedPool();
    return 1LL;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v5 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v6 = (v5 | (unsigned int)ExGenRandom(0)) ^ v4;
  if ( !v6 )
    v6 = 1LL;
  ExpPoolFlags |= a2;
  _BitScanReverse((unsigned int *)&v8, KeLargestCacheLine);
  ExpPoolQuotaCookie = v6;
  ExpCacheLineSize = 1 << v8;
  if ( (unsigned int)(1 << v8) < 0x10 )
  {
    ExpCacheLineSize = 16;
  }
  else if ( (unsigned int)(1 << v8) > 0x1000 )
  {
    ExpCacheLineSize = 4096;
  }
  if ( PoolTrackTableSize )
  {
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v18, PoolTrackTableSize);
      v9 = 1LL << v18;
      goto LABEL_28;
    }
    v9 = 64LL;
    PoolTrackTableSize = 64LL;
  }
  else
  {
    PoolTrackTableSize = 4096LL;
    if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) <= 0x10000 )
    {
      v9 = 512LL;
      PoolTrackTableSize = 512LL;
    }
  }
  while ( 1 )
  {
    if ( v9 + 1 > 0x492492492492492LL )
      goto LABEL_27;
    PoolPages = (void *)MiAllocatePoolPages(0x200u, (56 * v9 + 4151) & 0xFFFFFFFFFFFFF000uLL, v9, (__int64)v7);
    PoolTrackTable = (__int64)PoolPages;
    v7 = PoolPages;
    if ( PoolPages )
      break;
    v9 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 0LL;
LABEL_27:
    v9 >>= 1;
LABEL_28:
    PoolTrackTableSize = v9;
  }
  ExPoolTagTables = PoolPages;
  v11 = PoolTrackTableSize - 1;
  v12 = 56 * ++PoolTrackTableSize;
  PoolTrackTableMask = v11;
  memset(v7, 0, v12);
  ExpSeedHotTags();
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_20;
  v14 = (unsigned __int16)KeNumberNodes;
  ExpNumberOfNonPagedPools = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
  {
    v14 = 127;
    ExpNumberOfNonPagedPools = 127;
  }
  if ( v14 > 0x40 )
  {
    v14 = 64;
    ExpNumberOfNonPagedPools = 64;
  }
  v15 = 0LL;
  if ( !v14 )
  {
LABEL_20:
    ExpTaggedPoolLock = 0LL;
    PoolVector[0] = (__int64)&NonPagedPoolDescriptor;
    ExInitializePoolDescriptor((__int64)&NonPagedPoolDescriptor, 512, 0);
    ExInitializePoolDescriptor((__int64)&unk_14039FB80, 0, 0);
    return 1LL;
  }
  while ( 1 )
  {
    IndependentPages = MmAllocateIndependentPages(0x2280uLL, v15, v13);
    if ( !IndependentPages )
      return 0LL;
    ExpNonPagedPoolDescriptor[v15] = IndependentPages;
    ExInitializePoolDescriptor(IndependentPages, 512, v15);
    ExInitializePoolDescriptor(IndependentPages + 4416, 0, v15);
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= ExpNumberOfNonPagedPools )
      goto LABEL_20;
  }
}
