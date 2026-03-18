/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x1401373A0
 * Callers:
 *     MiUnmapMdlCommon @ 0x140001568 (MiUnmapMdlCommon.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiDeleteSystemPageTable @ 0x1400B9530 (MiDeleteSystemPageTable.c)
 *     MiFlushValidPteFromTb @ 0x1400C02DC (MiFlushValidPteFromTb.c)
 *     MiZeroPageWorkMapping @ 0x1400C0E24 (MiZeroPageWorkMapping.c)
 *     MiDecommitLargePoolVa @ 0x1401361A0 (MiDecommitLargePoolVa.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     MiClearSystemAccessBits @ 0x14017AFF0 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 *     MiDeleteLargeUserPde @ 0x14026A4BC (MiDeleteLargeUserPde.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 */

unsigned __int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // esi
  unsigned __int64 result; // rax

  v6 = 0;
  do
  {
    a3 = (__int64)(a3 << 25) >> 16;
    result = MiInsertTbFlushEntry(a1, a3, 1LL, v6++);
  }
  while ( v6 <= a2 );
  return result;
}
