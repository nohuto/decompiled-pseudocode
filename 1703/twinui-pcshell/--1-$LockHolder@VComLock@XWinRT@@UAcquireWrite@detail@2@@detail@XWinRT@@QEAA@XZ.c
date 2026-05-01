/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180162490
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___::SetAt_::_1_::dtor$2 @ 0x1801A43EA (_Windows--Foundation--Collections--Internal--Vector_WindowsInternal--ComposableShel_ea_1801A43EA.c)
 *     _Windows::Foundation::Collections::Internal::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___::RemoveAtInternal_::_1_::dtor$1 @ 0x1801A4402 (_Windows--Foundation--Collections--Internal--Vector_WindowsInternal--ComposableShel_ea_1801A4402.c)
 *     _Windows::Foundation::Collections::Internal::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___::Clear_::_1_::dtor$0 @ 0x1801A440E (_Windows--Foundation--Collections--Internal--Vector_WindowsInternal--ComposableShel_ea_1801A440E.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_DWORD *)v2 == 1 )
      *(_DWORD *)(v2 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v2 + 8));
    *a1 = 0LL;
  }
}
