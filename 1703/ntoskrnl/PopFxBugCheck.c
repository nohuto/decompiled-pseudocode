/*
 * XREFs of PopFxBugCheck @ 0x14022A7A4
 * Callers:
 *     PoFxCompleteIdleCondition @ 0x140033820 (PoFxCompleteIdleCondition.c)
 *     PoFxPrepareDevice @ 0x14006776C (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x14006816C (PopFxActivateDevice.c)
 *     PopFxPluginWork @ 0x1400685A0 (PopFxPluginWork.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140068D70 (PopFxCompleteDevicePowerRequired.c)
 *     PoFxActivateComponent @ 0x140068EA0 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x140069078 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopFxIdleComponent @ 0x140069D5C (PopFxIdleComponent.c)
 *     PopPluginDevicePower @ 0x14006A308 (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x14006A38C (PopPluginComponentActive.c)
 *     PopPepCompleteActivity @ 0x14006AC74 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x14006ACE0 (PopPepTriggerActivity.c)
 *     PoFxReportDevicePoweredOn @ 0x140144960 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140149A84 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x14014A2F0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopPluginComponentIdleState @ 0x14014A39C (PopPluginComponentIdleState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14014B470 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x140169150 (PoFxRegisterDripsWatchdogCallback.c)
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x14022A5F0 (PoFxIssueComponentPerfStateChangeMultiple.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14022B014 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxTransitionCriticalResource @ 0x14022C330 (PopFxTransitionCriticalResource.c)
 *     PopFxWorkOrderWatchdog @ 0x14022C760 (PopFxWorkOrderWatchdog.c)
 *     PopPluginAbandonDevice @ 0x14022C77C (PopPluginAbandonDevice.c)
 *     PopPluginNotifyActive @ 0x14022C7C8 (PopPluginNotifyActive.c)
 *     PopPluginQueryComponentPerfSet @ 0x14022C8F8 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x14022C9A0 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x14022CA1C (PopPluginQueryComponentPerfStates.c)
 *     PopPluginQueryCurrentComponentPerfState @ 0x14022CA74 (PopPluginQueryCurrentComponentPerfState.c)
 *     PopPluginRegisterDevice @ 0x14022CB84 (PopPluginRegisterDevice.c)
 *     PopPluginRequestComponentPerfState @ 0x14022CCB4 (PopPluginRequestComponentPerfState.c)
 *     PopPluginUnregisterDevice @ 0x14022CE6C (PopPluginUnregisterDevice.c)
 *     PopTranslateDependencyArray @ 0x14022D28C (PopTranslateDependencyArray.c)
 *     PopPepInitializeDebuggerMasks @ 0x14022E94C (PopPepInitializeDebuggerMasks.c)
 *     PopPepInitializeVetoMasks @ 0x14022EA48 (PopPepInitializeVetoMasks.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1402352E0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140237F5C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140237FF0 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopPluginAcpiNotificationStrict @ 0x140238674 (PopPluginAcpiNotificationStrict.c)
 *     PopFxRegisterDevice @ 0x1405BE594 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 *     PoFxRegisterComponentPerfStates @ 0x1406C7450 (PoFxRegisterComponentPerfStates.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406C7904 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406C7E5C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x1406C82F0 (PopFxPepPerfInfoQuery.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1406C89CC (PopFxResetSocSubsystemAccounting.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1406C8DF4 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1406C8F24 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemCount @ 0x1406C8FFC (PopPluginQuerySocSubsystemCount.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406C9070 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
