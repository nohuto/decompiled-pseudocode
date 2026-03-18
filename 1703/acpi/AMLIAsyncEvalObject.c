/*
 * XREFs of AMLIAsyncEvalObject @ 0x1C0022070
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C00078D8 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0009FE0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000A270 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000A4D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000AD90 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000B170 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000BAF0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000BE90 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C430 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000E1B0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000ECB0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00205C0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002073C (ACPIWakeEnableDisableAsync.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0020B40 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIThermalLoopEx @ 0x1C0021610 (ACPIThermalLoopEx.c)
 *     EnableDisableCMOSRegions @ 0x1C0024B70 (EnableDisableCMOSRegions.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0027CC0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C002A120 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B850 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044000 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044220 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049900 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0049ED0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A070 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C004CEE4 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C004DF94 (ACPIFanLoop.c)
 *     ACPIInternalEvaluateOST @ 0x1C0050074 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005075C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C0050910 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIWakeDisableAsync @ 0x1C005998C (ACPIWakeDisableAsync.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0062CA0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0062EA0 (LinkNodepRunSrsWorker.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C0092DAC (RegisterOperationRegionHandler.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C009DC84 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1C009FB40 (EnableDisableIPMIRegions.c)
 * Callees:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     GetBaseObject @ 0x1C0012F98 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     Simulator_Post_Generic @ 0x1C005B5D4 (Simulator_Post_Generic.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005B63C (Simulator_Pre_AsyncEvalObject.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 */

__int64 AMLIAsyncEvalObject(__int64 *a1, _SLIST_ENTRY *a2, unsigned int a3, ...)
{
  __int64 v6; // rdi
  __int64 BaseObject; // rax
  _QWORD *v8; // rsi
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  const void *v17; // r8
  void *v18; // rdi
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF
  va_list va1; // [rsp+A0h] [rbp+50h]
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF
  va_list va2; // [rsp+A8h] [rbp+58h]
  va_list va3; // [rsp+B0h] [rbp+60h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  v20 = 0LL;
  v19 = 0LL;
  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v12, v11, v13, v14);
  }
  v6 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
    memset(a2, 0, 0x28uLL);
  result = Simulator_Pre_AsyncEvalObject(
             v6,
             (_DWORD)a2,
             a3,
             (unsigned int)va,
             (__int64)&v19,
             (__int64)va1,
             (__int64)va2,
             (__int64)&v20);
  if ( !(_DWORD)result )
  {
LABEL_4:
    if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    {
      v9 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      BaseObject = GetBaseObject(v6);
      v8 = (_QWORD *)BaseObject;
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(BaseObject);
        CurrentThread = KeGetCurrentThread();
        v17 = &unk_1C0066CD0;
        v18 = (void *)ObjectPath;
        if ( ObjectPath )
          v17 = (const void *)ObjectPath;
        PrintDebugMessage(11, CurrentThread, v17, 0LL, 0LL);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
      }
      v9 = AsyncEvalObject((__int64)v8, a2, a3, v21, v23, v25, 1);
      DereferenceObjectEx(v8);
      if ( v9 == 32772 )
        v9 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      if ( v9 != 259 )
        return (unsigned int)Simulator_Post_Generic(&v20, v9);
    }
    return v9;
  }
  return result;
}
