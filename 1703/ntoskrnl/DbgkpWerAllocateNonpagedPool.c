/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1401E2720
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1406831C0 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
