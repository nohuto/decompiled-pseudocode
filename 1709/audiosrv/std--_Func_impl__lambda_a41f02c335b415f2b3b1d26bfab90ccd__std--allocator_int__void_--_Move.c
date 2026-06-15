/*
 * XREFs of std::_Func_impl__lambda_a41f02c335b415f2b3b1d26bfab90ccd__std::allocator_int__void_::_Move @ 0x1800C2DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl__lambda_a41f02c335b415f2b3b1d26bfab90ccd__std::allocator_int__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = off_1800F47E8;
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  }
  return a2;
}
