/*
 * XREFs of ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18008E0E4
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ??_GUAPViewWrapper@@UEAAPEAXI@Z @ 0x18005AC20 (--_GUAPViewWrapper@@UEAAPEAXI@Z.c)
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x18005B584 (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18008E014 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x18008E128 (-_Reset_move@-$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z.c)
 *     ??1ViewWrapperBase@@QEAA@XZ @ 0x1800EFD58 (--1ViewWrapperBase@@QEAA@XZ.c)
 *     ??1?$function@$$A6AX_N@Z@std@@QEAA@XZ @ 0x1800FAEC0 (--1-$function@$$A6AX_N@Z@std@@QEAA@XZ.c)
 *     ??1WindowWrapperBase@@QEAA@XZ @ 0x1801D2C64 (--1WindowWrapperBase@@QEAA@XZ.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this @ 0x18003A410 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Delete_this.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,bool>::_Tidy(_QWORD *a1, __int64 a2)
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
