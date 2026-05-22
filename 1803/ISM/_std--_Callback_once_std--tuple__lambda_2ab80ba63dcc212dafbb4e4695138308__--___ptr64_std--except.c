/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_2ab80ba63dcc212dafbb4e4695138308__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$23 @ 0x1800E5836
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_2ab80ba63dcc212dafbb4e4695138308_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch_23(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 96);
  __ExceptionPtrCreate((void *)(a2 + 96));
  __ExceptionPtrCurrentException((void *)(a2 + 96));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 96));
  __ExceptionPtrDestroy((void *)(a2 + 96));
  return &loc_180042499;
}
