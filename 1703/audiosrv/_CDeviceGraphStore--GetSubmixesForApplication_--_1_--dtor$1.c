/*
 * XREFs of _CDeviceGraphStore::GetSubmixesForApplication_::_1_::dtor$1 @ 0x1800A9502
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphStore::GetSubmixesForApplication_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64 **)(a2 + 48));
}
