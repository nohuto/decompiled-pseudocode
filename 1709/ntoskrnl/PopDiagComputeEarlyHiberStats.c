/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140438F48
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1401E9A4C (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x1404314C4 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140365D68 = PopCaptureTimeOnProcZero();
  qword_140365D30 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140365D28 - HypervisorTscAdjustment;
  qword_140365D58 = HypervisorTscAdjustment;
  result = qword_140365D50 + HypervisorTscAdjustment;
  qword_140365D40 -= result;
  qword_140365D60 -= result;
  qword_140365D28 = v1;
  qword_140365D68 -= result;
  qword_140365CB8 = v1 - qword_140365CC0;
  return result;
}
