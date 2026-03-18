/*
 * XREFs of WPP_RECORDER_SF_Dqss @ 0x1C00173F8
 * Callers:
 *     ACPIBuildDockExtension @ 0x1C000AEF4 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C000C2A0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C000C3E0 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000C9F0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C000CC90 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000CF60 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000D090 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000D1E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000D400 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000D6A0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000D820 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000DA30 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C000DB80 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000E360 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000E650 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C000E860 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C000F260 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F370 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C000F4D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000F660 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C000F910 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000FA10 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000FB70 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C000FEA8 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0010200 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0010660 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C00108E0 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C00109A0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0010B10 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildProcessorExtension @ 0x1C0010C6C (ACPIBuildProcessorExtension.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C001192C (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C0011C80 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0013AA8 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonNotify @ 0x1C0016464 (ACPICMButtonNotify.c)
 *     ACPICMButtonStartWorker @ 0x1C00168B0 (ACPICMButtonStartWorker.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C0016E60 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C0016F58 (ACPICMExperienceButtonHandleEvent.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C0017010 (ACPICMLidPowerStateCallBack.c)
 *     ACPICMLidWorker @ 0x1C00172C0 (ACPICMLidWorker.c)
 *     ACPIDetectDockDevices @ 0x1C0017A8C (ACPIDetectDockDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0019BF0 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIFanEvent @ 0x1C0023C30 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C0023CF0 (ACPIFanFSTCallback.c)
 *     ACPIFanPowerCallback @ 0x1C0024300 (ACPIFanPowerCallback.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0028364 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C0028768 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIInternalEvaluateOST @ 0x1C0029B5C (ACPIInternalEvaluateOST.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C002A384 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C002A4D4 (ACPIInternalSetDeviceInterface.c)
 *     OSNotifyDeviceWake @ 0x1C002EECC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C002F100 (OSNotifyDeviceWakeByGPEEvent.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 *     ACPIProcessorStartDevice @ 0x1C0036300 (ACPIProcessorStartDevice.c)
 *     ACPIRootEvent @ 0x1C00392D0 (ACPIRootEvent.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0039BF8 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C0039F94 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C003A1F0 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIWakeDisableAsync @ 0x1C004066C (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0040BA4 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0041080 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C00417F8 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0073030 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C0075E84 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C0076A40 (ACPIBusIrpQueryBusInformation.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C0076B50 (ACPIBusIrpQueryBusInformationEIO.c)
 *     ACPIFanStartDevice @ 0x1C007B250 (ACPIFanStartDevice.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C007C980 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C00817A4 (ACPIProcessorGetInitialApicId.c)
 *     ACPISystemPowerProcessSxD @ 0x1C0088A00 (ACPISystemPowerProcessSxD.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 *     ACPIDispatchAddDevice @ 0x1C0099120 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Dqss(
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
  const char *v10; // rdi
  const char *v12; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  int v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+70h] [rbp-28h]
  __int64 v30; // [rsp+78h] [rbp-20h]
  __int64 v31; // [rsp+A0h] [rbp+8h]

  v31 = a1;
  v10 = a9;
  v12 = a8;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
  {
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a9[v19] );
      v18 = v19 + 1;
    }
    v20 = a9;
    if ( !a9 )
      v20 = "NULL";
    if ( a8 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a8[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a8;
    if ( !a8 )
      v23 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v14),
      43LL,
      a5,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      v23,
      v22,
      v20,
      v18,
      0LL);
    a1 = v31;
  }
  if ( v10 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v10[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    do
      ++v15;
    while ( v12[v15] );
    v26 = v15 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v28) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v28, &a6, 4LL, &a7, 8LL, v12, v26, v10, v25, 0LL, v29, v30);
}
