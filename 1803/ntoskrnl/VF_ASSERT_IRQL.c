/*
 * XREFs of VF_ASSERT_IRQL @ 0x140817430
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1408176D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1408178C0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140817AC0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x140817D40 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140817F50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140818240 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x140818830 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140818AD0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140818BD0 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140818D40 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140818DF0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140819BB0 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_14039D084, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_14039D084);
  }
}
