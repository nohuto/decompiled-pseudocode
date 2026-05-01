/*
 * XREFs of _CClassicWindowManager::AttachApplicationId_::_1_::dtor$1 @ 0x1800B0D08
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindowManager::AttachApplicationId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IClassicWindow>::~ComPtr<IClassicWindow>(a2 + 128);
}
