/*
 * XREFs of _wcslwr @ 0x14015EB80
 * Callers:
 *     SiGetFirmwareBootDeviceNameFromRegistry @ 0x14057E068 (SiGetFirmwareBootDeviceNameFromRegistry.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 */

wchar_t *__cdecl wcslwr(wchar_t *String)
{
  wchar_t *v1; // rdx

  v1 = String;
  if ( String )
  {
    while ( *String )
    {
      if ( (unsigned __int16)(*String - 65) <= 0x19u )
        *String += 32;
      ++String;
    }
    return v1;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
