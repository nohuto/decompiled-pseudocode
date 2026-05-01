/*
 * XREFs of _CApplicationManager::GetApplicationByWindowInternal_::_1_::dtor$3 @ 0x1800B3D34
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::GetApplicationByWindowInternal_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 48));
}
