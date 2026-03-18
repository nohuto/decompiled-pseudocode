/*
 * XREFs of _snwscanf_s @ 0x14016F540
 * Callers:
 *     SiGetFirmwareBootDeviceName @ 0x140569680 (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140739930 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x140172DE4 (_swinput_s.c)
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
