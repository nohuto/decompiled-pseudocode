/*
 * XREFs of _CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor$24 @ 0x1800B2734
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor_24(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(*(CWinRTApplicationView ***)(a2 + 184));
}
