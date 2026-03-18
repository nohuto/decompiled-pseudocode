/*
 * XREFs of MmTrimPagedPool @ 0x1404CCAF8
 * Callers:
 *     CmpTrimHive @ 0x1404CC9EC (CmpTrimHive.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 */

__int64 MmTrimPagedPool()
{
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r10

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  return MiDeprioritizeVirtualAddresses(v2, v1 >> 12, (__int64)AnyMultiplexedVm, 40);
}
