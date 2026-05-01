/*
 * XREFs of ?Invoke@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x1801200C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::Invoke(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312) + 8LL))(*(_QWORD *)(a1 + 312));
  else
    return WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate::Invoke(a1, a2, a3);
}
