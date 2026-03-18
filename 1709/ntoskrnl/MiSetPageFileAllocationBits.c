/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140226D20
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14011A4C4 (MiFindFreePageFileSpace.c)
 *     MiFindPageFileWriteCluster @ 0x140225658 (MiFindPageFileWriteCluster.c)
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
