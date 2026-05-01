/*
 * XREFs of ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18008E014
 * Callers:
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x18005B584 (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Move @ 0x18003A300 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Move.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18008E0E4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x18008E128 (-_Reset_move@-$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::function<void (bool)>::operator=(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rcx
  _QWORD *v4; // rax
  _QWORD *(__fastcall *v5)(__int64, _QWORD *); // rax
  _QWORD v7[7]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD *v8; // [rsp+70h] [rbp-1h]
  _BYTE v9[56]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+3Fh]

  v8 = 0LL;
  v3 = *(_QWORD ***)(a2 + 56);
  v4 = 0LL;
  if ( v3 )
  {
    v5 = (_QWORD *(__fastcall *)(__int64, _QWORD *))**v3;
    if ( v5 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Move )
      v4 = std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Move((__int64)v3, v7);
    else
      v4 = v5((__int64)v3, v7);
    v8 = v4;
  }
  if ( v4 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    std::_Func_class<void,bool>::_Reset_move(v9, v7);
    std::_Func_class<void,bool>::_Reset_move(v7, a1);
    std::_Func_class<void,bool>::_Reset_move(a1, v9);
    std::_Func_class<void,bool>::_Tidy(v9);
  }
  else
  {
    v8 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v4;
  }
  std::_Func_class<void,bool>::_Tidy(v7);
  return a1;
}
