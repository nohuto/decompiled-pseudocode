/*
 * XREFs of MmTrimPagedPool @ 0x1405D9B2C
 * Callers:
 *     CmpTrimHive @ 0x1404E6254 (CmpTrimHive.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 */

char MmTrimPagedPool()
{
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r10

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  return MiDeprioritizeVirtualAddresses(v2, v1 >> 12, (__int64)AnyMultiplexedVm, 40);
}
