/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x14040A6BC
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14013890C (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x14040A76C (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_14034B6E8 = PopCaptureTimeOnProcZero();
  qword_14034B6B0 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_14034B6A8 - HypervisorTscAdjustment;
  qword_14034B6D8 = HypervisorTscAdjustment;
  result = qword_14034B6D0 + HypervisorTscAdjustment;
  qword_14034B6C0 -= result;
  qword_14034B6E0 -= result;
  qword_14034B6A8 = v1;
  qword_14034B6E8 -= result;
  qword_14034B638 = v1 - qword_14034B640;
  return result;
}
