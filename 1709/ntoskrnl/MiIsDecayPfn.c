/*
 * XREFs of MiIsDecayPfn @ 0x14012CFD4
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(unsigned __int64 a1)
{
  return a1 >= qword_140388DE0 && a1 < qword_140388DE0 + 2048;
}
