/*
 * XREFs of FreeDataBuffs @ 0x1C0003118
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0001F70 (ACPIGetWorkerForString.c)
 *     FreeContext @ 0x1C0002E08 (FreeContext.c)
 *     FreeData @ 0x1C0003150 (FreeData.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000B954 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000C9F0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000CF60 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000D1E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000D820 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000DA30 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C000DB80 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000E1F0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000E360 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C000F140 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000F660 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C000F910 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0010200 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001CC30 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIFanFSTCallback @ 0x1C0023CF0 (ACPIFanFSTCallback.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0026D00 (ACPIGetWorkerForBuffer.c)
 *     ACPIGetWorkerForData @ 0x1C0026E90 (ACPIGetWorkerForData.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026FA0 (ACPIGetWorkerForInteger.c)
 *     ACPIGetWorkerForNothing @ 0x1C0027160 (ACPIGetWorkerForNothing.c)
 *     ACPIInitDosDeviceName @ 0x1C0028768 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C002B4D0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlEnumChildren @ 0x1C002BA70 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C002BDC4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002D138 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C0038D98 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C003C9E4 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalTMPCallback @ 0x1C003DDA0 (ACPIThermalTMPCallback.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 *     Simulator_CallbackWorker @ 0x1C0044550 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C004767C (ParseDLMObjectInternal.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     FreeNameSpaceObjects @ 0x1C004A020 (FreeNameSpaceObjects.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     Match_32 @ 0x1C0051B04 (Match_32.c)
 *     Match_64 @ 0x1C0051C24 (Match_64.c)
 *     ProcessIncDec @ 0x1C00527D0 (ProcessIncDec.c)
 *     ConvertToBuffer @ 0x1C0053A14 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C0053B54 (ConvertToDDBHandle.c)
 *     ConvertToInteger @ 0x1C0053BE8 (ConvertToInteger.c)
 *     ConvertToString @ 0x1C0053CB8 (ConvertToString.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseNestedContext @ 0x1C0055C40 (ParseNestedContext.c)
 *     ParseScope @ 0x1C0056300 (ParseScope.c)
 *     ParseTerm @ 0x1C0056890 (ParseTerm.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0098974 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1C0003150 (FreeData.c)
 */

__int64 __fastcall FreeDataBuffs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = FreeData(a1);
      a1 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
