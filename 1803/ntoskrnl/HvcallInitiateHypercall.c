/*
 * XREFs of HvcallInitiateHypercall @ 0x14015D800
 * Callers:
 *     HvlpCommitLpIndices @ 0x1401A55CC (HvlpCommitLpIndices.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401A57C4 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140717C40 (HvlpCreateRootVirtualProcessor.c)
 *     HvlUpdateMicrocode @ 0x140717DD0 (HvlUpdateMicrocode.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvcallInitiateHypercall()
{
  return HvcallCodeVa();
}
