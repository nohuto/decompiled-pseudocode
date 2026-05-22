/*
 * XREFs of _RIMRawInputProvider::Initialize_::_1_::dtor$1 @ 0x1800E72FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RIMRawInputProvider::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  HIDDeviceCollection::~HIDDeviceCollection(*(HIDDeviceCollection **)(a2 + 128));
}
