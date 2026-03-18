/*
 * XREFs of FreeDataBuffs @ 0x1C000CD00
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0001AF4 (ACPIInitStartDevice.c)
 *     ACPIGetWorkerForInteger @ 0x1C00074D0 (ACPIGetWorkerForInteger.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     ACPIGetWorkerForBuffer @ 0x1C000F160 (ACPIGetWorkerForBuffer.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0012900 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00142A0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0014680 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0014840 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0014940 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIIoctlEnumChildren @ 0x1C0015D7C (ACPIIoctlEnumChildren.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001CDC0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001CFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001ED80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C001EF00 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C001F1C0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ExprOp2_64 @ 0x1C0020100 (ExprOp2_64.c)
 *     ProcessIncDec @ 0x1C0020C30 (ProcessIncDec.c)
 *     ConvertToInteger @ 0x1C002119C (ConvertToInteger.c)
 *     AMLIEvalPackageElement @ 0x1C00216BC (AMLIEvalPackageElement.c)
 *     AMLIFreeDataBuffs @ 0x1C0023374 (AMLIFreeDataBuffs.c)
 *     ACPIGetWorkerForNothing @ 0x1C0023710 (ACPIGetWorkerForNothing.c)
 *     ACPIThermalTMPCallback @ 0x1C0023800 (ACPIThermalTMPCallback.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0025510 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C00271F8 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0027F30 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIGetWorkerForData @ 0x1C002AA40 (ACPIGetWorkerForData.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002AAD4 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00433C4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C0043DB0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0043ED0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C004D8C0 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005088C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0050AC0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     Simulator_CallbackWorker @ 0x1C005BB60 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C005D8E4 (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C005FFB8 (FreeContext.c)
 *     Concat @ 0x1C0060C70 (Concat.c)
 *     Match_32 @ 0x1C0061AF4 (Match_32.c)
 *     Match_64 @ 0x1C0061C14 (Match_64.c)
 *     ConvertToBuffer @ 0x1C0063104 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C006323C (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C00632D0 (ConvertToString.c)
 *     ParseNestedContext @ 0x1C0063B20 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AF81C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
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
