/*
 * XREFs of _vswprintf_l @ 0x14016A044
 * Callers:
 *     _vswprintf @ 0x14016A030 (_vswprintf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x14016CCB4 (_flsbuf.c)
 *     _woutput_l @ 0x14016CCC4 (_woutput_l.c)
 */

__int64 __fastcall vswprintf_l(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  bool v6; // sf
  unsigned int v7; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  if ( a2 && a1 )
  {
    File._base = a1;
    File._ptr = a1;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v5 = woutput_l(&File, a2, a3, a4);
    v6 = --File._cnt < 0;
    v7 = v5;
    if ( v6 )
    {
      flsbuf(0, &File);
      ptr = File._ptr;
    }
    else
    {
      *File._ptr = 0;
      ptr = ++File._ptr;
    }
    if ( --File._cnt < 0 )
      flsbuf(0, &File);
    else
      *ptr = 0;
    return v7;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
