/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_e8a8a3830e8b700b3909ca267e5ddf52__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$14 @ 0x18025C320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_e8a8a3830e8b700b3909ca267e5ddf52_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 32);
  __ExceptionPtrCreate((void *)(a2 + 32));
  __ExceptionPtrCurrentException((void *)(a2 + 32));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 32));
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return &loc_18025C2FF;
}
