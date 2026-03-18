/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0014B84
 * Callers:
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0010660 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C00110E0 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C00111E0 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionGetDeletedResources @ 0x1C00117F0 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0011F40 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionReleaseAllResources @ 0x1C00125F0 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelCallbackId @ 0x1C0012980 (NtDCompositionSetChannelCallbackId.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0013AA0 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0013D90 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionSetDebugCounter @ 0x1C0013ED0 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionGetBatchId @ 0x1C0014CF0 (NtDCompositionGetBatchId.c)
 *     NtDCompositionCommitChannel @ 0x1C00608E0 (NtDCompositionCommitChannel.c)
 *     NtDCompositionSynchronize @ 0x1C0063D00 (NtDCompositionSynchronize.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C0068630 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionWaitForChannel @ 0x1C006AF00 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionSuspendAnimations @ 0x1C01437F0 (NtDCompositionSuspendAnimations.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C01439C0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0143AA0 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0143BA0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtVisualCaptureBits @ 0x1C0143E60 (NtVisualCaptureBits.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0146EB8 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0146F34 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0014BE4 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
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
