/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x1400344A8
 * Callers:
 *     MiZeroSystemPdes @ 0x140082A5C (MiZeroSystemPdes.c)
 *     MiZeroPageWorkMapping @ 0x1400B3330 (MiZeroPageWorkMapping.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiUnmapMdlCommon @ 0x14020F570 (MiUnmapMdlCommon.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 result; // rax

  v6 = 0;
  do
  {
    a3 = a3 << 25 >> 16;
    result = MiInsertTbFlushEntry(a1, a3, 1LL, v6++);
  }
  while ( v6 <= a2 );
  return result;
}
