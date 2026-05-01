/*
 * XREFs of _CApplicationManager::GetApplicationByWindowInternal_::_1_::dtor$2 @ 0x1800B3D28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::GetApplicationByWindowInternal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 40));
}
