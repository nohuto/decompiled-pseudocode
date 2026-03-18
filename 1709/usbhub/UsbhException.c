/*
 * XREFs of UsbhException @ 0x1C004FE34
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00015A0 (UsbhPdoSetD0_Finish.c)
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0003480 (UsbhFdoD0Worker_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0003700 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C00050E0 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C000550C (UsbhFdoColdStartCheckPort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C000559C (UsbhCheckHubPowerStatus.c)
 *     UsbhSshResumeUpstream @ 0x1C00059F4 (UsbhSshResumeUpstream.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0007280 (UsbhFdoColdStartPdo.c)
 *     UsbhResumeSuspendedPort @ 0x1C000784C (UsbhResumeSuspendedPort.c)
 *     UsbhBusSuspend_Action @ 0x1C0007D9C (UsbhBusSuspend_Action.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C00082E0 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C0008390 (UsbhFdoPnp_StartDevice.c)
 *     UsbhPortConnect @ 0x1C0009460 (UsbhPortConnect.c)
 *     UsbhCreateDevice @ 0x1C0009764 (UsbhCreateDevice.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0009B18 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C000E060 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhBusIfAddDevice @ 0x1C0014A30 (UsbhBusIfAddDevice.c)
 *     UsbhHubProcessIsr @ 0x1C0014D30 (UsbhHubProcessIsr.c)
 *     UsbhSyncPowerOnPorts @ 0x1C00156B0 (UsbhSyncPowerOnPorts.c)
 *     UsbhGetBusInterface @ 0x1C0016080 (UsbhGetBusInterface.c)
 *     UsbhSetHubRemoteWake @ 0x1C0017278 (UsbhSetHubRemoteWake.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0017A10 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C0017C0C (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhFinishStart @ 0x1C0017D60 (UsbhFinishStart.c)
 *     UsbhHubIsr @ 0x1C00187D0 (UsbhHubIsr.c)
 *     UsbhInitializeDevice @ 0x1C0018F5C (UsbhInitializeDevice.c)
 *     UsbhResetPort @ 0x1C0019070 (UsbhResetPort.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C001A000 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001BCF4 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001BED0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhCheckHubErrata @ 0x1C002067C (UsbhCheckHubErrata.c)
 *     UsbhCheckDeviceErrata @ 0x1C0022388 (UsbhCheckDeviceErrata.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0022930 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetDeviceInformation @ 0x1C0022A08 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0023164 (UsbhSyncSuspendPdoPort.c)
 *     UsbhGetLanguageIdString @ 0x1C00232DC (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00234F4 (UsbhGetSerialNumber.c)
 *     UsbhConfigureUsbHub @ 0x1C0023AC0 (UsbhConfigureUsbHub.c)
 *     UsbhQueryHubState @ 0x1C0024330 (UsbhQueryHubState.c)
 *     UsbhGetStatus @ 0x1C00244B4 (UsbhGetStatus.c)
 *     UsbhGetHubClassDescriptor @ 0x1C0026554 (UsbhGetHubClassDescriptor.c)
 *     UsbhSuspendPort @ 0x1C0026A48 (UsbhSuspendPort.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0026EB4 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0027640 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhGetProductIdString @ 0x1C00287E8 (UsbhGetProductIdString.c)
 *     UsbhValidateSerialNumberString @ 0x1C0028B2C (UsbhValidateSerialNumberString.c)
 *     UsbhSetPortIndicator @ 0x1C0028D88 (UsbhSetPortIndicator.c)
 *     UsbhGetMsOsContainerID @ 0x1C00291BC (UsbhGetMsOsContainerID.c)
 *     UsbhFdoDeviceControl @ 0x1C003B620 (UsbhFdoDeviceControl.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C003C790 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x1C003CAA4 (UsbhSetPortPower.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E7CC (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C003EB40 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003ED40 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F2AC (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C003F844 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041ECC (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C00434E8 (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C0043BCC (UsbhDisablePort.c)
 *     UsbhGetBillboardInfo @ 0x1C0043F7C (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0044560 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C00448BC (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumePort @ 0x1C0045104 (UsbhSyncResumePort.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C00468E4 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046A38 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C0047744 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C0048750 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048EBC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C00491D4 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C0049424 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004969C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0049938 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0049BA0 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049FFC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004A310 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004A5EC (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004A8A4 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004AB68 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004AE24 (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C004B244 (UsbhIoctlValidateParameters.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004C7F0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhHandleOvercurrent @ 0x1C00515E0 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C0051820 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0051900 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x1C0051E50 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C0052250 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C0052560 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C0052760 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0052CC0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0002284 (UsbhQueueWorkItemEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhReferenceListAdd @ 0x1C0023920 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C00262E4 (UsbhReferenceListRemove.c)
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhExceptionTrace @ 0x1C0050120 (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C0050400 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C00504EC (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C00591A4 (UsbhEtwLogHubException.c)
 */

