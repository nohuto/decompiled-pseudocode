/*
 * XREFs of sub_180056280 @ 0x180056280
 * Callers:
 *     <none>
 * Callees:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 */

__int64 __fastcall sub_180056280(_QWORD *a1)
{
  sub_180058E68(a1[18], 0xFFFFFFFFLL);
  *(a1 - 2) = 0LL;
  sub_180024608(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 3407872, (unsigned __int64)(a1 - 9));
}
