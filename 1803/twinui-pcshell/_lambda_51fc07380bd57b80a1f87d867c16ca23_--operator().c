/*
 * XREFs of _lambda_51fc07380bd57b80a1f87d867c16ca23_::operator() @ 0x180247C78
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_51fc07380bd57b80a1f87d867c16ca23___lambda_9c077a5b86eac13d364db742cbd21966___ @ 0x180245AF8 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_51fc07380bd57b80a1f87d867c16ca23___lambda_9c.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_1fbb58f6e8ab4f9d2d27187cc3109154___lambda_9c077a5b86eac13d364db742cbd21966___ @ 0x180245D68 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vector_unsigned_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_51fc07380bd57b80a1f87d867c16ca23_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  ***(_BYTE ***)a1 = 0;
  if ( a2 >= *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    *a3 = a2 + 1;
    result = 0LL;
    ***(_BYTE ***)a1 = a2 + 1 < *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL);
  }
  return result;
}
