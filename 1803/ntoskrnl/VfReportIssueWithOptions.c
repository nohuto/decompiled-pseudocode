/*
 * XREFs of VfReportIssueWithOptions @ 0x1402AAB18
 * Callers:
 *     VfCheckImageCompliance @ 0x140814F64 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140815260 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140815308 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1408153AC (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x140828F58 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1408292B4 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x14082A1CC (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x14082A368 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x140286390 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x14082326C (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x14082339C (VfErrorStoreTriageInformation.c)
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
