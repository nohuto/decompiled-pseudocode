/*
 * XREFs of _snwscanf_s @ 0x140163D40
 * Callers:
 *     SiGetFirmwareBootDeviceName @ 0x14057DBD8 (SiGetFirmwareBootDeviceName.c)
 *     SiGetBiosSystemDisk @ 0x1405D35B4 (SiGetBiosSystemDisk.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1401676E4 (_swinput_s.c)
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
