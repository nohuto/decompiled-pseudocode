/*
 * XREFs of VfReportIssueWithOptions @ 0x1402779AC
 * Callers:
 *     VfCheckImageCompliance @ 0x1407A7DD4 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1407A8230 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1407A82D8 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1407A837C (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1407BBBA0 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1407BBF00 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1407BCE14 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1407BCFB8 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x140250930 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x1407B5578 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x1407B56A8 (VfErrorStoreTriageInformation.c)
 */

void __fastcall VfReportIssueWithOptions(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a3,
        ULONG_PTR a4,
        __int64 a5,
        _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v7; // edi
  int v8; // esi
  int v10; // ebp
  int v11; // r10d

  v6 = Response;
  v7 = a4;
  v8 = a3;
  v10 = BugCheckParameter1;
  v11 = *Response;
  if ( *Response && (v11 & 2) == 0 )
  {
    if ( (v11 & 8) == 0 && (VfOptionFlags & 0x200) == 0 && (_BYTE)KdDebuggerEnabled )
    {
      if ( (v11 & 4) != 0 )
      {
        while ( 1 )
        {
          VfUtilDbgPrint("\n*** Verifier assertion failed ***\n");
          DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
          switch ( (_BYTE)Response )
          {
            case 'B':
              goto LABEL_15;
            case 'I':
              return;
            case 'R':
              goto LABEL_16;
            case 'W':
              goto LABEL_14;
            case 'b':
LABEL_15:
              VfErrorStoreTriageInformation(BugCheckCode, v10, v8, v7, a5);
              __debugbreak();
            case 'i':
              return;
          }
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_16:
        *v6 = 0;
      }
    }
    else
    {
      VerifierBugCheckIfAppropriate(BugCheckCode, BugCheckParameter1, a3, a4, a5);
    }
  }
}
