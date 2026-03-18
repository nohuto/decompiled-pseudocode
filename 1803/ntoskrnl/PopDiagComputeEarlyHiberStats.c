/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140470C5C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14014E050 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x140470D0C (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_1403AA608 = PopCaptureTimeOnProcZero();
  qword_1403AA5D0 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_1403AA5C8 - HypervisorTscAdjustment;
  qword_1403AA5F8 = HypervisorTscAdjustment;
  result = qword_1403AA5F0 + HypervisorTscAdjustment;
  qword_1403AA5E0 -= result;
  qword_1403AA600 -= result;
  qword_1403AA5C8 = v1;
  qword_1403AA608 -= result;
  qword_1403AA558 = v1 - qword_1403AA560;
  return result;
}
