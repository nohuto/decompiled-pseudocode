/*
 * XREFs of std::_Func_impl__lambda_a6a881e12778e3952f42054a91b627a8__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move @ 0x1800B8910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl__lambda_a6a881e12778e3952f42054a91b627a8__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = off_1800F45D8;
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  }
  return a2;
}
