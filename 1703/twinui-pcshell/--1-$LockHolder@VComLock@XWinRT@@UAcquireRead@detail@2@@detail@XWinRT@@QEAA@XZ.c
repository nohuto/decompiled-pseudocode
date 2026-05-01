/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180162E6C
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___::GetAt_::_1_::dtor$0 @ 0x1801A4432 (_Windows--Foundation--Collections--Internal--Vector_WindowsInternal--ComposableShel_ea_1801A4432.c)
 *     _Windows::Foundation::Collections::Internal::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___::IndexOf_::_1_::dtor$0 @ 0x1801A4456 (_Windows--Foundation--Collections--Internal--Vector_WindowsInternal--ComposableShel_ea_1801A4456.c)
 *     _Windows::Foundation::Collections::Internal::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___::GetMany_::_1_::dtor$0 @ 0x1801A4462 (_Windows--Foundation--Collections--Internal--Vector_WindowsInternal--ComposableShel_ea_1801A4462.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_DWORD *)v2 == 1 )
      --*(_DWORD *)(v2 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v2 + 8));
    *a1 = 0LL;
  }
}
