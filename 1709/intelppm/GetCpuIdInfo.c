/*
 * XREFs of GetCpuIdInfo @ 0x1C0004C80
 * Callers:
 *     ValidatePStateCapability @ 0x1C0002C40 (ValidatePStateCapability.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C00036CC (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0003730 (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C0003790 (IsHwpSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C00037F4 (IsNonwrappingACountMCountSupported.c)
 *     IsTurboModeSupported @ 0x1C0003B6C (IsTurboModeSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C0006AD8 (IsHwpPackageControlSupported.c)
 *     IsProcSpeedStepCapable @ 0x1C0006B44 (IsProcSpeedStepCapable.c)
 *     GetProcessorArchitectureIndex @ 0x1C001E9E8 (GetProcessorArchitectureIndex.c)
 *     InitMonitorMWaitSupport @ 0x1C0022120 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C00221CC (IsMonitorMWaitSupported.c)
 *     InitEnergyCountersMsrEx @ 0x1C00266D8 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0026798 (ProbeFixedFunctionCounters.c)
 *     InitDriver @ 0x1C0035EF0 (InitDriver.c)
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
