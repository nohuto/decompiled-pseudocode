/*
 * XREFs of KeSetUserHeteroCpuPolicyThread @ 0x14024016C
 * Callers:
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     KeQueryHeteroCpuPolicyThread @ 0x14023FEA0 (KeQueryHeteroCpuPolicyThread.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall KeSetUserHeteroCpuPolicyThread(__int64 a1, unsigned int a2)
{
  unsigned int HeteroCpuPolicyThread; // ebx

  HeteroCpuPolicyThread = KeQueryHeteroCpuPolicyThread(a1, 1);
  KiSetHeteroPolicyThread(a1, a2, 1LL, 1LL);
  return HeteroCpuPolicyThread;
}
