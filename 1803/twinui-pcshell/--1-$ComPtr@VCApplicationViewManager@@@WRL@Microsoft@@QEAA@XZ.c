/*
 * XREFs of ??1?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9B64
 * Callers:
 *     _CWinRTApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$1 @ 0x1800B1A54 (_CWinRTApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$1.c)
 *     _CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$3 @ 0x1800B1AD4 (_CWinRTApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$3.c)
 *     _CWin32ApplicationView::GetRootSwitchableOwner_::_1_::dtor$2 @ 0x1800B2575 (_CWin32ApplicationView--GetRootSwitchableOwner_--_1_--dtor$2.c)
 *     _CWin32ApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$1 @ 0x1800B2599 (_CWin32ApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$1.c)
 *     _CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$3 @ 0x1800B25ED (_CWin32ApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$3.c)
 *     __lambda_8eff1308be2899feafc2459a76dc307b_::operator()_::_1_::dtor$4 @ 0x1800B5F28 (__lambda_8eff1308be2899feafc2459a76dc307b_--operator()_--_1_--dtor$4.c)
 *     _CApplicationViewBase::SetEnterpriseId_::_1_::dtor$1 @ 0x1800F03FE (_CApplicationViewBase--SetEnterpriseId_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationViewManager_IUnknown__::_1_::dtor$2 @ 0x1801393A6 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationViewManager_IUnknown__--_1_--dtor$2.c)
 *     _CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e____::_1_::dtor$2 @ 0x180139BBC (_CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5_ea_180139BBC.c)
 *     _CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360____::_1_::dtor$3 @ 0x180139D55 (_CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558b_ea_180139D55.c)
 *     _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$5 @ 0x18013F118 (_CWin32ApplicationView--EnumerateOwnershipTree_--_1_--dtor$5.c)
 *     _CApplicationViewBase::SetCanTab_::_1_::dtor$1 @ 0x180142EAB (_CApplicationViewBase--SetCanTab_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800284E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 */

int __fastcall Microsoft::WRL::ComPtr<CApplicationViewManager>::~ComPtr<CApplicationViewManager>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rax

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v2) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(
                    v2,
                    a2);
  }
  return v2;
}
