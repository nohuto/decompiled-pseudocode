/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C0006C00
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0001AF4 (ACPIInitStartDevice.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C001B138 (ACPIIoctlEvalControlMethod.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0025510 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C00271F8 (ACPIInitDosDeviceName.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002AAD4 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00433C4 (ACPIBuildMissingEjectionRelations.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0055D50 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C0056654 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     Simulator_EvaluateNode @ 0x1C005BD54 (Simulator_EvaluateNode.c)
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0085DFC (ACPIAmliEvaluateDsm.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008B18C (LinkNodeWriteStateToHardware.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008CA30 (AcpiGetIdleWakeInfo.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     ACPIProcessorDeviceControl @ 0x1C008FFC0 (ACPIProcessorDeviceControl.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0091D9C (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0092480 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0092604 (ACPIThermalBuildConstraints.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0096A70 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0096E50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C00A10B4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00A1164 (ACPIEcGetUid.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00A2B1C (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C00A2C30 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00A3A64 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AF81C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0006D00 (SyncEvalObject.c)
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     Simulator_Free_Arguments @ 0x1C005BDC8 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C005C24C (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C005C4D4 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

__int64 AMLIEvalNameSpaceObject(__int64 *a1, void *a2, unsigned int a3, ...)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v11; // r8
  void *v12; // rbp
  _QWORD *v13; // rdi
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  P[0] = 0LL;
  v15 = 0LL;
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v6 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
    memset(a2, 0, 0x28uLL);
  result = Simulator_Pre_EvalNameSpaceObject(v6, (_DWORD)a2, a3, (unsigned int)va, (__int64)&v15, (__int64)P);
  if ( !(_DWORD)result )
  {
LABEL_4:
    if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    {
      v7 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      for ( ; *(_WORD *)(v6 + 66) == 128; v6 = *(_QWORD *)(v6 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v6);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v11 = &unk_1C0067B08;
        v12 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v11) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v11, 0, 0LL);
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
      }
      v7 = SyncEvalObject(v6, a2, a3, v16);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v6 + 64) |= 4u;
        if ( (*(_WORD *)(v6 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v6);
      }
      if ( v7 == 32772 )
        v7 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      v13 = P[0];
      if ( P[0] )
      {
        v7 = Simulator_TestNotifyRet(P[0]);
        if ( (unsigned int)(*((_DWORD *)v13 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v13 + 8), v13[5]);
        ExFreePoolWithTag(P[0], 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v7;
  }
  return result;
}
