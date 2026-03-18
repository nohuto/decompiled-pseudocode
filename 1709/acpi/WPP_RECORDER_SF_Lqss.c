/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x1C0006AC0
 * Callers:
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0001728 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0001810 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     ACPIInitStartDevice @ 0x1C0001AF4 (ACPIInitStartDevice.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0005B30 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C0005F50 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C000FCCC (ACPIWakeEnableDisableAsync.c)
 *     ACPIDetectDockDevices @ 0x1C0010748 (ACPIDetectDockDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0010900 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0010B84 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C00124D0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C00125F0 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0012820 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0012900 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0012AD0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0013EF0 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C00140D0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00142A0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0014530 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0014680 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0014840 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0014940 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001CFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D460 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001D720 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001D9D0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001DBA0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001E390 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C001EB90 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C001EC80 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001ED80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C001EF00 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C001F1C0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001F30C (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C00258BC (ACPIInternalSetDeviceInterface.c)
 *     ACPICMButtonStartWorker @ 0x1C0025930 (ACPICMButtonStartWorker.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0025DA0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0025F20 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIInitDosDeviceName @ 0x1C00271F8 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0027F30 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C0028B30 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0029090 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessorExtension @ 0x1C00293D8 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002A2B0 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildDockExtension @ 0x1C0042DA4 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0043ED0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C0044100 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C00441C0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C00446FC (ACPIBuildWakeEventDeviceContext.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C0046C00 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMLidWorker @ 0x1C0047060 (ACPICMLidWorker.c)
 *     OSNotifyDeviceWake @ 0x1C00522CC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0052500 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x1C005A400 (ACPIWakeDisableAsync.c)
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008639C (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0086D20 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIThermalStartDevice @ 0x1C0092740 (ACPIThermalStartDevice.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C0094C70 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPISystemPowerProcessSxD @ 0x1C0095060 (ACPISystemPowerProcessSxD.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C0095B90 (ACPIBusIrpQueryBusInformation.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C009E210 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00A014C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C00A04E0 (ACPIBusIrpQueryBusInformationEIO.c)
 *     ACPIFanStartDevice @ 0x1C00A1DB0 (ACPIFanStartDevice.c)
 *     ACPIDispatchAddDevice @ 0x1C00AFDB0 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
  return WppAutoLogTrace(a1, a2, a3, a5, v24, &a6, 4LL, &a7, 8LL, v12, v19, v10, v18, 0LL);
}
