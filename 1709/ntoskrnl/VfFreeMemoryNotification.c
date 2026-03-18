/*
 * XREFs of VfFreeMemoryNotification @ 0x1407A6994
 * Callers:
 *     MmFreeContiguousMemory @ 0x140118130 (MmFreeContiguousMemory.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x1407B4868 (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x1407BB198 (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreeMemoryNotification(__int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange(a1, a2);
  return VfRemLockDeleteMemoryRange(a1, a2);
}
