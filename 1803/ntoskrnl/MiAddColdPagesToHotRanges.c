/*
 * XREFs of MiAddColdPagesToHotRanges @ 0x140264C70
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 * Callees:
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiAddPageToHeatRanges @ 0x140264D10 (MiAddPageToHeatRanges.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 */

void __fastcall MiAddColdPagesToHotRanges(unsigned int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 *v7; // rdi

  if ( a3 < a4 )
  {
    v5 = a3;
    v7 = (__int64 *)(48 * a3 - 0x57FFFFFFFF0LL);
    do
    {
      if ( MiGetPteTimeStamp(*v7, a2, a3, a4) == 4294967293 )
      {
        if ( (unsigned int)MiAddPageToHeatRanges(a1, a2, v5) )
        {
          HvlNotifyPageHeat(*a1, a1[1], ((unsigned __int64)a1 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
          a1[1] = 0;
        }
      }
      ++v5;
      v7 += 6;
    }
    while ( v5 < a4 );
  }
}
