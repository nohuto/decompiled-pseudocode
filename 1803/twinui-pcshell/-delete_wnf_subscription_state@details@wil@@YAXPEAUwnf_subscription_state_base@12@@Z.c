/*
 * XREFs of ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x18013D280
 * Callers:
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x18013A470 (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x18013C510 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18013D2F4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z @ 0x180143FC0 (--_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z.c)
 *     ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x180144BD4 (-SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180153514 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x180156390 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180157068 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x180158E64 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x180180CA0 (--_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180182598 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801ACF8C (--1HolographicPositioner@@UEAA@XZ.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B0F60 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18023C024 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802425D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180242C70 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x180257F80 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1802596A0 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::delete_wnf_subscription_state(
        wil::details *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  if ( this )
    (**(void (__fastcall ***)(wil::details *, __int64))this)(this, 1LL);
}
