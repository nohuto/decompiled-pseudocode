/*
 * XREFs of std::_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std::allocator_int__void_::_Move @ 0x1800995F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std::allocator_int__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = off_1800D7C58;
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  }
  return a2;
}
