/*
 * XREFs of _CAppViewManager::DelayedInitialization_::_1_::dtor$2 @ 0x18011EF2A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::DelayedInitialization_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 144));
}
