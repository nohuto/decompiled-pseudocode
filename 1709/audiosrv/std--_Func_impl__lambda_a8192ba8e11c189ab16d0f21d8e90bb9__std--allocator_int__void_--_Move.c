/*
 * XREFs of std::_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std::allocator_int__void_::_Move @ 0x180035960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std::allocator_int__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  if ( a2 )
  {
    *a2 = off_1800F4320;
    a2[1] = *(_QWORD *)(a1 + 8);
    a2[2] = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return a2;
}
