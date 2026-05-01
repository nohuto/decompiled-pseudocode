/*
 * XREFs of ??1?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x18007470C
 * Callers:
 *     _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$0 @ 0x18019ADD4 (_CApplicationViewManager--AddWin32ApplicationView_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetSwitchWindow_::_1_::dtor$0 @ 0x18019AE94 (_CApplicationViewManager--GetSwitchWindow_--_1_--dtor$0.c)
 *     _CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$0 @ 0x18019B203 (_CWin32ApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWin32ApplicationView@@U?$InterfaceList@UIAppSizeConstraintsCallback@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800776D0 (-Release@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$InterfaceList@UIWin32Applicat.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CWin32ApplicationView>::~ComPtr<CWin32ApplicationView>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CApplicationViewBase,Microsoft::WRL::Details::InterfaceList<IWin32ApplicationView,Microsoft::WRL::Details::InterfaceList<IAppSizeConstraintsCallback,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
