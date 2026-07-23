/*
 * XREFs of ViGetRealDmaOperation @ 0x14081B294
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1402A9D60 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x1402A9E90 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1402A9EE0 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1402A9F10 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1402A9F50 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1408176D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1408178C0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140817AC0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140817B70 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140817C50 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140817DE0 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140817F50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140818240 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140818400 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140818470 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140818540 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140818580 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1408185D0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140818780 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140818830 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1408188E0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140818A00 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140818AD0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapterInfo @ 0x140818D00 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140818D40 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140818D80 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140818DF0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140819140 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x140819450 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140819510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1408196D0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1408198D0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140819BB0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140819D40 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_14039D0F4, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_14039D0F4);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
