/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x140223F44
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140712D60 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
