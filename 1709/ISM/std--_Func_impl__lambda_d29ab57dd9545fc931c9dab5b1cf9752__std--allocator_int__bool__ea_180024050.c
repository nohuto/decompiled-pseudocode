/*
 * XREFs of std::_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std::allocator_int__bool_Input::PropertyNode_____ptr64_void_____ptr64_unsigned_long_::_Move @ 0x180024050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std::allocator_int__bool_Input::PropertyNode_____ptr64_void_____ptr64_unsigned_long_::_Move(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = off_1800D41C8;
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  }
  return a2;
}
