/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x1407AA42C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1407AB450 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1407AB600 (VfFlushAdapterBuffersEx.c)
 *     VfGetScatterGatherListEx @ 0x1407ABFD0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1407AC3A0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1407AC560 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1407AC760 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x1407ACBD0 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x1407ADED8 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  __int64 v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140359A0C, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140359A0C);
  }
}
