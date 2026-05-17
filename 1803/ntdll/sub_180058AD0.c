/*
 * XREFs of sub_180058AD0 @ 0x180058AD0
 * Callers:
 *     TpReleaseTimer @ 0x180058900 (TpReleaseTimer.c)
 * Callees:
 *     sub_180058CA0 @ 0x180058CA0 (sub_180058CA0.c)
 */

__int64 __fastcall sub_180058AD0(unsigned __int64 a1)
{
  sub_180058CA0();
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x100000, a1);
}
