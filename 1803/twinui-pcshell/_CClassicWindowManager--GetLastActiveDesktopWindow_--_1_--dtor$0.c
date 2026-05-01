/*
 * XREFs of _CClassicWindowManager::GetLastActiveDesktopWindow_::_1_::dtor$0 @ 0x18011A1DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindowManager::GetLastActiveDesktopWindow_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IClassicWindow>::~ComPtr<IClassicWindow>((__int64 *)(a2 + 64));
}
