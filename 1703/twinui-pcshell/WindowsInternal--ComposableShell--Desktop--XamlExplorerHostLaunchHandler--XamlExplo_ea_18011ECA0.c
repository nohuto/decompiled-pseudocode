/*
 * XREFs of WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_6c284911f69a96f51fa6281be71911ea___ @ 0x18011ECA0
 * Callers:
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x18011C2F0 (-CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_6c284911f69a96f51fa6281be71911ea___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'};
  a1[1] = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `Platform::Object's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'};
  a1[2] = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable';
  a1[3] = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  a1[4] = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[6] = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v4 = a1 + 7;
  a1[39] = a1 + 7;
  if ( a1 != (_QWORD *)-56LL )
  {
    v5 = *a2;
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*a2);
    *v4 = &off_18023E9D8;
    a1[8] = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  a1[39] = v4;
  v6 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
