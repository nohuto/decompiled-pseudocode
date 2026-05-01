/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_51fc07380bd57b80a1f87d867c16ca23___lambda_9c077a5b86eac13d364db742cbd21966___ @ 0x180245AF8
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_1fbb58f6e8ab4f9d2d27187cc3109154___lambda_9c077a5b86eac13d364db742cbd21966___ @ 0x180245D68 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vector_unsigned_.c)
 * Callees:
 *     _lambda_51fc07380bd57b80a1f87d867c16ca23_::operator() @ 0x180247C78 (_lambda_51fc07380bd57b80a1f87d867c16ca23_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_51fc07380bd57b80a1f87d867c16ca23___lambda_9c077a5b86eac13d364db742cbd21966___(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = lambda_51fc07380bd57b80a1f87d867c16ca23_::operator()(a2, v3, &v11);
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v11, v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v7;
}
