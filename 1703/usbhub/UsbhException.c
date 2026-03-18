/*
 * XREFs of UsbhException @ 0x1C004F144
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C0002760 (UsbhSshResumeDownstream.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0003840 (UsbhFdoD0Worker_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0003AC0 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C00056B0 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C0005DB0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C0005E5C (UsbhCheckHubPowerStatus.c)
 *     UsbhSetHubRemoteWake @ 0x1C0006294 (UsbhSetHubRemoteWake.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0006568 (UsbhPdoSetD0_Finish.c)
 *     UsbhSshResumeUpstream @ 0x1C0006698 (UsbhSshResumeUpstream.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C00072E8 (UsbhFdoColdStartPdo.c)
 *     UsbhResumeSuspendedPort @ 0x1C00088C8 (UsbhResumeSuspendedPort.c)
 *     UsbhBusSuspend_Action @ 0x1C0008F08 (UsbhBusSuspend_Action.c)
 *     UsbhFinishStart @ 0x1C0009190 (UsbhFinishStart.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C000F560 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C00117A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     UsbhBusIfAddDevice @ 0x1C0014870 (UsbhBusIfAddDevice.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     UsbhSyncPowerOnPorts @ 0x1C00155A0 (UsbhSyncPowerOnPorts.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     UsbhGetBusInterface @ 0x1C0016110 (UsbhGetBusInterface.c)
 *     UsbhHubIsr @ 0x1C0016DB0 (UsbhHubIsr.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0017FD8 (UsbhGetHubDeviceInformation.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C0018D80 (UsbhFdoPnp_StartDevice.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0018FE4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 *     UsbhQueryChange @ 0x1C001A4D4 (UsbhQueryChange.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001AD08 (UsbhGetHubClassDescriptor.c)
 *     UsbhConfigureUsbHub @ 0x1C001AE40 (UsbhConfigureUsbHub.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001B090 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001B4B0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhQueryHubState @ 0x1C001E6AC (UsbhQueryHubState.c)
 *     UsbhCheckHubErrata @ 0x1C001E938 (UsbhCheckHubErrata.c)
 *     UsbhResetPort @ 0x1C001ED40 (UsbhResetPort.c)
 *     UsbhCheckDeviceErrata @ 0x1C001F7BC (UsbhCheckDeviceErrata.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C001FA08 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetDeviceInformation @ 0x1C001FAE0 (UsbhGetDeviceInformation.c)
 *     UsbhPortConnect @ 0x1C0021330 (UsbhPortConnect.c)
 *     UsbhCreateDevice @ 0x1C00215F4 (UsbhCreateDevice.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C00221B8 (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0022228 (UsbhGetSerialNumber.c)
 *     UsbhSuspendPort @ 0x1C0026320 (UsbhSuspendPort.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C0026538 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetStatus @ 0x1C0026B60 (UsbhGetStatus.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0026E24 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhInitializeDevice @ 0x1C0026FA0 (UsbhInitializeDevice.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0027830 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C00278DC (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0027CA0 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0027E70 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhFdoDeviceControl @ 0x1C003A160 (UsbhFdoDeviceControl.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C003B410 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x1C003B724 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x1C003CB54 (UsbhSetPortIndicator.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003D91C (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C003DC90 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003DE90 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003E3FC (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhGetMsOsContainerID @ 0x1C003F4EC (UsbhGetMsOsContainerID.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C00426A8 (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C0042D8C (UsbhDisablePort.c)
 *     UsbhGetBillboardInfo @ 0x1C004313C (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043720 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C0043A7C (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumePort @ 0x1C00442D4 (UsbhSyncResumePort.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B18 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C78 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C00468C4 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C00478CC (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048344 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C0048594 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004880C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA8 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D10 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004916C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049480 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004975C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049A14 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049CD8 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049F94 (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A3B4 (UsbhIoctlValidateParameters.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B980 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhHandleOvercurrent @ 0x1C0050820 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C0050A60 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050B40 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x1C0051090 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C0051490 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C00517A0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C00519A0 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0051F00 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 *     UsbhGetProductIdString @ 0x1C0052E10 (UsbhGetProductIdString.c)
 *     UsbhValidateSerialNumberString @ 0x1C00548E0 (UsbhValidateSerialNumberString.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C00022F4 (UsbhQueueWorkItemEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhReferenceListAdd @ 0x1C001BF40 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C0021BB0 (UsbhReferenceListRemove.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     UsbhExceptionTrace @ 0x1C004F430 (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C004F730 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C004F81C (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C0059150 (UsbhEtwLogHubException.c)
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
