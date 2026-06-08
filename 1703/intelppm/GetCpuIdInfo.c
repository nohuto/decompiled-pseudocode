/*
 * XREFs of GetCpuIdInfo @ 0x1C0004A70
 * Callers:
 *     IsTurboModeSupported @ 0x1C0001B64 (IsTurboModeSupported.c)
 *     ValidatePStateCapability @ 0x1C0002E50 (ValidatePStateCapability.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C000377C (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C00037E0 (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C000384C (IsHwpSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C00038B0 (IsNonwrappingACountMCountSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C0006CF8 (IsHwpPackageControlSupported.c)
 *     IsProcSpeedStepCapable @ 0x1C0006D64 (IsProcSpeedStepCapable.c)
 *     InitMonitorMWaitSupport @ 0x1C001EEF0 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C001EF9C (IsMonitorMWaitSupported.c)
 *     GetProcessorArchitectureIndex @ 0x1C0022B0C (GetProcessorArchitectureIndex.c)
 *     InitEnergyCountersMsrEx @ 0x1C0022DF4 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0022EB4 (ProbeFixedFunctionCounters.c)
 *     InitDriver @ 0x1C0031C84 (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
