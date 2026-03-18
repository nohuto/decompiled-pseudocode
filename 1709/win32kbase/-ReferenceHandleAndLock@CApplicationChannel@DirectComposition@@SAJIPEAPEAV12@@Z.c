/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023924
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C00037A0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C00049A0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0004A90 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C0020670 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C0020770 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0021350 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionSynchronize @ 0x1C00235A0 (NtDCompositionSynchronize.c)
 *     NtDCompositionCommitChannel @ 0x1C0023710 (NtDCompositionCommitChannel.c)
 *     NtDCompositionCurrentBatchId @ 0x1C0023860 (NtDCompositionCurrentBatchId.c)
 *     NtDCompositionGetDeletedResources @ 0x1C0089660 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C008A650 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C008C180 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionReleaseAllResources @ 0x1C008D8A0 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelCallbackId @ 0x1C008E4C0 (NtDCompositionSetChannelCallbackId.c)
 *     NtDCompositionWaitForChannel @ 0x1C0090B50 (NtDCompositionWaitForChannel.c)
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0091030 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0094820 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionSetDebugCounter @ 0x1C0095E70 (NtDCompositionSetDebugCounter.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0096524 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0097AD4 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     NtVisualCaptureBits @ 0x1C013EBA0 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023984 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        unsigned int a1,
        struct DirectComposition::CApplicationChannel **a2)
{
  int v3; // edi
  struct DirectComposition::CApplicationChannel *v4; // rbx
  struct DirectComposition::CChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CChannel *))(*(_QWORD *)v6 + 8LL))(v6) == 1 )
    {
      *a2 = v4;
    }
    else
    {
      v3 = -1073741811;
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
    }
  }
  return (unsigned int)v3;
}
