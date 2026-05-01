/*
 * XREFs of std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this @ 0x18003A410
 * Callers:
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180032664 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180056E10 (-OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18008E0E4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x1800F061C (-ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInter.c)
 *     ??1?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@QEAA@XZ @ 0x1800FAD80 (--1-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@QEAA@XZ.c)
 *     ?HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z @ 0x1801CB850 (-HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
