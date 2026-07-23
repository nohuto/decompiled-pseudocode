/*
 * XREFs of sub_180058AD0 @ 0x180058AD0
 * Callers:
 *     TpReleaseTimer @ 0x180058900 (TpReleaseTimer.c)
 * Callees:
 *     sub_180058CA0 @ 0x180058CA0 (sub_180058CA0.c)
 */

LOGICAL __fastcall sub_180058AD0(void *a1)
{
  sub_180058CA0();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x100000, a1);
}
