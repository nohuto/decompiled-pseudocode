/*
 * XREFs of HUBSM_AddEvent @ 0x1C0009C48
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0002B40 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002DBC (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003008 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0003114 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003410 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C00055C0 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C0006400 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C000655C (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C00069F0 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C0006B60 (HUBPARENT_ResetHubComplete.c)
 *     HUBPARENT_ResetHub @ 0x1C0006C80 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0006EA0 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0007048 (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_QueueingPortStatusChangeEvents @ 0x1C0007A90 (HUBHSM_QueueingPortStatusChangeEvents.c)
 *     HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0007C60 (HUBHSM_ResettingInterruptPipeOnFailure.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C0007E10 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend @ 0x1C00082E0 (HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C00083F0 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C0008500 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0008630 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C0008A80 (HUBHSM_SettingHubDepth.c)
 *     HUBSM_AddHsmEvent @ 0x1C0008E20 (HUBSM_AddHsmEvent.c)
 *     HUBSM_AddPsm20Event @ 0x1C0008E40 (HUBSM_AddPsm20Event.c)
 *     HUBSM_AddDsmEvent @ 0x1C0008E60 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000ABD0 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000AE30 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000B180 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000B600 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000D828 (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     HUBMUX_QueueStopToAllPSMs @ 0x1C000D8E4 (HUBMUX_QueueStopToAllPSMs.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x1C000D988 (HUBMUX_AcquirePortPowerReference.c)
 *     HUBMUX_ReleasePortPowerReference @ 0x1C000D9D4 (HUBMUX_ReleasePortPowerReference.c)
 *     HUBMUX_ReleaseResetReference @ 0x1C000DA70 (HUBMUX_ReleaseResetReference.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000DB90 (HUBMUX_ReEnableInterruptTransfer.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000DC20 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000DD88 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000DDFC (HUBMUX_QueuePowerDownEventToDSMs.c)
 *     HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x1C000E01C (HUBMUX_QueueStopAfterSuspendToAllDSMs.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000E280 (HUBMUX_QueuePowerUpEventToDSMs.c)
 *     HUBMUX_UnregisterWithHSM @ 0x1C000E494 (HUBMUX_UnregisterWithHSM.c)
 *     HUBMUX_AcquireDevicePowerReference @ 0x1C000E5F0 (HUBMUX_AcquireDevicePowerReference.c)
 *     HUBMUX_ReleaseDevicePowerReference @ 0x1C000E670 (HUBMUX_ReleaseDevicePowerReference.c)
 *     HUBMUX_AckStopAfterSuspend @ 0x1C000E6F0 (HUBMUX_AckStopAfterSuspend.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0011DE0 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0013D3C (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C0014044 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00141E0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C00152C0 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C00154A0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0015850 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_PowerSettingCallback @ 0x1C0016270 (HUBPDO_PowerSettingCallback.c)
 *     HUBPDO_NoPingResponse @ 0x1C0016F50 (HUBPDO_NoPingResponse.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C0019A20 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0019BA0 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C001AF20 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C001B220 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C001B2B0 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x1C001B340 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C001B3D0 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C001B4B0 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1C001BD50 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1C001BEA0 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x1C001BF50 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C001C020 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x1C001C5E0 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C001D0A0 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C001D190 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C001D700 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C001D900 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C001DD50 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x1C001DDE0 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDSM_EnablingLTM @ 0x1C001E220 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C001E300 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C001E690 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C001E7A0 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C001E860 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C001E920 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C001EB90 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C001EE40 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001F594 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001FA3C (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001FFA8 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1C00206D0 (HUBUCX_GetRootHubInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C00207A4 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete @ 0x1C00209A0 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0020A34 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x1C0020DD0 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C0020E64 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C0021220 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctlComplete @ 0x1C00214E0 (HUBUCX_UpdateHubInformationUsingUCXIoctlComplete.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C00215C4 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_ClientRequestCompleteFromUCX @ 0x1C0021DF0 (HUBUCX_ClientRequestCompleteFromUCX.c)
 *     HUBUCX_ForwardRequestToUCX @ 0x1C0021E38 (HUBUCX_ForwardRequestToUCX.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C00223E0 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C00231E0 (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C002333C (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C00233E4 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C00234BC (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x1C0023538 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C00235B4 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C0023688 (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C0023D60 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C0023E40 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C0023F04 (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C0023F94 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C0024090 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C0024E2C (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C0025B1C (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C0025D80 (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C0025E70 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C0025FA4 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBMISC_HubEventTimer @ 0x1C0026D10 (HUBMISC_HubEventTimer.c)
 *     HUBMISC_DsmEventTimer @ 0x1C0026D30 (HUBMISC_DsmEventTimer.c)
 *     HUBMISC_AttachDevice @ 0x1C0028F88 (HUBMISC_AttachDevice.c)
 *     HUBMISC_DetachDevice @ 0x1C0029008 (HUBMISC_DetachDevice.c)
 *     HUBMISC_ReAttachDevice @ 0x1C0029060 (HUBMISC_ReAttachDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C00094FC (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_RunStateMachine @ 0x1C000A068 (HUBSM_RunStateMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBSM_AddEvent(__int64 a1, int a2)
{
  KSPIN_LOCK *v2; // r15
  KIRQL v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 v8; // cl
  char v9; // r10
  unsigned __int8 i; // dl
  int v11; // r9d
  __int64 v12; // rax
  char j; // dl
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  PWDF_DRIVER_GLOBALS v18; // rcx
  __int64 v19; // rax
  KIRQL v20; // [rsp+58h] [rbp+10h] BYREF

  v2 = (KSPIN_LOCK *)(a1 + 840);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v6 = *(unsigned __int8 *)(a1 + 833);
  LOBYTE(v7) = v5;
  v20 = v5;
  *(_DWORD *)(a1 + 4 * v6 + 768) = a2;
  *(_BYTE *)(a1 + 833) = (*(_BYTE *)(a1 + 833) + 1) & 0xF;
  if ( a2 == 3039 || a2 == 3043 || a2 == 4055 || a2 == 4059 )
  {
    v8 = *(_BYTE *)(a1 + 948);
    v9 = 0;
    for ( i = v8; i != *(_BYTE *)(a1 + 949); i = (i + 1) & 0xF )
    {
      v11 = *(_DWORD *)(a1 + 4LL * i + 884);
      if ( v11 == a2 )
      {
        v9 = 1;
      }
      else
      {
        v12 = v8;
        v8 = (v8 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v12 + 884) = v11;
      }
    }
    for ( j = v8; j != *(_BYTE *)(a1 + 949); *(_DWORD *)(a1 + 4 * v14 + 884) = 1000 )
    {
      v14 = j & 0xF;
      j = (j + 1) & 0xF;
    }
    *(_BYTE *)(a1 + 949) = v8;
    if ( v9 )
    {
      KeReleaseSpinLock(v2, v7);
      LOBYTE(v7) = KeAcquireSpinLockRaiseToDpc(v2);
      v20 = v7;
    }
  }
  if ( *(_BYTE *)(a1 + 1048) )
  {
    if ( a2 == 1002 )
    {
      *(_BYTE *)(a1 + 1048) = 0;
      v15 = (unsigned int)HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
LABEL_20:
      HUBSM_RunStateMachine(a1, v15, &v20, 0LL);
      LOBYTE(v7) = v20;
      goto LABEL_21;
    }
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
    *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
  }
  else
  {
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
    *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
    if ( !*(_BYTE *)(a1 + 848) )
    {
      v16 = WdfFunctions_01015;
      v17 = *(_QWORD *)(a1 + 960);
      v18 = WdfDriverGlobals;
      *(_BYTE *)(a1 + 848) = 1;
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v16 + 1632))(v18, v17, v7);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v19,
        "State Machine Tag",
        1154LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      v15 = 1000LL;
      goto LABEL_20;
    }
  }
LABEL_21:
  KeReleaseSpinLock(v2, v7);
}
