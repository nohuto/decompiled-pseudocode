/*
 * XREFs of ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180032188
 * Callers:
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x1800350BC (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x1801CF1C4 (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1801D0598 (-_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D0A84 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManager.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18003220C (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_RaiseViewEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[1] = -2LL;
  v10[0] = *a4;
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 8LL))(v10[0]);
  v8 = ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, a2, a3, 0LL, v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a4);
  return v8;
}
