/*
 * XREFs of _snwscanf_s @ 0x14018DC10
 * Callers:
 *     SiGetBootDeviceName @ 0x140569834 (SiGetBootDeviceName.c)
 *     SiGetBiosSystemDisk @ 0x1405F1638 (SiGetBiosSystemDisk.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1401916F8 (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Src, MaxCount, Format, (__int64 *)va);
  xHalTimerWatchdogStop();
  return -1;
}
