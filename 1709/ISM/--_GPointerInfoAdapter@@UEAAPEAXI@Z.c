/*
 * XREFs of ??_GPointerInfoAdapter@@UEAAPEAXI@Z @ 0x18006F700
 * Callers:
 *     ??_EPointerInfoAdapter@@W7EAAPEAXI@Z @ 0x180070B00 (--_EPointerInfoAdapter@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1PointerInfoAdapter@@UEAA@XZ @ 0x18006F744 (--1PointerInfoAdapter@@UEAA@XZ.c)
 */

PointerInfoAdapter *__fastcall PointerInfoAdapter::`scalar deleting destructor'(PointerInfoAdapter *this, char a2)
{
  PointerInfoAdapter::~PointerInfoAdapter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
