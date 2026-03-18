/*
 * XREFs of PsChangeJobMemoryUsage @ 0x1404961D4
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1400365E0 (MiReturnFullProcessCharges.c)
 *     MmAssignProcessToJob @ 0x1400D43A8 (MmAssignProcessToJob.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MmDeleteProcessAddressSpace @ 0x1404FB9A4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x1404961F0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall PsChangeJobMemoryUsage(__int64 a1, __int64 a2, __int64 a3)
{
  return PspChangeJobMemoryUsageByProcess(a1, a2, a3);
}
