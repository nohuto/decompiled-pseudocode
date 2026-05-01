/*
 * XREFs of ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180124460
 * Callers:
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x18011DC3C (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18011E3B8 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x18011EB18 (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x180122688 (-OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_174fcf5b4a41f6f10b72d48900fe127a___::Run @ 0x18012B260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_174fcf5b4a41f6f10b72d48900fe127a___--Run.c)
 * Callees:
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1801244F4 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_RaiseViewEvent(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[1] = -2LL;
  v11[0] = *a4;
  if ( v11[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 8LL))(v11[0]);
  v8 = ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, a2, a3, 0LL, v11);
  v9 = *a4;
  if ( *a4 )
  {
    *a4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v8;
}
