/*
 * XREFs of ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1801926A0
 * Callers:
 *     ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180147778 (-GetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 *     ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x180194530 (-SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU-$IVectorView@PEAUISwitchItem@Multitasking@Comp.c)
 *     ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x1801B7B90 (-IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Compos.c)
 *     ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x1801B7D50 (-MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableS.c)
 *     ?CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x1801B7F60 (-CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Composabl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewDataSourceHelpers::GetApplicationViewForItemData(
        AppViewDataSourceHelpers *this,
        struct IInspectable *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // ebx
  struct IInspectable *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  *(_QWORD *)&a3->Data1 = 0LL;
  if ( !this )
    return 2147942487LL;
  *(_QWORD *)&a3->Data1 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(AppViewDataSourceHelpers *, GUID *, struct IInspectable **, void **))this)(
         this,
         &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
         &v7,
         a4);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v6 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, GUID *, const struct _GUID *))v7->lpVtbl->GetIids)(
         v7,
         &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
         &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
         a3);
  ((void (__fastcall *)(struct IInspectable *))v7->lpVtbl->Release)(v7);
  if ( v6 < 0 )
    return (unsigned int)v6;
  else
    return 0LL;
}
