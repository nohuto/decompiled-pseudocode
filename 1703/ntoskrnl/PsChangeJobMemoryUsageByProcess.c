/*
 * XREFs of PsChangeJobMemoryUsageByProcess @ 0x1406E0FF0
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

char __fastcall PsChangeJobMemoryUsageByProcess(__int64 a1, __int64 a2, __int64 a3)
{
  return PspChangeJobMemoryUsageByProcess(16, a2, a3, 0LL);
}
