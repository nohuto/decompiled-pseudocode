/*
 * XREFs of MiFreeMdlPageRun @ 0x1400E1354
 * Callers:
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MiCleanPhysicalProcessPages @ 0x1406E54AC (MiCleanPhysicalProcessPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406EDB48 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1406EE05C (MiFreePartitionPageRun.c)
 * Callees:
 *     MiFreeSmallPageFromMdl @ 0x1400E1408 (MiFreeSmallPageFromMdl.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 */

__int64 __fastcall MiFreeMdlPageRun(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // r14

  v3 = 0LL;
  v5 = a2;
  while ( v5 )
  {
    if ( (a1 & 0x1FF) != 0 )
    {
LABEL_3:
      v3 += MiFreeSmallPageFromMdl(a1++, a3);
      --v5;
    }
    else
    {
      v8 = (KeFeatureBits & 0x2000000000LL) == 0;
      while ( 1 )
      {
        v9 = MiLargePageSizes[v8];
        if ( ((v9 - 1) & a1) == 0 && v5 >= v9 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 > 1 )
          goto LABEL_3;
      }
      v3 += MiFreeLargePageMemory(a1, (unsigned int)v8);
      a1 += v9;
      v5 -= v9;
    }
  }
  return v3;
}
