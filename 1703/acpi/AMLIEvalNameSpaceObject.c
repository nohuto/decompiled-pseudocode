/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C0002820
 * Callers:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C0007478 (ACPIInitDosDeviceName.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0013D34 (ACPIIoctlEvalControlMethod.c)
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0022BA8 (ACPIThermalGetSensorDevice.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00251F4 (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0043A04 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050D4C (ACPIIoctlGetDeviceSpecificData.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0055160 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C0055A5C (ACPIProcessorContainerEvaluateLpiObject.c)
 *     Simulator_EvaluateNode @ 0x1C005B1E4 (Simulator_EvaluateNode.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0084D20 (LinkNodepAddLinkNodeWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0088CC8 (LinkNodeWriteStateToHardware.c)
 *     ACPIAmliEvaluatePcch @ 0x1C008A63C (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008A750 (ACPIAmliEvaluateOsc.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008C830 (AcpiGetIdleWakeInfo.c)
 *     ACPIThermalBuildConstraints @ 0x1C0090010 (ACPIThermalBuildConstraints.c)
 *     ACPIProcessorDeviceControl @ 0x1C0090150 (ACPIProcessorDeviceControl.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0091F2C (ACPIAmliEvaluateDsm.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0093F28 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C009E0DC (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C009E18C (ACPIEcGetUid.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 *     ACPIEvaluateSpareDsm @ 0x1C009FDE4 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C009FF00 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00A0E14 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AA430 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0002920 (SyncEvalObject.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     Simulator_Post_Generic @ 0x1C005B5D4 (Simulator_Post_Generic.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C005B734 (Simulator_Pre_EvalNameSpaceObject.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
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
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v13[0] = 0LL;
  v14 = 0LL;
  dword_1C00776F8 = 0;
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
  result = Simulator_Pre_EvalNameSpaceObject(v6, (_DWORD)a2, a3, (unsigned int)va, (__int64)&v14, (__int64)v13);
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
        v11 = &unk_1C0066CD0;
        v12 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v11) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v11, 0, 0LL);
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
      }
      v7 = SyncEvalObject(v6, a2, a3, v15);
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
      return (unsigned int)Simulator_Post_Generic(v13, v7);
    return v7;
  }
  return result;
}
