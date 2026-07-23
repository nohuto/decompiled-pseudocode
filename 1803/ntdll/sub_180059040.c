/*
 * XREFs of sub_180059040 @ 0x180059040
 * Callers:
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 */

LOGICAL __fastcall sub_180059040(_QWORD *BaseAddress)
{
  sub_180024608(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x200000, BaseAddress);
}
