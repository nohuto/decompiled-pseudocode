/*
 * XREFs of ?HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z @ 0x1801CB850
 * Callers:
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18004F348 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004F360 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x180052A90 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 * Callees:
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800325CC (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this @ 0x18003A410 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Delete_this.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::HostViewStateOverridesChanged(
        ViewEventDispatcher *this,
        int a2,
        const struct HostViewStateOverrides *a3)
{
  __int64 v3; // rdx
  void (__fastcall *v4)(void *, char); // rax
  _QWORD v5[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp-20h]

  v5[1] = a3;
  v5[0] = off_180332BD8;
  v6 = v5;
  ViewEventDispatcher::_ForEachComponent(this, a2, (__int64)v5);
  if ( v6 )
  {
    LOBYTE(v3) = v6 != v5;
    v4 = *(void (__fastcall **)(void *, char))(*v6 + 32LL);
    if ( v4 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this(v6, v3);
    else
      v4(v6, v3);
  }
}
