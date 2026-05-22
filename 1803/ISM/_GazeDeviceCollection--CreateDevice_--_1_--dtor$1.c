/*
 * XREFs of _GazeDeviceCollection::CreateDevice_::_1_::dtor$1 @ 0x1800E746C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GazeDeviceCollection::CreateDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  HIDDevice::~HIDDevice(*(HIDDevice **)(a2 + 40));
}
