/*
 * XREFs of MmGetNextSession @ 0x1400B15D0
 * Callers:
 *     ExGetSessionPoolTagInformation @ 0x1404477C8 (ExGetSessionPoolTagInformation.c)
 *     PopInvokeWin32Callout @ 0x1404E8B38 (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x1404F0184 (ExCallSessionCallBack.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 *     ObpProcessRemoveObjectQueue @ 0x140568570 (ObpProcessRemoveObjectQueue.c)
 *     PfpProcessScenarioPhase @ 0x1405EF25C (PfpProcessScenarioPhase.c)
 *     MmGetSessionMappedViewInformation @ 0x1406DF0E8 (MmGetSessionMappedViewInformation.c)
 *     MmEnumerateSystemImages @ 0x1406E2040 (MmEnumerateSystemImages.c)
 *     MmPerfLogSessionRundown @ 0x1406E2F6C (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x140709D18 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x14074DA54 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140753E0C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1407B6038 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1407B610C (VfThunkApplyThunks.c)
 * Callees:
 *     MiGetNextSession @ 0x1400B15E4 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
