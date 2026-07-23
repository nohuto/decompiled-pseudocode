/*
 * XREFs of sub_180057320 @ 0x180057320
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 */

LOGICAL __fastcall sub_180057320(_QWORD *BaseAddress)
{
  sub_180058E68(BaseAddress[18], 0xFFFFFFFFLL);
  BaseAddress[32] = 0LL;
  sub_180024608(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x40000, BaseAddress);
}
