/*
 * XREFs of EditionMouseMove @ 0x1C01A0190
 * Callers:
 *     <none>
 * Callees:
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C01A1E40 (xxxMoveEvent.c)
 */

__int64 __fastcall EditionMouseMove(__int64 a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax

  xxxMoveEvent(a1, a2, 0LL, 0LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return QueueMouseEvent(
           0,
           0,
           0,
           *(_DWORD *)gptCursorAsync,
           (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
           PerformanceCounter.QuadPart,
           0LL,
           0LL,
           0LL,
           0,
           1,
           0,
           0,
           0,
           0,
           0,
           0LL,
           0LL);
}
