/*
 * XREFs of ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x18008E128
 * Callers:
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18008E014 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Move @ 0x18003A300 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Move.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18008E0E4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,bool>::_Reset_move(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *(__fastcall *v5)(__int64, _QWORD *); // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx

  v4 = a2[7];
  if ( v4 )
  {
    if ( (_QWORD *)v4 == a2 )
    {
      v5 = *(_QWORD *(__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 8LL);
      if ( v5 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Move )
        v6 = std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Move(v4, a1);
      else
        v6 = v5(v4, a1);
      a1[7] = v6;
      std::_Func_class<void,bool>::_Tidy(a2, v7);
    }
    else
    {
      a1[7] = v4;
      a2[7] = 0LL;
    }
  }
}
