/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1402597C0
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x14025A990 (MmEmptyAllWorkingSets.c)
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x140478484 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14016D3A0 (MiQueueWorkingSetRequest.c)
 */

void __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  if ( byte_1403CC514 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 6768) + 28LL);
    MiQueueWorkingSetRequest(a1, 4);
  }
}
