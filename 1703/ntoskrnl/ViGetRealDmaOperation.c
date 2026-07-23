/*
 * XREFs of ViGetRealDmaOperation @ 0x14076C45C
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1402503E0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140250510 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x140250560 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x140250590 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1402505D0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1407689C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140768BA0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140768DA0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140768E50 (VfAllocateCommonBufferEx.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140768F90 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140769110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140769400 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x1407695C0 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140769630 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140769700 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140769740 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x140769790 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140769940 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1407699F0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140769AA0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140769BD0 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140769CA0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapterInfo @ 0x140769ED0 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140769F10 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140769F50 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140769FC0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14076A310 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x14076A610 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x14076A6D0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14076A890 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14076AA90 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x14076AD70 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x14076AF00 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(struct _LIST_ENTRY *a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_1403413E8, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (_DWORD)a1 + 25, 0, 0, 0LL, byte_1403413E8);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = a1->Blink;
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
