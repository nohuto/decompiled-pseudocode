/*
 * XREFs of MiIsPteInStore @ 0x140074CBC
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiComputeFaultCluster @ 0x140107E44 (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020ADC8 (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  return (a2 & 4) != 0 && a2 >> 12 == *(_DWORD *)(a1 + 1188);
}
