/*
 * XREFs of MiGetFreeZeroLargePage @ 0x1400C4F80
 * Callers:
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1400C7BD4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiDemoteLargeFreeZeroPage @ 0x14012E980 (MiDemoteLargeFreeZeroPage.c)
 *     MiFindLargeNodePage @ 0x140216B0C (MiFindLargeNodePage.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x1400C6570 (MiUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiGetFreeZeroLargePage(int a1, int a2, __int16 a3, int a4, int a5, int a6)
{
  unsigned int v7; // r9d

  v7 = ((a3 & 0x8000 | 0x10000u) >> 15) | 4;
  if ( (a3 & 4) == 0 )
    v7 = (a3 & 0x8000 | 0x10000u) >> 15;
  return MiUnlinkNodeLargePage(a1, a2, a4, a6, (a3 & 2) == 0, a5, v7, 0LL);
}
