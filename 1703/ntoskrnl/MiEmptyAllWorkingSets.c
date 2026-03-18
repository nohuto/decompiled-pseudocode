/*
 * XREFs of MiEmptyAllWorkingSets @ 0x140214E74
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x140215A74 (MmEmptyAllWorkingSets.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x14040E2BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1401400FC (MiQueueWorkingSetRequest.c)
 */

int __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 5544);
  if ( byte_14036CFD4 )
  {
    ++*(_DWORD *)(v1 + 28);
    LODWORD(v1) = MiQueueWorkingSetRequest(a1, 4);
  }
  return v1;
}
