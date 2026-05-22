/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_99e73fa34aafd1797f49aac95efb490d__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$13 @ 0x1800CF4D7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_99e73fa34aafd1797f49aac95efb490d_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch_13(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 104);
  __ExceptionPtrCreate((void *)(a2 + 64));
  __ExceptionPtrCurrentException((void *)(a2 + 64));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 64));
  __ExceptionPtrDestroy((void *)(a2 + 64));
  return &loc_18005E65E;
}
