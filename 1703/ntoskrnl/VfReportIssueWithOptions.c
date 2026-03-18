/*
 * XREFs of VfReportIssueWithOptions @ 0x14025113C
 * Callers:
 *     VfCheckImageCompliance @ 0x140766238 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140766694 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x14076673C (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1407667E0 (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x140779CA4 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x14077A004 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x14077AF08 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x14077B0AC (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x14023B0A0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x1407737C4 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x1407738F4 (VfErrorStoreTriageInformation.c)
 */

void __fastcall VfReportIssueWithOptions(ULONG BugCheckCode, int a2, int a3, int a4, __int64 a5, _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v11; // r10d

  v6 = Response;
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
              VfErrorStoreTriageInformation(BugCheckCode, a2, a3, a4, a5);
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
      VerifierBugCheckIfAppropriate(BugCheckCode, a5);
    }
  }
}
