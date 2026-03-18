/*
 * XREFs of MiSetPageFileAllocationBits @ 0x14009D510
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x14009C6F0 (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
