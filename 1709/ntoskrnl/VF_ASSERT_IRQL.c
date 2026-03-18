/*
 * XREFs of VF_ASSERT_IRQL @ 0x1407AA3AC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407AA640 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407AA820 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1407AAA20 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1407AABB0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x1407AADD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1407AB0C0 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1407AB6B0 (VfFreeAdapterChannel.c)
 *     VfFreeCommonBuffer @ 0x1407AB890 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x1407AB960 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x1407ABA60 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x1407ABBD0 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x1407ABC80 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1407ACA40 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 */

void __fastcall VF_ASSERT_IRQL(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v2; // edi
  __int64 v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    ViHalPreprocessOptions(byte_140359A10, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140359A10);
  }
}
