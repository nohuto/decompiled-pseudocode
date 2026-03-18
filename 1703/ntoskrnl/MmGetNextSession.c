/*
 * XREFs of MmGetNextSession @ 0x140071180
 * Callers:
 *     ObpProcessRemoveObjectQueue @ 0x140428DC0 (ObpProcessRemoveObjectQueue.c)
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 *     MmEnumerateSystemImages @ 0x1404B0CF8 (MmEnumerateSystemImages.c)
 *     PopInvokeWin32Callout @ 0x1404C5D90 (PopInvokeWin32Callout.c)
 *     ExGetSessionPoolTagInformation @ 0x1404C76E4 (ExGetSessionPoolTagInformation.c)
 *     ExCallSessionCallBack @ 0x1404C81A8 (ExCallSessionCallBack.c)
 *     PfpProcessScenarioPhase @ 0x14058509C (PfpProcessScenarioPhase.c)
 *     MmGetSessionMappedViewInformation @ 0x1406B3140 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x1406B66B8 (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x1406D45C8 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x140710968 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140714C7C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14077427C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140774350 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
