/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x1407BC594
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140277E68 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140277FC8 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
