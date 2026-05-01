/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Desktop_XamlExplorerHostLaunchHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@2345@UE$AAAJPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x18014A4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x18014A584 (-Invoke@__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@U.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Desktop_XamlExplorerHostLaunchHandler___abi_IDelegate____abi_Invoke__Q__abi_IDelegate_XamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__2345_UE_AAAJPE_AAVWindow_Xaml_UI_Windows__PEAUHWND_____Z(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  int v7; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    if ( a3 )
    {
      memset(&v7, 0, sizeof(v7));
      *a3 = v7;
    }
    if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'} )
      (*(void (__fastcall **)(_QWORD, __int64, _DWORD *))(**(_QWORD **)(a1 + 312) + 8LL))(*(_QWORD *)(a1 + 312), a2, a3);
    else
      WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate::Invoke(a1, a2, a3);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
