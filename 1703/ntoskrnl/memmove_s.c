/*
 * XREFs of memmove_s @ 0x14016FDF0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

errno_t __cdecl memmove_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx

  if ( MaxCount )
  {
    if ( !a1 )
    {
      xHalTimerWatchdogStop();
      return 22;
    }
    if ( !Src )
    {
      v5 = 22;
LABEL_8:
      xHalTimerWatchdogStop();
      return v5;
    }
    if ( DstSize < MaxCount )
    {
      v5 = 34;
      goto LABEL_8;
    }
    memmove(a1, Src, MaxCount);
  }
  return 0;
}
