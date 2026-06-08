/*
 * XREFs of GetCpuIdInfo @ 0x1C0004EE0
 * Callers:
 *     IsNonwrappingACountMCountSupported @ 0x1C0001A84 (IsNonwrappingACountMCountSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0001AF8 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001B5C (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C0001BBC (IsHwpSupported.c)
 *     ValidatePStateCapability @ 0x1C00038E0 (ValidatePStateCapability.c)
 *     IsTurboModeSupported @ 0x1C0003BD0 (IsTurboModeSupported.c)
 *     IsHwpHighestInterruptSupported @ 0x1C0006E38 (IsHwpHighestInterruptSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C0006EA4 (IsHwpPackageControlSupported.c)
 *     IsProcSpeedStepCapable @ 0x1C0006F10 (IsProcSpeedStepCapable.c)
 *     InitMonitorMWaitSupport @ 0x1C001FEC0 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C001FF6C (IsMonitorMWaitSupported.c)
 *     GetProcessorArchitectureIndex @ 0x1C0023BC0 (GetProcessorArchitectureIndex.c)
 *     InitEnergyCountersMsrEx @ 0x1C0027780 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0027840 (ProbeFixedFunctionCounters.c)
 *     InitDriver @ 0x1C0036040 (InitDriver.c)
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
