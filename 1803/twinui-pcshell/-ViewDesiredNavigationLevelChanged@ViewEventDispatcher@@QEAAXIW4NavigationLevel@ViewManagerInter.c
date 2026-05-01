/*
 * XREFs of ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x1800F061C
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18004ED1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800325CC (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this @ 0x18003A410 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Delete_this.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::ViewDesiredNavigationLevelChanged(ViewEventDispatcher *a1, int a2, int a3, int a4)
{
  __int64 v4; // rdx
  void (__fastcall *v5)(void *, char); // rax
  __int64 (__fastcall **v6)(); // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall ***v8)(); // [rsp+58h] [rbp-20h]

  if ( a4 == 1 && a3 > 1 )
    a4 = 3;
  v7 = a4;
  v6 = off_180323138;
  v8 = &v6;
  ViewEventDispatcher::_ForEachComponent(a1, a2, (__int64)&v6);
  if ( v8 )
  {
    LOBYTE(v4) = v8 != &v6;
    v5 = (void (__fastcall *)(void *, char))(*v8)[4];
    if ( v5 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this(v8, v4);
    else
      v5(v8, v4);
  }
}
