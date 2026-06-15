/*
 * XREFs of std::_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std::allocator_int__void_::_Move @ 0x1800A7740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std::allocator_int__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  if ( a2 )
  {
    v2 = (_QWORD *)(a1 + 8);
    *a2 = off_1800DE290;
    a2[1] = 0LL;
    if ( a2 + 1 != v2 )
    {
      a2[1] = *v2;
      *v2 = 0LL;
    }
  }
  return a2;
}
