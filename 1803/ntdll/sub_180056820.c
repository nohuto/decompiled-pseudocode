/*
 * XREFs of sub_180056820 @ 0x180056820
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 */

__int64 __fastcall sub_180056820(_QWORD *a1)
{
  unsigned __int64 v2; // rdi

  v2 = (unsigned __int64)(a1 - 9);
  sub_180058E68(a1[18], 0xFFFFFFFFLL);
  *(_QWORD *)(v2 + 56) = 0LL;
  sub_180024608(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x80000, v2);
}
