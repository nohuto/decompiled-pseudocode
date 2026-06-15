/*
 * XREFs of std::_Func_impl__lambda_a7a871fc25f557e11998827eb9df152a__std::allocator_int__void_::_Move @ 0x1800A7710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl__lambda_a7a871fc25f557e11998827eb9df152a__std::allocator_int__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  if ( a2 )
  {
    v2 = (_QWORD *)(a1 + 8);
    *a2 = off_1800DE2C0;
    a2[1] = 0LL;
    if ( a2 + 1 != v2 )
    {
      a2[1] = *v2;
      *v2 = 0LL;
    }
  }
  return a2;
}
