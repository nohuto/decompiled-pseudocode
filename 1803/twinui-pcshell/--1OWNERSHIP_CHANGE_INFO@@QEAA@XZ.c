/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x1800F76FC
 * Callers:
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x1800B3364 (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x1800B3370 (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor$0 @ 0x18011063C (_CApplicationManager--_HandleWindowBecameUnowned_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 2);
}
