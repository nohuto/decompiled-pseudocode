/*
 * XREFs of ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180260B90
 * Callers:
 *     ?PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180261030 (-PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18026076C (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        bool *a3)
{
  VirtualDesktopController *v6; // rcx
  int ApplicationViewFromSwitchItem; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)v11.Data4 = -2LL;
  *(_QWORD *)&v11.Data1 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v11);
  ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(v6, a2, &v11);
  v8 = ApplicationViewFromSwitchItem;
  if ( ApplicationViewFromSwitchItem >= 0 )
  {
    v13 = 0;
    ApplicationViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 12) + 48LL))(
                                      *((_QWORD *)this + 12),
                                      *(_QWORD *)&v11.Data1,
                                      &v13);
    v8 = ApplicationViewFromSwitchItem;
    if ( ApplicationViewFromSwitchItem >= 0 )
    {
      *a3 = v13 != 0;
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 223LL;
  }
  else
  {
    v9 = 220LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)ApplicationViewFromSwitchItem);
LABEL_7:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v11);
  return v8;
}
