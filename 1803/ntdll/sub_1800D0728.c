/*
 * XREFs of sub_1800D0728 @ 0x1800D0728
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003BE6C @ 0x18003BE6C (sub_18003BE6C.c)
 *     sub_180041B68 @ 0x180041B68 (sub_180041B68.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1800D0728(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
