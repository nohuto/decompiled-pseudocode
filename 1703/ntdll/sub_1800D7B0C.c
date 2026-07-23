/*
 * XREFs of sub_1800D7B0C @ 0x1800D7B0C
 * Callers:
 *     sub_18003CC2C @ 0x18003CC2C (sub_18003CC2C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_180047564 @ 0x180047564 (sub_180047564.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1800D7B0C(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
