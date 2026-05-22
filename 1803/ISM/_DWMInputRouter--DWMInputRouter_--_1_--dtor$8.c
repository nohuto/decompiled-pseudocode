/*
 * XREFs of _DWMInputRouter::DWMInputRouter_::_1_::dtor$8 @ 0x1800E7923
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DWMInputRouter::DWMInputRouter_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  std::vector<DWMInputRouter::DeviceDisplayMapping>::~vector<DWMInputRouter::DeviceDisplayMapping>(
    *(_QWORD *)(a2 + 144) + 192LL,
    a2);
}
