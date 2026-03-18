/*
 * XREFs of MI_IS_RESET_PTE @ 0x14005BFC0
 * Callers:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 * Callees:
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
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
