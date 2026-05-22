/*
 * XREFs of ??_GPTPDeviceCollection@@MEAAPEAXI@Z @ 0x18008A780
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1PTPDeviceCollection@@MEAA@XZ @ 0x18008A7C4 (--1PTPDeviceCollection@@MEAA@XZ.c)
 */

PTPDeviceCollection *__fastcall PTPDeviceCollection::`scalar deleting destructor'(PTPDeviceCollection *this, char a2)
{
  PTPDeviceCollection::~PTPDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
