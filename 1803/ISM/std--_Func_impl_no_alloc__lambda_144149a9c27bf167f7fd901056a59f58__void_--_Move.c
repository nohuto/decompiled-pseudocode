/*
 * XREFs of std::_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_::_Move @ 0x1800ABFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1800F2168;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
