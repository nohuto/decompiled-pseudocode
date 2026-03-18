/*
 * XREFs of HvcallInitiateHypercall @ 0x140156B30
 * Callers:
 *     HvlpCommitLpIndices @ 0x14017AD2C (HvlpCommitLpIndices.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14017AF44 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1406B30D4 (HvlpCreateRootVirtualProcessor.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvcallInitiateHypercall()
{
  return HvcallCodeVa();
}
