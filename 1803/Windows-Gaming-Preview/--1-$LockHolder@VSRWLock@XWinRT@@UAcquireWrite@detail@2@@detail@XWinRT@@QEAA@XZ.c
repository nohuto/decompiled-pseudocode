/*
 * XREFs of ??1?$LockHolder@VSRWLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180037458
 * Callers:
 *     _Windows::Foundation::Collections::Internal::NaiveSplitView_HSTRING_______ptr64_IInspectable_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable_____ptr64__Windows::Foundation::Collections::Internal::HashMapOptions_HSTRING_______ptr64_IInspectable_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__0_1_0___::Force_::_1_::dtor$0 @ 0x180044A15 (_Windows--Foundation--Collections--Internal--NaiveSplitView_HSTRING_______ptr64_IIn_ea_180044A15.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::SRWLock,XWinRT::detail::AcquireWrite>::~LockHolder<XWinRT::SRWLock,XWinRT::detail::AcquireWrite>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *a1 = 0LL;
  }
}
