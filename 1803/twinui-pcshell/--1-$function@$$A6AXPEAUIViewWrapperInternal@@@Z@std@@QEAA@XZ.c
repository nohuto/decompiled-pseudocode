/*
 * XREFs of ??1?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@QEAA@XZ @ 0x1800FAD80
 * Callers:
 *     _ViewEventDispatcher::_HostChanged_::_1_::dtor$0 @ 0x1800B2A3C (_ViewEventDispatcher--_HostChanged_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::ViewDestroyed_::_1_::dtor$6 @ 0x1800B2D4B (_ViewEventDispatcher--ViewDestroyed_--_1_--dtor$6.c)
 *     _ViewManagerBridge::OnPropertyChanged_::_1_::dtor$3 @ 0x1800B49D4 (_ViewManagerBridge--OnPropertyChanged_--_1_--dtor$3.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this @ 0x18003A410 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Delete_this.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::function<void (IViewWrapperInternal *)>::~function<void (IViewWrapperInternal *)>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rcx
  void (__fastcall *v4)(void *, char); // rax

  v3 = (_QWORD *)a1[7];
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    v4 = *(void (__fastcall **)(void *, char))(*v3 + 32LL);
    if ( v4 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this(v3, a2);
    else
      v4(v3, a2);
    a1[7] = 0LL;
  }
}
