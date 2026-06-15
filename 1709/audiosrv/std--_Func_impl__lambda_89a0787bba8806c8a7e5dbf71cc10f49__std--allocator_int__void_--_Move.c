/*
 * XREFs of std::_Func_impl__lambda_89a0787bba8806c8a7e5dbf71cc10f49__std::allocator_int__void_::_Move @ 0x1800C2DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl__lambda_89a0787bba8806c8a7e5dbf71cc10f49__std::allocator_int__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = off_1800F4818;
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  }
  return a2;
}
