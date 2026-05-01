/*
 * XREFs of _CApplicationViewManager::GetOwnerAppView_::_1_::dtor$0 @ 0x18013B6AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::GetOwnerAppView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CWin32ApplicationView>::~ComPtr<CWin32ApplicationView>((CWin32ApplicationView **)(a2 + 72));
}
