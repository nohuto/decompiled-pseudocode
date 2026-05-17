/*
 * XREFs of sub_18007CAB0 @ 0x18007CAB0
 * Callers:
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 * Callees:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 */

__int64 __fastcall sub_18007CAB0(_QWORD *a1)
{
  sub_180024608(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x200000, (unsigned __int64)a1);
}
