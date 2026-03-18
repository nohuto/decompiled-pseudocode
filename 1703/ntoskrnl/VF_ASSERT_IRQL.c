/*
 * XREFs of VF_ASSERT_IRQL @ 0x140768728
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407689C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140768BA0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140768DA0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x140768EF0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140769110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140769400 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1407699F0 (VfFreeAdapterChannel.c)
 *     VfFreeCommonBuffer @ 0x140769BD0 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140769CA0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140769DA0 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140769F10 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140769FC0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14076AD70 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

void __fastcall VF_ASSERT_IRQL(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  int v2; // edi
  __int64 v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    ViHalPreprocessOptions(byte_140341380, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 19, 1, v2, v3, byte_140341380);
  }
}
