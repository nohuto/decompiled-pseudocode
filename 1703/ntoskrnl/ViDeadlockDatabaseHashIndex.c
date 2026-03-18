/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x14077A698
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1402515F8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140251758 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
