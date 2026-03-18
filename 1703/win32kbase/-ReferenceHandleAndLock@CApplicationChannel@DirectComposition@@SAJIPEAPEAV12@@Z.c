/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001E6E4
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C00046F0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0005040 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0005130 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionCurrentBatchId @ 0x1C001E620 (NtDCompositionCurrentBatchId.c)
 *     NtDCompositionCommitChannel @ 0x1C0020760 (NtDCompositionCommitChannel.c)
 *     NtDCompositionSynchronize @ 0x1C007EAC0 (NtDCompositionSynchronize.c)
 *     NtDCompositionGetDeletedResources @ 0x1C0080190 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0080D40 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C0081970 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C0081A70 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C0083DD0 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0087A00 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionReleaseAllResources @ 0x1C0088A50 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelCallbackId @ 0x1C008A2C0 (NtDCompositionSetChannelCallbackId.c)
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C008ABFC (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionWaitForChannel @ 0x1C008AF70 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C008D510 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionSetDebugCounter @ 0x1C008E090 (NtDCompositionSetDebugCounter.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C008E584 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C008F2DC (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     NtVisualCaptureBits @ 0x1C013F790 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001E744 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
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
