/*
 * XREFs of ViGetRealDmaOperation @ 0x1407AE128
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140276C40 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140276D70 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x140276DC0 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x140276DF0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x140276E30 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1407AA640 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407AA820 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1407AAA20 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1407AAAD0 (VfAllocateCommonBufferEx.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1407AAC50 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1407AADD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1407AB0C0 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x1407AB280 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x1407AB2F0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x1407AB3C0 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x1407AB400 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1407AB450 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1407AB600 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1407AB6B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1407AB760 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1407AB890 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x1407AB960 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapterInfo @ 0x1407ABB90 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x1407ABBD0 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1407ABC10 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x1407ABC80 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1407ABFD0 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x1407AC2E0 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x1407AC3A0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1407AC560 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1407AC760 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x1407ACA40 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x1407ACBD0 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x1407ADED8 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140359A78, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140359A78);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
