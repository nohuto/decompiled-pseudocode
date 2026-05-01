/*
 * XREFs of _CApplicationManager::UnsubscribeFromServices_::_1_::dtor$3 @ 0x180197FD3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::UnsubscribeFromServices_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>((__int64 *)(a2 + 128));
}
