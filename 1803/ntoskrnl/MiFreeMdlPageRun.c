/*
 * XREFs of MiFreeMdlPageRun @ 0x140136A30
 * Callers:
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     MiCleanPhysicalProcessPages @ 0x14074F9E0 (MiCleanPhysicalProcessPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140756FD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1407574EC (MiFreePartitionPageRun.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiFreeSmallPageFromMdl @ 0x140136B00 (MiFreeSmallPageFromMdl.c)
 */

__int64 __fastcall MiFreeMdlPageRun(ULONG_PTR a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v4; // r15d
  unsigned __int64 v6; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r14

  v3 = 0LL;
  v4 = a3 & 1;
  v6 = a2;
  while ( v6 )
  {
    if ( (a1 & 0x1FF) != 0 )
    {
LABEL_3:
      v3 += MiFreeSmallPageFromMdl(a1++, a3);
      --v6;
    }
    else
    {
      v9 = (KeFeatureBits & 0x2000000000LL) == 0;
      while ( 1 )
      {
        v10 = MiLargePageSizes[v9];
        if ( ((v10 - 1) & a1) == 0 && v6 >= v10 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 > 1 )
          goto LABEL_3;
      }
      v3 += MiFreeLargePageMemory(a1, v9, v4);
      a1 += v10;
      v6 -= v10;
    }
  }
  return v3;
}
