/*
 * XREFs of ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C000A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000BF60 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CSystemChannel *__fastcall DirectComposition::CSystemChannel::`vector deleting destructor'(
        DirectComposition::CSystemChannel *this,
        char a2)
{
  DirectComposition::CApplicationChannel::~CApplicationChannel(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
