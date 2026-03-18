/*
 * XREFs of MiSetPageFileAllocationBits @ 0x14007E9A0
 * Callers:
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x14007DD54 (MiFindFreePageFileSpace.c)
 *     MiFindPageFileWriteCluster @ 0x14007E698 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
