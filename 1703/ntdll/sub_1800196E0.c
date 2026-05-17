/*
 * XREFs of sub_1800196E0 @ 0x1800196E0
 * Callers:
 *     TpReleaseTimer @ 0x180019600 (TpReleaseTimer.c)
 * Callees:
 *     sub_180019398 @ 0x180019398 (sub_180019398.c)
 */

__int64 __fastcall sub_1800196E0(__int64 a1)
{
  sub_180019398(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 0x100000));
}
