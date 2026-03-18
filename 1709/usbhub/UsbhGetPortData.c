/*
 * XREFs of UsbhGetPortData @ 0x1C000A320
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhSshResumePort @ 0x1C00028AC (UsbhSshResumePort.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0003700 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C00050E0 (UsbhFdoSetD0Cold.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0007030 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_BusReset @ 0x1C00074E8 (UsbhPCE_BusReset.c)
 *     UsbhEnablePortIndicators @ 0x1C0007F00 (UsbhEnablePortIndicators.c)
 *     UsbhPCE_Suspend @ 0x1C0008EE8 (UsbhPCE_Suspend.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0009B18 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0009CB0 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C000A2D8 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     UsbhFinishStart @ 0x1C0017D60 (UsbhFinishStart.c)
 *     UsbhSetPortData @ 0x1C0019AC8 (UsbhSetPortData.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C001FBA0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BC1C (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C970 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C003DAEC (UsbhDisablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C003DC10 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003E000 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003E0A0 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003E170 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E200 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E460 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E5D0 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C003EB40 (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0041194 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C00413FC (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C0041544 (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0041618 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C00416F8 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C00417E0 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C00418D4 (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C00419A8 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0041A7C (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C0041C14 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C0041DD8 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041ECC (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C00436A0 (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0043994 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044E40 (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumePort @ 0x1C0045104 (UsbhSyncResumePort.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C00455C4 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0045744 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C00458DC (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045DDC (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0046020 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046A38 (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C0047B3C (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0049938 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049FFC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004A310 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004AB68 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004BDE0 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004C988 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004EBD8 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C004EE68 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C004F8C0 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C004F930 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C004F9B0 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C004FA30 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C0050760 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C00507F0 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C0056728 (UsbhResetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetPortData(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rdx

  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
        *(_DWORD *)v4 = 1413771367;
        *(_QWORD *)(v4 + 16) = a2;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 24) = 0LL;
      }
    }
  }
  if ( !a2 )
    return 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 > *(unsigned __int8 *)(v5 + 2938) )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 3056);
  if ( !v6 )
    return 0LL;
  v7 = a2;
  v8 = v6 + 2928LL * a2 - 2928;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v9 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v9 = 1044672615;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = v7;
    *(_QWORD *)(v9 + 24) = v8;
  }
  return v8;
}
