/*
 * XREFs of MI_IS_RESET_PTE @ 0x140104D20
 * Callers:
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 * Callees:
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
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
