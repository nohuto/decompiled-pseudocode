/*
 * XREFs of ??1SmartCookie@@QEAA@XZ @ 0x18007B2F8
 * Callers:
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x180074034 (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x180117398 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ??_GXamlTaskbarManager@@UEAAPEAXI@Z @ 0x18014C180 (--_GXamlTaskbarManager@@UEAAPEAXI@Z.c)
 *     ?Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180190890 (-Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationVie.c)
 *     ?Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService@@@Z @ 0x180190BF0 (-Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService.c)
 *     ??1?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ @ 0x180192F7C (--1-$unique_ptr@VSmartCookie@@U-$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ.c)
 *     ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18019310C (-Unregister@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VAppli.c)
 *     ??1?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@UEAA@XZ @ 0x180193C34 (--1-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@Ap.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x180198D30 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ??_EVirtualDesktopDataSource@@UEAAPEAXI@Z @ 0x1801B6FD0 (--_EVirtualDesktopDataSource@@UEAAPEAXI@Z.c)
 *     ??_GVirtualDesktop@@UEAAPEAXI@Z @ 0x1801B9680 (--_GVirtualDesktop@@UEAAPEAXI@Z.c)
 *     _CApplicationViewManager::_CApplicationViewManager_::_1_::dtor$2 @ 0x1801E965C (_CApplicationViewManager--_CApplicationViewManager_--_1_--dtor$2.c)
 *     _PeoplePaneViewManager::_PeoplePaneViewManager_::_1_::dtor$5 @ 0x1801EE086 (_PeoplePaneViewManager--_PeoplePaneViewManager_--_1_--dtor$5.c)
 *     _VirtualDesktopDataSource_CreateInstance_::_1_::dtor$8 @ 0x1801F6D38 (_VirtualDesktopDataSource_CreateInstance_--_1_--dtor$8.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007B24C (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SmartCookie::~SmartCookie(SmartCookie **this)
{
  __int64 v2; // rdx
  SmartCookie *v3; // rcx
  SmartCookie *v4; // rcx

  SmartCookie::Unregister((SmartCookie *)this);
  v3 = this[13];
  if ( v3 )
  {
    LOBYTE(v2) = v3 != (SmartCookie *)this;
    (*(void (__fastcall **)(SmartCookie *, __int64))(*(_QWORD *)v3 + 24LL))(v3, v2);
    this[13] = 0LL;
  }
  v4 = this[13];
  if ( v4 )
  {
    LOBYTE(v2) = v4 != (SmartCookie *)this;
    (*(void (__fastcall **)(SmartCookie *, __int64))(*(_QWORD *)v4 + 24LL))(v4, v2);
    this[13] = 0LL;
  }
}
