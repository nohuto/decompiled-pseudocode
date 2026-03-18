/*
 * XREFs of MiIsPteInStore @ 0x1400C62F4
 * Callers:
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MiComputeFaultCluster @ 0x140056C60 (MiComputeFaultCluster.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiUpdatePfnPriorityByPte @ 0x140128510 (MiUpdatePfnPriorityByPte.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiCheckCommitReleaseFromVad @ 0x14025018C (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  return (a2 & 4) != 0 && a2 >> 12 == *(_DWORD *)(a1 + 1140);
}
