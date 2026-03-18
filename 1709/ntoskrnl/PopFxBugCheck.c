/*
 * XREFs of PopFxBugCheck @ 0x14023D978
 * Callers:
 *     PopPluginDevicePower @ 0x14001AE88 (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x14001AF0C (PopPluginComponentActive.c)
 *     PopPepCompleteActivity @ 0x14001C050 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x14001C0BC (PopPepTriggerActivity.c)
 *     PopFxIdleComponent @ 0x1400E403C (PopFxIdleComponent.c)
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x1400FCDC8 (PoFxPrepareDevice.c)
 *     PopFxPluginWork @ 0x1400FD120 (PopFxPluginWork.c)
 *     PoFxActivateComponent @ 0x1400FD690 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400FD858 (PopFxAddRefDevice.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400FD900 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x140122E10 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140123884 (PopPepUpdateIdleStateRefCount.c)
 *     PoFxCompleteIdleCondition @ 0x14012A750 (PoFxCompleteIdleCondition.c)
 *     PopPluginComponentIdleState @ 0x140130F68 (PopPluginComponentIdleState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140132270 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x140157340 (PoFxRegisterDripsWatchdogCallback.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140157B30 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x14023D5E0 (PoFxIssueComponentPerfStateChangeMultiple.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14023E334 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxTransitionCriticalResource @ 0x14023F6F0 (PopFxTransitionCriticalResource.c)
 *     PopFxWorkOrderWatchdog @ 0x14023FB20 (PopFxWorkOrderWatchdog.c)
 *     PopPluginAbandonDevice @ 0x14023FB3C (PopPluginAbandonDevice.c)
 *     PopPluginNotifyActive @ 0x14023FB88 (PopPluginNotifyActive.c)
 *     PopPluginQueryComponentPerfSet @ 0x14023FCB8 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x14023FD60 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x14023FDDC (PopPluginQueryComponentPerfStates.c)
 *     PopPluginQueryCurrentComponentPerfState @ 0x14023FE34 (PopPluginQueryCurrentComponentPerfState.c)
 *     PopPluginRegisterDevice @ 0x14023FF44 (PopPluginRegisterDevice.c)
 *     PopPluginRequestComponentPerfState @ 0x140240074 (PopPluginRequestComponentPerfState.c)
 *     PopPluginUnregisterDevice @ 0x14024022C (PopPluginUnregisterDevice.c)
 *     PopTranslateDependencyArray @ 0x14024062C (PopTranslateDependencyArray.c)
 *     PopPepInitializeDebuggerMasks @ 0x14024295C (PopPepInitializeDebuggerMasks.c)
 *     PopPepInitializeVetoMasks @ 0x140242A58 (PopPepInitializeVetoMasks.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x14024A430 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14024D00C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14024D0A0 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopPluginAcpiNotificationStrict @ 0x14024D724 (PopPluginAcpiNotificationStrict.c)
 *     PopFxRegisterDevice @ 0x1405CA0E4 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1405CA234 (PopFxRegisterDeviceWorker.c)
 *     PoFxRegisterComponentPerfStates @ 0x1406F7DE0 (PoFxRegisterComponentPerfStates.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406F8324 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406F8878 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x1406F8D0C (PopFxPepPerfInfoQuery.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1406F93E8 (PopFxResetSocSubsystemAccounting.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1406F987C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1406F99AC (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemCount @ 0x1406F9A84 (PopPluginQuerySocSubsystemCount.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406F9AF8 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
