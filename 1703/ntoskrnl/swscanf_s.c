/*
 * XREFs of swscanf_s @ 0x140170390
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1404F65F0 (ExProcessorCounterSetCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140698E74 (PiDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x140172DE4 (_swinput_s.c)
 */

int swscanf_s(const wchar_t *Src, const wchar_t *Format, ...)
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
    return swinput_s(Src, v4, Format, va);
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
