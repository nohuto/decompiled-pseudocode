/*
 * XREFs of ??_GConsumerControlDeviceCollection@@MEAAPEAXI@Z @ 0x18009A590
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009C794 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

ConsumerControlDeviceCollection *__fastcall ConsumerControlDeviceCollection::`scalar deleting destructor'(
        ConsumerControlDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &ConsumerControlDeviceCollection::`vftable';
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
