/*
 * XREFs of std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Move @ 0x18000C9B0
 * Callers:
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18000C8D0 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  if ( a2 )
  {
    v2 = (_QWORD *)(a1 + 8);
    *a2 = off_1800F20C0;
    a2[1] = 0LL;
    if ( a2 + 1 != v2 )
    {
      a2[1] = *v2;
      *v2 = 0LL;
    }
  }
  return a2;
}
