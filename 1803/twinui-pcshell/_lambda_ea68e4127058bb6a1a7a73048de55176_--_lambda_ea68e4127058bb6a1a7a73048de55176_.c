/*
 * XREFs of _lambda_ea68e4127058bb6a1a7a73048de55176_::_lambda_ea68e4127058bb6a1a7a73048de55176_ @ 0x180139F38
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x180139BD4 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18013BDA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18013BDA0.c)
 */

__int64 __fastcall lambda_ea68e4127058bb6a1a7a73048de55176_::_lambda_ea68e4127058bb6a1a7a73048de55176_(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v9; // rcx

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_DWORD *)(a1 + 16) = *a3;
  v9 = *a4;
  *(_QWORD *)(a1 + 24) = *a4;
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::InternalAddRef(v9);
  *(_QWORD *)(a1 + 32) = a5;
  return a1;
}
