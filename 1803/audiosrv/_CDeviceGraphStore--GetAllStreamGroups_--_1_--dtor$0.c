/*
 * XREFs of _CDeviceGraphStore::GetAllStreamGroups_::_1_::dtor$0 @ 0x1800CCD53
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphStore::GetAllStreamGroups_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::~vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>(a2 + 40);
}
