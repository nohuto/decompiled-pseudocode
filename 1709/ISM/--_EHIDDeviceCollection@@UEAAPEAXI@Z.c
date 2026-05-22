/*
 * XREFs of ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x18009C750
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009C794 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

HIDDeviceCollection *__fastcall HIDDeviceCollection::`vector deleting destructor'(HIDDeviceCollection *this, char a2)
{
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
