/*
 * XREFs of _sinput_s @ 0x1401912A0
 * Callers:
 *     _snscanf_s @ 0x14018DAF0 (_snscanf_s.c)
 *     sscanf_s @ 0x14018E5C0 (sscanf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 *     _input_s @ 0x14019093C (_input_s.c)
 */

__int64 __fastcall sinput_s(char *a1, unsigned __int64 a2, unsigned __int8 *a3, _BYTE **a4)
{
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    File._base = a1;
    File._ptr = a1;
    File._cnt = a2;
    File._flag = 73;
    return input_s(&File, a3, a4);
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
