/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_a0b79b00b1bce7193c6bd3fdf9912a70___lambda_95c9ab982260f51d1a846ebe21b18f8b___ @ 0x1802FFE04
 * Callers:
 *     ?First@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@I@345@@Z @ 0x180300940 (-First@-$SimpleVectorView@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_a0b79b00b1bce7193c6bd3fdf9912a70_::operator() @ 0x180300510 (_lambda_a0b79b00b1bce7193c6bd3fdf9912a70_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_a0b79b00b1bce7193c6bd3fdf9912a70___lambda_95c9ab982260f51d1a846ebe21b18f8b___(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // rcx

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = lambda_a0b79b00b1bce7193c6bd3fdf9912a70_::operator()(a3);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = **a4;
        v10 = *v9;
        *v9 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
