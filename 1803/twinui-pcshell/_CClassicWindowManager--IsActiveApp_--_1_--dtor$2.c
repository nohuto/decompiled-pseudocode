/*
 * XREFs of _CClassicWindowManager::IsActiveApp_::_1_::dtor$2 @ 0x18011A672
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindowManager::IsActiveApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IClassicWindow>::~ComPtr<IClassicWindow>((__int64 *)(a2 + 128));
}
