/*
 * XREFs of ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC
 * Callers:
 *     ?EmitUpdateColorStopsCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00028C8 (-EmitUpdateColorStopsCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C0002D88 (--$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComp.c)
 *     ??$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C0002DE0 (--$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposi.c)
 *     ?EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022868 (-EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022984 (-EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022AA0 (-EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitAppendColorResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00274A0 (-EmitAppendColorResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0027620 (-EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0027BC0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002A190 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002A2C0 (-EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B550 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B834 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002D5C0 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002DC68 (-EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002DDB0 (-EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007CDD0 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007E390 (-EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRenderTargetGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008F030 (-EmitUpdateCommands@CRenderTargetGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0141600 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142AA8 (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0144988 (-EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145038 (-EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSurfaces@CCompositionCubeMapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01475F8 (-EmitSurfaces@CCompositionCubeMapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0148410 (-EmitUpdateCommands@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CClipGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0148790 (-EmitUpdateCommands@CClipGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C0148BC8 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0148F70 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 *     ?EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01498A0 (-EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEA.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0031CBC (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 */

bool __fastcall DirectComposition::CBatch::AllocateNewFragment(
        struct DirectComposition::CBatch ***a1,
        unsigned __int64 *a2)
{
  struct DirectComposition::CBatch **v2; // rbx
  struct DirectComposition::CBatch *BatchFragment; // rax

  v2 = *a1;
  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment((*a1)[1], 1, 0);
  if ( BatchFragment )
  {
    *((_BYTE *)v2[15] + 64) = 0;
    *v2 = BatchFragment;
    *a1 = (struct DirectComposition::CBatch **)BatchFragment;
    if ( a2 )
      *a2 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 15) + 40LL);
    LOBYTE(BatchFragment) = 1;
  }
  return (char)BatchFragment;
}
