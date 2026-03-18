/*
 * XREFs of ViHalPreprocessOptions @ 0x14076C614
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140768220 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14076832C (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1407683C8 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x14076845C (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1407684F0 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140768584 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140768624 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1407686B8 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140768728 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1407687A8 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140769110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140769400 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x140769790 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140769FC0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14076A310 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14076A6D0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14076A890 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14076AA90 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x14076B4AC (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x14076B814 (ViCheckPadding.c)
 *     ViCheckTag @ 0x14076B9D0 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x14076BC60 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x14076BD8C (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x14076C348 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x14076CA00 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14076CDD8 (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 */

__int64 ViHalPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  const CHAR *v7; // rdi
  int v8; // ebx
  __int64 result; // rax

  v7 = a2;
  if ( (a3 & 0x10000000) != 0 )
  {
    v8 = 1;
    LODWORD(a3) = a3 & 0xEFFFFFFF;
  }
  else
  {
    v8 = 0;
  }
  if ( *a1 == -1 )
  {
    if ( (unsigned int)a3 >= 0x26 )
    {
      *a1 = 4;
    }
    else
    {
      a2 = (const char *)ViHalDefaultActions;
      *a1 = *((_DWORD *)ViHalDefaultActions + (unsigned int)a3);
    }
  }
  result = (unsigned int)*a1;
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    VfUtilDbgPrint("**************** HAL Verifier Detected Violation ****************\n", a2, a3);
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** VF: ");
    if ( v8 )
      DbgPrintEx(0x65u, 0, v7, a5, a6);
    else
      DbgPrintEx(0x65u, 0, v7, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
