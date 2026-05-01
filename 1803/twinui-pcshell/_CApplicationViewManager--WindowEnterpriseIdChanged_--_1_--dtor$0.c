/*
 * XREFs of _CApplicationViewManager::WindowEnterpriseIdChanged_::_1_::dtor$0 @ 0x18013D13F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::WindowEnterpriseIdChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 80));
}
