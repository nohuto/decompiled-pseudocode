/*
 * XREFs of ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800759F0
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1800730E0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800735F4 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007A6D0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?GetCwm@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ @ 0x18007A750 (-GetCwm@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIClassicWindowPresentation@@@WRL@Micr.c)
 *     ?GetIam@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@XZ @ 0x18007A7E4 (-GetIam@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveApplicationPresentation@@@W.c)
 *     ?GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIWindowSizeConversionLogicalClientToWindow@@@WRL@Microsoft@@XZ @ 0x18007A878 (-GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIWindowSizeConversion.c)
 *     ?GetPrivilegedSizeConstraintsOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@XZ @ 0x18007A90C (-GetPrivilegedSizeConstraintsOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPriv.c)
 *     ?GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@XZ @ 0x18007A9A0 (-GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivileg.c)
 *     ?GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@XZ @ 0x18007AA34 (-GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivilege.c)
 *     ?GetMonitorManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@XZ @ 0x18007AAC8 (-GetMonitorManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveMonitorManager@@.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18007B60C (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18007BB90 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x1800802A0 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800819B8 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180081D10 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 */

__int64 *__fastcall GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(__int64 *a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  volatile signed __int32 *v4; // rcx

  *a1 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v2 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  if ( *a1 != GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
    {
      do
        v3 = *(_DWORD *)(v2 + 28);
      while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 28), v3 + 1, v3) );
    }
    v4 = (volatile signed __int32 *)*a1;
    *a1 = v2;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  return a1;
}