void __fastcall UsbhException(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10)
{
  int v11; // esi
  _DWORD *v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r15
  int v19; // eax
  unsigned __int16 v20; // si
  unsigned int v21; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v23; // rbx
  char *v24; // rcx
  unsigned int v25; // ecx
  _OWORD *v26; // rdx
  __int64 v27; // rax
  _OWORD *v28; // rax
  __int64 ExceptionDispatch; // [rsp+48h] [rbp-40h]
  unsigned int v33; // [rsp+D8h] [rbp+50h]

  v11 = a2;
  v14 = FdoExt(a1);
  v15 = -1LL;
  ExceptionDispatch = UsbhGetExceptionDispatch(a1, a3);
  v16 = -1LL;
  v17 = *(_QWORD *)(ExceptionDispatch + 8);
  do
    ++v16;
  while ( *(_BYTE *)(v17 + v16) );
  UsbhEtwLogHubException(a1, v11, a3, a6, a7, v17, v16 + 1);
  v18 = 16LL;
  if ( a10 )
  {
    v19 = v14[640];
    if ( (v19 & 0x10) != 0 )
      return;
    v14[640] = v19 | 0x10;
  }
  v20 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v20 = 4096;
  Log(a1, 128, 1751480369, (__int64)a4, v20);
  if ( (v14[640] & 0x2000) != 0 )
  {
    do
      ++v15;
    while ( a8[v15] );
    v21 = v15 + 1;
    v33 = v21 + v20 + 600;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v33, 0x42554855u);
    v23 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v21 + v20 + 600);
      v23[1] = v33;
      if ( (int)UsbhReferenceListAdd(a1, (__int64)v23, 1381516648) < 0 )
      {
LABEL_23:
        ExFreePoolWithTag(v23, 0);
        return;
      }
      *v23 = 1381516648;
      *((_QWORD *)v23 + 1) = a1;
      *((_WORD *)v23 + 16) = v20;
      if ( v20 )
      {
        *((_QWORD *)v23 + 5) = v23 + 150;
        memmove(v23 + 150, a4, v20);
      }
      v24 = (char *)v23 + v20 + 600;
      *((_QWORD *)v23 + 74) = v24;
      memmove(v24, a8, v21);
      v23[146] = a9;
      v23[6] = a7;
      v23[7] = a6;
      v23[4] = a3;
      *((_WORD *)v23 + 10) = a2;
      *((_QWORD *)v23 + 8) = MEMORY[0xFFFFF78000000014];
      if ( *((_QWORD *)v14 + 111) )
      {
        v25 = v14[220];
        v26 = v23 + 18;
        do
        {
          v27 = v14[221] & v25;
          v25 = v27 + 1;
          v28 = (_OWORD *)(*((_QWORD *)v14 + 111) + 32 * v27);
          *v26 = *v28;
          v26 += 2;
          *(v26 - 1) = v28[1];
          --v18;
        }
        while ( v18 );
      }
      UsbhExceptionTrace(a1, v23, ExceptionDispatch);
      if ( !KeGetCurrentIrql() && !*(_QWORD *)(ExceptionDispatch + 16) )
      {
        UsbhExceptionWorker(a1, a2, v23);
        return;
      }
      if ( (UsbhQueueWorkItemEx(a1, 1u, (int)UsbhExceptionWorker, (__int64)v23, a2, 1230469221, 0LL) & 0xC0000000) == 0xC0000000 )
      {
        UsbhReferenceListRemove(a1, (__int64)v23);
        goto LABEL_23;
      }
    }
  }
}
