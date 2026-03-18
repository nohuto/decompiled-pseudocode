/*
 * XREFs of _snprintf @ 0x14015E420
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x140161514 (_flsbuf.c)
 *     _output_l @ 0x140161F3C (_output_l.c)
 */

int snprintf(char *Dest, size_t Count, const char *Format, ...)
{
  int result; // eax
  int v5; // ebx
  FILE File; // [rsp+30h] [rbp-48h] BYREF
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format && (!Count || Dest) )
  {
    File._flag = 66;
    File._base = Dest;
    File._ptr = Dest;
    if ( Count > 0x7FFFFFFF )
      LODWORD(Count) = 0x7FFFFFFF;
    File._cnt = Count;
    result = output_l(&File, Format, 0LL, (__int64 *)va);
    v5 = result;
    if ( Dest )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
      return v5;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
  return result;
}
