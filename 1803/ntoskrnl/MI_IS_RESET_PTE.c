/*
 * XREFs of MI_IS_RESET_PTE @ 0x140053CF0
 * Callers:
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 * Callees:
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(__int64 a1)
{
  return (a1 & 1) == 0
      && (a1 & 0x400) == 0
      && (a1 & 0x800) == 0
      && (a1 & 4) == 0
      && (a1 & 2) == 0
      && MiGetPteTimeStamp(a1) == 1;
}
