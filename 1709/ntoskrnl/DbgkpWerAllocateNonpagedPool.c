/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1401E68E4
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1406AE4B0 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
