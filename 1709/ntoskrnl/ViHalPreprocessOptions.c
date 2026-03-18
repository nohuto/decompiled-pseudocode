/*
 * XREFs of ViHalPreprocessOptions @ 0x1407AE2E0
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x1407A9E88 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1407A9F94 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1407AA030 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1407AA0C4 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1407AA158 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x1407AA1EC (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1407AA28C (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1407AA320 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1407AA3AC (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1407AA42C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x1407AADD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1407AB0C0 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x1407AB450 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x1407ABC80 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1407ABFD0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1407AC3A0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1407AC560 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1407AC760 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x1407AD17C (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x1407AD4E0 (ViCheckPadding.c)
 *     ViCheckTag @ 0x1407AD69C (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x1407AD92C (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x1407ADA58 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x1407ADED8 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x1407AE014 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x1407AE128 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x1407AE6CC (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x1407AEA94 (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
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
