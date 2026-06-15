/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_9ef20e102c9ff3746e773950a40b935c___lambda_1ee46c767369a144b0488965c9630b66___ @ 0x1800D3B00
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_______ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_______ptr64_0_1_0____XWinRT::IntVersionTag_::Do__lambda_a7c74b6fa75c160f6799b3e214e3bf71___lambda_1ee46c767369a144b0488965c9630b66___ @ 0x1800D3D08 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1800D3D08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     _lambda_8755ab9e8190327238aca2f96f9c4e25_::operator() @ 0x1800D4DF8 (_lambda_8755ab9e8190327238aca2f96f9c4e25_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_9ef20e102c9ff3746e773950a40b935c___lambda_1ee46c767369a144b0488965c9630b66___(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // edi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  bool v10; // zf
  signed __int32 v11; // eax

  v3 = *a1;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a2 + 56LL)
                                                                           + 128LL))(
           *(_QWORD *)(**(_QWORD **)a2 + 56LL),
           v3,
           **(unsigned int **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_QWORD **)(a2 + 24));
    v8 = (unsigned int)v7;
    if ( v7 < 0 )
      break;
    v9 = v3 + ***(_DWORD ***)(a2 + 24);
    v11 = _InterlockedCompareExchange(a1, v9, v3);
    v10 = v3 == v11;
    v3 = v11;
    if ( v10 )
      break;
    lambda_8755ab9e8190327238aca2f96f9c4e25_::operator()(a3, v9, v8);
  }
  return (unsigned int)v8;
}
