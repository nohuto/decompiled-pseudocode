/*
 * XREFs of PopFxBugCheck @ 0x140274BF4
 * Callers:
 *     PopFxPluginWork @ 0x1400777B0 (PopFxPluginWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140077884 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140077A30 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 *     PoFxActivateComponent @ 0x140078070 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x14007826C (PopFxAddRefDevice.c)
 *     PopFxIdleComponent @ 0x1400786EC (PopFxIdleComponent.c)
 *     PopPluginDevicePower @ 0x140078CD8 (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x140078D5C (PopPluginComponentActive.c)
 *     PopPepCompleteActivity @ 0x1400795D8 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x1400796B0 (PopPepTriggerActivity.c)
 *     PoFxCompleteIdleCondition @ 0x1400C8140 (PoFxCompleteIdleCondition.c)
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x140146F44 (PoFxPrepareDevice.c)
 *     PoFxReportDevicePoweredOn @ 0x140165D00 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14016C158 (PopPepUpdateIdleStateRefCount.c)
 *     PopPluginComponentIdleState @ 0x14016C9D4 (PopPluginComponentIdleState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140183690 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x140184230 (PoFxRegisterDripsWatchdogCallback.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1401862C0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x140274970 (PoFxIssueComponentPerfStateChangeMultiple.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402756D4 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxTransitionCriticalResource @ 0x140276C80 (PopFxTransitionCriticalResource.c)
 *     PopFxWorkOrderWatchdog @ 0x140277100 (PopFxWorkOrderWatchdog.c)
 *     PopPluginAbandonDevice @ 0x140277128 (PopPluginAbandonDevice.c)
 *     PopPluginNotifyActive @ 0x140277174 (PopPluginNotifyActive.c)
 *     PopPluginQueryComponentPerfSet @ 0x1402772A4 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x14027734C (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x1402773C8 (PopPluginQueryComponentPerfStates.c)
 *     PopPluginQueryCurrentComponentPerfState @ 0x140277420 (PopPluginQueryCurrentComponentPerfState.c)
 *     PopPluginRegisterDevice @ 0x140277530 (PopPluginRegisterDevice.c)
 *     PopPluginRequestComponentPerfState @ 0x140277660 (PopPluginRequestComponentPerfState.c)
 *     PopPluginUnregisterDevice @ 0x140277818 (PopPluginUnregisterDevice.c)
 *     PopTranslateDependencyArray @ 0x140277C0C (PopTranslateDependencyArray.c)
 *     PopPepInitializeDebuggerMasks @ 0x1402799FC (PopPepInitializeDebuggerMasks.c)
 *     PopPepInitializeVetoMasks @ 0x140279AF8 (PopPepInitializeVetoMasks.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1402803A0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140282DA4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140282E38 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopPluginAcpiNotificationStrict @ 0x140283B00 (PopPluginAcpiNotificationStrict.c)
 *     PopFxRegisterDevice @ 0x140614B24 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140614C84 (PopFxRegisterDeviceWorker.c)
 *     PoFxRegisterComponentPerfStates @ 0x14075F430 (PoFxRegisterComponentPerfStates.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14075F7F0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14075FD3C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x1407601D0 (PopFxPepPerfInfoQuery.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1407608AC (PopFxResetSocSubsystemAccounting.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x140760D3C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x140760E6C (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemCount @ 0x140760F44 (PopPluginQuerySocSubsystemCount.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x140760FB8 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDripsWatchdogTakeAction @ 0x14076DFD0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
