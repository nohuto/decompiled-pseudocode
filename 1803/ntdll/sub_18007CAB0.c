/*
 * XREFs of sub_18007CAB0 @ 0x18007CAB0
 * Callers:
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 * Callees:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 */

LOGICAL __fastcall sub_18007CAB0(_QWORD *a1)
{
  sub_180024608(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x200000, a1);
}
