/*
 * XREFs of MiEmptyAllWorkingSets @ 0x14021D424
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x14021EB3C (MmEmptyAllWorkingSets.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x140430948 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14021DD3C (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiEmptyAllWorkingSets(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 5680);
  if ( byte_140389294 )
  {
    ++*(_DWORD *)(result + 28);
    return MiQueueWorkingSetRequest(a1, 4LL, a3, a4);
  }
  return result;
}
