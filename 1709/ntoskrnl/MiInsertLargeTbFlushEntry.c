/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140110068
 * Callers:
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiZeroSystemPdes @ 0x1400F7190 (MiZeroSystemPdes.c)
 *     MiZeroPageWorkMapping @ 0x14010FE88 (MiZeroPageWorkMapping.c)
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePageOneLevel @ 0x140145244 (MiDemoteLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x140150654 (MiUnmapMdlCommon.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 */

void __fastcall MiInsertLargeTbFlushEntry(int *a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // esi

  v6 = 0;
  do
  {
    a3 = (__int64)(a3 << 25) >> 16;
    MiInsertTbFlushEntry(a1, a3, 1LL, v6++);
  }
  while ( v6 <= a2 );
}
