/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_286394bed54c76db5c0d94726973c3a4__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$138 @ 0x1800E5DF7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_286394bed54c76db5c0d94726973c3a4_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch_138(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 48);
  __ExceptionPtrCreate((void *)(a2 + 32));
  __ExceptionPtrCurrentException((void *)(a2 + 32));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 32));
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return &loc_180048102;
}
