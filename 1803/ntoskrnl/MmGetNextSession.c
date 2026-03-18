/*
 * XREFs of MmGetNextSession @ 0x140074C10
 * Callers:
 *     PopInvokeWin32Callout @ 0x14051D0D8 (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x14052F85C (ExCallSessionCallBack.c)
 *     PfpPrivSourceEnum @ 0x140538648 (PfpPrivSourceEnum.c)
 *     ObpProcessRemoveObjectQueue @ 0x140552770 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x14055F754 (ExGetSessionPoolTagInformation.c)
 *     PfpProcessScenarioPhase @ 0x1406129BC (PfpProcessScenarioPhase.c)
 *     MmEnumerateSystemImages @ 0x14062991C (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x140749FEC (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x14074D9BC (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x14076D90C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1407AF2C4 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1407BABAC (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x140823D28 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140823DFC (VfThunkApplyThunks.c)
 * Callees:
 *     MiGetNextSession @ 0x140074C24 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
