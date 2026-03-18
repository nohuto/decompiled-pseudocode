/*
 * XREFs of memset @ 0x1C0002D40
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001010 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C0001150 (Etw_EnableCallback.c)
 *     Etw_DeviceListRundown @ 0x1C00015D0 (Etw_DeviceListRundown.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C000225C (CommonBuffer_AcquireSecureBuffer.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00034FC (Command_D0EntryPostInterruptsEnabled.c)
 *     XilCommand_AllocateSecureResources @ 0x1C0005948 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C0005AE4 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0005C34 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C0005DA4 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0005EB0 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0005FBC (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C00061C8 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C00062D8 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C00063F4 (XilCommand_SendRequestToRingDoorbell.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C0006678 (CommonBuffer_AcquireShadowBuffer.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0007D90 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_TelemetryReport @ 0x1C0009DB4 (Controller_TelemetryReport.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000B0B0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Device_CheckIsSecureDevice @ 0x1C000CD48 (Device_CheckIsSecureDevice.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C000EE34 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000EF60 (DeviceSlot_D0EntryCleanupState.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C000F15C (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C000F2E8 (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C000F40C (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C000F540 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C000F650 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C000F75C (XilDeviceSlot_PrepareHardware.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C000F8A4 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C000F9B8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C000FB04 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C000FC44 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0010290 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C00103F4 (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C00105C4 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C00106FC (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C00107C8 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0010998 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0010C40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0010FC4 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_Enable @ 0x1C0011310 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C00116F0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0011900 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0012588 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C0013388 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C00137E4 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0013890 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C00139DC (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0013ABC (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C0013D2C (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0014088 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0014980 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C00150D0 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C00152D0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0015680 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0015930 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_Initialize @ 0x1C0017878 (Interrupter_Initialize.c)
 *     Interrupter_InitializeForOffload @ 0x1C0017924 (Interrupter_InitializeForOffload.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C001B000 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001B250 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C001C250 (RootHub_UcxEvtGet20PortInfo.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C001C460 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_UcxEvtGetHubStatus @ 0x1C001C6B0 (RootHub_UcxEvtGetHubStatus.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C001C850 (RootHub_UcxEvtGetInfo.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C001C9C0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C001CD00 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C001D540 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetHubFeature @ 0x1C001D8C0 (RootHub_UcxEvtSetHubFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C001D970 (RootHub_UcxEvtSetPortFeature.c)
 *     TR_AcquireSecureSegments @ 0x1C001F8FC (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C0020190 (TR_CreateSecureObject.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C0020470 (TR_EnableForwardProgress_Internal.c)
 *     TR_FreeSecureTransferSegments @ 0x1C00209E0 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferRing @ 0x1C0020CF4 (TR_InitializeTransferRing.c)
 *     TR_InitializeTransferSegment @ 0x1C0020D68 (TR_InitializeTransferSegment.c)
 *     TR_ReleaseSegments @ 0x1C0021108 (TR_ReleaseSegments.c)
 *     TR_SendCompleteStageRequest @ 0x1C00211E4 (TR_SendCompleteStageRequest.c)
 *     Control_TransferData_Initialize @ 0x1C00229FC (Control_TransferData_Initialize.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0023E20 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtIoDefault @ 0x1C0023FB0 (Control_WdfEvtIoDefault.c)
 *     Isoch_Stage_Initialize @ 0x1C0028880 (Isoch_Stage_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1C00293BC (Isoch_TransferData_Initialize.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0029ED0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_Stage_Initialize @ 0x1C002E420 (Bulk_Stage_Initialize.c)
 *     Bulk_TransferData_Initialize @ 0x1C002EFA4 (Bulk_TransferData_Initialize.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0030D50 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C0030E94 (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0030F74 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     UsbDevice_DisableCompletion @ 0x1C0031580 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0031890 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0031C40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C0032ACC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C0032E78 (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0033250 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0033820 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00339E0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0033C50 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0033E10 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x1C0034800 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UcxEvtReset @ 0x1C00348F0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0034BC0 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0034E40 (UsbDevice_UpdateCompletion.c)
 *     Etw_EndpointListRundown @ 0x1C0036520 (Etw_EndpointListRundown.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0036F04 (Wmi_CreateControllerCapabilities.c)
 *     Crashdump_Initialize @ 0x1C00377F0 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0037AF0 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0038650 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C0039A38 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C0039D04 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C003A350 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C003ACB0 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C003B044 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C003B388 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C003B508 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C003B7EC (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C003BCD0 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C003DB34 (DmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C003DCA8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_PrepareSecureSectionForDma @ 0x1C003DDB8 (SecureDmaEnabler_PrepareSecureSectionForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C003DE40 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureDmaEnabler_Unmap @ 0x1C003DEAC (SecureDmaEnabler_Unmap.c)
 *     DynamicLock_Create @ 0x1C003E2B0 (DynamicLock_Create.c)
 *     XilCoreCommand_Initialize @ 0x1C003E6A8 (XilCoreCommand_Initialize.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C003EA34 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C003F548 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C003F978 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     TelemetryData_CreateReport @ 0x1C003FCB0 (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C00403BC (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0040ADC (WerpAllocateAndInitializeSid.c)
 *     Command_Create @ 0x1C0052008 (Command_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C0052194 (Command_CreateCommandWatchdogTimer.c)
 *     Command_PrepareHardware @ 0x1C00522A0 (Command_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C00524D8 (CommonBuffer_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C00526FC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 *     Controller_CreateSecureObject @ 0x1C00534EC (Controller_CreateSecureObject.c)
 *     Controller_CreateWdfDevice @ 0x1C0053594 (Controller_CreateWdfDevice.c)
 *     Controller_DestroySecureObject @ 0x1C0053D60 (Controller_DestroySecureObject.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C0053DE8 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_ExecuteDSM @ 0x1C0053F00 (Controller_ExecuteDSM.c)
 *     Controller_RetrieveAcpiData @ 0x1C00553D4 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrievePciData @ 0x1C00555F4 (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C0055830 (Controller_RetrieveUrsData.c)
 *     Controller_SetDeviceDescription @ 0x1C0055AB8 (Controller_SetDeviceDescription.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0056760 (Controller_UpdateIdleTimeout.c)
 *     DeviceSlot_Create @ 0x1C00575EC (DeviceSlot_Create.c)
 *     DriverEntry @ 0x1C00577D0 (DriverEntry.c)
 *     WppTraceCallback @ 0x1C0057D60 (WppTraceCallback.c)
 *     Endpoint_Create @ 0x1C0057FA8 (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0058670 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C00588D0 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     Interrupter_CreateInterrupter @ 0x1C0058C58 (Interrupter_CreateInterrupter.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C00596B0 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x1C00597B8 (Interrupter_PrepareHardware.c)
 *     IoControl_Create @ 0x1C005A088 (IoControl_Create.c)
 *     Register_Create @ 0x1C005A1EC (Register_Create.c)
 *     Register_CreateSecureObject @ 0x1C005A33C (Register_CreateSecureObject.c)
 *     Register_MapSecureMmio @ 0x1C005A448 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C005AEA0 (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C005B0E0 (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005B15C (Register_WriteSecureMmio.c)
 *     RootHub_Create @ 0x1C005B2A0 (RootHub_Create.c)
 *     RootHub_PrepareHardware @ 0x1C005B498 (RootHub_PrepareHardware.c)
 *     TR_Create @ 0x1C005BBAC (TR_Create.c)
 *     Control_Initialize @ 0x1C005C0E0 (Control_Initialize.c)
 *     Isoch_Initialize @ 0x1C005C2E0 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C005C510 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Wmi_Create @ 0x1C005C7E8 (Wmi_Create.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C005C950 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     IntelPptFilter_Create @ 0x1C005C9E4 (IntelPptFilter_Create.c)
 *     Counter_Register @ 0x1C005CE58 (Counter_Register.c)
 *     DmaEnabler_Create @ 0x1C005CFB8 (DmaEnabler_Create.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C005D1A8 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_Create @ 0x1C005D39C (SecureDmaEnabler_Create.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C005D4F4 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C005D618 (SecureDmaEnabler_MapMemory.c)
 *     SecureChannel_Create @ 0x1C005D808 (SecureChannel_Create.c)
 *     TelemetryData_pInitWerContext @ 0x1C005DEBC (TelemetryData_pInitWerContext.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
