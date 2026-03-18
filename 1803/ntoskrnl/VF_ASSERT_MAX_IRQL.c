/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x1408174B0
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1408185D0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140818780 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x140818A00 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x140819140 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140819510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1408196D0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1408198D0 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140819D40 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  __int64 v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_14039D080, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_14039D080);
  }
}
