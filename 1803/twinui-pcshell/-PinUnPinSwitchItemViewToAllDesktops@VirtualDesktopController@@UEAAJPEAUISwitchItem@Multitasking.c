/*
 * XREFs of ?PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180261030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18026076C (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180260B90 (-IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopController::PinUnPinSwitchItemViewToAllDesktops(
        __int64 **this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2)
{
  VirtualDesktopController *v4; // rcx
  int ApplicationViewFromSwitchItem; // eax
  unsigned int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int8 v11; // [rsp+50h] [rbp+18h] BYREF
  struct IApplicationView *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(
                                    v4,
                                    a2,
                                    (const struct _GUID *)&v12);
  v6 = ApplicationViewFromSwitchItem;
  if ( ApplicationViewFromSwitchItem >= 0 )
  {
    v11 = 0;
    VirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops((VirtualDesktopController *)this, a2, (bool *)&v11);
    v7 = this[12];
    v8 = *v7;
    if ( v11 )
      (*(void (__fastcall **)(__int64 *, struct IApplicationView *))(v8 + 64))(v7, v12);
    else
      (*(void (__fastcall **)(__int64 *, struct IApplicationView *))(v8 + 56))(v7, v12);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)ApplicationViewFromSwitchItem);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  return v6;
}
