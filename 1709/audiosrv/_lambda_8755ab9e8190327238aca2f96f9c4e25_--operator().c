/*
 * XREFs of _lambda_8755ab9e8190327238aca2f96f9c4e25_::operator() @ 0x1800E2714
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_9ef20e102c9ff3746e773950a40b935c___lambda_1ee46c767369a144b0488965c9630b66___ @ 0x1800E1320 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_9ef20e102c9ff3746e773950a40b935c___lambda_1e.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_______ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_______ptr64_0_1_0____XWinRT::IntVersionTag_::Do__lambda_a7c74b6fa75c160f6799b3e214e3bf71___lambda_1ee46c767369a144b0488965c9630b66___ @ 0x1800E15CC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1800E15CC.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_______ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_______ptr64_0_1_0____XWinRT::IntVersionTag_::Do__lambda_f40cb7169fe531474511a10678f576c1___lambda_8755ab9e8190327238aca2f96f9c4e25___ @ 0x1800E1740 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1800E1740.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall lambda_8755ab9e8190327238aca2f96f9c4e25_::operator()(__int64 a1)
{
  __int64 i; // rbp
  __int64 *v3; // rax
  __int64 v4; // rbx
  _DWORD **result; // rax

  for ( i = 0LL; (unsigned int)i < ***(_DWORD ***)a1; i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 **)(a1 + 8);
    v4 = *v3;
    WindowsDeleteString(*(HSTRING *)(*v3 + 8 * i));
    *(_QWORD *)(v4 + 8 * i) = 0LL;
    *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8 * i) = 0LL;
  }
  result = *(_DWORD ***)a1;
  ***(_DWORD ***)a1 = 0;
  return result;
}
