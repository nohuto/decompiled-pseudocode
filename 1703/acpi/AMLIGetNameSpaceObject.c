/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C00178D0
 * Callers:
 *     ACPIIoctlEvalPreProcessing @ 0x1C0013E44 (ACPIIoctlEvalPreProcessing.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0016B14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     ACPIThermalActivateConstraint @ 0x1C001DB88 (ACPIThermalActivateConstraint.c)
 *     ACPIGpeBuildEventMasks @ 0x1C001F900 (ACPIGpeBuildEventMasks.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0022BA8 (ACPIThermalGetSensorDevice.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C00252E0 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIDeviceRecordDependencies @ 0x1C002576C (ACPIDeviceRecordDependencies.c)
 *     AreDependenciesSatisfied @ 0x1C0027C74 (AreDependenciesSatisfied.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0028DBC (ACPIBuildDevicePowerNodes.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0028E8C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C002A314 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C002AB00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B850 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0042FFC (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0043A04 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C0044D3C (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C004ABBC (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050D4C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C0092DAC (RegisterOperationRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C009E9B0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C009EC10 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00A0E14 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AA430 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0019AF0 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 a2, _QWORD *a3)
{
  size_t v3; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v8; // di
  int NameSpaceObjectNoLock; // ebx
  __int64 v10; // rax
  char v11; // cl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-D8h]
  _BYTE P[128]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  if ( v3 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v3);
  PoolWithTag[v3] = 0;
  v8 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v14, v13, v15, v16);
  }
  if ( *PoolWithTag )
  {
    if ( a2 && (*(_BYTE *)(*(_QWORD *)a2 + 64LL) & 4) != 0 )
    {
      NameSpaceObjectNoLock = -1073741738;
    }
    else
    {
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag);
      if ( NameSpaceObjectNoLock >= 0 )
      {
        v10 = v17;
        if ( v17 )
        {
          v11 = gdwfAMLI;
          dword_1C00776F8 = 0;
          pszDest = 0;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v17 + 128));
            v10 = v17;
            v11 = gdwfAMLI;
          }
          *a3 = v17 + 120;
          if ( (v11 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 112), 0xFFFFFFFF) == 1 )
          {
            *(_WORD *)(v17 + 64) |= 4u;
            if ( (*(_WORD *)(v17 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects((_QWORD *)v17);
          }
        }
      }
      if ( NameSpaceObjectNoLock == 32772 )
        NameSpaceObjectNoLock = 259;
    }
  }
  else
  {
    NameSpaceObjectNoLock = -1073741810;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v8);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)NameSpaceObjectNoLock;
}
