/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64_::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_7cdc3261467595799450256ddb9aa01c___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64_::Invoke @ 0x1801B71C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001D5BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64_::___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_7cdc3261467595799450256ddb9aa01c___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v5 = 0LL;
  v11 = 0LL;
  if ( !v3
    || (v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
               v3,
               &GUID_083cf3a6_829d_59e5_87cc_12d540a491d2,
               &v11),
        v5 = v11,
        v8 = v7,
        v7 >= 0) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
    v5 = v11;
    v8 = v9;
  }
  if ( v5 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v8 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v8);
  return (unsigned int)v8;
}
