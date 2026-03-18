/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001C00
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001640 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00034FC (Command_D0EntryPostInterruptsEnabled.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003908 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0003D70 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C0004020 (Command_InternalSendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0005FBC (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0006708 (CommonBuffer_FlushWorkItems.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C00067A0 (CommonBuffer_QueueWorkItem.c)
 *     Controller_D0EntryRestoreState @ 0x1C0007284 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C00075B4 (Controller_D0ExitSaveState.c)
 *     Controller_DisableController @ 0x1C0007A24 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0007C00 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C00083F8 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008BD4 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C0009194 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C00092EC (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetControllerGone @ 0x1C0009748 (Controller_SetControllerGone.c)
 *     Controller_Start @ 0x1C0009800 (Controller_Start.c)
 *     Controller_TelemetryReport @ 0x1C0009DB4 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C000A110 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C000A830 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C000AB20 (Controller_UcxEvtQueryUsbCapability.c)
 *     Controller_UcxEvtReset @ 0x1C000AFD0 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000B0B0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C000B690 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C000C190 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0016F88 (Interrupter_DeferredWorkProcessor.c)
 *     Register_BiosHandoff @ 0x1C0018848 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C0018D10 (Register_ControllerStop.c)
 *     Register_WaitForControllerReady @ 0x1C0019430 (Register_WaitForControllerReady.c)
 *     RootHub_ForceU0AndWait @ 0x1C001A260 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001A594 (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001AE58 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C001B000 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001B250 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C001C9C0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C001CD00 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C001D540 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C001D970 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001EF70 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C001F8FC (TR_AcquireSecureSegments.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C002A2F0 (Isoch_WdfEvtRingEmptyTimer.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0033E10 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0036F04 (Wmi_CreateControllerCapabilities.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C003DCA8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     XilCoreCommand_AllocateResources @ 0x1C003E5B8 (XilCoreCommand_AllocateResources.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C003EA34 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C003ED48 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C003F548 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C003F860 (XilCoreDeviceSlot_Initialize.c)
 *     Command_ReleaseHardware @ 0x1C0052410 (Command_ReleaseHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C00526FC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0054898 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0055AB8 (Controller_SetDeviceDescription.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0059098 (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C00596B0 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x1C00597B8 (Interrupter_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C0059BF0 (Interrupter_PrepareInterrupter.c)
 *     Register_ParseCapabilityRegister @ 0x1C005A510 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C005ABEC (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C005B498 (RootHub_PrepareHardware.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C005D618 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x1C005F0E0 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C005F1D0 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C005F27C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
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
