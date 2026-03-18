/*
 * XREFs of KeIsAttachedProcess @ 0x1400FCB20
 * Callers:
 *     IopCheckInitiatorHint @ 0x14001E214 (IopCheckInitiatorHint.c)
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     MiAllowGuardFault @ 0x140027A0C (MiAllowGuardFault.c)
 *     RtlGetThreadLangIdByIndex @ 0x140037370 (RtlGetThreadLangIdByIndex.c)
 *     PsGetCurrentThreadTeb @ 0x14006B910 (PsGetCurrentThreadTeb.c)
 *     PoGetRequester @ 0x14007263C (PoGetRequester.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140080268 (PnpIsSafeToExamineUserModeTeb.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 *     MiComputeFaultNode @ 0x140106888 (MiComputeFaultNode.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     KiOpComputeLinearAddress @ 0x1402068B8 (KiOpComputeLinearAddress.c)
 *     SepGetLearningModeObjectInformation @ 0x1402482D8 (SepGetLearningModeObjectInformation.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140252C94 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpStackTraceDispatcher @ 0x140256CE0 (EtwpStackTraceDispatcher.c)
 *     ExHandleLogBadReference @ 0x14025A50C (ExHandleLogBadReference.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x14042413C (RtlGuardIsValidWow64StackPointer.c)
 *     ExpRaiseHardError @ 0x140427D10 (ExpRaiseHardError.c)
 *     IopRetrieveTransactionParameters @ 0x140429360 (IopRetrieveTransactionParameters.c)
 *     MiCheckForUserStackOverflow @ 0x14043EBA8 (MiCheckForUserStackOverflow.c)
 *     DbgkUnMapViewOfSection @ 0x140479FC0 (DbgkUnMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1404C95A0 (DbgkMapViewOfSection.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1404F07DC (ExpWnfGetCurrentScopeInstance.c)
 *     ObpCloseHandle @ 0x1404F9CCC (ObpCloseHandle.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     RtlGuardIsValidStackPointer @ 0x14053B230 (RtlGuardIsValidStackPointer.c)
 *     PoTraceSystemTimerResolution @ 0x140561FFC (PoTraceSystemTimerResolution.c)
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     DbgkSendSystemDllMessages @ 0x14067E910 (DbgkSendSystemDllMessages.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406B1A68 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiCommitRequestFailed @ 0x1406B6A28 (MiCommitRequestFailed.c)
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}
