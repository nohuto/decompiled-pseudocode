/*
 * XREFs of _CAppViewManager::PrepareToSwitch_::_1_::dtor$1 @ 0x180121589
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::PrepareToSwitch_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAsyncCallback>::~ComPtr<IAsyncCallback>((void **)(a2 + 160));
}
