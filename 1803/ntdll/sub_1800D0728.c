/*
 * XREFs of sub_1800D0728 @ 0x1800D0728
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003BE6C @ 0x18003BE6C (sub_18003BE6C.c)
 *     sub_180041B68 @ 0x180041B68 (sub_180041B68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D0728(__int64 a1, int a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
