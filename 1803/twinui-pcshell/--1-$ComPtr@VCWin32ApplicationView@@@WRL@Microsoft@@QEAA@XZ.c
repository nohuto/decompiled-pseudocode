/*
 * XREFs of ??1?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9C68
 * Callers:
 *     _CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$0 @ 0x1800B25C9 (_CWin32ApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$0.c)
 *     _CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$1 @ 0x1800B25D5 (_CWin32ApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$1.c)
 *     _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$0 @ 0x1800B2788 (_CApplicationViewManager--AddWin32ApplicationView_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetOwnerAppView_::_1_::dtor$0 @ 0x18013B6AB (_CApplicationViewManager--GetOwnerAppView_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetSwitchWindow_::_1_::dtor$0 @ 0x18013B754 (_CApplicationViewManager--GetSwitchWindow_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CWin32ApplicationView>::~ComPtr<CWin32ApplicationView>(
        CWin32ApplicationView **a1)
{
  return Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(a1);
}
