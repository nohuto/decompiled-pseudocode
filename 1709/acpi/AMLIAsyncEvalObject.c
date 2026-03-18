/*
 * XREFs of AMLIAsyncEvalObject @ 0x1C001A5F8
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0001960 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0002E90 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0003350 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C0003610 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C0005D20 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C000E7F4 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C000F9D0 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C000FCCC (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0012820 (ACPIBuildProcessThermalZoneDep.c)
 *     EnableDisableCMOSRegions @ 0x1C0013D70 (EnableDisableCMOSRegions.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0014530 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0014940 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C001CB90 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C001D1F0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D460 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001D9D0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIThermalLoopEx @ 0x1C002408C (ACPIThermalLoopEx.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0025DA0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C00439C0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0043BE0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0048CE0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00492B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0049450 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C004C324 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C004DC04 (ACPIFanLoop.c)
 *     ACPIInternalEvaluateOST @ 0x1C004F9C8 (ACPIInternalEvaluateOST.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C004FF00 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005088C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIWakeDisableAsync @ 0x1C005A400 (ACPIWakeDisableAsync.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0063E70 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0064070 (LinkNodepRunSrsWorker.c)
 *     RegisterOperationRegionHandler @ 0x1C008DA20 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0091A00 (ACPIRootInitialize.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C00A0C44 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1C00A2874 (EnableDisableIPMIRegions.c)
 * Callees:
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     GetBaseObject @ 0x1C001AA00 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     Simulator_Free_Arguments @ 0x1C005BDC8 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005C154 (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_TestNotifyRet @ 0x1C005C4D4 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

__int64 AMLIAsyncEvalObject(__int64 *a1, _SLIST_ENTRY *a2, unsigned int a3, ...)
{
  __int64 v3; // rbx
  __int64 v7; // rsi
  __int64 BaseObject; // rax
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v19; // r8
  void *v20; // rbx
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v25; // [rsp+A0h] [rbp+50h] BYREF
  va_list va1; // [rsp+A0h] [rbp+50h]
  __int64 v27; // [rsp+A8h] [rbp+58h] BYREF
  va_list va2; // [rsp+A8h] [rbp+58h]
  va_list va3; // [rsp+B0h] [rbp+60h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  v3 = 0LL;
  v21 = 0LL;
  dword_1C00797B8 = 0;
  v22 = 0LL;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v15, v14, v16);
    v3 = v22;
  }
  v7 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
    memset(a2, 0, 0x28uLL);
  result = Simulator_Pre_AsyncEvalObject(
             v7,
             (_DWORD)a2,
             a3,
             (unsigned int)va,
             (__int64)&v21,
             (__int64)va1,
             (__int64)va2,
             (__int64)&v22);
  if ( !(_DWORD)result )
  {
    v3 = v22;
LABEL_4:
    if ( (*(_BYTE *)(v7 + 64) & 4) != 0 )
    {
      v10 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      BaseObject = GetBaseObject(v7);
      v9 = BaseObject;
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(BaseObject);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v19 = &unk_1C0067B08;
        v20 = ObjectPath;
        if ( ObjectPath )
          LODWORD(v19) = (_DWORD)ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v19, 0, 0LL);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        v3 = v22;
      }
      v10 = AsyncEvalObject(v9, a2, a3, v23, v25, v27, 1);
      DereferenceObjectEx(v9, 0LL, v11, v12);
      if ( v10 == 32772 )
        v10 = 259;
    }
    if ( g_SimulatorCallbackObject && v10 != 259 )
    {
      if ( v3 )
      {
        v10 = Simulator_TestNotifyRet((PVOID)v3);
        if ( (unsigned int)(*(_DWORD *)(v3 + 4) - 1) <= 2 )
          Simulator_Free_Arguments(*(unsigned int *)(v3 + 32), *(_QWORD *)(v3 + 40));
        ExFreePoolWithTag((PVOID)v3, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v10;
  }
  return result;
}
