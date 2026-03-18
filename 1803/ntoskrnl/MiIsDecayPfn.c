/*
 * XREFs of MiIsDecayPfn @ 0x140003B48
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorGatherBrownPages @ 0x140156670 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x1401573F4 (MiMirrorReduceBlackWrites.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(unsigned __int64 a1)
{
  return a1 >= qword_1403CC0A0 && a1 < qword_1403CC0A0 + 2048;
}
