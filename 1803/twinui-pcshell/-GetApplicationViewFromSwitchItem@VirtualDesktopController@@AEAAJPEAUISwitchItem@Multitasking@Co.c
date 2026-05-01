/*
 * XREFs of ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18026076C
 * Callers:
 *     ?CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180260300 (-CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Composabl.c)
 *     ?IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180260A50 (-IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Com.c)
 *     ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180260B90 (-IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 *     ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x180260C50 (-IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Compos.c)
 *     ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x180260D90 (-MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableS.c)
 *     ?PinUnPinSwitchItemToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180260F20 (-PinUnPinSwitchItemToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Com.c)
 *     ?PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180261030 (-PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x180235C40 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopController::GetApplicationViewFromSwitchItem(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        const struct _GUID *a3)
{
  int ApplicationViewForItemData; // eax
  struct IInspectable *v6; // rdx
  void **v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  AppViewDataSourceHelpers *v12; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)&a3->Data1 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v12);
  ApplicationViewForItemData = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *, AppViewDataSourceHelpers **))(*(_QWORD *)a2 + 96LL))(
                                 a2,
                                 &v12);
  v8 = ApplicationViewForItemData;
  if ( ApplicationViewForItemData >= 0 )
  {
    ApplicationViewForItemData = AppViewDataSourceHelpers::GetApplicationViewForItemData(v12, v6, a3, v7);
    v8 = ApplicationViewForItemData;
    if ( ApplicationViewForItemData >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 291LL;
  }
  else
  {
    v9 = 290LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)ApplicationViewForItemData);
LABEL_7:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v12);
  return v8;
}
