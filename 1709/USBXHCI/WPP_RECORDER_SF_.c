/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001A20
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001460 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_ControllerReset @ 0x1C0002420 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0002780 (Register_BiosHandoff.c)
 *     Register_ControllerStop @ 0x1C00028B4 (Register_ControllerStop.c)
 *     Register_WaitForControllerReady @ 0x1C00029A0 (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002D70 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0003260 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0004AA0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0005090 (RootHub_UcxEvtInterruptTransfer.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0006190 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_Start @ 0x1C0006440 (Controller_Start.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0006BC4 (XilCoreDeviceSlot_Initialize.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0006FEC (CommonBuffer_FlushWorkItems.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000CADC (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C000CF74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C000D228 (Command_InternalSendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000D8B0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000F1B8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C000F908 (CommonBuffer_QueueWorkItem.c)
 *     Controller_D0EntryRestoreState @ 0x1C0010234 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C00104A4 (Controller_D0ExitSaveState.c)
 *     Controller_DisableController @ 0x1C0010918 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C00109A0 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C0011130 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00118AC (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C0011E64 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0011F58 (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetControllerGone @ 0x1C00123D0 (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C00126B4 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0012A10 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0013140 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0013430 (Controller_UcxEvtQueryUsbCapability.c)
 *     Controller_UcxEvtReset @ 0x1C0013880 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0013960 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0013F40 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C001EB08 (Interrupter_SetSecondaryInterrupterCount.c)
 *     RootHub_ForceU0AndWait @ 0x1C001FBCC (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001FF3C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C002071C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C00208C0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0021100 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00216C0 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C0022054 (TR_AcquireSecureSegments.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C002C840 (Isoch_WdfEvtRingEmptyTimer.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C003F708 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     XilCoreCommand_AllocateResources @ 0x1C003FF04 (XilCoreCommand_AllocateResources.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0040324 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0040638 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0040E4C (XilCoreDeviceSlot_AllocateResources.c)
 *     Command_ReleaseHardware @ 0x1C0055550 (Command_ReleaseHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0055838 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C005792C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0058B30 (Controller_SetDeviceDescription.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C005BF9C (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C005C5C0 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x1C005C6A0 (Interrupter_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C005C93C (Interrupter_PrepareInterrupter.c)
 *     Register_ParseCapabilityRegister @ 0x1C005D19C (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C005D868 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C005E13C (RootHub_PrepareHardware.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0060218 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x1C00610E0 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C00611D0 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006127C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // r8
  int v11; // eax
  char *v13; // rcx
  int v14; // [rsp+20h] [rbp-18h]

  v9 = (unsigned __int64)a3 >> 16;
  v10 = a3 - 1;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (v10 >> 5) + 1);
  if ( _bittest(&v11, v10 & 0x1F) )
  {
    v13 = (char *)WPP_GLOBAL_Control + 80 * v9;
    if ( (unsigned __int8)v13[41] >= a2 )
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
        *((_QWORD *)v13 + 3),
        43LL,
        a5,
        a4,
        0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, 0LL);
}
