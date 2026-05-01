/*
 * XREFs of ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x18007679C
 * Callers:
 *     _CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$2 @ 0x18019B21B (_CWin32ApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$2.c)
 *     _CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$2 @ 0x18019B38F (_CWinRTApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180077610 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@V_ea_180077610.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApplicationViewManagement::CGlobals::~CGlobals(ApplicationViewManagement::CGlobals *this)
{
  __int64 v2; // rcx
  HKEY v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  }
  v3 = (HKEY)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v3 )
    RegCloseKey(v3);
  *((_DWORD *)this + 7) = -1073741823;
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
