/*
 * XREFs of sscanf_s @ 0x14016FEF0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     _sinput_s @ 0x1401729A4 (_sinput_s.c)
 */

int sscanf_s(const char *Src, const char *Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    return sinput_s(Src, v4, Format, va);
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
