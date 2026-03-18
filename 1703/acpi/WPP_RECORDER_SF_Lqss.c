/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x1C000D1D0
 * Callers:
 *     ACPIBuildThermalZoneExtension @ 0x1C0006658 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessorExtension @ 0x1C0006990 (ACPIBuildProcessorExtension.c)
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C0007478 (ACPIInitDosDeviceName.c)
 *     ACPIDetectFilterDevices @ 0x1C0007DFC (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008074 (ACPIDetectPdoDevices.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0008EB0 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C000ABA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C000AFC0 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000BD60 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000BE90 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000C150 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C430 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C000C600 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C000D310 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000D3D0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000E1B0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000E610 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000E7E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000E8E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000E9F0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000EAF0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000ECB0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000ED90 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000EEA0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000F160 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIDetectDockDevices @ 0x1C00132C4 (ACPIDetectDockDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00135B0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C001EBB0 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C001ED90 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00205C0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002073C (ACPIWakeEnableDisableAsync.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C0022F58 (ACPIInternalSetDeviceInterface.c)
 *     ACPICMButtonStartWorker @ 0x1C0023720 (ACPICMButtonStartWorker.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0025FC0 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C00276C4 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C0027970 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C0027A90 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0027CC0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0027DA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0027F70 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028420 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildDockExtension @ 0x1C00433E4 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0044510 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C0044740 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0044800 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C0044D3C (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0045B34 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C00474B0 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMLidWorker @ 0x1C0047920 (ACPICMLidWorker.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0048C20 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     OSNotifyDeviceWake @ 0x1C005188C (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051AC0 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x1C005998C (ACPIWakeDisableAsync.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C008E200 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008E730 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C008EB70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIThermalStartDevice @ 0x1C00919A0 (ACPIThermalStartDevice.c)
 *     ACPISystemPowerProcessSxD @ 0x1C0093400 (ACPISystemPowerProcessSxD.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C00938F0 (ACPIBusIrpQueryBusInformation.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C009B220 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009D17C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C009D510 (ACPIBusIrpQueryBusInformationEIO.c)
 *     ACPIFanStartDevice @ 0x1C009EDC0 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 *     ACPIDispatchAddDevice @ 0x1C00AD890 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Lqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v10; // rsi
  const char *v12; // rdi
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  char *v21; // r10
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+70h] [rbp-28h]
  __int64 v26; // [rsp+78h] [rbp-20h]

  v10 = a9;
  v12 = a8;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v21 = (char *)WPP_GLOBAL_Control + 80 * v14;
    if ( (unsigned __int8)v21[41] >= a2 )
    {
      if ( a9 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( a9[v22] );
      }
      if ( a8 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( a8[v23] );
      }
      pfnWppTraceMessage(*((_QWORD *)v21 + 3), 43LL, a5, a4, &a6, 4LL, &a7);
    }
  }
  if ( v10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v10[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
    v10 = "NULL";
  }
  if ( v12 )
  {
    do
      ++v15;
    while ( v12[v15] );
    v19 = v15 + 1;
  }
  else
  {
    v19 = 5LL;
    v12 = "NULL";
  }
  LOWORD(v24) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v24, &a6, 4LL, &a7, 8LL, v12, v19, v10, v18, 0LL, v25, v26);
}
