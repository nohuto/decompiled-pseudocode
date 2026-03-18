/*
 * XREFs of KeFindFirstSetLeftGroupAffinity @ 0x1400C0780
 * Callers:
 *     MiZeroNodePages @ 0x14016FC80 (MiZeroNodePages.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x14017B8BC (MiGetPagesToZero.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x14056A6C8 (KeBuildLogicalProcessorSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanReverse64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
