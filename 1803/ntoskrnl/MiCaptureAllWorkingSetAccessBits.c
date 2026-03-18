/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x14016D378
 * Callers:
 *     MmPerformMemoryListCommand @ 0x140478484 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14016D3A0 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  __int64 v3; // rdx

  v3 = 16LL;
  if ( a2 != 1 )
    v3 = 8LL;
  return MiQueueWorkingSetRequest(a1, v3, 8LL);
}
