/*
 * XREFs of ??1?$AutoValue@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@XZ @ 0x1801623FC
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___::SetAt_::_1_::dtor$0 @ 0x1801A43D2 (_Windows--Foundation--Collections--Internal--Vector_WindowsInternal--ComposableShel_ea_1801A43D2.c)
 *     _Windows::Foundation::Collections::Internal::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___::SetAt_::_1_::dtor$1 @ 0x1801A43DE (_Windows--Foundation--Collections--Internal--Vector_WindowsInternal--ComposableShel_ea_1801A43DE.c)
 *     _Windows::Foundation::Collections::Internal::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___::RemoveAtInternal_::_1_::dtor$0 @ 0x1801A43F6 (_Windows--Foundation--Collections--Internal--Vector_WindowsInternal--ComposableShel_ea_1801A43F6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::AutoValue<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::~AutoValue<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
