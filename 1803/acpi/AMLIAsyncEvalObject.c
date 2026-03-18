/*
 * XREFs of AMLIAsyncEvalObject @ 0x1C004321C
 * Callers:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000C6C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000C860 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000D090 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C000ED50 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C000EF70 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F370 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000FB70 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0010660 (ACPIBuildProcessThermalZoneDep.c)
 *     EnableDisableCMOSRegions @ 0x1C001791C (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001C6B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C001C920 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C001CAC0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001CE80 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001D28C (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C001D980 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001DBA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C001E5C0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C001E760 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C00225DC (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C0024034 (ACPIFanLoop.c)
 *     ACPIInternalEvaluateOST @ 0x1C0029B5C (ACPIInternalEvaluateOST.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002A900 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 *     ACPIWakeDisableAsync @ 0x1C004066C (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0040BA4 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0041080 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0057900 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0057B00 (LinkNodepRunSrsWorker.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C0079AB4 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1C007DF7C (EnableDisableIPMIRegions.c)
 *     RegisterOperationRegionHandler @ 0x1C0080D54 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 * Callees:
 *     GetBaseObject @ 0x1C0002BAC (GetBaseObject.c)
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     Simulator_Free_Arguments @ 0x1C00447B8 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0044B44 (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0044EC4 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 AMLIAsyncEvalObject(__int64 *a1, void *a2, unsigned int a3, ...)
{
  __int64 v3; // rbx
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 BaseObject; // rax
  __int64 v11; // rsi
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v14; // r8
  void *v15; // rbx
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF
  va_list va1; // [rsp+A0h] [rbp+50h]
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF
  va_list va2; // [rsp+A8h] [rbp+58h]
  va_list va3; // [rsp+B0h] [rbp+60h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  v3 = 0LL;
  v16 = 0LL;
  dword_1C00677B8 = 0;
  v17 = 0LL;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
    v3 = v17;
  }
  v7 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_8;
  if ( a2 )
    memset(a2, 0, 0x28uLL);
  result = Simulator_Pre_AsyncEvalObject(
             v7,
             (_DWORD)a2,
             a3,
             (unsigned int)va,
             (__int64)&v16,
             (__int64)va1,
             (__int64)va2,
             (__int64)&v17);
  if ( !(_DWORD)result )
  {
    v3 = v17;
LABEL_8:
    if ( (*(_BYTE *)(v7 + 64) & 4) != 0 )
    {
      v9 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      BaseObject = GetBaseObject(v7);
      v11 = BaseObject;
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(BaseObject);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v14 = &unk_1C005B1F0;
        v15 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v14) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v14, 0, 0LL);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        v3 = v17;
      }
      v9 = AsyncEvalObject(v11, (__int64)a2, a3, v18, v20, v22, 1);
      DereferenceObjectEx(v11);
      if ( v9 == 32772 )
        v9 = 259;
    }
    if ( g_SimulatorCallbackObject && v9 != 259 )
    {
      if ( v3 )
      {
        v9 = Simulator_TestNotifyRet((PVOID)v3);
        if ( (unsigned int)(*(_DWORD *)(v3 + 4) - 1) <= 2 )
          Simulator_Free_Arguments(*(unsigned int *)(v3 + 32), *(_QWORD *)(v3 + 40));
        ExFreePoolWithTag((PVOID)v3, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v9;
  }
  return result;
}
