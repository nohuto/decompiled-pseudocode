/*
 * XREFs of ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x180045104
 * Callers:
 *     ??$?4AEAV?$function@$$A6AXXZ@std@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z @ 0x18004526C (--$-4AEAV-$function@$$A6AXXZ@std@@X@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180045160 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Move @ 0x1800451B0 (std--_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std--allocator_int__void_--_Move.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rax

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL);
      if ( v5 == std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Move )
        v6 = std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Move(v4, a1);
      else
        v6 = v5(v4, a1);
      *(_QWORD *)(a1 + 56) = v6;
      std::_Func_class<void,>::_Tidy(a2);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
