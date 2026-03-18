/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x1401400E0
 * Callers:
 *     MmPerformMemoryListCommand @ 0x14040E2BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v5; // rdx

  v4 = a2 == 1;
  v5 = 16LL;
  if ( !v4 )
    v5 = 8LL;
  return MiQueueWorkingSetRequest(a1, v5, a3, a4);
}
