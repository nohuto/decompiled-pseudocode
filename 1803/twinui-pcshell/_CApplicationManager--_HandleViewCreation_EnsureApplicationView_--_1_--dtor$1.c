/*
 * XREFs of _CApplicationManager::_HandleViewCreation_EnsureApplicationView_::_1_::dtor$1 @ 0x1800B3740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_HandleViewCreation_EnsureApplicationView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 112));
}
