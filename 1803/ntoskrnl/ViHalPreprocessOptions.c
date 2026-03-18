/*
 * XREFs of ViHalPreprocessOptions @ 0x14081B448
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140816F0C (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140817018 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1408170B4 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140817148 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1408171DC (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140817270 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140817310 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1408173A4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140817430 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1408174B0 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140817F50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140818240 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x1408185D0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140818DF0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140819140 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140819510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1408196D0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1408198D0 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x14081A2E8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x14081A648 (ViCheckPadding.c)
 *     ViCheckTag @ 0x14081A80C (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x14081AA9C (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x14081ABC8 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x14081B180 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x14081B830 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14081BBFC (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 */

__int64 ViHalPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  int v7; // ebx
  const CHAR *v8; // rdi
  __int64 result; // rax

  v7 = a3 & 0x10000000;
  v8 = a2;
  if ( (a3 & 0x10000000) != 0 )
    a3 = (unsigned int)a3 & 0xEFFFFFFF;
  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    if ( (unsigned int)a3 >= 0x26 )
    {
      result = 4LL;
    }
    else
    {
      a2 = (const char *)ViHalDefaultActions;
      result = *((unsigned int *)ViHalDefaultActions + a3);
    }
    *a1 = result;
  }
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    VfUtilDbgPrint("**************** HAL Verifier Detected Violation ****************\n", a2, a3);
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** VF: ");
    if ( v7 )
      DbgPrintEx(0x65u, 0, v8, a5, a6);
    else
      DbgPrintEx(0x65u, 0, v8, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
