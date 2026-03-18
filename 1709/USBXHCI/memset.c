/*
 * XREFs of memset @ 0x1C0008A40
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001010 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C0001150 (Etw_EnableCallback.c)
 *     Etw_DeviceListRundown @ 0x1C00013F0 (Etw_DeviceListRundown.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002D70 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0005090 (RootHub_UcxEvtInterruptTransfer.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0006190 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     XilCoreCommand_Initialize @ 0x1C0006C98 (XilCoreCommand_Initialize.c)
 *     RootHub_UcxEvtGetHubStatus @ 0x1C0006E10 (RootHub_UcxEvtGetHubStatus.c)
 *     XilCommand_AllocateSecureResources @ 0x1C000EB44 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C000ECE0 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C000EE30 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C000EFA0 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C000F0AC (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000F1B8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C000F3D0 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C000F4E0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C000F5FC (XilCommand_SendRequestToRingDoorbell.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C000F878 (CommonBuffer_AcquireShadowBuffer.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0010B30 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_TelemetryReport @ 0x1C00126B4 (Controller_TelemetryReport.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0013960 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtCleanupCallback @ 0x1C0014220 (Controller_WdfEvtCleanupCallback.c)
 *     Device_CheckIsSecureDevice @ 0x1C001482C (Device_CheckIsSecureDevice.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0016290 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C00163BC (DeviceSlot_D0EntryCleanupState.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C00165B8 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0016744 (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0016868 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C001699C (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0016AAC (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016BB8 (XilDeviceSlot_PrepareHardware.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0016D00 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0016E14 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016F60 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00170A0 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0017628 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C001778C (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C0017958 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C0017A90 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0017B5C (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0017D2C (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017FE0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0018368 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C00189B0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0018BC0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0019850 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001A69C (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C001AAF4 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C001ABA0 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C001ACE8 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C001ADC4 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C001AFAC (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B308 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BBE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C001C340 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C001C520 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001C8D0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CB80 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_Initialize @ 0x1C001E9B0 (Interrupter_Initialize.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C00208C0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C0020B30 (RootHub_UcxEvtGet20PortInfo.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0020D40 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0020F90 (RootHub_UcxEvtGetInfo.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0021100 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtSetHubFeature @ 0x1C0021430 (RootHub_UcxEvtSetHubFeature.c)
 *     TR_AcquireSecureSegments @ 0x1C0022054 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C00228E0 (TR_CreateSecureObject.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C0022BB4 (TR_EnableForwardProgress_Internal.c)
 *     TR_FreeSecureTransferSegments @ 0x1C0023120 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferRing @ 0x1C0023440 (TR_InitializeTransferRing.c)
 *     TR_InitializeTransferSegment @ 0x1C00234B4 (TR_InitializeTransferSegment.c)
 *     TR_ReleaseSegments @ 0x1C002377C (TR_ReleaseSegments.c)
 *     TR_SendCompleteStageRequest @ 0x1C0023860 (TR_SendCompleteStageRequest.c)
 *     Control_TransferData_Initialize @ 0x1C002518C (Control_TransferData_Initialize.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0026610 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtIoDefault @ 0x1C00267A0 (Control_WdfEvtIoDefault.c)
 *     Isoch_Stage_Initialize @ 0x1C002ADF4 (Isoch_Stage_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1C002B924 (Isoch_TransferData_Initialize.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C002C420 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_Stage_Initialize @ 0x1C0030938 (Bulk_Stage_Initialize.c)
 *     Bulk_TransferData_Initialize @ 0x1C00314E0 (Bulk_TransferData_Initialize.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C00331F8 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C003331C (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0033418 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     UsbDevice_DisableCompletion @ 0x1C0033A70 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0033DA0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0034130 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C0034F0C (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C00352C0 (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C00356A0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0035C70 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0035E30 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C00360C0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00362A0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x1C0036C60 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0036D50 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0037000 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0037250 (UsbDevice_UpdateCompletion.c)
 *     Etw_EndpointListRundown @ 0x1C0038940 (Etw_EndpointListRundown.c)
 *     Crashdump_Initialize @ 0x1C0039200 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C00394FC (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C003A040 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C003B438 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C003B71C (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C003BD88 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C003C664 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C003C9F8 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C003CD3C (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C003CEBC (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C003D198 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C003D678 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C003F594 (DmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C003F708 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_PrepareSecureSectionForDma @ 0x1C003F81C (SecureDmaEnabler_PrepareSecureSectionForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C003F8A4 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureDmaEnabler_Unmap @ 0x1C003F910 (SecureDmaEnabler_Unmap.c)
 *     DynamicLock_Create @ 0x1C003FC00 (DynamicLock_Create.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0040324 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0040E4C (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C00411E0 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     TelemetryData_CreateReport @ 0x1C0041480 (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0041B74 (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0042294 (WerpAllocateAndInitializeSid.c)
 *     Command_Create @ 0x1C0055148 (Command_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C00552D4 (Command_CreateCommandWatchdogTimer.c)
 *     Command_PrepareHardware @ 0x1C00553E0 (Command_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0055618 (CommonBuffer_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0055838 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 *     Controller_CreateSecureObject @ 0x1C00565B8 (Controller_CreateSecureObject.c)
 *     Controller_CreateWdfDevice @ 0x1C0056650 (Controller_CreateWdfDevice.c)
 *     Controller_DestroySecureObject @ 0x1C0056E88 (Controller_DestroySecureObject.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C0056F10 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_ExecuteDSM @ 0x1C0057028 (Controller_ExecuteDSM.c)
 *     Controller_RetrieveAcpiData @ 0x1C0058448 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrievePciData @ 0x1C0058670 (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C00588A8 (Controller_RetrieveUrsData.c)
 *     Controller_SetDeviceDescription @ 0x1C0058B30 (Controller_SetDeviceDescription.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00597D0 (Controller_UpdateIdleTimeout.c)
 *     DeviceSlot_Create @ 0x1C005A574 (DeviceSlot_Create.c)
 *     DriverEntry @ 0x1C005A740 (DriverEntry.c)
 *     WppTraceCallback @ 0x1C005ACD0 (WppTraceCallback.c)
 *     Endpoint_Create @ 0x1C005AF24 (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C005B5F0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C005B850 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     Interrupter_CreateInterrupter @ 0x1C005BBD8 (Interrupter_CreateInterrupter.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C005C5C0 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x1C005C6A0 (Interrupter_PrepareHardware.c)
 *     IoControl_Create @ 0x1C005CD2C (IoControl_Create.c)
 *     Register_Create @ 0x1C005CE90 (Register_Create.c)
 *     Register_CreateSecureObject @ 0x1C005CFE0 (Register_CreateSecureObject.c)
 *     Register_MapSecureMmio @ 0x1C005D0D4 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C005DD6C (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 *     RootHub_Create @ 0x1C005DF44 (RootHub_Create.c)
 *     RootHub_PrepareHardware @ 0x1C005E13C (RootHub_PrepareHardware.c)
 *     TR_Create @ 0x1C005E82C (TR_Create.c)
 *     Control_Initialize @ 0x1C005ED40 (Control_Initialize.c)
 *     Isoch_Initialize @ 0x1C005EF40 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C005F170 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Wmi_Create @ 0x1C005F3FC (Wmi_Create.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C005F560 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     IntelPptFilter_Create @ 0x1C005F5F4 (IntelPptFilter_Create.c)
 *     Counter_Register @ 0x1C005FA6C (Counter_Register.c)
 *     DmaEnabler_Create @ 0x1C005FBCC (DmaEnabler_Create.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C005FDBC (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_Create @ 0x1C005FFAC (SecureDmaEnabler_Create.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C0060104 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0060218 (SecureDmaEnabler_MapMemory.c)
 *     SecureChannel_Create @ 0x1C0060408 (SecureChannel_Create.c)
 *     TelemetryData_pInitWerContext @ 0x1C0060AC4 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
mset20:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto mset20;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0008AFD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}
