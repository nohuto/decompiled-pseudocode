/*
 * XREFs of FreeDataBuffs @ 0x1C0015CB0
 * Callers:
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     AMLIEvalPackageElement @ 0x1C0005854 (AMLIEvalPackageElement.c)
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C0007478 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000B3A0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000D3D0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000E1B0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000E610 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000E7E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000E8E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000EAF0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000EEA0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000F160 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIGetWorkerForInteger @ 0x1C0010510 (ACPIGetWorkerForInteger.c)
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0013D34 (ACPIIoctlEvalControlMethod.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     ExprOp2_64 @ 0x1C001AB40 (ExprOp2_64.c)
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     ProcessIncDec @ 0x1C001C570 (ProcessIncDec.c)
 *     ConvertToInteger @ 0x1C001CA8C (ConvertToInteger.c)
 *     AMLIFreeDataBuffs @ 0x1C001DB68 (AMLIFreeDataBuffs.c)
 *     ACPIIoctlEnumChildren @ 0x1C001E03C (ACPIIoctlEnumChildren.c)
 *     ACPIGetWorkerForNothing @ 0x1C0020CB0 (ACPIGetWorkerForNothing.c)
 *     ACPIThermalTMPCallback @ 0x1C0020DA0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0022BA8 (ACPIThermalGetSensorDevice.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0025FC0 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0026B20 (ACPIGetWorkerForBuffer.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0027DA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIGetWorkerForData @ 0x1C0029B40 (ACPIGetWorkerForData.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0043A04 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C00443F0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0044510 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C004DC50 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005075C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0050890 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C0050910 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIIoctlAsyncEvalControlMethodExCompletion @ 0x1C0050A40 (ACPIIoctlAsyncEvalControlMethodExCompletion.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050D4C (ACPIIoctlGetDeviceSpecificData.c)
 *     Simulator_CallbackWorker @ 0x1C005AFF0 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C005DAE8 (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C005EDD8 (FreeContext.c)
 *     Concat @ 0x1C005FA70 (Concat.c)
 *     Match_32 @ 0x1C00608F4 (Match_32.c)
 *     Match_64 @ 0x1C0060A30 (Match_64.c)
 *     ConvertToBuffer @ 0x1C0061F34 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C006206C (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C0062100 (ConvertToString.c)
 *     ParseNestedContext @ 0x1C0062950 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AA430 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 */

__int64 __fastcall FreeDataBuffs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a2 )
  {
    v3 = a2;
    do
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v5 & 8) != 0 )
          FreeData((_QWORD *)v5);
      }
      else if ( *(_QWORD *)(a1 + 32) )
      {
        if ( *(int *)(a1 + 8) > 0 )
        {
          *(_WORD *)a1 |= 8u;
        }
        else
        {
          if ( *(_WORD *)(a1 + 2) == 4 )
            FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(unsigned int **)(a1 + 32));
          FreeObjData(a1);
        }
      }
      result = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      a1 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
