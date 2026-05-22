/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$40 @ 0x1800CC8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch_40(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 104);
  __ExceptionPtrCreate((void *)(a2 + 40));
  __ExceptionPtrCurrentException((void *)(a2 + 40));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 40));
  __ExceptionPtrDestroy((void *)(a2 + 40));
  return &loc_180008C3C;
}
