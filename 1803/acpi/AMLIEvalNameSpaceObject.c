/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C00022D8
 * Callers:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000B954 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIInitDosDeviceName @ 0x1C0028768 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C002BDC4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002D138 (ACPIIoctlGetDeviceSpecificData.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0035B40 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C0036874 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIThermalGetSensorDevice @ 0x1C003C9E4 (ACPIThermalGetSensorDevice.c)
 *     Simulator_EvaluateNode @ 0x1C0044744 (Simulator_EvaluateNode.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     ACPIAmliEvaluateDsm @ 0x1C00747A8 (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0074918 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0074AAC (ACPIAmliEvaluatePcch.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0078CF4 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0079900 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A194 (ACPIEcGetUid.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     ACPIEvaluateSpareDsm @ 0x1C007E80C (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C007E920 (ACPIGetUniqueId.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     UnRegisterOperationRegionHandler @ 0x1C0080FE0 (UnRegisterOperationRegionHandler.c)
 *     ACPIProcessorDeviceControl @ 0x1C00815E0 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalBuildConstraints @ 0x1C0088E6C (ACPIThermalBuildConstraints.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008D418 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008D5D0 (LinkNodepAddLinkNodeWorker.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0098974 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C00023B0 (SyncEvalObject.c)
 *     GetBaseObject @ 0x1C0002BAC (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     Simulator_Free_Arguments @ 0x1C00447B8 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0044C3C (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0044EC4 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 AMLIEvalNameSpaceObject(__int64 *a1, void *a2, unsigned int a3, ...)
{
  __int64 v3; // rbx
  __int64 v7; // rsi
  __int64 BaseObject; // rax
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 result; // rax
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v14; // r8
  void *v15; // rbx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v3 = 0LL;
  v16[0] = 0LL;
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
    goto LABEL_4;
  if ( a2 )
    memset(a2, 0, 0x28uLL);
  result = Simulator_Pre_EvalNameSpaceObject(v7, (_DWORD)a2, a3, (unsigned int)va, (__int64)v16, (__int64)&v17);
  if ( !(_DWORD)result )
  {
    v3 = v17;
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
        v14 = &unk_1C005B1F0;
        v15 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v14) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v14, 0, 0LL);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        v3 = v17;
      }
      v10 = SyncEvalObject(v9, a2, a3, v18);
      DereferenceObjectEx(v9);
      if ( v10 == 32772 )
        v10 = 259;
    }
    if ( g_SimulatorCallbackObject )
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
