/*
 * XREFs of VfFreeMemoryNotification @ 0x140764C70
 * Callers:
 *     MmFreeContiguousMemory @ 0x140123200 (MmFreeContiguousMemory.c)
 * Callees:
 *     VfDeadlockDeleteMemoryRange @ 0x14077927C (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreeMemoryNotification(__int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange(a1, a2);
  return VfRemLockDeleteMemoryRange(a1, a2);
}
