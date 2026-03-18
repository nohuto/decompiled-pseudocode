/*
 * XREFs of KeSetUserHeteroCpuPolicyThread @ 0x140202B78
 * Callers:
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 * Callees:
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x140202860 (KeQueryHeteroCpuPolicyThread.c)
 */

__int64 __fastcall KeSetUserHeteroCpuPolicyThread(__int64 a1, unsigned int a2)
{
  unsigned int HeteroCpuPolicyThread; // ebx

  HeteroCpuPolicyThread = KeQueryHeteroCpuPolicyThread(a1, 1);
  KiSetHeteroPolicyThread(a1, a2, 1, 1);
  return HeteroCpuPolicyThread;
}
