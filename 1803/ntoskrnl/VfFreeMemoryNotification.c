/*
 * XREFs of VfFreeMemoryNotification @ 0x140813B18
 * Callers:
 *     MmFreeContiguousMemory @ 0x1400C9790 (MmFreeContiguousMemory.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140821A38 (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x140828548 (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreeMemoryNotification(__int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange(a1, a2);
  return VfRemLockDeleteMemoryRange(a1, a2);
}
