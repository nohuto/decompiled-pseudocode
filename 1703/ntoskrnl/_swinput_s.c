/*
 * XREFs of _swinput_s @ 0x140172DE4
 * Callers:
 *     _snwscanf_s @ 0x14016F540 (_snwscanf_s.c)
 *     swscanf_s @ 0x140170390 (swscanf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     _winput_s @ 0x140172EA8 (_winput_s.c)
 */

__int64 __fastcall swinput_s(char *a1, unsigned __int64 a2, __int64 a3)
{
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    File._base = a1;
    File._ptr = a1;
    File._cnt = 2 * a2;
    File._flag = 73;
    return winput_s(&File);
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
