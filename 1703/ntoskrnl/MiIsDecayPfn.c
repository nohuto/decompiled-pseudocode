/*
 * XREFs of MiIsDecayPfn @ 0x140075F20
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(unsigned __int64 a1)
{
  return a1 >= qword_14036CBE0 && a1 < qword_14036CBE0 + 2048;
}
