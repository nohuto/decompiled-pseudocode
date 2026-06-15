/*
 * XREFs of std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Move @ 0x1800451B0
 * Callers:
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x180045104 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180045214 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = off_1800DBF60;
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  }
  return a2;
}
