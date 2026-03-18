/*
 * XREFs of PsChangeJobMemoryUsage @ 0x14077B2A0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x14003E5A0 (MiReturnFullProcessCharges.c)
 *     MmAssignProcessToJob @ 0x140531714 (MmAssignProcessToJob.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x14054FD20 (PspChangeJobMemoryUsageByProcess.c)
 */

char __fastcall PsChangeJobMemoryUsage(char a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return PspChangeJobMemoryUsageByProcess(a1, a2, a3, a4);
}
