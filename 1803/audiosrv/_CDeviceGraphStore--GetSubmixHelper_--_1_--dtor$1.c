/*
 * XREFs of _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$1 @ 0x1800CD8EA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphStore::GetSubmixHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(a2 + 48);
}
