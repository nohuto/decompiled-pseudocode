/*
 * XREFs of MiFreeMdlPageRun @ 0x1400B3B5C
 * Callers:
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiFreePartitionPageRun @ 0x14021DED4 (MiFreePartitionPageRun.c)
 *     MiCleanPhysicalProcessPages @ 0x1406B87E4 (MiCleanPhysicalProcessPages.c)
 * Callees:
 *     MiFreeSmallPageFromMdl @ 0x1400B5540 (MiFreeSmallPageFromMdl.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 */

__int64 __fastcall MiFreeMdlPageRun(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // r15d
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
      v3 += MiFreeLargePageMemory(a1, (unsigned int)v9, v4);
      a1 += v10;
      v6 -= v10;
    }
  }
  return v3;
}
