/*
 * XREFs of ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180075D70 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x180076328 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007D3E0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?GetCwm@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ @ 0x18007D4B0 (-GetCwm@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIClassicWindowPresentation@@@WRL@Micr.c)
 *     ?GetIam@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@XZ @ 0x18007D560 (-GetIam@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveApplicationPresentation@@@W.c)
 *     ?GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIWindowSizeConversionLogicalClientToWindow@@@WRL@Microsoft@@XZ @ 0x18007D610 (-GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIWindowSizeConversion.c)
 *     ?GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@XZ @ 0x18007D6C0 (-GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivileg.c)
 *     ?GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@XZ @ 0x18007D770 (-GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivilege.c)
 *     ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18007E6C0 (-GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18007E8B0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18007FDB0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x180081628 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x1800832D0 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180084BF0 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___ @ 0x18008563C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_1b0c182535871ea6c5139.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(__int64 *a1)
{
  __int64 v2; // rax
  volatile signed __int32 *v3; // rcx

  *a1 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v2 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  if ( *a1 != GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
      _InterlockedAdd(
        (volatile signed __int32 *)(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals + 44),
        1u);
    v3 = (volatile signed __int32 *)*a1;
    *a1 = v2;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 11, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 72LL))(v3, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  return a1;
}
